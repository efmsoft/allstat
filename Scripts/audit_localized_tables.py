#!/usr/bin/env python3

import argparse
import gzip
import re
import sys
from pathlib import Path


ITEM_PATTERN = re.compile(
    r'^\s*/\*(\d+)\*/\s*\{\s*([^,]+),\s*'
    r'"((?:\\.|[^"\\])*)",\s*'
    r'AS_DESCR_HANDLE\("((?:\\.|[^"\\])*)",\s*(\d+)\),\s*'
    r'([^,]+),\s*([^}]+)\},?\s*$',
    re.MULTILINE)

DESCR_BLOCK_SIZE_PATTERN = re.compile(
    r'static int DescrBlockSize = (\d+);')

COMPRESSED_DESCR_PATTERN = re.compile(
    r'static const uint8_t CompressedDescr\[\] =\s*\{(.*?)\};',
    re.DOTALL)

HEX_BYTE_PATTERN = re.compile(r'0x([0-9a-fA-F]{2})')
CYRILLIC_PATTERN = re.compile(r'[\u0400-\u04ff]')

ES_EXACT_FALLBACK_ALLOWLIST = {
    '???',
    'RC',
    'Service Pack',
    'WdsCp',
    'WdsTptMgmt',
}


class AuditError(Exception):
    pass


def DecodeCppString(value):
    result = []
    index = 0
    escapes = {
        '"': '"',
        "'": "'",
        '?': '?',
        '\\': '\\',
        'a': '\a',
        'b': '\b',
        'f': '\f',
        'n': '\n',
        'r': '\r',
        't': '\t',
        'v': '\v',
    }

    while index < len(value):
        if value[index] != '\\':
            result.append(value[index])
            index += 1
            continue

        index += 1
        if index >= len(value):
            raise AuditError('unterminated escape sequence')

        escaped = value[index]
        if escaped in escapes:
            result.append(escapes[escaped])
            index += 1
            continue

        if escaped == 'x':
            index += 1
            start = index
            while index < len(value) and value[index] in '0123456789abcdefABCDEF':
                index += 1
            if start == index:
                raise AuditError('empty hexadecimal escape sequence')
            result.append(chr(int(value[start:index], 16)))
            continue

        if escaped in '01234567':
            start = index
            index += 1
            while (
                index < len(value) and
                index - start < 3 and
                value[index] in '01234567'
            ):
                index += 1
            result.append(chr(int(value[start:index], 8)))
            continue

        raise AuditError('unsupported escape sequence: \\{}'.format(escaped))

    return ''.join(result)


def ParseTable(path):
    with path.open('r', encoding='utf-8', newline='') as source:
        text = source.read()

    items = []
    for match in ITEM_PATTERN.finditer(text):
        items.append({
            'index': int(match.group(1)),
            'code': ' '.join(match.group(2).split()),
            'name': DecodeCppString(match.group(3)),
            'description': DecodeCppString(match.group(4)),
            'offset': int(match.group(5)),
            'source': ' '.join(match.group(6).split()),
            'os': ' '.join(match.group(7).split()),
        })

    if not items:
        raise AuditError('{}: no STATUS_ITEM entries found'.format(path))

    size_match = DESCR_BLOCK_SIZE_PATTERN.search(text)
    if not size_match:
        raise AuditError('{}: DescrBlockSize not found'.format(path))

    compressed_match = COMPRESSED_DESCR_PATTERN.search(text)
    if not compressed_match:
        raise AuditError('{}: CompressedDescr not found'.format(path))

    compressed = bytes(
        int(value, 16)
        for value in HEX_BYTE_PATTERN.findall(compressed_match.group(1)))

    return {
        'items': items,
        'descr_size': int(size_match.group(1)),
        'compressed': compressed,
    }


def BuildDescriptionBlock(items):
    block = bytearray()
    offsets = []

    for item in items:
        offsets.append(len(block))
        block.extend(item['description'].encode('utf-8'))
        block.append(0)

    return bytes(block), offsets


def ExtractPlaceholders(text):
    placeholders = []
    index = 0

    while index < len(text):
        if text[index] != '%':
            index += 1
            continue

        start = index
        index += 1
        if index >= len(text):
            placeholders.append('%')
            break

        if text[index] == '%':
            placeholders.append('%%')
            index += 1
            continue

        if text[index].isdigit():
            while index < len(text) and text[index].isdigit():
                index += 1
            if index < len(text) and text[index] == '!':
                index += 1
                while index < len(text) and text[index] != '!':
                    index += 1
                if index < len(text):
                    index += 1
            placeholders.append(text[start:index])
            continue

        if text[index] in 'nrtb0':
            placeholders.append(text[start:index + 1])
            index += 1
            continue

        while index < len(text) and text[index] in '-+ #00123456789.*':
            index += 1

        if text[index:index + 3] == 'I64':
            index += 3
        elif index < len(text) and text[index] in 'hlLw':
            index += 1
            if index < len(text) and text[index - 1] in 'hl' and text[index] == text[index - 1]:
                index += 1

        if index < len(text) and text[index].isalpha():
            index += 1

        placeholders.append(text[start:index])

    return placeholders


def IsPlaceholderOnly(text):
    if not text:
        return True

    remainder = text
    for placeholder in ExtractPlaceholders(text):
        remainder = remainder.replace(placeholder, '')

    remainder = re.sub(r'[\s.,;:(){}\[\]<>/\\|+-]+', '', remainder)
    return remainder == ''


def CompareStructure(english, localized, english_path, localized_path):
    errors = []
    english_items = english['items']
    localized_items = localized['items']

    if len(english_items) != len(localized_items):
        errors.append(
            '{}: entry count {} does not match English {}'.format(
                localized_path,
                len(localized_items),
                len(english_items)))
        return errors

    fields = ('index', 'code', 'name', 'source', 'os')
    for english_item, localized_item in zip(english_items, localized_items):
        for field in fields:
            if english_item[field] != localized_item[field]:
                errors.append(
                    '{}: item {} {} differs from English: {!r} != {!r}'.format(
                        localized_path,
                        localized_item['index'],
                        field,
                        localized_item[field],
                        english_item[field]))

    return errors


def AuditBinaryData(table, path):
    errors = []
    block, offsets = BuildDescriptionBlock(table['items'])

    if len(block) != table['descr_size']:
        errors.append(
            '{}: DescrBlockSize is {}, expected {}'.format(
                path,
                table['descr_size'],
                len(block)))

    for item, expected_offset in zip(table['items'], offsets):
        if item['offset'] != expected_offset:
            errors.append(
                '{}: item {} {} has offset {}, expected {}'.format(
                    path,
                    item['index'],
                    item['name'],
                    item['offset'],
                    expected_offset))

    try:
        unpacked = gzip.decompress(table['compressed'])
    except Exception as error:
        errors.append('{}: gzip decompression failed: {}'.format(path, error))
        return errors

    if unpacked != block:
        errors.append('{}: gzip data does not match description block'.format(path))

    return errors


def AuditLocalization(english, localized, language, path):
    errors = []
    english_items = english['items']
    localized_items = localized['items']

    for english_item, localized_item in zip(english_items, localized_items):
        english_description = english_item['description']
        localized_description = localized_item['description']

        if ExtractPlaceholders(english_description) != ExtractPlaceholders(localized_description):
            errors.append(
                '{}: item {} {} placeholder sequence differs: {} != {}'.format(
                    path,
                    localized_item['index'],
                    localized_item['name'],
                    ExtractPlaceholders(localized_description),
                    ExtractPlaceholders(english_description)))

        if language == 'es' and CYRILLIC_PATTERN.search(localized_description):
            errors.append(
                '{}: item {} {} contains Cyrillic text'.format(
                    path,
                    localized_item['index'],
                    localized_item['name']))

        if language == 'es':
            exact_fallback_allowed = (
                localized_description in ES_EXACT_FALLBACK_ALLOWLIST or
                IsPlaceholderOnly(localized_description))
            if (
                localized_description == english_description and
                not exact_fallback_allowed
            ):
                errors.append(
                    '{}: item {} {} still has the English description {!r}'.format(
                        path,
                        localized_item['index'],
                        localized_item['name'],
                        localized_description))

            if (
                localized_description == localized_item['name'] and
                localized_description not in ES_EXACT_FALLBACK_ALLOWLIST
            ):
                errors.append(
                    '{}: item {} {} uses the constant name as its description'.format(
                        path,
                        localized_item['index'],
                        localized_item['name']))

    return errors


def ParseArguments():
    parser = argparse.ArgumentParser(
        description='Audit localized generated AllStat tables against English tables.')
    parser.add_argument(
        '--language',
        default='es',
        help='localized generated table directory (default: es)')
    parser.add_argument(
        'files',
        nargs='*',
        help='optional generated C++ file names, for example tHttp.cpp')
    return parser.parse_args()


def Main():
    arguments = ParseArguments()
    scripts_dir = Path(__file__).resolve().parent
    generated_dir = scripts_dir.parent / 'AllStat' / 'source' / 'generated'
    english_dir = generated_dir / 'en'
    localized_dir = generated_dir / arguments.language

    if not english_dir.is_dir():
        print("English generated directory '{}' does not exist".format(english_dir))
        return 1

    if not localized_dir.is_dir():
        print("Localized generated directory '{}' does not exist".format(localized_dir))
        return 1

    if arguments.files:
        file_names = arguments.files
    else:
        file_names = sorted(path.name for path in english_dir.glob('*.cpp'))

    if not file_names:
        print('No generated C++ files found')
        return 1

    total_items = 0
    all_errors = []

    for file_name in file_names:
        english_path = english_dir / file_name
        localized_path = localized_dir / file_name

        if not english_path.is_file():
            all_errors.append("English table '{}' does not exist".format(english_path))
            continue

        if not localized_path.is_file():
            all_errors.append("Localized table '{}' does not exist".format(localized_path))
            continue

        try:
            english = ParseTable(english_path)
            localized = ParseTable(localized_path)
        except AuditError as error:
            all_errors.append(str(error))
            continue

        errors = []
        errors.extend(CompareStructure(english, localized, english_path, localized_path))
        errors.extend(AuditBinaryData(localized, localized_path))
        errors.extend(AuditLocalization(english, localized, arguments.language, localized_path))

        total_items += len(localized['items'])
        all_errors.extend(errors)

        if errors:
            print('{}: {} entries, {} error(s)'.format(file_name, len(localized['items']), len(errors)))
        else:
            print('{}: {} entries, OK'.format(file_name, len(localized['items'])))

    if all_errors:
        print('\nAudit failed with {} error(s):'.format(len(all_errors)))
        for error in all_errors:
            print('  {}'.format(error))
        return 1

    print('\nAudit passed: {} localized entries checked.'.format(total_items))
    return 0


if __name__ == '__main__':
    sys.exit(Main())

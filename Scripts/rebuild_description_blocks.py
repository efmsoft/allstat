import argparse
import gzip
import re
import sys
from pathlib import Path


DESCRIPTION_PATTERN = re.compile(
    r'AS_DESCR_HANDLE\("((?:\\.|[^"\\])*)",\s*(\d+)\)')

COMPRESSED_BLOCK_PATTERN = re.compile(
    r'#if AS_COMPRESS_DESCRIPTION && !defined\(AS_NO_DESCRIPTION\)\r?\n'
    r'static int DescrBlockSize = \d+;\r?\n'
    r'static const uint8_t CompressedDescr\[\] =\r?\n'
    r'\{\r?\n.*?'
    r'\};\r?\n'
    r'#endif  // #if AS_COMPRESS_DESCRIPTION && !defined\(AS_NO_DESCRIPTION\)',
    re.DOTALL)


class DescriptionError(Exception):
    pass


def DecodeCppString(value):
    result = []
    i = 0

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

    while i < len(value):
        if value[i] != '\\':
            result.append(value[i])
            i += 1
            continue

        i += 1
        if i >= len(value):
            raise DescriptionError('unterminated escape sequence')

        escaped = value[i]
        if escaped in escapes:
            result.append(escapes[escaped])
            i += 1
            continue

        if escaped == 'x':
            i += 1
            start = i
            while i < len(value) and value[i] in '0123456789abcdefABCDEF':
                i += 1

            if start == i:
                raise DescriptionError('empty hexadecimal escape sequence')

            result.append(chr(int(value[start:i], 16)))
            continue

        if escaped in '01234567':
            start = i
            i += 1
            while i < len(value) and i - start < 3 and value[i] in '01234567':
                i += 1
            result.append(chr(int(value[start:i], 8)))
            continue

        raise DescriptionError("unsupported escape sequence: \\{}".format(escaped))

    return ''.join(result)


def BuildCompressedBlock(descriptions, newline):
    data = bytearray()
    offsets = []

    for description in descriptions:
        offsets.append(len(data))
        data.extend(description.encode('utf-8'))
        data.append(0)

    compressed = gzip.compress(bytes(data), mtime=0)
    rate = round(len(data) / len(compressed), 1)

    lines = [
        '#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)',
        'static int DescrBlockSize = {};'.format(len(data)),
        'static const uint8_t CompressedDescr[] =',
        '{',
        '  // Uncompressed size: {}, Compressed size: {}, Rate: {}'.format(
            len(data),
            len(compressed),
            rate),
    ]

    for position in range(0, len(compressed), 16):
        chunk = compressed[position:position + 16]
        lines.append('  ' + ''.join('0x{:02x}, '.format(value) for value in chunk))

    lines.extend([
        '};',
        '#endif  // #if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)',
    ])

    return newline.join(lines), offsets


def RebuildFile(path):
    with path.open('r', encoding='utf-8', newline='') as source:
        text = source.read()

    newline = '\r\n' if '\r\n' in text else '\n'
    matches = list(DESCRIPTION_PATTERN.finditer(text))
    if not matches:
        raise DescriptionError('no AS_DESCR_HANDLE entries found')

    descriptions = []
    for match in matches:
        descriptions.append(DecodeCppString(match.group(1)))

    compressed_block, offsets = BuildCompressedBlock(descriptions, newline)

    offset_index = 0

    def ReplaceDescription(match):
        nonlocal offset_index
        replacement = 'AS_DESCR_HANDLE("{}", {})'.format(
            match.group(1),
            offsets[offset_index])
        offset_index += 1
        return replacement

    text = DESCRIPTION_PATTERN.sub(ReplaceDescription, text)
    text, replacement_count = COMPRESSED_BLOCK_PATTERN.subn(compressed_block, text, count=1)

    if replacement_count != 1:
        raise DescriptionError('compressed description block was not found')

    with path.open('w', encoding='utf-8', newline='') as output:
        output.write(text)

    print('{}: {} descriptions'.format(path, len(descriptions)))


def ParseArguments():
    parser = argparse.ArgumentParser(
        description='Rebuild offsets and gzip blocks in generated AllStat tables.')
    parser.add_argument(
        '--language',
        default='ru',
        help='generated table language directory, for example en, ru, es or zh (default: ru)')
    parser.add_argument(
        'files',
        nargs='*',
        help='optional generated C++ file names, for example tHttp.cpp')
    return parser.parse_args()


def Main():
    arguments = ParseArguments()
    scripts_dir = Path(__file__).resolve().parent
    generated_dir = (
        scripts_dir.parent /
        'AllStat' /
        'source' /
        'generated' /
        arguments.language)

    if not generated_dir.is_dir():
        print("Generated language directory '{}' does not exist".format(generated_dir))
        return 1

    if arguments.files:
        paths = [generated_dir / file_name for file_name in arguments.files]
    else:
        paths = sorted(generated_dir.glob('*.cpp'))

    if not paths:
        print("No generated C++ files found in '{}'".format(generated_dir))
        return 1

    for path in paths:
        if not path.is_file():
            print("Generated C++ file '{}' does not exist".format(path))
            return 1

        try:
            RebuildFile(path)
        except DescriptionError as error:
            print('{}: {}'.format(path, error))
            return 1

    return 0


if __name__ == '__main__':
    sys.exit(Main())

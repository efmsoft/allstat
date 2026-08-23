#!/usr/bin/env python3

import re
import sys
from collections import defaultdict
from pathlib import Path

from audit_localized_tables import ParseTable

DESCR_LINE = 'descr = GetDescriptionStr(item.Description);'
NAME_VERIFY = re.compile(r'VERIFY\(name == "([^"]+)"\)')
NAME_LITERAL = re.compile(r'^\s*name\s*=\s*"([^"]+)"\s*;')
ZH_VERIFY = re.compile(
    r'(#elif defined\(ALLSTAT_LANGUAGE_ZH\)\n\s*VERIFY\(descr == ")'
    r'(?P<description>(?:\\.|[^"\\])*)'
    r'("\);?)')


def EncodeCppString(value):
  return (value.replace('\\', '\\\\')
               .replace('"', '\\"')
               .replace('\r', '\\r')
               .replace('\n', '\\n')
               .replace('\t', '\\t')
               .replace('\a', '\\a')
               .replace('\b', '\\b')
               .replace('\f', '\\f')
               .replace('\v', '\\v'))


def FindName(lines, descr_line_index):
  for index in range(descr_line_index - 1, max(-1, descr_line_index - 16), -1):
    match = NAME_VERIFY.search(lines[index])
    if match:
      return match.group(1)
    match = NAME_LITERAL.search(lines[index])
    if match:
      return match.group(1)
  return None


def Main():
  root = Path(__file__).resolve().parent.parent
  test_path = root / 'Tests' / 'TestAll' / 'TestAll.cpp'
  generated = root / 'AllStat' / 'source' / 'generated' / 'zh'

  descriptions = defaultdict(set)
  for path in sorted(generated.glob('*.cpp')):
    for item in ParseTable(path)['items']:
      descriptions[item['name']].add(item['description'])

  with test_path.open('r', encoding='utf-8', newline='') as source:
    text = source.read()
  lines = text.splitlines(keepends=True)

  offsets = []
  offset = 0
  for index, line in enumerate(lines):
    offsets.append(offset)
    offset += len(line)

  updates = []
  search_start = 0
  for index, line in enumerate(lines):
    if DESCR_LINE not in line:
      continue

    name = FindName(lines, index)
    if not name:
      print('Unable to determine constant before line {}'.format(index + 1))
      return 1

    values = descriptions.get(name, set())
    if len(values) != 1:
      print('{} maps to {} ZH descriptions'.format(name, len(values)))
      return 1
    expected = next(iter(values))

    block_start = offsets[index]
    block_end = text.find('#endif', block_start)
    if block_end < 0:
      print('Missing #endif after {}'.format(name))
      return 1

    match = ZH_VERIFY.search(text, block_start, block_end)
    if not match:
      print('Missing ZH expected description for {}'.format(name))
      return 1

    encoded = EncodeCppString(expected)
    if match.group('description') == encoded:
      search_start = match.end()
      continue

    updates.append((match.start('description'), match.end('description'), encoded, name,
                    match.group('description'), encoded))
    search_start = match.end()

  if len(list(filter(lambda line: DESCR_LINE in line, lines))) != 138:
    print('Unexpected TestAll description check count')
    return 1

  for start, end, encoded, name, old, new in reversed(updates):
    text = text[:start] + encoded + text[end:]

  if updates:
    with test_path.open('w', encoding='utf-8', newline='') as target:
      target.write(text)

  for _, _, _, name, old, new in updates:
    print('{}:'.format(name))
    print('  OLD {}'.format(old))
    print('  NEW {}'.format(new))
  print('Synchronized 138 ZH TestAll descriptions; changed {}.'.format(len(updates)))
  return 0


if __name__ == '__main__':
  sys.exit(Main())

#include <AllStat/AllStat.h>
#include "AllStatDefs.h"

#include <cassert>
#include <cstdio>
#include <string.h>

using namespace AllStat;

#pragma warning(disable : 4996 26812)

#ifndef _WIN32
#define stricmp strcasecmp
#endif

#ifdef _WIN32
AS_OS TargetOS = AS_OS::AS_OS_WINDOWS;
#elif defined(__APPLE__)
AS_OS TargetOS = AS_OS::AS_OS_MAC;
#elif defined(__sun__)
AS_OS TargetOS = AS_OS::AS_OS_SOLARIS;
#else
AS_OS TargetOS = AS_OS::AS_OS_LINUX;
#endif

void SetTargetOS(AS_OS os)
{
  switch (os)
  {
    case AS_OS_ANY:
    case AS_OS_WINDOWS:
    case AS_OS_LINUX:
    case AS_OS_MAC:
    case AS_OS_SOLARIS:
      TargetOS = os;
      return;
  }
}

AS_OS GetTargetOS()
{
  return TargetOS;  
}

uint32_t AllStat::HashStr(const char* p)
{
  uint32_t hash = 0;
  while (*p)
  {
    uint32_t c = (uint8_t)*p++;
    hash = 3 * hash + hash / 2;
    hash += c;
  }
  return hash;
}

uint32_t AllStat::HashCode(uint32_t code)
{
  char buffer[64];
  sprintf(buffer, "%08X", code);

  return HashStr(buffer);
}

const STATUS_ITEM* AllStat::EntryByCode(
  uint32_t code
  , const STATUS_ITEM* table
  , const int** hashTable
)
{
  assert(table);
  assert(hashTable);

  if (!table || !hashTable)
    return nullptr;

  uint32_t hash = HashCode(code);
  const int* list = hashTable[hash % HashTableSize];

  for (;;)
  {
    int index = *list++;
    if (index == -1)
      break;

    const STATUS_ITEM& si = table[index];
    if (si.Code == code)
    { 
      if (TargetOS == AS_OS_ANY || si.OS == AS_OS::AS_OS_ANY || si.OS == TargetOS)
        return &table[index];
    }
  }
  return nullptr;
}

const STATUS_ITEM* AllStat::EntryByName(
  const char* name
  , const STATUS_ITEM* table
  , const int** hashTable
)
{
  assert(name);
  assert(table);
  assert(hashTable);

  if (!name || !table || !hashTable)
    return nullptr;

  uint32_t hash = HashStr(name);
  uint32_t entry = hash % HashTableSize;
  const int* list = hashTable[entry];

  for (;;)
  {
    int index = *list++;
    if (index == -1)
      break;

    const STATUS_ITEM& si = table[index];
    if (!stricmp(si.Name, name))
    {
      if (TargetOS == AS_OS_ANY || si.OS == AS_OS::AS_OS_ANY || si.OS == TargetOS)
        return &table[index];
    }
  }
  return nullptr;
}

StatusItemArray AllStat::EntryByCodeArray(
  uint32_t code
  , const STATUS_ITEM* table
  , const int** hashTable
)
{
  StatusItemArray arr;

  assert(table);
  assert(hashTable);

  if (!table || !hashTable)
    return arr;

  uint32_t hash = HashCode(code);
  const int* list = hashTable[hash % HashTableSize];

  for (;;)
  {
    int index = *list++;
    if (index == -1)
      break;

    const STATUS_ITEM& si = table[index];
    if (si.Code == code)
    {
      if (TargetOS == AS_OS_ANY || si.OS == AS_OS::AS_OS_ANY || si.OS == TargetOS)
        arr.push_back(&table[index]);
    }
  }
  return arr;
}

StatusItemArray AllStat::EntryByNameArray(
  const char* name
  , const STATUS_ITEM* table
  , const int** hashTable
)
{
  StatusItemArray arr;

  assert(name);
  assert(table);
  assert(hashTable);

  if (!name || !table || !hashTable)
    return arr;

  uint32_t hash = HashStr(name);
  uint32_t entry = hash % HashTableSize;
  const int* list = hashTable[entry];

  for (;;)
  {
    int index = *list++;
    if (index == -1)
      break;

    const STATUS_ITEM& si = table[index];
    if (!stricmp(si.Name, name))
    { 
      if (TargetOS == AS_OS_ANY || si.OS == AS_OS::AS_OS_ANY || si.OS == TargetOS)
        arr.push_back(&table[index]);
    }
  }
  return arr;
}

std::string AllStat::FormatName(
  uint32_t code
  , const STATUS_ITEM* item
  , const char* format
)
{
  if (item)
    return item->Name;

  char buffer[64];
  sprintf(buffer, format, code);

  return buffer;
}

void AllStat::ItemFromStatusItem(
  const STATUS_ITEM& si
  , AS_ITEM& item
  , AS_GENERATOR generator
  , AS_GENERATOR formatter
)
{
  item.Code = si.Code;
  item.ConstName = si.Name;
  item.Description = si.Description;
  item.Source = si.Source;
  item.OS = si.OS;
  item.Generator = generator;
  item.Formatter = formatter;
}

std::string AllStat::GetNameStr(const AS_ITEM& item)
{
  std::string str;
  if (item.Formatter == AS_GENERATOR::AS_HRESULT_FROM_WIN32)
  {
    str = "HRESULT_FROM_WIN32(";
    str += item.ConstName;
    str += ")";
  }
  else
    str = item.ConstName;

  return str;
}

std::string AllStat::GetValueStr(const AS_ITEM& item)
{
  char buffer[64];
  sprintf(buffer, "%i (0x%08X)", item.Code, item.Code);
  return buffer;
}

std::string AllStat::GetGenerator(const AS_ITEM& item)
{
  switch (item.Generator)
  {
    case AS_GENERATOR::AS_HRESULT: return "HRESULT";
    case AS_GENERATOR::AS_HTTP: return "HTTP Code";
    case AS_GENERATOR::AS_LRESULT: return "LRESULT";
    case AS_GENERATOR::AS_NTSTATUS: return "NTSTATUS";
    case AS_GENERATOR::AS_ERRNO: return "ERRNO";

    case AS_HRESULT_FROM_WIN32:
      break;
  }
  return std::string();
}

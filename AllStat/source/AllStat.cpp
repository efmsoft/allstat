#define _CRT_NONSTDC_NO_DEPRECATE
#include <AllStat/AllStat.h>
#include "Generator.h"

#include <cassert>
#include <cstdio>
#include <stddef.h>
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
      STATUS_ITEM_ENTRY e;
      e.Item = &table[index];
      e.Next = nullptr;
      e.Previous = nullptr;

      if (index && table[index - 1].Code != code)
        e.Previous = &table[index - 1];

      if (table[index + 1].Name && table[index + 1].Code != code)
        e.Next = &table[index + 1];

      if (TargetOS == AS_OS_ANY || si.OS == AS_OS::AS_OS_ANY || si.OS == TargetOS)
        arr.push_back(e);
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
      STATUS_ITEM_ENTRY e;
      e.Item = &table[index];
      e.Next = nullptr;
      e.Previous = nullptr;

      if (TargetOS == AS_OS_ANY || si.OS == AS_OS::AS_OS_ANY || si.OS == TargetOS)
        arr.push_back(e);
    }
  }
  return arr;
}

#if defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic ignored "-Wformat-nonliteral"
#endif
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
#if defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic warning "-Wformat-nonliteral"
#endif

void AllStat::ItemFromStatusItem(
  const STATUS_ITEM_ENTRY& si
  , AS_ITEM& item
  , AS_GENERATOR generator
  , AS_GENERATOR formatter
)
{
  item.Code = si.Item->Code;
  item.ConstName = si.Item->Name;
  item.Description = si.Item->Description;
  item.Source = si.Item->Source;
  item.OS = si.Item->OS;
  item.Generator = generator;
  item.Formatter = formatter;
  item.Previous = item.Code;
  item.Next = item.Code;

  if (si.Previous)
    item.Previous = si.Previous->Code;

  if (si.Next)
    item.Next = si.Next->Code;
}

AS_API std::string AllStat::GetNameStr(const AS_ITEM& item)
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

AS_API const char* GetNameStrC(const AS_ITEM* item)
{
  std::string str = GetNameStr(*item);
  return strdup(str.c_str());
}

AS_API std::string AllStat::GetValueStr(const AS_ITEM& item)
{
  uint32_t code = item.Code;
  if (item.Generator == AS_LRESULT && item.Formatter == AS_HRESULT_FROM_WIN32)
    code |= 0x80070000;

  char buffer[64];
  sprintf(buffer, "%i (0x%08X)", code, code);
  return buffer;
}

AS_API const char* GetValueStrC(const AS_ITEM* item)
{
  std::string str = GetValueStr(*item);
  return strdup(str.c_str());
}

AS_API std::string AllStat::GetGenerator(AS_GENERATOR id)
{
  for (Generator* g = Generator::First; g; g = g->Next)
    if (g->ID == id)
      return g->Name;

  return std::string();
}

AS_API std::string AllStat::GetGenerator(const AS_ITEM& item)
{
  for (Generator* g = Generator::First; g; g = g->Next)
    if (g->ID == item.Generator)
      return g->Name;

  return std::string();
}

AS_API const char* GetGeneratorByIdC(AS_GENERATOR id)
{
  std::string str = GetGenerator(id);
  return strdup(str.c_str());
}

AS_API const char* GetGeneratorC(const AS_ITEM* item)
{
  std::string str = GetGenerator(*item);
  return strdup(str.c_str());
}

PAS_ITEM_ARRAY AllStat::BuildItemArray(const ItemArray& arr)
{
  if (arr.empty())
    return nullptr;

  size_t cb = offsetof(AS_ITEM_ARRAY, Item) + arr.size() * sizeof(AS_ITEM);
  PAS_ITEM_ARRAY p = (PAS_ITEM_ARRAY)malloc(cb);
  if (p == nullptr)
    return p;

  int i = 0;
  p->Count = (uint32_t)arr.size();
  for (auto it = arr.begin(); it != arr.end(); ++it, ++i)
  {
    auto& item = *it;
    memcpy(&p->Item[i], &item, sizeof(item));
  }
  return p;
}

AS_API void AllStatFree(const void* str)
{
  free((void*)str);
}

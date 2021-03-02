#pragma once

#include <AllStat/AllStat.h>

#include <stdint.h>
#include <string>
#include <vector>

namespace AllStat
{
  typedef struct _STATUS_ITEM
  {
    uint32_t Code;
    const char* Name;
    AS_HANDLE Description;
    const char* Source;
    AS_OS OS;

  } STATUS_ITEM;

  typedef struct _TABLES
  {
    const STATUS_ITEM* Items;
    const int** Code2name;
    const int** Name2code;
    const uint8_t* DescrGz;
    int DescrGzLen;
    int DescrLen;
  } TABLES;

  static constexpr int HashTableSize = 64;

  const STATUS_ITEM* EntryByCode(uint32_t code, const STATUS_ITEM* table, const int** hashTable);
  const STATUS_ITEM* EntryByName(const char* name, const STATUS_ITEM* table, const int** hashTable);

  typedef std::vector<const STATUS_ITEM*> StatusItemArray;
  StatusItemArray EntryByCodeArray(uint32_t code, const STATUS_ITEM* table, const int** hashTable);
  StatusItemArray EntryByNameArray(const char* name, const STATUS_ITEM* table, const int** hashTable);

  std::string FormatName(uint32_t code, const STATUS_ITEM* item, const char* format);
  void ItemFromStatusItem(const STATUS_ITEM& si, AS_ITEM& item, AS_GENERATOR generator, AS_GENERATOR formatter);

  uint32_t HashStr(const char* p);
  uint32_t HashCode(uint32_t code);

  PAS_ITEM_ARRAY BuildItemArray(const ItemArray& arr);

  #define ENUM_CONTEXT_SIGN 'asEc'
}

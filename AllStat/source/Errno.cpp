#define _CRT_NONSTDC_NO_DEPRECATE
#include <AllStat/AllStat.h>
#include "AllStatDefs.h"

#include <cassert>
#include <string.h>

using namespace AllStat;

#pragma warning(disable : 4996 26812)

void ERRNOGetTables(TABLES& t);

std::string AllStat::Errno2Str(uint32_t lr)
{
  TABLES t;
  ERRNOGetTables(t);

  const STATUS_ITEM* p = EntryByCode(lr, t.Items, t.Code2name);
  return FormatName(lr, p, "0x%08X");
}

const char* Errno2StrC(uint32_t value)
{
  std::string str = Errno2Str(value);
  return strdup(str.c_str());
}

ItemArray AllStat::ErrnoInfo(uint32_t lr)
{
  TABLES t;
  ERRNOGetTables(t);

  ItemArray aa;
  auto a = EntryByCodeArray(lr, t.Items, t.Code2name);
  for (auto it = a.begin(); it != a.end(); ++it)
  {
    auto item = *it;

    AS_ITEM ai;
    ItemFromStatusItem(*item, ai, AS_GENERATOR::AS_ERRNO, AS_GENERATOR::AS_ERRNO);

    aa.push_back(ai);
  }
  return aa;
}

const char* Errno2Name(uint32_t lr)
{
  TABLES t;
  ERRNOGetTables(t);

  const STATUS_ITEM* p = EntryByCode(lr, t.Items, t.Code2name);
  return p ? p->Name : nullptr;
}

uint32_t Name2ErrnoItem(const char* constant_name, PAS_ITEM pitem)
{
  if (pitem == nullptr)
  {
    assert(pitem);
    return AS_UNKNOWN;
  }

  TABLES t;
  ERRNOGetTables(t);

  auto e = EntryByName(constant_name, t.Items, t.Name2code);
  if (e == nullptr)
    return AS_UNKNOWN;

  ItemFromStatusItem(*e, *pitem, AS_GENERATOR::AS_ERRNO, AS_GENERATOR::AS_ERRNO);
  return 0;
}

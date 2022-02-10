#define _CRT_NONSTDC_NO_DEPRECATE
#include <AllStat/AllStat.h>
#include "Generator.h"

using namespace AllStat;

#pragma warning(disable : 4996 26812)

AllStat::Generator* AllStat::Generator::First = nullptr;

Generator::Generator(
  const char* name
  , const char* format
  , AS_GENERATOR id
  , FGetTables gettables
  , FGetInfo getinfo
  , FGetConst getconst
)
  : Next(nullptr)
  , ID(id)
  , Name(name)
  , Format(format)
  , Tables{}
  , GetInfo(getinfo)
  , GetConst(getconst)
{
  gettables(Tables);

  Next = First;
  First = this;
}

std::string Generator::ToStr(uint32_t e)
{
  const STATUS_ITEM* p = EntryByCode(e, Tables.Items, Tables.Code2name);
  return FormatName(e, p, Format);
}

const char* Generator::ToStrC(uint32_t e)
{
  std::string str = ToStr(e);
  return strdup(str.c_str());
}

ItemArray Generator::ToInfo(uint32_t e)
{
  ItemArray aa;
  auto a = EntryByCodeArray(e, Tables.Items, Tables.Code2name);
  for (auto it = a.begin(); it != a.end(); ++it)
  {
    const STATUS_ITEM_ENTRY& item = *it;

    AS_ITEM ai;
    ItemFromStatusItem(item, ai, ID, ID);

    aa.push_back(ai);
  }
  return aa;
}

PAS_ITEM_ARRAY Generator::ToInfoC(uint32_t e)
{
  ItemArray arr = ToInfo(e);
  return BuildItemArray(arr);
}

const char* Generator::ToName(uint32_t e)
{
  const STATUS_ITEM* p = EntryByCode(e, Tables.Items, Tables.Code2name);
  return p ? p->Name : nullptr;
}

uint32_t Generator::ToItem(const char* constant_name, PAS_ITEM pitem)
{
  if (pitem == nullptr)
  {
    assert(pitem);
    return AS_UNKNOWN;
  }

  auto e = EntryByName(constant_name, Tables.Items, Tables.Name2code);
  if (e == nullptr)
    return AS_UNKNOWN;

  STATUS_ITEM_ENTRY si;
  si.Next = nullptr;
  si.Previous = nullptr;
  si.Item = e;

  ItemFromStatusItem(si, *pitem, ID, ID);
  return 0;
}

#define _CRT_NONSTDC_NO_DEPRECATE
#include <AllStat/AllStat.h>
#include "AllStatDefs.h"

#include <cassert>
#include <regex>
#include <string.h>

using namespace AllStat;

#pragma warning(disable : 4996 26812)

void HRESULTGetTables(TABLES& t);

std::string AllStat::Hresult2Str(uint32_t hr)
{
  TABLES t;
  HRESULTGetTables(t);

  const STATUS_ITEM* p = EntryByCode(hr, t.Items, t.Code2name);
  if (p == nullptr)
  {
    if ((hr & 0xFFFF0000) == 0x80070000)
    {
      const char* we = Winerr2Name(hr & 0xFFFF);
      if (we)
      {
        std::string str("HRESULT_FROM_WIN32(");
        str += we;
        str += ")";
        return str;
      }
    }
  }
  return FormatName(hr, p, "0x%08X");
}

const char* Hresult2StrC(uint32_t value)
{
  std::string str = Hresult2Str(value);
  return strdup(str.c_str());
}

ItemArray AllStat::HresultInfo(uint32_t hr)
{
  TABLES t;
  HRESULTGetTables(t);

  ItemArray aa;
  auto a = EntryByCodeArray(hr, t.Items, t.Code2name);
  for (auto it = a.begin(); it != a.end(); ++it)
  {
    auto item = *it;

    AS_ITEM ai;
    ItemFromStatusItem(*item, ai, AS_GENERATOR::AS_HRESULT, AS_GENERATOR::AS_HRESULT);

    aa.push_back(ai);
  }

  if ((hr & 0xFFFF0000) == 0x80070000)
  {
    ItemArray a2 = WinerrInfo(hr & 0xFFFF);
    for (auto it = a2.begin(); it != a2.end(); ++it)
    {
      auto& item = *it;

      AS_ITEM ai = item;
      ai.Formatter = AS_GENERATOR::AS_HRESULT_FROM_WIN32;

      aa.push_back(ai);
    }
  }
  return aa;
}

const char* Hresult2Name(uint32_t hr)
{
  TABLES t;
  HRESULTGetTables(t);

  const STATUS_ITEM* p = EntryByCode(hr, t.Items, t.Code2name);
  return p ? p->Name : nullptr;
}

uint32_t Name2HresultItem(const char* constant_name, PAS_ITEM pitem)
{
  if (pitem == nullptr)
  {
    assert(pitem);
    return AS_UNKNOWN;
  }

  TABLES t;
  HRESULTGetTables(t);

  auto e = EntryByName(constant_name, t.Items, t.Name2code);
  if (e == nullptr)
    return AS_UNKNOWN;

  ItemFromStatusItem(*e, *pitem, AS_GENERATOR::AS_HRESULT, AS_GENERATOR::AS_HRESULT);
  return 0;
}

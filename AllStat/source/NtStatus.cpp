#define _CRT_NONSTDC_NO_DEPRECATE
#include <AllStat/AllStat.h>
#include "Generator.h"

#include <cassert>
#include <string.h>

using namespace AllStat;

#pragma warning(disable : 4996 26812)

DEFINE_GENERATOR(NTSTATUS, NtStatus, "NTSTATUS");

std::string AllStat::NtStatus2Str(uint32_t ntstatus)
{
  TABLES t;
  NTSTATUSGetTables(t);

  const STATUS_ITEM* p = EntryByCode(ntstatus, t.Items, t.Code2name);
  return FormatName(ntstatus, p, "0x%08X");
}

const char* NtStatus2StrC(uint32_t value)
{
  std::string str = NtStatus2Str(value);
  return strdup(str.c_str());
}

ItemArray AllStat::NtStatusInfo(uint32_t ntstatus)
{
  TABLES t;
  NTSTATUSGetTables(t);

  ItemArray aa;
  auto a = EntryByCodeArray(ntstatus, t.Items, t.Code2name);
  for (auto it = a.begin(); it != a.end(); ++it)
  {
    auto item = *it;

    AS_ITEM ai;
    ItemFromStatusItem(*item, ai, AS_GENERATOR::AS_NTSTATUS, AS_GENERATOR::AS_NTSTATUS);

    aa.push_back(ai);
  }
  return aa;
}

AS_API PAS_ITEM_ARRAY NtStatusInfoC(uint32_t e)
{
  ItemArray arr = NtStatusInfo(e);
  return BuildItemArray(arr);
}

const char* NtStatus2Name(uint32_t ntstatus)
{
  TABLES t;
  NTSTATUSGetTables(t);

  const STATUS_ITEM* p = EntryByCode(ntstatus, t.Items, t.Code2name);
  return p ? p->Name : nullptr;
}

uint32_t Name2NtStatusItem(const char* constant_name, PAS_ITEM pitem)
{
  if (pitem == nullptr)
  {
    assert(pitem);
    return AS_UNKNOWN;
  }

  TABLES t;
  NTSTATUSGetTables(t);

  auto e = EntryByName(constant_name, t.Items, t.Name2code);
  if (e == nullptr)
    return AS_UNKNOWN;

  ItemFromStatusItem(*e, *pitem, AS_GENERATOR::AS_NTSTATUS, AS_GENERATOR::AS_NTSTATUS);
  return 0;
}

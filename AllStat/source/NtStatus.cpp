#include <AllStat/AllStat.h>
#include "AllStatDefs.h"

#include <cassert>

using namespace AllStat;

#pragma warning(disable : 4996 26812)

void NTSTATUSGetTables(TABLES& t);

std::string AllStat::NtStatus2Str(uint32_t ntstatus)
{
  TABLES t;
  NTSTATUSGetTables(t);

  const STATUS_ITEM* p = EntryByCode(ntstatus, t.Items, t.Code2name);
  return FormatName(ntstatus, p, "0x%08X");
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

#include <AllStat/AllStat.h>
#include "AllStatDefs.h"

#include <regex>

using namespace AllStat;

#pragma warning(disable : 4996 26812)

AS_API ItemArray AllStat::AllStatInfo(uint32_t value)
{
  ItemArray arr;
  typedef ItemArray (*GRABBER)(uint32_t value);
  static GRABBER functions[] =
  {
    ErrnoInfo
    , HresultInfo
    , HttpCodeInfo
    , IppStatusInfo
    , KreturnInfo
    , NtStatusInfo
    , WinerrInfo
  };

  for (int i = 0; i < sizeof(functions) / sizeof(functions[0]); ++i)
  {
    ItemArray a = functions[i](value);
    arr.insert(arr.end(), a.begin(), a.end());
  }
  return arr;
}

AS_API uint32_t Name2Item(const char* constant_name, PAS_ITEM pitem)
{
  typedef uint32_t (*GRABBER)(const char* constant_name, PAS_ITEM pitem);
  static GRABBER functions[] =
  {
    Name2ErrnoItem
    , Name2HresultItem
    , Name2HttpCodeItem
    , Name2IppStatusItem
    , Name2KreturnItem
    , Name2NtStatusItem
    , Name2WinerrItem
  };

  bool fromWin32 = false;

  std::string match;
  std::string name(constant_name);

  std::smatch m;
  const std::regex base_regex("HRESULT_FROM_WIN32\\(([^\\)]+)\\)", std::regex::icase);
  if (std::regex_match(name, m, base_regex))
  {
    name = m[1].str();
    fromWin32 = true;
  }

  for (int i = 0; i < sizeof(functions) / sizeof(functions[0]); ++i)
  {
    auto rc = functions[i](name.c_str(), pitem);
    if (!rc)
    { 
      if (pitem->Generator == AS_GENERATOR::AS_LRESULT && fromWin32)
      {
        pitem->Code |= 0x80070000;  // pitem->Code = HRESULT_FROM_WIN32(pitem->Code)
        pitem->Generator = AS_GENERATOR::AS_HRESULT;
        pitem->Formatter = AS_GENERATOR::AS_HRESULT_FROM_WIN32;
      }
      return 0;
    }
  }
  return AS_UNKNOWN;
}
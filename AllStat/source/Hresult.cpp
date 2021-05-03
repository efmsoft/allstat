#ifndef AS_BUILD_AS_HRESULT
#ifdef AS_CUSTOM_BUILD
#define AS_BUILD_AS_HRESULT  0
#else
#define AS_BUILD_AS_HRESULT  1
#endif
#endif

#if AS_BUILD_AS_HRESULT

#include "Generator.h"
#include <regex>

struct HresultGenerator : public Generator
{
  HresultGenerator(
    const char* name
    , const char* format
    , AS_GENERATOR id
    , FGetTables gettables
    , FGetInfo getinfo
    , FGetConst getconst
  );

  std::string ToStr(uint32_t e) override;
  ItemArray ToInfo(uint32_t e) override;
};

DEFINE_GENERATOR_EX(HresultGenerator, HRESULT, Hresult, "HRESULT", "0x%08X");
CREATE_GENERATOR(Hresult);

HresultGenerator::HresultGenerator(
  const char* name
  , const char* format
  , AS_GENERATOR id
  , FGetTables gettables
  , FGetInfo getinfo
  , FGetConst getconst
)
  : Generator(name, format, id, gettables, getinfo, getconst)
{
}

std::string HresultGenerator::ToStr(uint32_t hr)
{
  const STATUS_ITEM* p = EntryByCode(hr, Tables.Items, Tables.Code2name);
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
  return FormatName(hr, p, Format);
}

ItemArray HresultGenerator::ToInfo(uint32_t hr)
{
  ItemArray aa = Generator::ToInfo(hr);
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

#endif // #if AS_BUILD_AS_HRESULT

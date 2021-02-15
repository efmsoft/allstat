#include <AllStat/AllStat.h>
#include <Config.h>

#include <regex>

using namespace AllStat;

void PrintItem(const AS_ITEM& v, bool& f)
{
  auto name = GetNameStr(v);

  if (v.Source && *v.Source)
    printf(" %s [%s]\n", name.c_str(), v.Source);
  else
    printf(" %s\n", name.c_str());

  auto descr = GetDescriptionStr(v.Description);
  if (!descr.empty())
      printf("  %s\n", descr.c_str());

  f = true;
}

void Code2Name(const Config& c)
{
  bool f = false;

  auto aant = NtStatusInfo(c.Value);
  auto aalr = WinerrInfo(c.Value);
  auto aahr = HresultInfo(c.Value);
  auto aahttp = HttpCodeInfo(c.Value);

  if (aant.empty() && aalr.empty() && aahr.empty() && aahttp.empty())
  {
    printf("Unknown contant\n");
    exit(1);
  }

  if (!aant.empty())
  {
    printf("%sNTSTATUS:\n", f ? "\n" : "");
    for (auto it = aant.begin(); it != aant.end(); ++it)
      PrintItem(*it, f);
  }

  if (!aalr.empty())
  {
    printf("%sLRESULT:\n", f ? "\n" : "");
    for (auto it = aalr.begin(); it != aalr.end(); ++it)
      PrintItem(*it, f);
  }

  if (!aahr.empty())
  {
    printf("%sHRESULT:\n", f ? "\n" : "");
    for (auto it = aahr.begin(); it != aahr.end(); ++it)
      PrintItem(*it, f);
  }

  if (!aahttp.empty())
  {
    printf("%sHTTP Code:\n", f ? "\n" : "");
    for (auto it = aahttp.begin(); it != aahttp.end(); ++it)
      PrintItem(*it, f);
  }
}

void PrintItemCode(const AS_ITEM& ai)
{
  auto gen = GetGenerator(ai);
  printf("Type: %s\n", gen.c_str());

  std::string v = GetValueStr(ai);
  printf("Code: %s\n", v.c_str());

  if (ai.Source && *ai.Source)
    printf("Source: %s\n", ai.Source);

  auto descr = GetDescriptionStr(ai.Description);
  if (!descr.empty())
    printf("Decription: %s\n", descr.c_str());
}

bool Name2Code2(const char* name, bool fromWin32)
{
  AS_ITEM ai;
  if (!Name2NtStatusItem(name, &ai))
  {
    PrintItemCode(ai);
    return true;
  }

  if (!Name2WinerrItem(name, &ai))
  {
    if (fromWin32)
    {
      ai.Code |= 0x80070000;
      ai.Generator = AS_GENERATOR::AS_HRESULT;
      ai.Formatter = AS_GENERATOR::AS_HRESULT_FROM_WIN32;
    }

    PrintItemCode(ai);
    return true;
  }

  if (!Name2HresultItem(name, &ai))
  {
    PrintItemCode(ai);
    return true;
  }

  if (!Name2HttpCodeItem(name, &ai))
  {
    PrintItemCode(ai);
    return true;
  }

  return false;
}

void Name2Code(const Config& c)
{
  bool fromWin32 = false;

  std::string match;
  const char* name = c.Name.c_str();

  std::smatch m;
  const std::regex base_regex("HRESULT_FROM_WIN32\\(([^\\)]+)\\)", std::regex::icase);
  if (std::regex_match(c.Name, m, base_regex))
  {
    match = m[1].str();
    name = match.c_str();
    fromWin32 = true;
  }

  if (Name2Code2(name, fromWin32))
    return;

  std::string str(name);
  std::transform(str.begin(), str.end(), str.begin(), ::toupper);
  if (Name2Code2(str.c_str(), fromWin32))
    return;

  printf("Unknown constant\n");
}
  
int main(int argc, char* argv[])
{
  Config c(argc, argv);

  if (c.Name.empty())
    Code2Name(c);
  else
    Name2Code(c);

  return 0;
}

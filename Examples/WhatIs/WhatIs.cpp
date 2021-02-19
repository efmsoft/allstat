#include <AllStat/AllStat.h>
#include <Config.h>

#include <algorithm>

using namespace AllStat;

#pragma warning(disable : 26812)

void PrintItem(const AS_ITEM& v)
{
  auto name = GetNameStr(v);

  if (v.Source && *v.Source)
    printf(" %s [%s]\n", name.c_str(), v.Source);
  else
    printf(" %s\n", name.c_str());

  auto descr = GetDescriptionStr(v.Description);
  if (!descr.empty())
      printf("  %s\n", descr.c_str());
}

void Code2Name(const Config& c)
{
  ItemArray arr = AllStatInfo(c.Value);
  if (arr.empty())
  {
    printf("Unknown contant\n");
    exit(1);
  }

  auto gprev = AS_GENERATOR::AS_NONE;
  for (auto it = arr.begin(); it != arr.end(); ++it)
  {
    auto& v = *it;
    if (v.Generator != gprev)
    {
      printf(
        "%s%s:\n"
        , gprev != AS_GENERATOR::AS_NONE ? "\n" : ""
        , GetGenerator(v).c_str()
      );
      gprev = v.Generator;
    }
    PrintItem(*it);
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

bool Name2Code2(const std::string& name)
{
  AS_ITEM ai;
  if (!Name2Item(name.c_str(), &ai))
  {
    PrintItemCode(ai);
    return true;
  }
  return false;
}

void Name2Code(const Config& c)
{
  if (Name2Code2(c.Name))
    return;

  std::string str(c.Name);
  std::transform(str.begin(), str.end(), str.begin(), ::toupper);
  if (Name2Code2(str.c_str()))
    return;

  printf("Unknown constant\n");
}
  
int main(int argc, char* argv[])
{
  Config c(argc, argv);
  c.Name.empty() ? Code2Name(c) : Name2Code(c);

  return 0;
}

#define _CRT_NONSTDC_NO_DEPRECATE
#include <AllStat/AllStat.h>
#include "Generator.h"

#include <cassert>
#include <regex>

using namespace AllStat;

#pragma warning(disable : 4996 26812)

//
// If a function from this module is referenced, this 
// function will force linking of all generator modules.
//
void RefAllModules(AS_GENERATOR g)
{
  #define REF_MODULE(t) case AS_##t: { void t##RefModule(); t##RefModule(); break; }

  // Clang will warn if newly added generator is not added to this switch
  switch (g)
  {
    REF_MODULE(NTSTATUS);
    REF_MODULE(LRESULT);
    REF_MODULE(HRESULT);
    REF_MODULE(HTTP);
    REF_MODULE(ERRNO);
    REF_MODULE(KRETURN);
    REF_MODULE(IPP_STATUS);
    REF_MODULE(BUGCHECK);

    case AS_HRESULT_FROM_WIN32:
    case AS_NONE:
      break;
  }
}

AS_API ItemArray AllStat::AllStatInfo(uint32_t value)
{
  ItemArray arr;
  for (Generator* g = Generator::First; g; g = g->Next)
  {
    ItemArray a = g->GetInfo(value);
    arr.insert(arr.end(), a.begin(), a.end());
  }
  return arr;
}

AS_API PAS_ITEM_ARRAY AllStatInfoC(uint32_t value)
{
  ItemArray arr = AllStatInfo(value);
  return BuildItemArray(arr);
}

AS_API uint32_t Name2Item(const char* constant_name, PAS_ITEM pitem)
{
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

  for (Generator* g = Generator::First; g; g = g->Next)
  {
    auto rc = g->GetConst(name.c_str(), pitem);
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

AS_API uint32_t AllStatGetFirst(AS_GENERATOR id, PAS_ENUM_CONTEXT context, PAS_ITEM item)
{
  assert(context != nullptr);
  assert(item != nullptr);

  if (context == nullptr || item == nullptr)
    return AS_UNKNOWN;

  context->Signature = ENUM_CONTEXT_SIGN;
  context->Serach = id;
  context->ID = AS_GENERATOR::AS_NONE;
  context->Pos = 0;
  context->Table = nullptr;

  Generator* p = nullptr;
  if (id == AS_GENERATOR::AS_ANY)
    p = Generator::First;
  else
  { 
    for (Generator* g = Generator::First; g; g = g->Next)
    {
      if (g->ID == id)
      {
        p = g;
        break;
      }
    }
  }

  if (p == nullptr)
    return AS_UNKNOWN;

  const STATUS_ITEM* pi = p->Tables.Items;
  if (pi->Name)
  {
    STATUS_ITEM_ENTRY si;
    si.Next = nullptr;
    si.Previous = nullptr;
    si.Item = pi;

    context->Table = pi;
    context->ID = p->ID;
    ItemFromStatusItem(si, *item, p->ID, p->ID);
    return AS_SUCCESS;
  }
  return AS_UNKNOWN;
}

AS_API uint32_t AllStatGetNext(PAS_ENUM_CONTEXT context, PAS_ITEM item)
{
  assert(item != nullptr);
  assert(context != nullptr);
  if (item == nullptr || context == nullptr)
    return AS_UNKNOWN;

  assert(context->Table != nullptr);
  assert(context->Signature == ENUM_CONTEXT_SIGN);
  if (context->Table == nullptr || context->Signature != ENUM_CONTEXT_SIGN)
    return AS_UNKNOWN;

  context->Pos++;
  const STATUS_ITEM* table = (const STATUS_ITEM*)context->Table;
  auto& si = table[context->Pos];

  if (si.Name)
  {
    STATUS_ITEM_ENTRY sti;
    sti.Next = nullptr;
    sti.Previous = nullptr;
    sti.Item = &si;

    ItemFromStatusItem(sti, *item, context->ID, context->ID);
    return AS_SUCCESS;
  }

  if (context->Serach != AS_GENERATOR::AS_ANY)
    return AS_UNKNOWN;

  for (Generator* g = Generator::First; g; g = g->Next)
  {
    if (g->ID == context->ID)
    {
      if (g->Next == nullptr)
        return AS_UNKNOWN;

      uint32_t rc = AllStatGetFirst(g->Next->ID, context, item);
      context->Serach = AS_GENERATOR::AS_ANY;
      return rc;
    }
  }
  return AS_UNKNOWN;
}

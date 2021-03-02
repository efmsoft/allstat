#define _CRT_NONSTDC_NO_DEPRECATE
#include <AllStat/AllStat.h>
#include "Generator.h"

using namespace AllStat;

#pragma warning(disable : 4996 26812)

AllStat::Generator* AllStat::Generator::First = nullptr;

Generator::Generator(
  const char* name
  , AS_GENERATOR id
  , FGetTables gettables
  , FGetInfo getinfo
  , FGetConst getconst
)
  : Next(nullptr)
  , ID(id)
  , Name(name)
  , Tables{}
  , GetInfo(getinfo)
  , GetConst(getconst)
{
  gettables(Tables);

  Next = First;
  First = this;
}

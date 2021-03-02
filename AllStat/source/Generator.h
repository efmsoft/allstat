#pragma once

#include <AllStat/AllStat.h>
#include "AllStatDefs.h"

namespace AllStat
{
  #define DEFINE_GENERATOR(type, nick, name) \
    void type##RefModule() {} \
    void type##GetTables(TABLES& t); \
    static Generator GeneratorInstance( \
      name \
      , AS_GENERATOR::AS_##type \
      , type##GetTables \
      , nick##Info \
      , Name2##nick##Item \
    )

  struct Generator
  {
    typedef void (*FGetTables)(TABLES&);
    typedef ItemArray(*FGetInfo)(uint32_t value);
    typedef uint32_t(*FGetConst)(const char* constant_name, PAS_ITEM pitem);

    static Generator* First;
    Generator* Next;

    const char* Name;
    AS_GENERATOR ID;

    TABLES Tables;
    FGetInfo GetInfo;
    FGetConst GetConst;

    Generator(
      const char* name
      , AS_GENERATOR id
      , FGetTables gettables
      , FGetInfo getinfo
      , FGetConst getconst
    );
  };
}
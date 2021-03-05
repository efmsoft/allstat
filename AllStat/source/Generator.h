#pragma once

#define _CRT_NONSTDC_NO_DEPRECATE
#include <AllStat/AllStat.h>

#include "AllStatDefs.h"

#include <cassert>
#include <string.h>

#pragma warning(disable : 4996 26812)

using namespace AllStat;

namespace AllStat
{
  #define DEFINE_GENERATOR_EX(obtype, type, nick, name, format) \
    void type##RefModule() {} \
    void type##GetTables(TABLES& t); \
    static obtype GeneratorInstance( \
      name \
      , format \
      , AS_GENERATOR::AS_##type \
      , type##GetTables \
      , nick##Info \
      , Name2##nick##Item \
    )

  #define DEFINE_GENERATOR(type, nick, name, format) \
    DEFINE_GENERATOR_EX(Generator, type, nick, name, format)

  #define CREATE_GENERATOR(nick) \
    AS_API std::string AllStat::##nick##2Str(uint32_t e) \
    { \
      return GeneratorInstance.ToStr(e); \
    } \
    AS_API const char* nick##2StrC(uint32_t e) \
    { \
      std::string str = nick##2Str(e); \
      return strdup(str.c_str()); \
    } \
    AS_API ItemArray AllStat::##nick##Info(uint32_t e) \
    { \
      return GeneratorInstance.ToInfo(e); \
    } \
    AS_API PAS_ITEM_ARRAY nick##InfoC(uint32_t e) \
    { \
      return GeneratorInstance.ToInfoC(e); \
    } \
    AS_API const char* nick##2Name(uint32_t e) \
    { \
      return GeneratorInstance.ToName(e); \
    } \
    AS_API uint32_t Name2##nick##Item(const char* constant_name, PAS_ITEM pitem) \
    { \
      return GeneratorInstance.ToItem(constant_name, pitem); \
    }


  struct Generator
  {
    typedef void (*FGetTables)(TABLES&);
    typedef ItemArray(*FGetInfo)(uint32_t value);
    typedef uint32_t(*FGetConst)(const char* constant_name, PAS_ITEM pitem);

    static Generator* First;
    Generator* Next;

    const char* Name;
    const char* Format;
    AS_GENERATOR ID;

    TABLES Tables;
    FGetInfo GetInfo;
    FGetConst GetConst;

    Generator(
      const char* name
      , const char* format
      , AS_GENERATOR id
      , FGetTables gettables
      , FGetInfo getinfo
      , FGetConst getconst
    );

    virtual std::string ToStr(uint32_t e);
    virtual const char* ToStrC(uint32_t e);

    virtual ItemArray ToInfo(uint32_t e);
    virtual PAS_ITEM_ARRAY ToInfoC(uint32_t e);

    virtual const char* ToName(uint32_t e);
    virtual uint32_t ToItem(const char* constant_name, PAS_ITEM pitem);
  };
}
#pragma once

#include <stdint.h>

enum AS_OS
{
  AS_OS_ANY = 0,

  AS_OS_WINDOWS = 0x0001,
  AS_OS_LINUX = 0x0002,
  AS_OS_MAC = 0x0004,
  AS_OS_SOLARIS = 0x0080,
};

enum AS_GENERATOR
{
  AS_NTSTATUS = 0x00000001,
  AS_LRESULT = 0x00000002,
  AS_HRESULT = 0x00000004,
  AS_HTTP = 0x00000008,

  AS_HRESULT_FROM_WIN32 = 0x80000004,
};

#define AS_HANDLE_SIGN 'aH'

typedef struct _AS_HANDLE
{
  union
  {
    uint64_t Handle;
    struct
    {
      uint64_t Offset : 32;
      uint64_t Generator : 16;
      uint64_t Signature : 16; // AS_HANDLE_SIGN
    };
  };

  const char* Uncompressed;

} AS_HANDLE;

typedef struct _AS_ITEM
{
  uint32_t Code;

  const char* ConstName;
  const char* Source;
  AS_HANDLE Description;

  AS_OS OS;
  AS_GENERATOR Generator;
  AS_GENERATOR Formatter;

} AS_ITEM, *PAS_ITEM;

#define AS_UNKNOWN          ((uint32_t)-1)

#ifndef AS_UNDEF_VALUES
#define AS_UNDEF_VALUES     1
#endif

#define _AS_STRINGIFY(a)    a

#ifdef AS_ENUM_PREFIX
#define AS_DEFINE_NAME(v)   _AS_STRINGIFY(AS_ENUM_PREFIX)##v
#else
#define AS_DEFINE_NAME(v)   v
#endif

#ifdef __cplusplus
#ifndef AS_NO_NAMESPACE
#define AS_NAMESPACE_BEGIN()  namespace AllStat {
#define AS_NAMESPACE_END()    }
#else
#define AS_NAMESPACE_BEGIN()
#define AS_NAMESPACE_END()
#endif
#else
#define AS_NAMESPACE_BEGIN()
#define AS_NAMESPACE_END()
#endif

#ifndef AS_COMPRESS_DESCRIPTION
#define AS_COMPRESS_DESCRIPTION   0
#endif

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
#define AS_DESCR_HANDLE(str, offs) \
  {(uint64_t(AS_HANDLE_SIGN) << 48) + (_GENERATOR_ << 32) + offs}
#else
#  ifdef AS_NO_DESCRIPTION
#    define AS_DESCR_HANDLE(str, offs)  \
       {0, ""}
#  else
#    define AS_DESCR_HANDLE(str, offs)  \
       {0, str}
#  endif
#endif

#pragma once

#include <stdint.h>

#pragma pack(push,1) 
#pragma warning(push)
#pragma warning(disable : 4201)

typedef enum _AS_OS
{
  AS_OS_ANY,

  AS_OS_WINDOWS,
  AS_OS_LINUX,
  AS_OS_MAC,
  AS_OS_SOLARIS,
} AS_OS;

typedef enum _AS_GENERATOR
{
  AS_NTSTATUS = 0x00000001,
  AS_LRESULT = 0x00000002,
  AS_HRESULT = 0x00000004,
  AS_HTTP = 0x00000008,
  AS_ERRNO = 0x00000010,
  AS_KRETURN = 0x00000020,
  AS_IPP_STATUS = 0x00000040,
  AS_BUGCHECK = 0x00000080,

  AS_HRESULT_FROM_WIN32 = 0x80000004,

  AS_NONE = 0xFFFFFFFF,
  AS_ANY = 0xFFFFFFFF,
} AS_GENERATOR;

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
  uint32_t Previous;
  uint32_t Next;

  const char* ConstName;
  const char* Source;
  AS_HANDLE Description;

  AS_OS OS;
  AS_GENERATOR Generator;
  AS_GENERATOR Formatter;

} AS_ITEM, *PAS_ITEM;

typedef struct _AS_ITEM_ARRAY
{
  uint32_t Count;
  AS_ITEM Item[1];

} AS_ITEM_ARRAY, *PAS_ITEM_ARRAY;


typedef struct _AS_ENUM_CONTEXT
{
  uint32_t Signature;
  uint32_t Pos;
  const void* Table;
  AS_GENERATOR Serach;
  AS_GENERATOR ID;

} AS_ENUM_CONTEXT, *PAS_ENUM_CONTEXT;

#pragma warning(pop)
#pragma pack(pop) 

#define AS_SUCCESS          0
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
  {{(uint64_t(AS_HANDLE_SIGN) << 48) + (_GENERATOR_ << 32) + offs}, 0}
#else
#  ifdef AS_NO_DESCRIPTION
#    define AS_DESCR_HANDLE(str, offs)  \
       {{0}, ""}
#  else
#    define AS_DESCR_HANDLE(str, offs)  \
       {{0}, str}
#  endif
#endif

#if defined(_WIN32)
#define PUBLIC_API_EXPORT __declspec(dllexport)
#define PUBLIC_API_IMPORT __declspec(dllimport)
#elif __GNUC__ > 3
#define PUBLIC_API_EXPORT __attribute__ ((visibility("default")))
#define PUBLIC_API_IMPORT
#else
#define PUBLIC_API_EXPORT
#define PUBLIC_API_IMPORT
#endif

#ifdef AS_DLL
#define AS_API_IMPORT PUBLIC_API_IMPORT
#define AS_API_EXPORT PUBLIC_API_EXPORT
#else
#define AS_API_IMPORT
#define AS_API_EXPORT
#endif

#ifdef AS_DLL_IMPL
#define AS_API AS_API_EXPORT
#else
#define AS_API AS_API_IMPORT
#endif


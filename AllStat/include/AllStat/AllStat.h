#pragma once

#include "Types.h"

#ifdef __cplusplus

#include <string>
#include <vector>

namespace AllStat
{
  // Several constants can correspond to the same value. Block of functions below 
  // returns first found constant. If constant was not found, functions returns 
  // string representation of constant. The format is dependent from type of 
  // generator. For example, for HRESULT and NTSTATUS it is 0x08X. For LRESULT 
  // and HTTP it is %i
  AS_API std::string NtStatus2Str(uint32_t value);
  AS_API std::string Winerr2Str(uint32_t value);
  AS_API std::string Hresult2Str(uint32_t value);
  AS_API std::string HttpCode2Str(uint32_t value);
  AS_API std::string Errno2Str(uint32_t value);

  // The next block of functions returns information about all defined constants 
  // for the specified code
  typedef std::vector<AS_ITEM> ItemArray;
  AS_API ItemArray NtStatusInfo(uint32_t value);
  AS_API ItemArray WinerrInfo(uint32_t value);
  AS_API ItemArray HresultInfo(uint32_t value);
  AS_API ItemArray HttpCodeInfo(uint32_t value);
  AS_API ItemArray ErrnoInfo(uint32_t value);

  // Get code decription string by handle. If AS_COMPRESS_DESCRIPTION is defined, description 
  // strings are stored in compressd block. The function below retrieved description string 
  // from comressed data
  AS_API std::string GetDescriptionStr(AS_HANDLE h);

  // Format name of constant. In some cases it differs from value of AS_ITEM::ConstName
  // (if Formatter != Generator). For example, if Formatter is AS_HRESULT_FROM_WIN32,
  // returning name is 'HRESULT_FROM_WIN32(ConstName)'
  AS_API std::string GetNameStr(const AS_ITEM& item);

  // Format constant value
  AS_API std::string GetValueStr(const AS_ITEM& item);

  // Name of generator
  AS_API std::string GetGenerator(const AS_ITEM& item);
}
#endif // #ifdef __cplusplus

#ifdef __cplusplus
extern "C" {
#endif  // #ifdef __cplusplus

// Several constants can correspond to the same value. Block of functions below 
// returns first found constant. If constant was not found, functions returns NULL
AS_API const char* NtStatus2Name(uint32_t value);
AS_API const char* Winerr2Name(uint32_t value);
AS_API const char* Hresult2Name(uint32_t value);
AS_API const char* HttpCode2Name(uint32_t value);
AS_API const char* Errno2Name(uint32_t value);

// Inverse transformation from constant name to code. This transformation is 
// unambiguous. 0 if success. Otherwise AS_UNKNOWN value
AS_API uint32_t Name2NtStatusItem(const char* constant_name, PAS_ITEM pitem);
AS_API uint32_t Name2WinerrItem(const char* constant_name, PAS_ITEM pitem);
AS_API uint32_t Name2HresultItem(const char* constant_name, PAS_ITEM pitem);
AS_API uint32_t Name2HttpCodeItem(const char* constant_name, PAS_ITEM pitem);
AS_API uint32_t Name2ErrnoItem(const char* constant_name, PAS_ITEM pitem);

// The default is the current operating system. The status/error code search functions 
// use this value to filter the returned data. Use AS_OS_ANY to switch off filtering
AS_API void SetTargetOS(AS_OS os);
AS_API AS_OS GetTargetOS();

// C implementation of GetDescriptionStr-GetGenerator. Call AllStatFree to free memory 
// allocated for returned string
AS_API const char* NtStatus2StrC(uint32_t value);
AS_API const char* Winerr2StrC(uint32_t value);
AS_API const char* Hresult2StrC(uint32_t value);
AS_API const char* HttpCode2StrC(uint32_t value);
AS_API const char* Errno2StrC(uint32_t value);
AS_API const char* GetDescriptionStrC(AS_HANDLE h);
AS_API const char* GetNameStrC(const AS_ITEM* item);
AS_API const char* GetValueStrC(const AS_ITEM* item);
AS_API const char* GetGeneratorC(const AS_ITEM* item);

AS_API void AllStatFree(const char* str);

#ifdef __cplusplus
}
#endif

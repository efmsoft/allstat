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
  std::string NtStatus2Str(uint32_t value);
  std::string Winerr2Str(uint32_t value);
  std::string Hresult2Str(uint32_t value);
  std::string HttpCode2Str(uint32_t value);

  // The next block of functions returns information about all defined constants 
  // for the specified code
  typedef std::vector<AS_ITEM> ItemArray;
  ItemArray NtStatusInfo(uint32_t value);
  ItemArray WinerrInfo(uint32_t value);
  ItemArray HresultInfo(uint32_t value);
  ItemArray HttpCodeInfo(uint32_t value);

  // Get code decription string by handle. If AS_COMPRESS_DESCRIPTION is defined, description 
  // strings are stored in compressd block. The function below retrieved description string 
  // from comressed data
  std::string GetDescriptionStr(AS_HANDLE h);

  // Format name of constant. In some cases it differs from value of AS_ITEM::ConstName
  // (if Formatter != Generator). For example, if Formatter is AS_HRESULT_FROM_WIN32,
  // returning name is 'HRESULT_FROM_WIN32(ConstName)'
  std::string GetNameStr(const AS_ITEM& item);

  // Format constant value
  std::string GetValueStr(const AS_ITEM& item);

  // Name of generator
  std::string GetGenerator(const AS_ITEM& item);
}
#endif // #ifdef __cplusplus

#ifdef __cplusplus
extern "C" {
#endif  // #ifdef __cplusplus

// Several constants can correspond to the same value. Block of functions below 
// returns first found constant. If constant was not found, functions returns NULL
const char* NtStatus2Name(uint32_t value);
const char* Winerr2Name(uint32_t value);
const char* Hresult2Name(uint32_t value);
const char* HttpCode2Name(uint32_t value);

// Inverse transformation from constant name to code. This transformation is 
// unambiguous. 0 if success. Otherwise AS_UNKNOWN value
uint32_t Name2NtStatusItem(const char* constant_name, PAS_ITEM pitem);
uint32_t Name2WinerrItem(const char* constant_name, PAS_ITEM pitem);
uint32_t Name2HresultItem(const char* constant_name, PAS_ITEM pitem);
uint32_t Name2HttpCodeItem(const char* constant_name, PAS_ITEM pitem);

// The default is the current operating system. The status/error code search functions 
// use this value to filter the returned data. Use AS_OS_ANY to switch off filtering
void SetTargetOS(AS_OS os);
AS_OS GetTargetOS();

#ifdef __cplusplus
}
#endif

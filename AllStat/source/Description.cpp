#define _CRT_NONSTDC_NO_DEPRECATE
#include <AllStat/AllStat.h>

#include "Generator.h"

#include <cassert>
#include <string.h>

using namespace AllStat;

#pragma warning(disable : 4996)

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)

#include <zlib.h>

static std::string Decompress(AS_HANDLE h, const TABLES& t)
{
  std::vector<uint8_t> data(t.DescrLen);

  z_stream strm;
  memset(&strm, 0, sizeof(strm));

  int rc = inflateInit2(&strm, 47);
  if (rc != Z_OK)
    return std::string();

  strm.avail_in = t.DescrGzLen;
  strm.next_in = (Bytef*)t.DescrGz;
  strm.next_out = &data[0];
  strm.avail_out = t.DescrLen;
  rc = inflate(&strm, 1);
  inflateEnd(&strm);

  if (rc != Z_STREAM_END)
    return std::string();

  const char* p = (const char*)(&data[0] + h.Offset);
  return std::string(p);
}

#endif // #if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)

std::string AllStat::GetDescriptionStr(AS_HANDLE h)
{
#ifdef AS_NO_DESCRIPTION
  return std::string();
#else
#if AS_COMPRESS_DESCRIPTION

  const TABLES* t = nullptr;
  for (Generator* g = Generator::First; g; g = g->Next)
  { 
    if (h.Generator == g->ID)
    { 
      t = &g->Tables;
      break;
    }
  }

  if (t == nullptr)
  {
    assert(!"Generator is not supported");
    return std::string();
  }
  return Decompress(h, *t);

#else
  return h.Uncompressed;
#endif
#endif
}

const char* GetDescriptionStrC(AS_HANDLE h)
{
  std::string str = GetDescriptionStr(h);
  return strdup(str.c_str());
}

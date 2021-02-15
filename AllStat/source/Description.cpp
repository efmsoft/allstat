#include <AllStat/AllStat.h>

#include "AllStatDefs.h"

#include <cassert>

using namespace AllStat;

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)

#include <zlib.h>

void NTSTATUSGetTables(TABLES& t);
void HRESULTGetTables(TABLES& t);
void LRESULTGetTables(TABLES& t);
void HTTPGetTables(TABLES& t);

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
  TABLES t;
  switch (h.Generator)
  {
    case AS_GENERATOR::AS_HRESULT: HRESULTGetTables(t); break;
    case AS_GENERATOR::AS_NTSTATUS: NTSTATUSGetTables(t); break;
    case AS_GENERATOR::AS_LRESULT: LRESULTGetTables(t); break;
    case AS_GENERATOR::AS_HTTP: HTTPGetTables(t); break;

    default:
      assert(!"Generator is not supported");
      return std::string();
  }
  return Decompress(h, t);

#else
  return h.Uncompressed;
#endif
#endif
}

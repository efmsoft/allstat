#include <AllStat/AllStat.h>
#include <AllStat/hresult.h>
#include <AllStat/http.h>
#include <AllStat/lresult.h>
#include <AllStat/ntstatus.h>

#define VERIFY(what)  \
  if (!(what)) { \
    printf("Failed check: %s\n", #what); \
    exit(1); \
  }

#define asFACILITY_WIN32  7
#define asHRESULT_FROM_WIN32(x) ((uint32_t)(x) <= 0 ? ((uint32_t)(x)) : ((uint32_t) (((x) & 0x0000FFFF) | (asFACILITY_WIN32 << 16) | 0x80000000)))

using namespace AllStat;

int main()
{
  AS_ITEM item;
  std::string name, descr;

  // NTSTATUS
  name = NtStatus2Str(STATUS_END_OF_FILE);
  VERIFY(name == "STATUS_END_OF_FILE");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_END_OF_FILE);

  name = NtStatus2Name(STATUS_OBJECT_NAME_EXISTS);
  VERIFY(name == "STATUS_OBJECT_NAME_EXISTS");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_OBJECT_NAME_EXISTS);

  name = NtStatus2Str(STATUS_TIMEOUT);
  VERIFY(name == "STATUS_TIMEOUT");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_TIMEOUT);

  // HRESULT
  name = Hresult2Str(D2DERR_DISPLAY_FORMAT_NOT_SUPPORTED);
  VERIFY(name == "D2DERR_DISPLAY_FORMAT_NOT_SUPPORTED");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == D2DERR_DISPLAY_FORMAT_NOT_SUPPORTED);

  name = Hresult2Str(asHRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER));
  VERIFY(name == "HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER)");

  // HTTP
  name = HttpCode2Name(200);
  VERIFY(name == "HTTP_STATUS_OK");
  VERIFY(Name2HttpCodeItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 200);
  descr = GetDescriptionStr(item.Description);
  VERIFY(descr == "200 OK")

  printf("Test passed\n");
  return 0;
}

#include <Windows.h>
#include <AllStat/AllStat.h>

using namespace AllStat;

#define LastErrorStr()  Winerr2Str(GetLastError()).c_str()
#define HresultStr()  Hresult2Str(hr).c_str()

int main()
{
  HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
  if (FAILED(hr))
  {
    printf("CoInitializeEx() failed. Error: %s\n", HresultStr());
    return 1;
  }

  IUnknown* p = nullptr;
  hr = CoCreateInstance(GUID_NULL, nullptr, CLSCTX_INPROC_SERVER, GUID_NULL, (void**)&p);
  if (FAILED(hr))
    printf("CoCreateInstance() failed. Error: %s\n", HresultStr());
  else
    p->Release();

  CoUninitialize();

  HANDLE h = CreateFileA(
    "c:\\some_not_existing_name"
    , GENERIC_READ
    , FILE_SHARE_READ
    , nullptr
    , OPEN_EXISTING
    , FILE_ATTRIBUTE_NORMAL
    , nullptr
  );

  if (h == INVALID_HANDLE_VALUE)
  { 
    printf("CreateFile() failed. Error: %s\n", LastErrorStr());
    return 1;
  }
 
  // Do something

  CloseHandle(h);
  return 0;
}

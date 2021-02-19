#include <AllStat/AllStat.h>

#include <errno.h>
#include <stdio.h>

int main()
{
  const char* name = Errno2Name(ERANGE);
  if (name)
  { 
    AS_ITEM item;
    if (!Name2ErrnoItem(name, &item))
    { 
      const char* descr = GetDescriptionStrC(item.Description);

      printf(
        "Code: %i, Constant: %s, Description: %s\n"
        , ERANGE
        , name
        , descr ? descr : ""
      );

      AllStatFree(descr);
    }
  }
  return 0;
}

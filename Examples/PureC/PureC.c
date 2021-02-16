#include <AllStat/AllStat.h>

#include <errno.h>
#include <stdio.h>

int main()
{
  AS_ITEM item;
  const char* name;
  const char* descr;
  
  name = Errno2Name(ERANGE);
  Name2ErrnoItem(name, &item);

  descr = GetDescriptionStrC(item.Description);

  printf("Code: %i, Constant: %s, Description: %s\n", ERANGE, name, descr);

  AllStatFree(descr);
  return 0;
}

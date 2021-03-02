#include <AllStat/AllStat.h>

#include <map>
#include <stdio.h>

int main()
{
  AS_ITEM item;
  AS_ENUM_CONTEXT context;
  if (AllStatGetFirst(AS_GENERATOR::AS_ANY, &context, &item) == AS_SUCCESS)
  {
    int n = 0;
    std::map<AS_GENERATOR, int> stat;
    do
    { 
      n++;

      auto it = stat.find(item.Generator);
      if (it == stat.end())
        stat[item.Generator] = 1;
      else
        stat[item.Generator] += 1;

    } while(AllStatGetNext(&context, &item) == AS_SUCCESS);
    
    for (auto it = stat.begin(); it != stat.end(); ++it)
    {
      std::string name = AllStat::GetGenerator(it->first);
      printf("%s: %i\n", name.c_str(), it->second);
    }

    printf("-----\n");
    printf("Total number of items: %i\n", n);
  }
  return 0;
}

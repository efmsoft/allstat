#pragma once

#include <string>
#include <vector>

struct Config
{
  uint32_t Value;
  std::string Name;

public:
  Config(int argc, char* argv[]);

private:
  typedef void (*OptionHandler)(Config* self, const char* param);

  struct Option
  {
    const char* Var1;
    const char* Var2;
    const char* Var3;
    bool HasParameter;
    OptionHandler Handler;
  };

  static Option Options[];

  void ProcessOption(int argc, char* argv[], int& i);
};

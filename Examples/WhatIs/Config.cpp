#include <AllStat/AllStat.h>
#include "Config.h"

const char* Help = "\
Convert error code to name of constant / description.\n\
(C) CopyRight Mishkurov Eduard 2021 (EfmSoft).\n\
\n\
Usage: whatis [--os {OS}] constant\n\
Where:\n\
  constant    An interger value in decimal or hex format (value with 0x prefix)\n\
  OS          Target operating system. Supported values: ANY, WINDOWS, LINUX, MACOS, SOLARIS\n\
";

#pragma warning(disable : 6385)

#ifndef _WIN32
#define _stricmp strcasecmp
#endif

Config::Option Config::Options[] = 
{
  {
    "--help", "-h", "/h", false, [](Config* self, const char* param) {
      printf("%s", Help);
      exit(0);
    }
  },

  {
    "--os", "-o", "/o", true, [](Config* self, const char* param) {
      if (!_stricmp(param, "win") || !_stricmp(param, "windows") || !_stricmp(param, "w"))
        SetTargetOS(AS_OS::AS_OS_WINDOWS);
      else if (!_stricmp(param, "linux") || !_stricmp(param, "lin") || !_stricmp(param, "l"))
        SetTargetOS(AS_OS::AS_OS_LINUX);
      else if (!_stricmp(param, "macos") || !_stricmp(param, "mac") || !_stricmp(param, "m"))
        SetTargetOS(AS_OS::AS_OS_MAC);
      else if (!_stricmp(param, "solaris") || !_stricmp(param, "sol") || !_stricmp(param, "s"))
        SetTargetOS(AS_OS::AS_OS_SOLARIS);
      else if (!_stricmp(param, "any") || !_stricmp(param, "a"))
        SetTargetOS(AS_OS::AS_OS_ANY);
      else
      {
        printf("Error: unsupported value: %s\n", param);
        exit(1);
      }
    }
  },

  {
    nullptr, nullptr, nullptr, false, nullptr
  }
};

Config::Config(int argc, char* argv[])
  : Value(0)
{
  bool value = false;
  for (int i = 1; i < argc;)
  {
    char* p = argv[i];
    if (*p == '-' || *p == '/')
    { 
      ProcessOption(argc, argv, i);
      continue;
    }

    char* e;
    if (p[0] == '0' && (p[1] == 'x' || p[1] == 'X'))
      Value = (uint32_t)strtoul(p + 2, &e, 16);
    else
      Value = (uint32_t)strtoul(p, &e, 10);
    
    if (*e != '\0')
      Name = p;

    if (value)
    {
      printf("Error: extra value: %s\n", p);
      exit(1);
    }

    value = true;
    i++;
  }

  if (!value)
  {
    printf("%s", Help);
    exit(1);
  }
}

void Config::ProcessOption(int argc, char* argv[], int& i)
{
  const char* p = argv[i];

  for (int j = 0;; j++)
  {
    Option& op = Options[j];
    if (op.Handler == nullptr)
      break;

    if (!strcmp(p, op.Var1) || !strcmp(p, op.Var2) || !strcmp(p, op.Var3))
    {
      if (!op.HasParameter)
      {
        op.Handler(this, nullptr);

        i++;
        return;
      }

      if (i + 1 >= argc)
      {
        printf("Error: '%s' option requires parameter. Run with -h to get help\n", p);
        exit(1);
      }

      op.Handler(this, argv[i + 1]);
      i += 2;
      return;
    }
  }

  printf("Error: unsupported option '%s'. Run with -h to get help\n", p);
  exit(1);
}

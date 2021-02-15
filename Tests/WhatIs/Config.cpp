#include <Precompile.h>
#include <Config.h>

const char* Help = "\
Convert error code to name of constant / description.\n\
(C) CopyRight Mishkurov Eduard 2021 (EfmSoft).\n\
\n\
Usage: whatis constant\n\
Where:\n\
  constant    An interger value in decimal or hex format (value with 0x prefix)\n\
";

Config::Option Config::Options[] = 
{
  {
    "--help", "-h", "/h", false, [](Config* self, const char* param) {
      printf("%s", Help);
      exit(0);
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

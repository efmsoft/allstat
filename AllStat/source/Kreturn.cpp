#ifndef AS_BUILD_AS_KRETURN
#ifdef AS_CUSTOM_BUILD
#define AS_BUILD_AS_KRETURN  0
#else
#define AS_BUILD_AS_KRETURN  1
#endif
#endif

#if AS_BUILD_AS_KRETURN

#include "Generator.h"

DEFINE_GENERATOR(KRETURN, Kreturn, "Kern return", "0x%08X");
CREATE_GENERATOR(Kreturn);

#endif // #if AS_BUILD_AS_KRETURN

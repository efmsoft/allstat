#ifndef AS_BUILD_AS_BUGCHECK
#ifdef AS_CUSTOM_BUILD
#define AS_BUILD_AS_BUGCHECK  0
#else
#define AS_BUILD_AS_BUGCHECK  1
#endif
#endif

#if AS_BUILD_AS_BUGCHECK

#include "Generator.h"

DEFINE_GENERATOR(BUGCHECK, BugCheck, "BugCheck Code", "0x%08X");
CREATE_GENERATOR(BugCheck);

#endif // #if AS_BUILD_AS_BUGCHECK


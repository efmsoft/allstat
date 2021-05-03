#ifndef AS_BUILD_AS_LRESULT
#ifdef AS_CUSTOM_BUILD
#define AS_BUILD_AS_LRESULT  0
#else
#define AS_BUILD_AS_LRESULT  1
#endif
#endif

#if AS_BUILD_AS_LRESULT

#include "Generator.h"

DEFINE_GENERATOR(LRESULT, Winerr, "Win32 error", "%i");
CREATE_GENERATOR(Winerr);

#endif // #if AS_BUILD_AS_LRESULT


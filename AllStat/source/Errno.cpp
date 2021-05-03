#ifndef AS_BUILD_AS_ERRNO
#ifdef AS_CUSTOM_BUILD
#define AS_BUILD_AS_ERRNO  0
#else
#define AS_BUILD_AS_ERRNO  1
#endif
#endif

#if AS_BUILD_AS_ERRNO

#include "Generator.h"

DEFINE_GENERATOR(ERRNO, Errno, "errno", "%i");
CREATE_GENERATOR(Errno);

#endif // #if AS_BUILD_AS_ERRNO


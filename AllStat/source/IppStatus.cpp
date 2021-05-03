#ifndef AS_BUILD_AS_IPP_STATUS
#ifdef AS_CUSTOM_BUILD
#define AS_BUILD_AS_IPP_STATUS  0
#else
#define AS_BUILD_AS_IPP_STATUS  1
#endif
#endif

#if AS_BUILD_AS_IPP_STATUS

#include "Generator.h"

DEFINE_GENERATOR(IPP_STATUS, IppStatus, "Intel Ipp Status", "%+i");
CREATE_GENERATOR(IppStatus);

#endif // #if AS_BUILD_AS_IPP_STATUS


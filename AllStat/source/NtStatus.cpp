#ifndef AS_BUILD_AS_NTSTATUS
#ifdef AS_CUSTOM_BUILD
#define AS_BUILD_AS_NTSTATUS  0
#else
#define AS_BUILD_AS_NTSTATUS  1
#endif
#endif

#if AS_BUILD_AS_NTSTATUS

#include "Generator.h"

DEFINE_GENERATOR(NTSTATUS, NtStatus, "NTSTATUS", "0x%08X");
CREATE_GENERATOR(NtStatus);

#endif // #if AS_BUILD_AS_NTSTATUS


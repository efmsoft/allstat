# AllStat Library
A library for fast converting an error code into the name of the corresponding constant and retrieving the error description test. The reverse conversion from constant name to error code is also supported.

## Purpose
The main purpose of the library is to make the logs generated by programs more readable due to the fact that they contain the names of constants, and not numerical error codes. At the same time, this task is solved without loss of performance so the library uses a hash tables to access data.

## Language support
The library is written on C ++ and can be built for Windows, Linux and MacOS as a dynamic or static linking library. At the moment, support for the use of the library by projects in C, C ++, Python, Golang has been implemented. A dynamic library can be used from a project in any programming language by calling the exported functions. Write to us if you have any problems connecting the library to your project.

## Types of errors
The library currently supports the following types of errors / status codes:

### NTSTATUS
Many kernel-mode standard driver routines and driver support routines use the NTSTATUS type for return values.        Additionally, drivers provide an NTSTATUS-typed value in an IRP’s IO_STATUS_BLOCK structure when completing IRPs. The NTSTATUS type is defined in Ntdef.h, and system-supplied status codes are defined in Ntstatus.h.

### Win32 error	
Win32 error codes MUST be in the range 0x0000 to 0xFFFF, although Win32 error codes can be used both in 16-bit fields (such as within the HRESULT type specified in section 2.1) as well as 32-bit fields. Most values also have a default message defined, which can be used to map the value to a human-readable text message; when this is done, the Win32 error code is also known as a message identifier.

### HRESULT
HRESULT is a data type used in Windows operating systems, and the earlier IBM/Microsoft OS/2 operating system, to represent error conditions, and warning conditions. The original purpose of HRESULTs was to formally lay out ranges of error codes for both public and Microsoft internal use in order to prevent collisions between error codes in different subsystems of the OS/2 operating system. HRESULTs are numerical error codes. Various bits within an HRESULT encode information about the nature of the error code, and where it came from.
HRESULT error codes are most commonly encountered in COM programming, where they form the basis for a standardized COM error handling conventio

### HTTP Status Code
Hypertext Transfer Protocol (HTTP) response status codes. Status codes are issued by a server in response to a client’s request made to the server. It includes codes from IETF Request for Comments (RFCs), other specifications, and some additional codes used in some common applications of the HTTP. The first digit of the status code specifies one of five standard classes of responses. The message phrases shown are typical, but any human-readable alternative may be provided.

### errno
Integer value, which is returned by system calls and some library functions in the event of an error to indicate what went wrong. errno is defined by the ISO C standard to be a modifiable lvalue of type int, and must not be explicitly declared; errno may be a macro. errno is thread-local; setting it in one thread does not affect its value in any other thread.

### Kern Return
Apple Kernel return codes

### Ipp Status
The IppStatus constant enumerates the status values returned by the Intel IPP functions, indicating
whether the operation is error-free.

## Examples of usage
The WhatIs service of EfmSoft company (https://efmsoft.com/what-is/) is built on the use of the AllStat library. You can also use the ErrorLookup utility (the source code of the utility is included in the examples) instead of the standard Microsoft Visual Studio utility

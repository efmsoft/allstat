#include "../../AllStatDefs.h"

#ifndef AS_BUILD_AS_ERRNO
#ifdef AS_CUSTOM_BUILD
#define AS_BUILD_AS_ERRNO  0
#else
#define AS_BUILD_AS_ERRNO  1
#endif
#endif

#if AS_BUILD_AS_ERRNO
using namespace AllStat;

#ifndef __clang__
#pragma optimize("", off)
#endif

static const char* Src_errnoh = "errno.h";

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
static int DescrBlockSize = 17410;
static const uint8_t CompressedDescr[] =
{
  // Uncompressed size: 17410, Compressed size: 3329, Rate: 5.2
  0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xd5, 0x5b, 0xdb, 0x8e, 0xd4, 0x56, 
  0x16, 0xad, 0x4f, 0xf1, 0x07, 0x40, 0x8f, 0x34, 0xf3, 0x96, 0xb7, 0x51, 0x14, 0x24, 0x1e, 0x72, 
  0x11, 0xcc, 0x48, 0x79, 0x65, 0x32, 0x48, 0x83, 0x94, 0x40, 0x44, 0xc8, 0x7b, 0x57, 0x15, 0xd0, 
  0xcd, 0x74, 0x0f, 0x4d, 0x10, 0x12, 0x51, 0x14, 0x68, 0x3a, 0x93, 0x0f, 0x70, 0x55, 0x97, 0xbb, 
  0xdc, 0x75, 0x71, 0xfd, 0xc2, 0xf1, 0x1f, 0xcd, 0xde, 0x6b, 0xef, 0x63, 0x1f, 0xdb, 0xc7, 0x2e, 
  0xdb, 0x5d, 0x4d, 0x34, 0x41, 0x0a, 0x94, 0x2f, 0xe7, 0xec, 0xb3, 0x2f, 0x6b, 0x5f, 0x6d, 0xde, 
  0x9b, 0x8d, 0x89, 0xd2, 0x7d, 0x13, 0xa6, 0xcf, 0x4d, 0x9c, 0x9e, 0x04, 0x66, 0x6d, 0xa2, 0x80, 
  0x7f, 0x9b, 0x39, 0xfd, 0x3f, 0x4a, 0x0f, 0x4d, 0x44, 0x97, 0xc2, 0x81, 0xf9, 0x9d, 0x2e, 0x5d, 
  0x9a, 0x65, 0x60, 0x62, 0xb3, 0x34, 0x71, 0x60, 0x16, 0xf4, 0xca, 0x88, 0xae, 0x2d, 0x4d, 0x62, 
  0xce, 0xf5, 0xb5, 0x61, 0x3a, 0x4e, 0x5f, 0xd0, 0x4b, 0x43, 0xba, 0x33, 0x4d, 0xc7, 0xf4, 0xaf, 
  0xd1, 0xc0, 0x9c, 0xd2, 0x3a, 0x09, 0xad, 0xce, 0x97, 0x87, 0x4d, 0x0f, 0x9e, 0x11, 0x01, 0x7c, 
  0x21, 0x32, 0x2b, 0xb3, 0x4e, 0x8f, 0xcc, 0x65, 0x40, 0xf7, 0x8e, 0xcc, 0x9c, 0x36, 0x98, 0x06, 
  0x66, 0x03, 0x72, 0xf6, 0xcd, 0x94, 0xf6, 0x5c, 0x0f, 0xcc, 0x7b, 0xa2, 0x2c, 0x36, 0x13, 0x26, 
  0x83, 0x1e, 0xa3, 0x3f, 0x89, 0x99, 0x99, 0xf0, 0x26, 0xde, 0xd0, 0x1f, 0x03, 0xf3, 0x5f, 0x5e, 
  0x8f, 0xb7, 0x37, 0x97, 0xb2, 0x95, 0x49, 0x32, 0xfa, 0x43, 0x33, 0xc3, 0x8a, 0x5b, 0x48, 0xa2, 
  0x67, 0x69, 0xa7, 0x05, 0x2d, 0xb1, 0x0a, 0x68, 0x51, 0xfa, 0x49, 0x8f, 0x0b, 0x75, 0xe9, 0x90, 
  0x78, 0x47, 0x24, 0xd3, 0xbd, 0x05, 0xad, 0x47, 0xab, 0x9d, 0xd3, 0x7b, 0x2b, 0x66, 0x18, 0xad, 
  0x41, 0x44, 0x0f, 0xcc, 0x3b, 0xfa, 0x31, 0x05, 0xd9, 0xfa, 0xca, 0x53, 0x62, 0xc5, 0x3e, 0x3d, 
  0x43, 0xbc, 0x0b, 0xf0, 0xee, 0x86, 0x1e, 0x5c, 0xd2, 0xdd, 0x13, 0x1c, 0x9b, 0x58, 0x49, 0x24, 
  0xd2, 0x53, 0xe0, 0x35, 0x1f, 0x81, 0x57, 0x98, 0xd1, 0xf5, 0x0d, 0x91, 0xc7, 0xa4, 0xc5, 0x66, 
  0x65, 0x57, 0x92, 0x67, 0x12, 0x1c, 0xf9, 0x92, 0x89, 0x23, 0xe2, 0xcd, 0x82, 0x96, 0x8f, 0xe9, 
  0xe9, 0x11, 0x6f, 0x34, 0x30, 0x6f, 0xe8, 0xaf, 0x03, 0x21, 0x80, 0x2e, 0x47, 0xc2, 0xc6, 0x4c, 
  0x1a, 0xe9, 0x51, 0x40, 0x3f, 0x46, 0x38, 0xfb, 0xc8, 0x9e, 0x3c, 0x7d, 0xc9, 0x27, 0xff, 0x80, 
  0x27, 0xc6, 0xe9, 0x3e, 0x33, 0x68, 0xca, 0x9c, 0x92, 0x93, 0xd1, 0x9f, 0x04, 0x1c, 0x63, 0xaa, 
  0xc0, 0xde, 0x31, 0x6b, 0x10, 0x8b, 0xe4, 0x14, 0x4f, 0xf1, 0xe5, 0x11, 0xde, 0x08, 0x99, 0x9f, 
  0xac, 0x3c, 0x2c, 0xa0, 0x39, 0x91, 0x1b, 0xb3, 0x60, 0xe9, 0x32, 0x69, 0xd9, 0x04, 0x94, 0x2f, 
  0x88, 0x05, 0x2c, 0x9d, 0x29, 0xc4, 0x28, 0xe2, 0x90, 0x3d, 0x85, 0x7d, 0xdd, 0x89, 0x00, 0xc3, 
  0x02, 0xfa, 0x39, 0x13, 0xd5, 0xa4, 0x9b, 0xc7, 0xa2, 0x46, 0xc4, 0x1e, 0x08, 0x73, 0xc4, 0x17, 
  0x36, 0x74, 0x77, 0x95, 0x9e, 0xf0, 0x0f, 0xe1, 0x91, 0xae, 0x11, 0x80, 0x4e, 0x51, 0xb5, 0x17, 
  0xe9, 0x4f, 0x7c, 0xaa, 0x3a, 0x01, 0xe4, 0x0a, 0x34, 0x30, 0xbf, 0x81, 0xb4, 0x89, 0x68, 0x0d, 
  0x3d, 0x65, 0x0f, 0x48, 0xac, 0x27, 0x4a, 0x41, 0x50, 0x55, 0x13, 0x3f, 0xf6, 0x6b, 0x0d, 0xc6, 
  0xe0, 0x72, 0x5e, 0x58, 0xb0, 0x66, 0xe6, 0xe4, 0x46, 0x4f, 0x7b, 0x5d, 0x34, 0x18, 0x49, 0x42, 
  0xef, 0x30, 0xc3, 0x45, 0xc7, 0x44, 0xb3, 0x68, 0xe1, 0x05, 0xdb, 0x19, 0x0b, 0xec, 0x82, 0x58, 
  0x35, 0x56, 0x54, 0x81, 0x25, 0xac, 0x78, 0xd3, 0x2a, 0x95, 0x21, 0x6e, 0x40, 0xb0, 0x53, 0x2c, 
  0xca, 0x16, 0x71, 0xc1, 0xa7, 0xaa, 0x21, 0x7f, 0x0d, 0x95, 0x86, 0xb9, 0xcf, 0xa0, 0xe5, 0x17, 
  0x44, 0x01, 0xaf, 0x43, 0x84, 0x05, 0xe9, 0x7f, 0x58, 0xa8, 0x01, 0xcb, 0xce, 0x81, 0xb8, 0x97, 
  0x84, 0x1d, 0xc4, 0xbc, 0x7f, 0xd3, 0x1e, 0x0b, 0x36, 0x42, 0x18, 0xff, 0x09, 0xbd, 0xb4, 0x64, 
  0x1b, 0xb4, 0x0c, 0x2d, 0xa0, 0x1b, 0x1b, 0x7f, 0xf1, 0xad, 0x56, 0x2f, 0xd4, 0x6b, 0x4e, 0x11, 
  0x2a, 0x06, 0xe6, 0x35, 0x63, 0x49, 0x0e, 0x7e, 0x11, 0xac, 0x92, 0x4d, 0x39, 0x3d, 0x62, 0x43, 
  0xe6, 0xbb, 0x05, 0x1c, 0x5a, 0x41, 0xd0, 0x05, 0xa8, 0x80, 0xbd, 0xbc, 0xef, 0xf5, 0xd6, 0x2f, 
  0x7c, 0x1b, 0xd2, 0x23, 0x19, 0x06, 0x0f, 0x1e, 0x7d, 0xf3, 0xe4, 0x5b, 0x91, 0xc1, 0x06, 0x58, 
  0x22, 0x16, 0xc7, 0x7f, 0x93, 0x21, 0x2f, 0xc0, 0x55, 0x7e, 0x81, 0x05, 0x5a, 0x91, 0x60, 0x3a, 
  0x1e, 0x98, 0x9f, 0xcb, 0xa8, 0x56, 0xc0, 0xab, 0x82, 0x7a, 0x5d, 0xcf, 0xa3, 0x99, 0xd2, 0x96, 
  0xce, 0x3f, 0x15, 0x04, 0x30, 0x0b, 0x16, 0x4d, 0xe8, 0xd3, 0xbf, 0x48, 0x35, 0x0a, 0x78, 0xe0, 
  0x00, 0x08, 0xad, 0xc4, 0xfa, 0x38, 0x81, 0xa2, 0x59, 0x26, 0x32, 0x63, 0xe4, 0x39, 0xaf, 0xa8, 
  0x61, 0x89, 0x20, 0x79, 0x4e, 0x44, 0x90, 0xe6, 0xd1, 0xbf, 0xd6, 0x19, 0xde, 0x59, 0x5b, 0x21, 
  0xcf, 0x96, 0x09, 0x23, 0xca, 0x48, 0x97, 0x47, 0x48, 0xad, 0x0a, 0x6a, 0x11, 0x06, 0x05, 0xb8, 
  0x63, 0x60, 0x85, 0x28, 0x96, 0xe9, 0x31, 0x1f, 0x11, 0xee, 0x89, 0xdf, 0x39, 0xc0, 0xf3, 0xbc, 
  0xd7, 0x49, 0xc5, 0x83, 0x39, 0x3a, 0x60, 0xad, 0x34, 0x61, 0x86, 0xfc, 0x02, 0x8a, 0x42, 0xe6, 
  0x9a, 0x58, 0x69, 0x92, 0xbb, 0xda, 0x57, 0x45, 0x75, 0x0d, 0x80, 0xe1, 0xcf, 0xc0, 0x8b, 0xd8, 
  0xaa, 0xff, 0x54, 0x19, 0x07, 0x24, 0x0a, 0x85, 0x07, 0xb0, 0x3c, 0xf5, 0x09, 0xcc, 0x79, 0xa5, 
  0x29, 0x10, 0xf7, 0x27, 0x47, 0xe2, 0xe7, 0xe0, 0xa0, 0x86, 0xa0, 0x90, 0x25, 0x4a, 0x3b, 0xad, 
  0x49, 0x8b, 0x99, 0x63, 0xf1, 0xc0, 0xfc, 0x5a, 0xf3, 0x6c, 0xcc, 0xcf, 0xf2, 0xda, 0x73, 0x7a, 
  0x9e, 0x38, 0xc0, 0x72, 0x50, 0x73, 0x2e, 0x63, 0x47, 0x60, 0xa9, 0x50, 0xa9, 0x4e, 0xc5, 0x0b, 
  0xb0, 0x45, 0x97, 0x62, 0x1f, 0x51, 0x78, 0xd1, 0x13, 0xe2, 0xf6, 0x84, 0xfd, 0xe3, 0xa2, 0xe8, 
  0xbd, 0x98, 0x46, 0x8f, 0xf7, 0x8a, 0x76, 0xe2, 0xbd, 0x00, 0xa5, 0xc4, 0x43, 0x75, 0x9c, 0x00, 
  0xd3, 0x51, 0x8e, 0xf6, 0x79, 0x80, 0xc0, 0x1a, 0xb6, 0x61, 0x12, 0x2b, 0xde, 0x5b, 0x20, 0xf9, 
  0x67, 0xf6, 0x6e, 0x4e, 0x1c, 0x51, 0xb1, 0x85, 0x2c, 0x92, 0x61, 0x35, 0xf5, 0x70, 0x82, 0x3d, 
  0xa6, 0x63, 0x6e, 0x22, 0x66, 0x5e, 0x77, 0xa6, 0xe1, 0x4d, 0x4c, 0x8b, 0xc7, 0x8a, 0x7a, 0xa4, 
  0x2b, 0x99, 0xcb, 0x85, 0xd3, 0x1c, 0x98, 0x9f, 0x2a, 0x1c, 0x8a, 0xd5, 0xb7, 0x22, 0xea, 0x89, 
  0x98, 0x8b, 0x65, 0x0e, 0x90, 0x63, 0xa8, 0x52, 0xa2, 0x9e, 0xa7, 0x8e, 0xa0, 0x77, 0xc0, 0x2e, 
  0x7a, 0x01, 0x08, 0x2c, 0x2a, 0x2c, 0x01, 0x07, 0xf4, 0xb1, 0x6a, 0x93, 0xe7, 0x62, 0x28, 0x31, 
  0x48, 0x81, 0xa2, 0x6b, 0x78, 0x9b, 0xab, 0x9d, 0x13, 0x05, 0x47, 0x58, 0x2f, 0x96, 0x18, 0x54, 
  0xd6, 0xf7, 0x90, 0x38, 0x0c, 0x24, 0x08, 0x64, 0xb2, 0x84, 0xbd, 0x2e, 0x72, 0x6a, 0x08, 0xb4, 
  0x80, 0x75, 0x58, 0x0f, 0x92, 0x8e, 0x6f, 0x30, 0xc5, 0x89, 0x70, 0x4f, 0xdc, 0x82, 0xd7, 0x13, 
  0x15, 0x57, 0x66, 0x37, 0x28, 0x0c, 0x65, 0x29, 0x1c, 0x07, 0x7f, 0xb6, 0xc1, 0x2b, 0x0b, 0x33, 
  0x7d, 0x86, 0x7b, 0x6b, 0xd0, 0xeb, 0x00, 0xcd, 0x00, 0xe6, 0x5d, 0x0e, 0xd6, 0x2d, 0x5f, 0xbc, 
  0xf1, 0x44, 0x21, 0x38, 0x86, 0xd3, 0xa6, 0x05, 0x0e, 0x72, 0x54, 0x29, 0x52, 0xf1, 0x97, 0x1c, 
  0x31, 0xd7, 0xb8, 0xbc, 0xd4, 0x58, 0x8c, 0x5c, 0x26, 0xde, 0xdc, 0x17, 0x29, 0x42, 0xf1, 0x1b, 
  0xbc, 0xd2, 0x10, 0x3c, 0x9b, 0x42, 0xca, 0x8e, 0xa5, 0xa7, 0xcf, 0x4a, 0x60, 0xe5, 0xb1, 0x92, 
  0x66, 0xf5, 0x2e, 0x93, 0x4b, 0x8f, 0x4f, 0x10, 0x07, 0x1f, 0x66, 0x84, 0xb6, 0x43, 0x02, 0x8f, 
  0xe1, 0x13, 0xff, 0xd8, 0x18, 0x6d, 0x64, 0x3d, 0xc2, 0xfd, 0x44, 0x5e, 0x53, 0xd9, 0x24, 0x12, 
  0x12, 0x2b, 0x7b, 0x33, 0x33, 0x55, 0x33, 0x66, 0x47, 0x9a, 0x0b, 0x39, 0x2c, 0xe8, 0xb4, 0x9c, 
  0x22, 0xe6, 0x68, 0x89, 0x5c, 0x10, 0xa9, 0xc5, 0x9c, 0xed, 0xa8, 0xab, 0x72, 0xef, 0x0e, 0x57, 
  0x4e, 0x8b, 0x67, 0xac, 0x41, 0xb1, 0x37, 0xf0, 0x21, 0x97, 0x92, 0xf9, 0xd4, 0x32, 0x46, 0xe3, 
  0xb6, 0x05, 0xa9, 0xfb, 0x4b, 0xf2, 0x59, 0x82, 0x1b, 0x2d, 0x01, 0xc6, 0x4b, 0x48, 0x6d, 0x24, 
  0x28, 0x50, 0x71, 0xc6, 0x47, 0xa6, 0x55, 0x60, 0x7d, 0x4c, 0x61, 0xf0, 0xe9, 0xdd, 0xdb, 0x1e, 
  0x14, 0x2a, 0x89, 0xe0, 0x6a, 0xb0, 0x22, 0xba, 0xe1, 0xca, 0xb7, 0x0d, 0xa9, 0x15, 0x23, 0xf7, 
  0x99, 0x57, 0x2f, 0x28, 0x30, 0xde, 0x7c, 0xbf, 0x99, 0x9a, 0xaa, 0x15, 0xb7, 0xcc, 0xe8, 0xf6, 
  0x5a, 0x02, 0x05, 0xa9, 0xa7, 0xb8, 0x46, 0x27, 0xb2, 0x2f, 0x2b, 0x0d, 0x6a, 0x00, 0xdb, 0x69, 
  0xed, 0xe9, 0x77, 0xf6, 0xb6, 0x62, 0x84, 0x8f, 0xc6, 0x0c, 0x25, 0xdb, 0x51, 0x17, 0x80, 0x80, 
  0xc2, 0x1a, 0xd6, 0x57, 0x94, 0x4e, 0xea, 0x11, 0x13, 0x3f, 0xe1, 0xf8, 0x93, 0x6b, 0x40, 0x09, 
  0xf3, 0x2a, 0x03, 0x7d, 0xeb, 0x74, 0xb3, 0x02, 0x05, 0x45, 0x98, 0xf3, 0xdc, 0x3f, 0xf4, 0xd2, 
  0xa2, 0xde, 0xa0, 0xe0, 0xcd, 0xe8, 0x5d, 0xaf, 0xa4, 0x39, 0xbd, 0xcd, 0xdc, 0x55, 0x62, 0xb6, 
  0x84, 0xe4, 0xa4, 0xe9, 0x52, 0xa0, 0xa0, 0x48, 0xc2, 0x56, 0xb5, 0xc0, 0x06, 0x0d, 0x3d, 0x25, 
  0xe0, 0xa6, 0x7f, 0x4e, 0x41, 0x57, 0xd8, 0x0d, 0x30, 0xce, 0x70, 0xd0, 0x63, 0xa7, 0x7c, 0x36, 
  0x91, 0x65, 0x04, 0x37, 0x6b, 0x53, 0x41, 0x0e, 0x98, 0x57, 0x35, 0xe6, 0x5c, 0x67, 0x2a, 0xd9, 
  0x46, 0x3e, 0xdc, 0xaa, 0xd9, 0xc7, 0x53, 0x1c, 0x72, 0x39, 0x36, 0x6c, 0x7c, 0xd9, 0x21, 0x12, 
  0xdb, 0x6b, 0x88, 0xad, 0xbe, 0x2d, 0x82, 0x2e, 0xad, 0x73, 0xcf, 0x52, 0x4a, 0x20, 0xac, 0x35, 
  0xc7, 0xb9, 0x49, 0x0d, 0xc5, 0x6d, 0x86, 0x00, 0x0d, 0x4e, 0x8e, 0x42, 0x67, 0x13, 0x31, 0x26, 
  0xb1, 0x59, 0xc4, 0x7b, 0xb9, 0xc6, 0x5f, 0xe1, 0x70, 0x67, 0x1e, 0x4a, 0x8b, 0x35, 0xc5, 0x0c, 
  0x75, 0x28, 0xd9, 0xd9, 0x47, 0x29, 0x42, 0xca, 0x90, 0x2b, 0xa1, 0x2d, 0x82, 0x2d, 0x44, 0x36, 
  0x0a, 0x62, 0x4b, 0x2e, 0xd6, 0x04, 0xee, 0x3d, 0x7c, 0xf4, 0xcf, 0xfb, 0xb5, 0x9e, 0xb3, 0xf3, 
  0x69, 0x7d, 0x04, 0x17, 0x31, 0x89, 0x1d, 0xb6, 0xe3, 0x14, 0x35, 0x39, 0xc1, 0xb6, 0x89, 0xc2, 
  0x3f, 0x5d, 0x68, 0xe0, 0x1b, 0xab, 0xfd, 0xac, 0xc2, 0xa9, 0xf6, 0x67, 0x7a, 0x97, 0xab, 0xa0, 
  0xba, 0xe9, 0x03, 0x61, 0x63, 0x96, 0x19, 0x73, 0x7e, 0xcb, 0x31, 0x06, 0xf9, 0x72, 0xe6, 0x73, 
  0xd4, 0x50, 0xcf, 0x1c, 0xc2, 0xb8, 0x47, 0x9d, 0xc9, 0x3d, 0xb3, 0xae, 0x35, 0x43, 0x2d, 0x0f, 
  0x84, 0xbc, 0x6e, 0x53, 0x7f, 0x54, 0x2d, 0xf5, 0x67, 0x77, 0x6d, 0x4a, 0xb2, 0xd9, 0x11, 0x72, 
  0x9a, 0x9a, 0x40, 0xad, 0xbe, 0x32, 0xec, 0x26, 0x6e, 0x87, 0x4c, 0x14, 0x65, 0xc5, 0x80, 0xa4, 
  0x9d, 0x9e, 0x83, 0xab, 0x45, 0x1b, 0xa8, 0xba, 0x7d, 0x0f, 0x3c, 0x5d, 0x32, 0xc5, 0xbc, 0x8d, 
  0xad, 0x24, 0xc5, 0xc5, 0x34, 0x24, 0xf4, 0x25, 0xd9, 0x61, 0xa5, 0xce, 0x3f, 0xc7, 0xba, 0x74, 
  0x40, 0x14, 0xea, 0x97, 0xec, 0x04, 0x6e, 0xe4, 0xe5, 0x15, 0xa7, 0x9e, 0x12, 0x43, 0x47, 0xca, 
  0xb4, 0x72, 0x25, 0xa9, 0x1f, 0x8f, 0x5a, 0x55, 0x3c, 0x3e, 0xc9, 0xb3, 0xb1, 0x32, 0x26, 0x38, 
  0x6e, 0x69, 0x5a, 0x53, 0x8b, 0x3c, 0x53, 0xa5, 0x4f, 0xc8, 0xd7, 0xea, 0x6b, 0x13, 0x5f, 0xe0, 
  0xe1, 0x2d, 0x46, 0x4c, 0xf1, 0xb2, 0x0b, 0xed, 0x5a, 0x8e, 0xa8, 0xad, 0x70, 0x56, 0xab, 0x8d, 
  0x2e, 0x91, 0xab, 0xe0, 0xee, 0xdf, 0xee, 0x7c, 0xf6, 0xd7, 0xcf, 0x51, 0x23, 0x03, 0x38, 0x2f, 
  0x98, 0x96, 0xac, 0xe4, 0x80, 0xe8, 0x01, 0xfe, 0x58, 0x4b, 0xb4, 0x72, 0xc1, 0x71, 0xe0, 0x5c, 
  0x67, 0xb9, 0xf2, 0xe6, 0x6f, 0xb0, 0x38, 0x0b, 0x2a, 0xaa, 0x69, 0x2a, 0x64, 0x8a, 0xc9, 0x6c, 
  0x71, 0xf8, 0x85, 0xbb, 0x9c, 0x99, 0xac, 0xf2, 0x4e, 0x4e, 0xe4, 0x76, 0x72, 0x22, 0xad, 0x90, 
  0x96, 0x01, 0x31, 0xd6, 0x3a, 0x29, 0xfc, 0x4d, 0x28, 0xa2, 0xb9, 0x66, 0x32, 0x32, 0x96, 0x42, 
  0x7c, 0x97, 0x12, 0x81, 0xb1, 0x49, 0xc4, 0x2e, 0xef, 0x9b, 0x94, 0x70, 0xac, 0x0a, 0xb2, 0x46, 
  0x30, 0xda, 0x3a, 0xe7, 0x6d, 0xbd, 0x33, 0x2b, 0x81, 0x74, 0x7c, 0x36, 0x28, 0x89, 0x1e, 0x15, 
  0x2a, 0x53, 0x9c, 0xc7, 0x02, 0x8d, 0xdc, 0xca, 0x22, 0x5d, 0x14, 0x29, 0xde, 0xed, 0x5e, 0x39, 
  0xba, 0xe2, 0x76, 0x52, 0x7b, 0xde, 0xa4, 0xc7, 0x2c, 0x19, 0x89, 0x0c, 0xfd, 0x88, 0x89, 0xd2, 
  0xf3, 0x10, 0x00, 0xc4, 0xda, 0x4a, 0x02, 0x8f, 0x6c, 0xda, 0x57, 0x0d, 0xb7, 0x7a, 0xae, 0x7a, 
  0xca, 0xa0, 0x97, 0xc3, 0xb6, 0xc2, 0x7b, 0x29, 0x00, 0xfb, 0x15, 0x99, 0xd0, 0x21, 0xf4, 0x65, 
  0x84, 0xf7, 0xc7, 0x44, 0xcc, 0x12, 0x8d, 0x86, 0x9a, 0xa4, 0xb9, 0xcd, 0xb2, 0xa5, 0x9e, 0x44, 
  0xa5, 0xc0, 0x8a, 0x6a, 0xaf, 0xcf, 0xdb, 0xbb, 0x7d, 0x83, 0x2d, 0x85, 0x9e, 0x1d, 0xed, 0x71, 
  0xd6, 0x2a, 0xe8, 0x6b, 0xb0, 0x81, 0x62, 0x13, 0x52, 0x12, 0x9e, 0xb6, 0x8b, 0x16, 0xfa, 0xbe, 
  0x74, 0x32, 0x09, 0xaa, 0x50, 0x27, 0x78, 0x2e, 0x29, 0x90, 0x5b, 0x87, 0x0d, 0x1b, 0xa9, 0xb0, 
  0x99, 0x8d, 0x46, 0xff, 0x23, 0xad, 0x52, 0x5f, 0xf6, 0xd8, 0xc5, 0x7d, 0xa1, 0xc2, 0x42, 0xed, 
  0x16, 0x24, 0x5a, 0xd7, 0x70, 0x3a, 0x00, 0xc4, 0xf5, 0x1f, 0x1e, 0x7f, 0xf7, 0xe8, 0xc7, 0x87, 
  0x4f, 0x3a, 0x67, 0x27, 0x3b, 0xd8, 0xb1, 0xb0, 0x84, 0x93, 0x39, 0x2a, 0x3e, 0x26, 0x85, 0xf8, 
  0x20, 0x52, 0x1f, 0x81, 0xee, 0x15, 0xd3, 0x79, 0x28, 0x35, 0xf8, 0x36, 0x7d, 0xe8, 0xe0, 0x8b, 
  0x5b, 0x77, 0xbb, 0x6f, 0x57, 0x12, 0x42, 0x29, 0x5f, 0x6c, 0xc4, 0x58, 0x97, 0x1d, 0xc4, 0xd0, 
  0x67, 0x81, 0xba, 0xbb, 0x48, 0x55, 0x1e, 0xae, 0x7d, 0x2a, 0xa6, 0x01, 0xd3, 0xdf, 0xb6, 0x97, 
  0xed, 0x6d, 0x4b, 0x5d, 0x10, 0x8d, 0x26, 0x8d, 0x98, 0xe8, 0xd2, 0x91, 0x38, 0x21, 0x87, 0x04, 
  0x34, 0xc9, 0x42, 0x64, 0x65, 0x68, 0x18, 0xe8, 0xee, 0x4c, 0x16, 0x27, 0xac, 0x8c, 0x09, 0x89, 
  0xfa, 0xe7, 0x0b, 0xa9, 0x78, 0x81, 0x27, 0x95, 0x84, 0xf3, 0xce, 0x57, 0x9f, 0x0e, 0xcc, 0x5b, 
  0x4d, 0x1d, 0xdc, 0xf0, 0x02, 0x4e, 0x4e, 0x74, 0xc2, 0xe9, 0xb9, 0x70, 0x5e, 0x38, 0x81, 0xcf, 
  0x00, 0x87, 0x2d, 0x99, 0x1c, 0x8e, 0xc9, 0x79, 0x26, 0xe0, 0xef, 0x85, 0xdb, 0x1e, 0x62, 0xd2, 
  0x9e, 0x4b, 0xb5, 0x2d, 0x73, 0x3f, 0xb2, 0xae, 0xc3, 0x92, 0x3b, 0x2c, 0x3f, 0x27, 0x1c, 0x93, 
  0x27, 0x24, 0xbc, 0x1b, 0x42, 0xa9, 0x40, 0xe9, 0x69, 0x19, 0xea, 0xb3, 0xb4, 0x9e, 0xa3, 0xc9, 
  0x11, 0x4a, 0x02, 0x59, 0x72, 0x53, 0xac, 0x47, 0xe6, 0xb5, 0xd2, 0xac, 0x7e, 0xc0, 0x28, 0x35, 
  0xb3, 0xee, 0x3c, 0x7d, 0xa6, 0x11, 0xa6, 0x93, 0x9d, 0x81, 0x3f, 0x35, 0x99, 0xf0, 0xae, 0x05, 
  0xf6, 0xd6, 0x2d, 0x81, 0x7b, 0x2a, 0xce, 0x59, 0x73, 0x31, 0x6f, 0xc4, 0x21, 0x28, 0xd1, 0x03, 
  0x54, 0x0a, 0xac, 0x85, 0x83, 0x35, 0x72, 0xb6, 0x9c, 0x94, 0x72, 0x97, 0x44, 0xbc, 0x74, 0x4d, 
  0xc7, 0x60, 0x0c, 0x12, 0x17, 0xb0, 0x80, 0x63, 0x9b, 0xc2, 0x4e, 0x5d, 0x3f, 0x67, 0xe1, 0x97, 
  0xdb, 0xf2, 0x12, 0x44, 0x6c, 0xad, 0x5d, 0x55, 0x52, 0x63, 0xa4, 0x96, 0xbf, 0xb7, 0x31, 0x7e, 
  0x6f, 0xbf, 0x30, 0x13, 0x5b, 0xa9, 0x38, 0xb5, 0x82, 0x12, 0x14, 0xa2, 0xeb, 0xb8, 0xa6, 0xac, 
  0xe7, 0xed, 0x1f, 0x9d, 0x16, 0x05, 0x2c, 0xa6, 0x8c, 0x1a, 0x11, 0x23, 0xbc, 0xbf, 0x70, 0x92, 
  0x48, 0x9d, 0xac, 0xdc, 0x3c, 0xd5, 0xd2, 0xbd, 0xab, 0xa6, 0x1c, 0x79, 0x14, 0xa0, 0xa5, 0x50, 
  0x61, 0x0a, 0x50, 0x6e, 0xb5, 0xfd, 0xf2, 0xa5, 0xd4, 0xbd, 0x3a, 0x34, 0x96, 0x4e, 0x11, 0x3b, 
  0x1c, 0xd7, 0x87, 0x5c, 0xbc, 0x1f, 0xb4, 0x45, 0x4c, 0x23, 0x3f, 0x83, 0xf4, 0x97, 0xf8, 0x64, 
  0x4c, 0xae, 0xf2, 0x5a, 0x84, 0x64, 0xbd, 0x28, 0x7a, 0xb0, 0xd9, 0x98, 0x11, 0x9a, 0x98, 0xb1, 
  0xba, 0xb5, 0x44, 0xe3, 0x47, 0x4d, 0xcf, 0x25, 0x60, 0xc3, 0x22, 0x64, 0x36, 0x2f, 0x04, 0xe6, 
  0x47, 0xd2, 0xe4, 0xd0, 0x79, 0x11, 0x7f, 0x22, 0xd6, 0xcb, 0x4a, 0x50, 0xaa, 0x0e, 0xad, 0xd7, 
  0x17, 0xdd, 0xb0, 0x33, 0x06, 0xd6, 0x5e, 0xa2, 0x92, 0xbd, 0xbc, 0x17, 0x20, 0x73, 0xe1, 0x63, 
  0x21, 0xea, 0x9b, 0x61, 0xaa, 0x1b, 0xbf, 0x74, 0x61, 0x40, 0xc1, 0x11, 0x84, 0x70, 0x0f, 0xe5, 
  0x7e, 0x84, 0xcd, 0x98, 0x9c, 0xc4, 0x43, 0x75, 0x48, 0x86, 0x3f, 0xdc, 0x86, 0x36, 0x17, 0x51, 
  0x3b, 0xda, 0x2a, 0x37, 0x8e, 0x33, 0x7a, 0x83, 0xbd, 0x6f, 0x1f, 0xfc, 0xa3, 0x38, 0x25, 0x10, 
  0xdc, 0xdb, 0x7b, 0xf4, 0xe3, 0x13, 0xcf, 0x71, 0x9d, 0x4e, 0x1e, 0xc7, 0xbd, 0x62, 0x68, 0x33, 
  0x37, 0x1f, 0x6a, 0x3c, 0x4f, 0x5b, 0x5b, 0xae, 0x58, 0x6d, 0x26, 0x49, 0x91, 0xda, 0xa5, 0x27, 
  0xbb, 0x2c, 0x5b, 0xa5, 0x1b, 0x87, 0x6b, 0xfd, 0xb6, 0xa1, 0x2f, 0x58, 0x91, 0x9f, 0xb8, 0xf4, 
  0x8a, 0xfc, 0x78, 0x9f, 0x58, 0x43, 0xeb, 0xd8, 0x3f, 0x07, 0x15, 0xda, 0x94, 0x51, 0xb6, 0x8e, 
  0x74, 0xb6, 0xa8, 0xab, 0x51, 0x7f, 0xa8, 0x50, 0x44, 0x2c, 0xf7, 0x50, 0xc4, 0x59, 0xc1, 0x1a, 
  0x4f, 0x71, 0x01, 0xfd, 0xc4, 0x16, 0xaf, 0x94, 0x75, 0x16, 0x8f, 0x50, 0xcf, 0xa2, 0x75, 0xb0, 
  0x4a, 0x39, 0xb2, 0xab, 0x1e, 0xe1, 0x46, 0xf6, 0x8e, 0xf4, 0x98, 0x6d, 0xb5, 0x73, 0x81, 0x78, 
  0xef, 0x00, 0x36, 0x1a, 0x4a, 0x99, 0x7c, 0x82, 0xb1, 0x8d, 0x90, 0xd8, 0x18, 0x5e, 0x27, 0x6e, 
  0xec, 0xf9, 0x27, 0x60, 0x42, 0x5b, 0x2d, 0x40, 0x51, 0x49, 0xc2, 0x2e, 0x1b, 0x67, 0xb3, 0xb6, 
  0x2b, 0x21, 0x4c, 0x27, 0xeb, 0x9e, 0x1d, 0x9a, 0xfc, 0x7f, 0x07, 0x91, 0x3d, 0x8d, 0x3e, 0xb2, 
  0xb4, 0x25, 0x1b, 0x17, 0x6d, 0x98, 0x6f, 0xb5, 0x3c, 0xd2, 0xd6, 0xb0, 0xd2, 0x21, 0x95, 0x5c, 
  0xad, 0x0f, 0x9d, 0x56, 0x49, 0x93, 0x55, 0x74, 0xa2, 0x75, 0x5d, 0x57, 0x38, 0x8d, 0x1b, 0x67, 
  0xa7, 0x7a, 0xe3, 0xcd, 0x5e, 0x09, 0x2d, 0xdd, 0x4e, 0x69, 0x5e, 0x4f, 0xd8, 0x32, 0xb7, 0x65, 
  0x07, 0x84, 0x4a, 0x63, 0x06, 0x59, 0x0c, 0x35, 0x43, 0x44, 0x7c, 0x5e, 0x89, 0x9f, 0x4a, 0x29, 
  0x24, 0x8b, 0xe7, 0x8a, 0x30, 0x53, 0x15, 0xe5, 0x5e, 0xcf, 0xec, 0xf1, 0xb5, 0x13, 0xbd, 0xb5, 
  0xd7, 0x9b, 0xb8, 0xc5, 0xbc, 0x40, 0xa9, 0x67, 0x7f, 0x59, 0x39, 0x72, 0x15, 0x5f, 0x3c, 0xe8, 
  0x59, 0x87, 0x55, 0x7b, 0x7f, 0xf0, 0x6c, 0x4b, 0x9d, 0x82, 0x67, 0xda, 0xf2, 0xf9, 0xbd, 0x6f, 
  0xfe, 0x75, 0xf3, 0xcb, 0x1d, 0x82, 0xcd, 0x5e, 0xaf, 0xe9, 0x97, 0xed, 0xcd, 0xd9, 0x0a, 0x1b, 
  0x9d, 0x2c, 0xb9, 0x52, 0x53, 0xe1, 0x22, 0x59, 0x8b, 0xf1, 0x85, 0xae, 0x43, 0x2f, 0x6d, 0x47, 
  0x29, 0x2a, 0xed, 0xfd, 0x00, 0x5e, 0x7b, 0x21, 0x13, 0x94, 0xed, 0xaa, 0x93, 0xbb, 0x1e, 0x81, 
  0xd9, 0xd5, 0xbc, 0x4a, 0xf3, 0x27, 0x05, 0xee, 0x84, 0xa0, 0x07, 0x6e, 0x5b, 0xcd, 0xba, 0xec, 
  0xd0, 0xef, 0xbd, 0x01, 0xe2, 0x7d, 0xff, 0xe0, 0xfb, 0xfb, 0x7f, 0xba, 0x75, 0xfb, 0xd6, 0x97, 
  0x9f, 0xd8, 0x6e, 0x89, 0xad, 0xdd, 0xcb, 0x2b, 0x44, 0xf7, 0xb9, 0x9d, 0x13, 0x80, 0xa8, 0x57, 
  0x72, 0x10, 0xf6, 0x1c, 0xcb, 0x62, 0x03, 0x23, 0xec, 0x35, 0x27, 0xf3, 0x0a, 0xac, 0x8e, 0x11, 
  0x46, 0xda, 0x06, 0xd6, 0x1a, 0xea, 0x3b, 0x93, 0x23, 0x37, 0x0f, 0x93, 0xf5, 0x1a, 0x78, 0x39, 
  0xf5, 0x7a, 0xdd, 0xa8, 0xc9, 0xb5, 0xe5, 0x0d, 0xe8, 0x52, 0x86, 0xd6, 0x03, 0xb2, 0xad, 0xb7, 
  0xf9, 0x3b, 0x97, 0x39, 0x7e, 0x93, 0x50, 0x42, 0xfc, 0x16, 0x59, 0xc5, 0xc8, 0x26, 0xe5, 0x88, 
  0xaf, 0xd0, 0x01, 0x96, 0x0b, 0xda, 0xf1, 0x5c, 0x6c, 0x3b, 0x62, 0xfd, 0x20, 0xfa, 0x5b, 0x2d, 
  0xa6, 0xcd, 0x35, 0x58, 0x70, 0xab, 0x3b, 0xc9, 0x1f, 0x0c, 0xc6, 0xbb, 0x9b, 0xc9, 0x79, 0xed, 
  0xea, 0x64, 0xa4, 0xa1, 0x01, 0x5e, 0x2c, 0x87, 0xa3, 0xce, 0x24, 0x60, 0x41, 0xac, 0xbc, 0x4a, 
  0x0f, 0x9c, 0xee, 0xa4, 0xfc, 0x1a, 0x2f, 0x7a, 0x86, 0x74, 0x4a, 0x83, 0x3e, 0x5b, 0xc5, 0xd6, 
  0x19, 0xa9, 0x3b, 0x0c, 0xde, 0x7c, 0x68, 0xdb, 0x5b, 0x91, 0xbe, 0x50, 0xa1, 0x33, 0x73, 0x1d, 
  0x93, 0x8a, 0x3b, 0x9a, 0xcc, 0x69, 0xf1, 0x45, 0x86, 0xbf, 0xeb, 0xd8, 0x0e, 0xa4, 0xb7, 0x4c, 
  0xe7, 0x6c, 0x29, 0xfe, 0x6e, 0x1b, 0xba, 0x69, 0xdf, 0x76, 0xd5, 0x6f, 0x2b, 0x04, 0x6c, 0xf4, 
  0x08, 0xbd, 0x67, 0x6a, 0x28, 0x2d, 0xbd, 0xc9, 0xac, 0x75, 0xc7, 0x6a, 0xc2, 0xba, 0xd9, 0x83, 
  0xf6, 0xa0, 0x74, 0x5d, 0xa3, 0x32, 0x6f, 0xcb, 0x4a, 0x90, 0xb9, 0x49, 0xf9, 0x2c, 0x4b, 0x22, 
  0x14, 0x25, 0x7a, 0xae, 0x16, 0x76, 0x2e, 0x9a, 0x0d, 0xa7, 0xbc, 0xef, 0x94, 0xca, 0x76, 0x39, 
  0x1e, 0xe3, 0x69, 0xe6, 0x77, 0xea, 0xdb, 0xf7, 0x9b, 0x83, 0xd1, 0xfa, 0x34, 0x7f, 0x98, 0x86, 
  0x6f, 0xaa, 0x62, 0xc4, 0x26, 0xac, 0x6f, 0xf6, 0x6b, 0x89, 0xf4, 0x79, 0xcd, 0x54, 0x41, 0x69, 
  0xb2, 0xc2, 0x51, 0xe8, 0x74, 0x3c, 0xe8, 0xe7, 0xbf, 0xbc, 0xa3, 0x33, 0x36, 0x98, 0x7d, 0xcd, 
  0xf9, 0xb2, 0x7e, 0xfa, 0xa2, 0x9d, 0x81, 0x03, 0x5b, 0x1e, 0x67, 0xa3, 0x88, 0x11, 0x64, 0x32, 
  0x3d, 0x4f, 0x05, 0x36, 0xb3, 0x44, 0xa4, 0x38, 0xd1, 0xf4, 0x06, 0x3f, 0x2f, 0xec, 0x14, 0x38, 
  0x9f, 0x67, 0x23, 0x15, 0x72, 0xcd, 0xcc, 0x04, 0x3c, 0x62, 0xcc, 0x85, 0xf0, 0x27, 0x1d, 0x87, 
  0x52, 0x5d, 0x9a, 0x17, 0xeb, 0x01, 0x74, 0xe9, 0xfe, 0xe3, 0xc7, 0x0f, 0x1f, 0x0d, 0xae, 0xee, 
  0xaa, 0x8b, 0x07, 0xed, 0x38, 0x11, 0x33, 0xf2, 0x6c, 0x9e, 0xd8, 0x39, 0x25, 0xbb, 0x79, 0x22, 
  0xb5, 0x53, 0xd9, 0x3c, 0xf6, 0x4f, 0xce, 0x7c, 0x8c, 0x91, 0x95, 0x2e, 0x28, 0x55, 0x45, 0x20, 
  0xf2, 0x3c, 0xed, 0x47, 0x30, 0xb6, 0x75, 0xe7, 0x7b, 0xb4, 0xd0, 0xbb, 0x7e, 0x16, 0xd2, 0xfa, 
  0x83, 0x96, 0xab, 0xf6, 0x34, 0x7d, 0x43, 0xa2, 0x6e, 0x95, 0xa9, 0x90, 0xb6, 0xf0, 0x59, 0xab, 
  0x20, 0xb2, 0x74, 0x58, 0x9c, 0x7d, 0x63, 0xed, 0x77, 0x81, 0x71, 0x3e, 0x32, 0x98, 0xd5, 0x95, 
  0xb2, 0xf2, 0x16, 0x6b, 0xce, 0xd7, 0x9f, 0x7d, 0x71, 0xfb, 0xeb, 0x81, 0xb7, 0xd2, 0xa7, 0xe4, 
  0x0c, 0xf5, 0x53, 0xaa, 0xa7, 0x8a, 0x81, 0xd3, 0xec, 0x9d, 0xec, 0xab, 0xb9, 0xce, 0xdb, 0xf6, 
  0xc9, 0x32, 0xda, 0xf4, 0xaf, 0xeb, 0xbe, 0xea, 0xee, 0x95, 0x62, 0xec, 0xc6, 0x31, 0xee, 0x28, 
  0x24, 0xde, 0xc9, 0x34, 0xb9, 0x67, 0xef, 0xd5, 0xa0, 0x4b, 0x30, 0xb9, 0xbb, 0xf8, 0x6d, 0x5b, 
  0x84, 0xb5, 0x25, 0x82, 0xda, 0x71, 0x08, 0x74, 0x4d, 0x11, 0xcc, 0x0e, 0x63, 0x8e, 0x5e, 0x21, 
  0x43, 0xbb, 0x51, 0xd7, 0x36, 0xc3, 0xa7, 0xfa, 0xdf, 0xae, 0x07, 0x40, 0x3f, 0xc2, 0xe0, 0xe5, 
  0x15, 0x9d, 0x58, 0xfb, 0x31, 0xc2, 0x2d, 0x03, 0x66, 0xdd, 0x87, 0xc0, 0x3a, 0x7e, 0xd7, 0xd8, 
  0xf6, 0x83, 0xcc, 0x2b, 0xba, 0x2f, 0xfa, 0xef, 0x7f, 0x6b, 0x23, 0x04, 0xd2, 0x02, 0x44, 0x00, 
  0x00, 
};
#endif  // #if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
static constexpr uint64_t _GENERATOR_ = AS_GENERATOR::AS_ERRNO;
#endif

static const STATUS_ITEM Status[] =
{
  /*0*/ { (uint32_t)1, "EPERM", AS_DESCR_HANDLE("Операция не разрешена", 0), Src_errnoh, AS_OS_ANY },
  /*1*/ { (uint32_t)2, "ENOENT", AS_DESCR_HANDLE("Файл или каталог не существует", 41), Src_errnoh, AS_OS_ANY },
  /*2*/ { (uint32_t)3, "ESRCH", AS_DESCR_HANDLE("Процесс не существует", 98), Src_errnoh, AS_OS_ANY },
  /*3*/ { (uint32_t)4, "EINTR", AS_DESCR_HANDLE("Системный вызов прерван", 139), Src_errnoh, AS_OS_ANY },
  /*4*/ { (uint32_t)5, "EIO", AS_DESCR_HANDLE("Ошибка ввода-вывода", 184), Src_errnoh, AS_OS_ANY },
  /*5*/ { (uint32_t)6, "ENXIO", AS_DESCR_HANDLE("Устройство или адрес не существует", 221), Src_errnoh, AS_OS_ANY },
  /*6*/ { (uint32_t)7, "E2BIG", AS_DESCR_HANDLE("Слишком длинный список аргументов", 286), Src_errnoh, AS_OS_ANY },
  /*7*/ { (uint32_t)8, "ENOEXEC", AS_DESCR_HANDLE("Неверный формат исполняемого файла", 350), Src_errnoh, AS_OS_ANY },
  /*8*/ { (uint32_t)9, "EBADF", AS_DESCR_HANDLE("Недопустимый файловый дескриптор", 416), Src_errnoh, AS_OS_ANY },
  /*9*/ { (uint32_t)10, "ECHILD", AS_DESCR_HANDLE("Дочерние процессы отсутствуют", 479), Src_errnoh, AS_OS_ANY },
  /*10*/ { (uint32_t)11, "EAGAIN", AS_DESCR_HANDLE("Ресурс временно недоступен", 536), Src_errnoh, AS_OS_LINUX },
  /*11*/ { (uint32_t)11, "EDEADLK", AS_DESCR_HANDLE("Предотвращена взаимная блокировка ресурсов", 587), Src_errnoh, AS_OS_MAC },
  /*12*/ { (uint32_t)11, "EAGAIN", AS_DESCR_HANDLE("Ресурс временно недоступен", 669), Src_errnoh, AS_OS_SOLARIS },
  /*13*/ { (uint32_t)11, "EAGAIN", AS_DESCR_HANDLE("", 720), Src_errnoh, AS_OS_WINDOWS },
  /*14*/ { (uint32_t)12, "ENOMEM", AS_DESCR_HANDLE("Не удалось выделить память", 721), Src_errnoh, AS_OS_ANY },
  /*15*/ { (uint32_t)13, "EACCES", AS_DESCR_HANDLE("Доступ запрещён", 771), Src_errnoh, AS_OS_ANY },
  /*16*/ { (uint32_t)14, "EFAULT", AS_DESCR_HANDLE("Недопустимый адрес", 801), Src_errnoh, AS_OS_ANY },
  /*17*/ { (uint32_t)15, "ENOTBLK", AS_DESCR_HANDLE("Требуется блочное устройство", 837), Src_errnoh, AS_OS_LINUX },
  /*18*/ { (uint32_t)15, "ENOTBLK", AS_DESCR_HANDLE("Требуется блочное устройство", 892), Src_errnoh, AS_OS_MAC },
  /*19*/ { (uint32_t)15, "ENOTBLK", AS_DESCR_HANDLE("Требуется блочное устройство", 947), Src_errnoh, AS_OS_SOLARIS },
  /*20*/ { (uint32_t)16, "EBUSY", AS_DESCR_HANDLE("Устройство или ресурс занят", 1002), Src_errnoh, AS_OS_ANY },
  /*21*/ { (uint32_t)17, "EEXIST", AS_DESCR_HANDLE("Файл уже существует", 1054), Src_errnoh, AS_OS_ANY },
  /*22*/ { (uint32_t)18, "EXDEV", AS_DESCR_HANDLE("Создание ссылки между разными устройствами невозможно", 1091), Src_errnoh, AS_OS_ANY },
  /*23*/ { (uint32_t)19, "ENODEV", AS_DESCR_HANDLE("Устройство не поддерживает эту операцию", 1193), Src_errnoh, AS_OS_ANY },
  /*24*/ { (uint32_t)20, "ENOTDIR", AS_DESCR_HANDLE("Объект не является каталогом", 1268), Src_errnoh, AS_OS_ANY },
  /*25*/ { (uint32_t)21, "EISDIR", AS_DESCR_HANDLE("Объект является каталогом", 1322), Src_errnoh, AS_OS_ANY },
  /*26*/ { (uint32_t)22, "EINVAL", AS_DESCR_HANDLE("Недопустимый аргумент", 1371), Src_errnoh, AS_OS_ANY },
  /*27*/ { (uint32_t)23, "ENFILE", AS_DESCR_HANDLE("В системе открыто слишком много файлов", 1413), Src_errnoh, AS_OS_ANY },
  /*28*/ { (uint32_t)24, "EMFILE", AS_DESCR_HANDLE("Открыто слишком много файлов", 1485), Src_errnoh, AS_OS_ANY },
  /*29*/ { (uint32_t)25, "ENOTTY", AS_DESCR_HANDLE("Команда ioctl неприменима к этому устройству", 1539), Src_errnoh, AS_OS_ANY },
  /*30*/ { (uint32_t)26, "ETXTBSY", AS_DESCR_HANDLE("Исполняемый файл занят", 1618), Src_errnoh, AS_OS_LINUX },
  /*31*/ { (uint32_t)26, "ETXTBSY", AS_DESCR_HANDLE("Исполняемый файл занят", 1661), Src_errnoh, AS_OS_MAC },
  /*32*/ { (uint32_t)26, "ETXTBSY", AS_DESCR_HANDLE("Исполняемый файл занят", 1704), Src_errnoh, AS_OS_SOLARIS },
  /*33*/ { (uint32_t)27, "EFBIG", AS_DESCR_HANDLE("Файл слишком велик", 1747), Src_errnoh, AS_OS_ANY },
  /*34*/ { (uint32_t)28, "ENOSPC", AS_DESCR_HANDLE("На устройстве не осталось свободного места", 1782), Src_errnoh, AS_OS_ANY },
  /*35*/ { (uint32_t)29, "ESPIPE", AS_DESCR_HANDLE("Недопустимое позиционирование в файле", 1862), Src_errnoh, AS_OS_ANY },
  /*36*/ { (uint32_t)30, "EROFS", AS_DESCR_HANDLE("Файловая система доступна только для чтения", 1934), Src_errnoh, AS_OS_ANY },
  /*37*/ { (uint32_t)31, "EMLINK", AS_DESCR_HANDLE("Слишком много ссылок", 2016), Src_errnoh, AS_OS_ANY },
  /*38*/ { (uint32_t)32, "EPIPE", AS_DESCR_HANDLE("Канал разорван", 2055), Src_errnoh, AS_OS_ANY },
  /*39*/ { (uint32_t)33, "EDOM", AS_DESCR_HANDLE("Аргумент находится вне области определения математической функции", 2083), Src_errnoh, AS_OS_ANY },
  /*40*/ { (uint32_t)34, "ERANGE", AS_DESCR_HANDLE("Математический результат невозможно представить", 2208), Src_errnoh, AS_OS_ANY },
  /*41*/ { (uint32_t)35, "EDEADLK", AS_DESCR_HANDLE("Операция привела бы к взаимной блокировке ресурсов", 2300), Src_errnoh, AS_OS_LINUX },
  /*42*/ { (uint32_t)35, "EAGAIN", AS_DESCR_HANDLE("Ресурс временно недоступен", 2395), Src_errnoh, AS_OS_MAC },
  /*43*/ { (uint32_t)35, "ENOMSG", AS_DESCR_HANDLE("Сообщение требуемого типа отсутствует", 2446), Src_errnoh, AS_OS_SOLARIS },
  /*44*/ { (uint32_t)36, "ENAMETOOLONG", AS_DESCR_HANDLE("Имя файла слишком длинное", 2518), Src_errnoh, AS_OS_LINUX },
  /*45*/ { (uint32_t)36, "EINPROGRESS", AS_DESCR_HANDLE("Операция выполняется", 2566), Src_errnoh, AS_OS_MAC },
  /*46*/ { (uint32_t)36, "EIDRM", AS_DESCR_HANDLE("Идентификатор удалён", 2606), Src_errnoh, AS_OS_SOLARIS },
  /*47*/ { (uint32_t)36, "EDEADLK", AS_DESCR_HANDLE("", 2646), Src_errnoh, AS_OS_WINDOWS },
  /*48*/ { (uint32_t)37, "ENOLCK", AS_DESCR_HANDLE("Блокировки записей недоступны", 2647), Src_errnoh, AS_OS_LINUX },
  /*49*/ { (uint32_t)37, "EALREADY", AS_DESCR_HANDLE("Операция уже выполняется", 2704), Src_errnoh, AS_OS_MAC },
  /*50*/ { (uint32_t)37, "ECHRNG", AS_DESCR_HANDLE("Номер канала вне допустимого диапазона", 2751), Src_errnoh, AS_OS_SOLARIS },
  /*51*/ { (uint32_t)38, "ENOSYS", AS_DESCR_HANDLE("Функция не реализована", 2824), Src_errnoh, AS_OS_LINUX },
  /*52*/ { (uint32_t)38, "ENOTSOCK", AS_DESCR_HANDLE("Операция с сокетом применена к объекту, который не является сокетом", 2867), Src_errnoh, AS_OS_MAC },
  /*53*/ { (uint32_t)38, "EL2NSYNC", AS_DESCR_HANDLE("Уровень 2 не синхронизирован", 2992), Src_errnoh, AS_OS_SOLARIS },
  /*54*/ { (uint32_t)38, "ENAMETOOLONG", AS_DESCR_HANDLE("", 3045), Src_errnoh, AS_OS_WINDOWS },
  /*55*/ { (uint32_t)39, "ENOTEMPTY", AS_DESCR_HANDLE("Каталог не пуст", 3046), Src_errnoh, AS_OS_LINUX },
  /*56*/ { (uint32_t)39, "EDESTADDRREQ", AS_DESCR_HANDLE("Требуется адрес назначения", 3075), Src_errnoh, AS_OS_MAC },
  /*57*/ { (uint32_t)39, "EL3HLT", AS_DESCR_HANDLE("Уровень 3 остановлен", 3126), Src_errnoh, AS_OS_SOLARIS },
  /*58*/ { (uint32_t)39, "ENOLCK", AS_DESCR_HANDLE("", 3164), Src_errnoh, AS_OS_WINDOWS },
  /*59*/ { (uint32_t)40, "ELOOP", AS_DESCR_HANDLE("Обнаружено слишком много символических ссылок", 3165), Src_errnoh, AS_OS_LINUX },
  /*60*/ { (uint32_t)40, "EMSGSIZE", AS_DESCR_HANDLE("Сообщение слишком длинное", 3252), Src_errnoh, AS_OS_MAC },
  /*61*/ { (uint32_t)40, "EL3RST", AS_DESCR_HANDLE("Уровень 3 сброшен", 3301), Src_errnoh, AS_OS_SOLARIS },
  /*62*/ { (uint32_t)40, "ENOSYS", AS_DESCR_HANDLE("", 3333), Src_errnoh, AS_OS_WINDOWS },
  /*63*/ { (uint32_t)41, "EWOULDBLOCK", AS_DESCR_HANDLE("Операция привела бы к блокировке", 3334), Src_errnoh, AS_OS_LINUX },
  /*64*/ { (uint32_t)41, "EPROTOTYPE", AS_DESCR_HANDLE("Тип протокола не соответствует типу сокета", 3395), Src_errnoh, AS_OS_MAC },
  /*65*/ { (uint32_t)41, "ELNRNG", AS_DESCR_HANDLE("Номер линии связи вне допустимого диапазона", 3475), Src_errnoh, AS_OS_SOLARIS },
  /*66*/ { (uint32_t)41, "ENOTEMPTY", AS_DESCR_HANDLE("", 3557), Src_errnoh, AS_OS_WINDOWS },
  /*67*/ { (uint32_t)42, "ENOMSG", AS_DESCR_HANDLE("Сообщение требуемого типа отсутствует", 3558), Src_errnoh, AS_OS_LINUX },
  /*68*/ { (uint32_t)42, "ENOPROTOOPT", AS_DESCR_HANDLE("Протокол недоступен", 3630), Src_errnoh, AS_OS_MAC },
  /*69*/ { (uint32_t)42, "EUNATCH", AS_DESCR_HANDLE("Драйвер протокола не подключён", 3668), Src_errnoh, AS_OS_SOLARIS },
  /*70*/ { (uint32_t)42, "EILSEQ", AS_DESCR_HANDLE("", 3726), Src_errnoh, AS_OS_WINDOWS },
  /*71*/ { (uint32_t)43, "EIDRM", AS_DESCR_HANDLE("Идентификатор удалён", 3727), Src_errnoh, AS_OS_LINUX },
  /*72*/ { (uint32_t)43, "EPROTONOSUPPORT", AS_DESCR_HANDLE("Протокол не поддерживается", 3767), Src_errnoh, AS_OS_MAC },
  /*73*/ { (uint32_t)43, "ENOCSI", AS_DESCR_HANDLE("Структура CSI недоступна", 3818), Src_errnoh, AS_OS_SOLARIS },
  /*74*/ { (uint32_t)44, "ECHRNG", AS_DESCR_HANDLE("Номер канала вне допустимого диапазона", 3862), Src_errnoh, AS_OS_LINUX },
  /*75*/ { (uint32_t)44, "ESOCKTNOSUPPORT", AS_DESCR_HANDLE("Тип сокета не поддерживается", 3935), Src_errnoh, AS_OS_MAC },
  /*76*/ { (uint32_t)44, "EL2HLT", AS_DESCR_HANDLE("Уровень 2 остановлен", 3989), Src_errnoh, AS_OS_SOLARIS },
  /*77*/ { (uint32_t)45, "EL2NSYNC", AS_DESCR_HANDLE("Уровень 2 не синхронизирован", 4027), Src_errnoh, AS_OS_LINUX },
  /*78*/ { (uint32_t)45, "ENOTSUP", AS_DESCR_HANDLE("Операция не поддерживается", 4080), Src_errnoh, AS_OS_MAC },
  /*79*/ { (uint32_t)45, "EDEADLK", AS_DESCR_HANDLE("Обнаружена взаимная блокировка.", 4131), Src_errnoh, AS_OS_SOLARIS },
  /*80*/ { (uint32_t)46, "EL3HLT", AS_DESCR_HANDLE("Уровень 3 остановлен", 4191), Src_errnoh, AS_OS_LINUX },
  /*81*/ { (uint32_t)46, "EPFNOSUPPORT", AS_DESCR_HANDLE("Семейство протоколов не поддерживается", 4229), Src_errnoh, AS_OS_MAC },
  /*82*/ { (uint32_t)46, "ENOLCK", AS_DESCR_HANDLE("Блокировки записей недоступны.", 4303), Src_errnoh, AS_OS_SOLARIS },
  /*83*/ { (uint32_t)47, "EL3RST", AS_DESCR_HANDLE("Уровень 3 сброшен", 4361), Src_errnoh, AS_OS_LINUX },
  /*84*/ { (uint32_t)47, "EAFNOSUPPORT", AS_DESCR_HANDLE("Семейство адресов не поддерживается семейством протоколов", 4393), Src_errnoh, AS_OS_MAC },
  /*85*/ { (uint32_t)47, "ECANCELED", AS_DESCR_HANDLE("Операция отменена", 4503), Src_errnoh, AS_OS_SOLARIS },
  /*86*/ { (uint32_t)48, "ELNRNG", AS_DESCR_HANDLE("Номер линии связи вне допустимого диапазона", 4537), Src_errnoh, AS_OS_LINUX },
  /*87*/ { (uint32_t)48, "EADDRINUSE", AS_DESCR_HANDLE("Адрес уже используется", 4619), Src_errnoh, AS_OS_MAC },
  /*88*/ { (uint32_t)48, "ENOTSUP", AS_DESCR_HANDLE("Операция не поддерживается", 4662), Src_errnoh, AS_OS_SOLARIS },
  /*89*/ { (uint32_t)49, "EUNATCH", AS_DESCR_HANDLE("Драйвер протокола не подключён", 4713), Src_errnoh, AS_OS_LINUX },
  /*90*/ { (uint32_t)49, "EADDRNOTAVAIL", AS_DESCR_HANDLE("Не удалось назначить запрошенный адрес", 4771), Src_errnoh, AS_OS_MAC },
  /*91*/ { (uint32_t)49, "EDQUOT", AS_DESCR_HANDLE("Превышена дисковая квота", 4844), Src_errnoh, AS_OS_SOLARIS },
  /*92*/ { (uint32_t)50, "ENOCSI", AS_DESCR_HANDLE("Структура CSI недоступна", 4891), Src_errnoh, AS_OS_LINUX },
  /*93*/ { (uint32_t)50, "ENETDOWN", AS_DESCR_HANDLE("Сеть не работает", 4935), Src_errnoh, AS_OS_MAC },
  /*94*/ { (uint32_t)50, "EBADE", AS_DESCR_HANDLE("Недопустимый обмен", 4966), Src_errnoh, AS_OS_SOLARIS },
  /*95*/ { (uint32_t)51, "EL2HLT", AS_DESCR_HANDLE("Уровень 2 остановлен", 5002), Src_errnoh, AS_OS_LINUX },
  /*96*/ { (uint32_t)51, "ENETUNREACH", AS_DESCR_HANDLE("Сеть недоступна", 5040), Src_errnoh, AS_OS_MAC },
  /*97*/ { (uint32_t)51, "EBADR", AS_DESCR_HANDLE("Недопустимый дескриптор запроса", 5070), Src_errnoh, AS_OS_SOLARIS },
  /*98*/ { (uint32_t)52, "EBADE", AS_DESCR_HANDLE("Недопустимый обмен", 5131), Src_errnoh, AS_OS_LINUX },
  /*99*/ { (uint32_t)52, "ENETRESET", AS_DESCR_HANDLE("Сетевое соединение разорвано при сбросе", 5167), Src_errnoh, AS_OS_MAC },
  /*100*/ { (uint32_t)52, "EXFULL", AS_DESCR_HANDLE("Таблица обменов заполнена", 5242), Src_errnoh, AS_OS_SOLARIS },
  /*101*/ { (uint32_t)53, "EBADR", AS_DESCR_HANDLE("Недопустимый дескриптор запроса", 5291), Src_errnoh, AS_OS_LINUX },
  /*102*/ { (uint32_t)53, "ECONNABORTED", AS_DESCR_HANDLE("Соединение прервано программным обеспечением", 5352), Src_errnoh, AS_OS_MAC },
  /*103*/ { (uint32_t)53, "ENOANO", AS_DESCR_HANDLE("Объект anode отсутствует", 5438), Src_errnoh, AS_OS_SOLARIS },
  /*104*/ { (uint32_t)54, "EXFULL", AS_DESCR_HANDLE("Таблица обменов заполнена", 5480), Src_errnoh, AS_OS_LINUX },
  /*105*/ { (uint32_t)54, "ECONNRESET", AS_DESCR_HANDLE("Соединение сброшено удалённой стороной", 5529), Src_errnoh, AS_OS_MAC },
  /*106*/ { (uint32_t)54, "EBADRQC", AS_DESCR_HANDLE("Недопустимый код запроса", 5603), Src_errnoh, AS_OS_SOLARIS },
  /*107*/ { (uint32_t)55, "ENOANO", AS_DESCR_HANDLE("Объект anode отсутствует", 5650), Src_errnoh, AS_OS_LINUX },
  /*108*/ { (uint32_t)55, "ENOBUFS", AS_DESCR_HANDLE("Недостаточно места в буфере", 5692), Src_errnoh, AS_OS_MAC },
  /*109*/ { (uint32_t)55, "EBADSLT", AS_DESCR_HANDLE("Недопустимый слот", 5744), Src_errnoh, AS_OS_SOLARIS },
  /*110*/ { (uint32_t)56, "EBADRQC", AS_DESCR_HANDLE("Недопустимый код запроса", 5778), Src_errnoh, AS_OS_LINUX },
  /*111*/ { (uint32_t)56, "EISCONN", AS_DESCR_HANDLE("Сокет уже подключён", 5825), Src_errnoh, AS_OS_MAC },
  /*112*/ { (uint32_t)56, "EDEADLOCK", AS_DESCR_HANDLE("Взаимная блокировка при блокировке файла", 5862), Src_errnoh, AS_OS_SOLARIS },
  /*113*/ { (uint32_t)57, "EBADSLT", AS_DESCR_HANDLE("Недопустимый слот", 5939), Src_errnoh, AS_OS_LINUX },
  /*114*/ { (uint32_t)57, "ENOTCONN", AS_DESCR_HANDLE("Сокет не подключён", 5973), Src_errnoh, AS_OS_MAC },
  /*115*/ { (uint32_t)57, "EBFONT", AS_DESCR_HANDLE("Неверный формат файла шрифта", 6008), Src_errnoh, AS_OS_SOLARIS },
  /*116*/ { (uint32_t)58, "EDEADLOCK", AS_DESCR_HANDLE("Взаимная блокировка при блокировке файла", 6062), Src_errnoh, AS_OS_LINUX },
  /*117*/ { (uint32_t)58, "ESHUTDOWN", AS_DESCR_HANDLE("Отправка после закрытия сокета невозможна", 6139), Src_errnoh, AS_OS_MAC },
  /*118*/ { (uint32_t)58, "EOWNERDEAD", AS_DESCR_HANDLE("Процесс завершился, не освободив блокировку", 6218), Src_errnoh, AS_OS_SOLARIS },
  /*119*/ { (uint32_t)59, "EBFONT", AS_DESCR_HANDLE("Неверный формат файла шрифта", 6300), Src_errnoh, AS_OS_LINUX },
  /*120*/ { (uint32_t)59, "ETOOMANYREFS", AS_DESCR_HANDLE("Слишком много ссылок: объединение потоков невозможно", 6354), Src_errnoh, AS_OS_MAC },
  /*121*/ { (uint32_t)59, "ENOTRECOVERABLE", AS_DESCR_HANDLE("Состояние блокировки невозможно восстановить", 6453), Src_errnoh, AS_OS_SOLARIS },
  /*122*/ { (uint32_t)60, "ENOSTR", AS_DESCR_HANDLE("Устройство не является потоком STREAM", 6539), Src_errnoh, AS_OS_LINUX },
  /*123*/ { (uint32_t)60, "ETIMEDOUT", AS_DESCR_HANDLE("Истекло время ожидания операции", 6604), Src_errnoh, AS_OS_MAC },
  /*124*/ { (uint32_t)60, "ENOSTR", AS_DESCR_HANDLE("Устройство не является потоком STREAM", 6664), Src_errnoh, AS_OS_SOLARIS },
  /*125*/ { (uint32_t)61, "ENODATA", AS_DESCR_HANDLE("Данные отсутствуют при неблокирующем вводе-выводе", 6729), Src_errnoh, AS_OS_LINUX },
  /*126*/ { (uint32_t)61, "ECONNREFUSED", AS_DESCR_HANDLE("В соединении отказано", 6823), Src_errnoh, AS_OS_MAC },
  /*127*/ { (uint32_t)61, "ENODATA", AS_DESCR_HANDLE("Данные отсутствуют при неблокирующем вводе-выводе", 6864), Src_errnoh, AS_OS_SOLARIS },
  /*128*/ { (uint32_t)62, "ETIME", AS_DESCR_HANDLE("Время таймера истекло", 6958), Src_errnoh, AS_OS_LINUX },
  /*129*/ { (uint32_t)62, "ELOOP", AS_DESCR_HANDLE("Слишком много уровней символических ссылок", 6999), Src_errnoh, AS_OS_MAC },
  /*130*/ { (uint32_t)62, "ETIME", AS_DESCR_HANDLE("Время таймера истекло", 7080), Src_errnoh, AS_OS_SOLARIS },
  /*131*/ { (uint32_t)63, "ENOSR", AS_DESCR_HANDLE("Исчерпаны ресурсы подсистемы STREAMS", 7121), Src_errnoh, AS_OS_LINUX },
  /*132*/ { (uint32_t)63, "ENAMETOOLONG", AS_DESCR_HANDLE("Имя файла слишком длинное", 7184), Src_errnoh, AS_OS_MAC },
  /*133*/ { (uint32_t)63, "ENOSR", AS_DESCR_HANDLE("Исчерпаны ресурсы подсистемы STREAMS", 7232), Src_errnoh, AS_OS_SOLARIS },
  /*134*/ { (uint32_t)64, "ENONET", AS_DESCR_HANDLE("Компьютер не подключён к сети", 7295), Src_errnoh, AS_OS_LINUX },
  /*135*/ { (uint32_t)64, "EHOSTDOWN", AS_DESCR_HANDLE("Узел не работает", 7350), Src_errnoh, AS_OS_MAC },
  /*136*/ { (uint32_t)64, "ENONET", AS_DESCR_HANDLE("Компьютер не подключён к сети", 7381), Src_errnoh, AS_OS_SOLARIS },
  /*137*/ { (uint32_t)65, "ENOPKG", AS_DESCR_HANDLE("Пакет не установлен", 7436), Src_errnoh, AS_OS_LINUX },
  /*138*/ { (uint32_t)65, "EHOSTUNREACH", AS_DESCR_HANDLE("Маршрут к узлу отсутствует", 7473), Src_errnoh, AS_OS_MAC },
  /*139*/ { (uint32_t)65, "ENOPKG", AS_DESCR_HANDLE("Пакет не установлен", 7523), Src_errnoh, AS_OS_SOLARIS },
  /*140*/ { (uint32_t)66, "EREMOTE", AS_DESCR_HANDLE("Объект находится на удалённой системе", 7560), Src_errnoh, AS_OS_LINUX },
  /*141*/ { (uint32_t)66, "ENOTEMPTY", AS_DESCR_HANDLE("Каталог не пуст", 7631), Src_errnoh, AS_OS_MAC },
  /*142*/ { (uint32_t)66, "EREMOTE", AS_DESCR_HANDLE("Объект находится на удалённой системе", 7660), Src_errnoh, AS_OS_SOLARIS },
  /*143*/ { (uint32_t)67, "ENOLINK", AS_DESCR_HANDLE("Соединение разорвано", 7731), Src_errnoh, AS_OS_LINUX },
  /*144*/ { (uint32_t)67, "EPROCLIM", AS_DESCR_HANDLE("Слишком много процессов", 7771), Src_errnoh, AS_OS_MAC },
  /*145*/ { (uint32_t)67, "ENOLINK", AS_DESCR_HANDLE("Соединение разорвано", 7816), Src_errnoh, AS_OS_SOLARIS },
  /*146*/ { (uint32_t)68, "EADV", AS_DESCR_HANDLE("Ошибка публикации ресурса", 7856), Src_errnoh, AS_OS_LINUX },
  /*147*/ { (uint32_t)68, "EUSERS", AS_DESCR_HANDLE("Слишком много пользователей", 7905), Src_errnoh, AS_OS_MAC },
  /*148*/ { (uint32_t)68, "EADV", AS_DESCR_HANDLE("Ошибка публикации ресурса", 7958), Src_errnoh, AS_OS_SOLARIS },
  /*149*/ { (uint32_t)69, "ESRMNT", AS_DESCR_HANDLE("Ошибка удалённого монтирования srmount", 8007), Src_errnoh, AS_OS_LINUX },
  /*150*/ { (uint32_t)69, "EDQUOT", AS_DESCR_HANDLE("Превышена дисковая квота", 8074), Src_errnoh, AS_OS_MAC },
  /*151*/ { (uint32_t)69, "ESRMNT", AS_DESCR_HANDLE("Ошибка удалённого монтирования srmount", 8121), Src_errnoh, AS_OS_SOLARIS },
  /*152*/ { (uint32_t)70, "ECOMM", AS_DESCR_HANDLE("Ошибка связи при отправке", 8188), Src_errnoh, AS_OS_LINUX },
  /*153*/ { (uint32_t)70, "ESTALE", AS_DESCR_HANDLE("Устаревший файловый дескриптор NFS", 8236), Src_errnoh, AS_OS_MAC },
  /*154*/ { (uint32_t)70, "ECOMM", AS_DESCR_HANDLE("Ошибка связи при отправке", 8299), Src_errnoh, AS_OS_SOLARIS },
  /*155*/ { (uint32_t)71, "EPROTO", AS_DESCR_HANDLE("Ошибка протокола", 8347), Src_errnoh, AS_OS_LINUX },
  /*156*/ { (uint32_t)71, "EREMOTE", AS_DESCR_HANDLE("Слишком много удалённых переходов в пути", 8379), Src_errnoh, AS_OS_MAC },
  /*157*/ { (uint32_t)71, "EPROTO", AS_DESCR_HANDLE("Ошибка протокола", 8455), Src_errnoh, AS_OS_SOLARIS },
  /*158*/ { (uint32_t)72, "EMULTIHOP", AS_DESCR_HANDLE("Предпринята попытка многоэтапной передачи", 8487), Src_errnoh, AS_OS_LINUX },
  /*159*/ { (uint32_t)72, "EBADRPC", AS_DESCR_HANDLE("Повреждена структура RPC", 8567), Src_errnoh, AS_OS_MAC },
  /*160*/ { (uint32_t)72, "ELOCKUNMAPPED", AS_DESCR_HANDLE("Заблокированная область была снята с отображения", 8611), Src_errnoh, AS_OS_SOLARIS },
  /*161*/ { (uint32_t)73, "EDOTDOT", AS_DESCR_HANDLE("Специфическая ошибка RFS", 8703), Src_errnoh, AS_OS_LINUX },
  /*162*/ { (uint32_t)73, "ERPCMISMATCH", AS_DESCR_HANDLE("Неверная версия RPC", 8747), Src_errnoh, AS_OS_MAC },
  /*163*/ { (uint32_t)73, "ENOTACTIVE", AS_DESCR_HANDLE("Подсистема не активна", 8781), Src_errnoh, AS_OS_SOLARIS },
  /*164*/ { (uint32_t)74, "EBADMSG", AS_DESCR_HANDLE("Сообщение не содержит данных", 8822), Src_errnoh, AS_OS_LINUX },
  /*165*/ { (uint32_t)74, "EPROGUNAVAIL", AS_DESCR_HANDLE("Программа RPC недоступна", 8876), Src_errnoh, AS_OS_MAC },
  /*166*/ { (uint32_t)74, "EMULTIHOP", AS_DESCR_HANDLE("Предпринята попытка многоэтапной передачи", 8920), Src_errnoh, AS_OS_SOLARIS },
  /*167*/ { (uint32_t)75, "EOVERFLOW", AS_DESCR_HANDLE("Значение слишком велико для заданного типа данных", 9000), Src_errnoh, AS_OS_LINUX },
  /*168*/ { (uint32_t)75, "EPROGMISMATCH", AS_DESCR_HANDLE("Неверная версия программы", 9093), Src_errnoh, AS_OS_MAC },
  /*169*/ { (uint32_t)76, "ENOTUNIQ", AS_DESCR_HANDLE("Имя не является уникальным в сети", 9142), Src_errnoh, AS_OS_LINUX },
  /*170*/ { (uint32_t)76, "EPROCUNAVAIL", AS_DESCR_HANDLE("Процедура не поддерживается программой", 9204), Src_errnoh, AS_OS_MAC },
  /*171*/ { (uint32_t)77, "EBADFD", AS_DESCR_HANDLE("Файловый дескриптор находится в недопустимом состоянии", 9278), Src_errnoh, AS_OS_LINUX },
  /*172*/ { (uint32_t)77, "ENOLCK", AS_DESCR_HANDLE("Блокировки недоступны", 9382), Src_errnoh, AS_OS_MAC },
  /*173*/ { (uint32_t)77, "EBADMSG", AS_DESCR_HANDLE("Попытка прочитать недоступное для чтения сообщение", 9424), Src_errnoh, AS_OS_SOLARIS },
  /*174*/ { (uint32_t)78, "EREMCHG", AS_DESCR_HANDLE("Удалённый адрес изменился", 9520), Src_errnoh, AS_OS_LINUX },
  /*175*/ { (uint32_t)78, "ENOSYS", AS_DESCR_HANDLE("Функция не реализована", 9569), Src_errnoh, AS_OS_MAC },
  /*176*/ { (uint32_t)78, "ENAMETOOLONG", AS_DESCR_HANDLE("Путь слишком длинный", 9612), Src_errnoh, AS_OS_SOLARIS },
  /*177*/ { (uint32_t)79, "ELIBACC", AS_DESCR_HANDLE("Нет доступа к необходимой разделяемой библиотеке", 9651), Src_errnoh, AS_OS_LINUX },
  /*178*/ { (uint32_t)79, "EFTYPE", AS_DESCR_HANDLE("Неподходящий тип или формат файла", 9743), Src_errnoh, AS_OS_MAC },
  /*179*/ { (uint32_t)79, "EOVERFLOW", AS_DESCR_HANDLE("Значение слишком велико для хранения в этом типе данных", 9806), Src_errnoh, AS_OS_SOLARIS },
  /*180*/ { (uint32_t)80, "ELIBBAD", AS_DESCR_HANDLE("Обращение к повреждённой разделяемой библиотеке", 9909), Src_errnoh, AS_OS_LINUX },
  /*181*/ { (uint32_t)80, "EAUTH", AS_DESCR_HANDLE("Ошибка аутентификации", 10000), Src_errnoh, AS_OS_MAC },
  /*182*/ { (uint32_t)80, "ENOTUNIQ", AS_DESCR_HANDLE("Указанное логическое имя не является уникальным", 10042), Src_errnoh, AS_OS_SOLARIS },
  /*183*/ { (uint32_t)81, "ELIBSCN", AS_DESCR_HANDLE("Раздел .lib в файле a.out повреждён", 10132), Src_errnoh, AS_OS_LINUX },
  /*184*/ { (uint32_t)81, "ENEEDAUTH", AS_DESCR_HANDLE("Требуются данные аутентификации", 10189), Src_errnoh, AS_OS_MAC },
  /*185*/ { (uint32_t)81, "EBADFD", AS_DESCR_HANDLE("Файловый дескриптор недопустим для этой операции", 10250), Src_errnoh, AS_OS_SOLARIS },
  /*186*/ { (uint32_t)82, "ELIBMAX", AS_DESCR_HANDLE("Попытка подключить слишком много разделяемых библиотек", 10342), Src_errnoh, AS_OS_LINUX },
  /*187*/ { (uint32_t)82, "EPWROFF", AS_DESCR_HANDLE("Питание устройства отключено", 10446), Src_errnoh, AS_OS_MAC },
  /*188*/ { (uint32_t)82, "EREMCHG", AS_DESCR_HANDLE("Удалённый адрес изменился", 10501), Src_errnoh, AS_OS_SOLARIS },
  /*189*/ { (uint32_t)83, "ELIBEXEC", AS_DESCR_HANDLE("Разделяемую библиотеку нельзя запустить напрямую", 10550), Src_errnoh, AS_OS_LINUX },
  /*190*/ { (uint32_t)83, "EDEVERR", AS_DESCR_HANDLE("Ошибка устройства, например закончилась бумага", 10643), Src_errnoh, AS_OS_MAC },
  /*191*/ { (uint32_t)83, "ELIBACC", AS_DESCR_HANDLE("Нет доступа к необходимой разделяемой библиотеке.", 10731), Src_errnoh, AS_OS_SOLARIS },
  /*192*/ { (uint32_t)84, "EILSEQ", AS_DESCR_HANDLE("Недопустимая последовательность байтов", 10824), Src_errnoh, AS_OS_LINUX },
  /*193*/ { (uint32_t)84, "EOVERFLOW", AS_DESCR_HANDLE("Значение слишком велико для хранения в этом типе данных", 10899), Src_errnoh, AS_OS_MAC },
  /*194*/ { (uint32_t)84, "ELIBBAD", AS_DESCR_HANDLE("Обращение к повреждённой разделяемой библиотеке.", 11002), Src_errnoh, AS_OS_SOLARIS },
  /*195*/ { (uint32_t)85, "ERESTART", AS_DESCR_HANDLE("Прерванный системный вызов следует повторить", 11094), Src_errnoh, AS_OS_LINUX },
  /*196*/ { (uint32_t)85, "EBADEXEC", AS_DESCR_HANDLE("Повреждённый или недопустимый исполняемый файл", 11179), Src_errnoh, AS_OS_MAC },
  /*197*/ { (uint32_t)85, "ELIBSCN", AS_DESCR_HANDLE("Раздел .lib в файле a.out повреждён.", 11268), Src_errnoh, AS_OS_SOLARIS },
  /*198*/ { (uint32_t)86, "ESTRPIPE", AS_DESCR_HANDLE("Ошибка канала STREAMS", 11326), Src_errnoh, AS_OS_LINUX },
  /*199*/ { (uint32_t)86, "EBADARCH", AS_DESCR_HANDLE("Исполняемый файл предназначен для другого типа процессора", 11360), Src_errnoh, AS_OS_MAC },
  /*200*/ { (uint32_t)86, "ELIBMAX", AS_DESCR_HANDLE("Попытка подключить слишком много библиотек.", 11469), Src_errnoh, AS_OS_SOLARIS },
  /*201*/ { (uint32_t)87, "EUSERS", AS_DESCR_HANDLE("Слишком много пользователей", 11551), Src_errnoh, AS_OS_LINUX },
  /*202*/ { (uint32_t)87, "ESHLIBVERS", AS_DESCR_HANDLE("Версия разделяемой библиотеки не соответствует требуемой", 11604), Src_errnoh, AS_OS_MAC },
  /*203*/ { (uint32_t)87, "ELIBEXEC", AS_DESCR_HANDLE("Попытка запустить разделяемую библиотеку.", 11712), Src_errnoh, AS_OS_SOLARIS },
  /*204*/ { (uint32_t)88, "ENOTSOCK", AS_DESCR_HANDLE("Операция с сокетом применена к объекту, который не является сокетом", 11791), Src_errnoh, AS_OS_LINUX },
  /*205*/ { (uint32_t)88, "EBADMACHO", AS_DESCR_HANDLE("Повреждённый файл Mach-O", 11916), Src_errnoh, AS_OS_MAC },
  /*206*/ { (uint32_t)88, "EILSEQ", AS_DESCR_HANDLE("Недопустимая последовательность байтов.", 11957), Src_errnoh, AS_OS_SOLARIS },
  /*207*/ { (uint32_t)89, "EDESTADDRREQ", AS_DESCR_HANDLE("Требуется адрес назначения", 12033), Src_errnoh, AS_OS_LINUX },
  /*208*/ { (uint32_t)89, "ECANCELED", AS_DESCR_HANDLE("Операция отменена", 12084), Src_errnoh, AS_OS_MAC },
  /*209*/ { (uint32_t)89, "ENOSYS", AS_DESCR_HANDLE("Операция файловой системы не поддерживается", 12118), Src_errnoh, AS_OS_SOLARIS },
  /*210*/ { (uint32_t)90, "EMSGSIZE", AS_DESCR_HANDLE("Сообщение слишком длинное", 12201), Src_errnoh, AS_OS_LINUX },
  /*211*/ { (uint32_t)90, "EIDRM", AS_DESCR_HANDLE("Идентификатор удалён", 12250), Src_errnoh, AS_OS_MAC },
  /*212*/ { (uint32_t)90, "ELOOP", AS_DESCR_HANDLE("Обнаружен цикл символических ссылок", 12290), Src_errnoh, AS_OS_SOLARIS },
  /*213*/ { (uint32_t)91, "EPROTOTYPE", AS_DESCR_HANDLE("Тип протокола не соответствует типу сокета", 12358), Src_errnoh, AS_OS_LINUX },
  /*214*/ { (uint32_t)91, "ENOMSG", AS_DESCR_HANDLE("Сообщение требуемого типа отсутствует", 12438), Src_errnoh, AS_OS_MAC },
  /*215*/ { (uint32_t)91, "ERESTART", AS_DESCR_HANDLE("Системный вызов можно повторить", 12510), Src_errnoh, AS_OS_SOLARIS },
  /*216*/ { (uint32_t)92, "ENOPROTOOPT", AS_DESCR_HANDLE("Протокол недоступен", 12570), Src_errnoh, AS_OS_LINUX },
  /*217*/ { (uint32_t)92, "EILSEQ", AS_DESCR_HANDLE("Недопустимая последовательность байтов", 12608), Src_errnoh, AS_OS_MAC },
  /*218*/ { (uint32_t)92, "ESTRPIPE", AS_DESCR_HANDLE("Для pipe/FIFO: не ожидать в головном модуле потока", 12683), Src_errnoh, AS_OS_SOLARIS },
  /*219*/ { (uint32_t)93, "EPROTONOSUPPORT", AS_DESCR_HANDLE("Протокол не поддерживается", 12767), Src_errnoh, AS_OS_LINUX },
  /*220*/ { (uint32_t)93, "ENOATTR", AS_DESCR_HANDLE("Атрибут не найден", 12818), Src_errnoh, AS_OS_MAC },
  /*221*/ { (uint32_t)93, "ENOTEMPTY", AS_DESCR_HANDLE("Каталог не пуст", 12851), Src_errnoh, AS_OS_SOLARIS },
  /*222*/ { (uint32_t)94, "ESOCKTNOSUPPORT", AS_DESCR_HANDLE("Тип сокета не поддерживается", 12880), Src_errnoh, AS_OS_LINUX },
  /*223*/ { (uint32_t)94, "EBADMSG", AS_DESCR_HANDLE("Повреждённое или недопустимое сообщение", 12934), Src_errnoh, AS_OS_MAC },
  /*224*/ { (uint32_t)94, "EUSERS", AS_DESCR_HANDLE("Слишком много пользователей для UFS", 13010), Src_errnoh, AS_OS_SOLARIS },
  /*225*/ { (uint32_t)95, "EOPNOTSUPP", AS_DESCR_HANDLE("Транспортная конечная точка не поддерживает эту операцию", 13074), Src_errnoh, AS_OS_LINUX },
  /*226*/ { (uint32_t)95, "EMULTIHOP", AS_DESCR_HANDLE("Зарезервировано", 13181), Src_errnoh, AS_OS_MAC },
  /*227*/ { (uint32_t)95, "ENOTSOCK", AS_DESCR_HANDLE("Операция с сокетом применена к объекту, который не является сокетом", 13212), Src_errnoh, AS_OS_SOLARIS },
  /*228*/ { (uint32_t)96, "EPFNOSUPPORT", AS_DESCR_HANDLE("Семейство протоколов не поддерживается", 13337), Src_errnoh, AS_OS_LINUX },
  /*229*/ { (uint32_t)96, "ENODATA", AS_DESCR_HANDLE("В потоке STREAM нет доступного сообщения", 13411), Src_errnoh, AS_OS_MAC },
  /*230*/ { (uint32_t)96, "EDESTADDRREQ", AS_DESCR_HANDLE("Требуется адрес назначения", 13481), Src_errnoh, AS_OS_SOLARIS },
  /*231*/ { (uint32_t)97, "EAFNOSUPPORT", AS_DESCR_HANDLE("Протокол не поддерживает это семейство адресов", 13532), Src_errnoh, AS_OS_LINUX },
  /*232*/ { (uint32_t)97, "ENOLINK", AS_DESCR_HANDLE("Зарезервировано", 13620), Src_errnoh, AS_OS_MAC },
  /*233*/ { (uint32_t)97, "EMSGSIZE", AS_DESCR_HANDLE("Сообщение слишком длинное", 13651), Src_errnoh, AS_OS_SOLARIS },
  /*234*/ { (uint32_t)98, "EADDRINUSE", AS_DESCR_HANDLE("Адрес уже используется", 13700), Src_errnoh, AS_OS_LINUX },
  /*235*/ { (uint32_t)98, "ENOSR", AS_DESCR_HANDLE("Ресурсы подсистемы STREAM исчерпаны", 13743), Src_errnoh, AS_OS_MAC },
  /*236*/ { (uint32_t)98, "EPROTOTYPE", AS_DESCR_HANDLE("Тип протокола не соответствует типу сокета", 13805), Src_errnoh, AS_OS_SOLARIS },
  /*237*/ { (uint32_t)99, "EADDRNOTAVAIL", AS_DESCR_HANDLE("Не удалось назначить запрошенный адрес", 13885), Src_errnoh, AS_OS_LINUX },
  /*238*/ { (uint32_t)99, "ENOSTR", AS_DESCR_HANDLE("Объект не является потоком STREAM", 13958), Src_errnoh, AS_OS_MAC },
  /*239*/ { (uint32_t)99, "ENOPROTOOPT", AS_DESCR_HANDLE("Протокол недоступен", 14015), Src_errnoh, AS_OS_SOLARIS },
  /*240*/ { (uint32_t)100, "ENETDOWN", AS_DESCR_HANDLE("Сеть не работает", 14053), Src_errnoh, AS_OS_LINUX },
  /*241*/ { (uint32_t)100, "EPROTO", AS_DESCR_HANDLE("Ошибка протокола", 14084), Src_errnoh, AS_OS_MAC },
  /*242*/ { (uint32_t)100, "EADDRINUSE", AS_DESCR_HANDLE("", 14116), Src_errnoh, AS_OS_WINDOWS },
  /*243*/ { (uint32_t)101, "ENETUNREACH", AS_DESCR_HANDLE("Сеть недоступна", 14117), Src_errnoh, AS_OS_LINUX },
  /*244*/ { (uint32_t)101, "ETIME", AS_DESCR_HANDLE("Истекло время ожидания ioctl для STREAM", 14147), Src_errnoh, AS_OS_MAC },
  /*245*/ { (uint32_t)101, "EADDRNOTAVAIL", AS_DESCR_HANDLE("", 14210), Src_errnoh, AS_OS_WINDOWS },
  /*246*/ { (uint32_t)102, "ENETRESET", AS_DESCR_HANDLE("Сетевое соединение разорвано из-за сброса", 14211), Src_errnoh, AS_OS_LINUX },
  /*247*/ { (uint32_t)102, "EOPNOTSUPP", AS_DESCR_HANDLE("Сокет не поддерживает эту операцию", 14289), Src_errnoh, AS_OS_MAC },
  /*248*/ { (uint32_t)102, "EAFNOSUPPORT", AS_DESCR_HANDLE("", 14354), Src_errnoh, AS_OS_WINDOWS },
  /*249*/ { (uint32_t)103, "ECONNABORTED", AS_DESCR_HANDLE("Соединение прервано программным обеспечением", 14355), Src_errnoh, AS_OS_LINUX },
  /*250*/ { (uint32_t)103, "ENOPOLICY", AS_DESCR_HANDLE("Запрошенная политика не зарегистрирована", 14441), Src_errnoh, AS_OS_MAC },
  /*251*/ { (uint32_t)103, "EALREADY", AS_DESCR_HANDLE("", 14519), Src_errnoh, AS_OS_WINDOWS },
  /*252*/ { (uint32_t)104, "ECONNRESET", AS_DESCR_HANDLE("Соединение сброшено удалённой стороной", 14520), Src_errnoh, AS_OS_LINUX },
  /*253*/ { (uint32_t)104, "ENOTRECOVERABLE", AS_DESCR_HANDLE("Состояние невозможно восстановить", 14594), Src_errnoh, AS_OS_MAC },
  /*254*/ { (uint32_t)104, "EBADMSG", AS_DESCR_HANDLE("", 14659), Src_errnoh, AS_OS_WINDOWS },
  /*255*/ { (uint32_t)105, "ENOBUFS", AS_DESCR_HANDLE("Недостаточно места в буфере", 14660), Src_errnoh, AS_OS_LINUX },
  /*256*/ { (uint32_t)105, "EOWNERDEAD", AS_DESCR_HANDLE("Предыдущий владелец блокировки завершил работу", 14712), Src_errnoh, AS_OS_MAC },
  /*257*/ { (uint32_t)105, "ECANCELED", AS_DESCR_HANDLE("", 14801), Src_errnoh, AS_OS_WINDOWS },
  /*258*/ { (uint32_t)106, "EISCONN", AS_DESCR_HANDLE("Транспортная конечная точка уже подключена", 14802), Src_errnoh, AS_OS_LINUX },
  /*259*/ { (uint32_t)106, "EQFULL", AS_DESCR_HANDLE("Выходная очередь интерфейса заполнена", 14883), Src_errnoh, AS_OS_MAC },
  /*260*/ { (uint32_t)106, "ELAST", AS_DESCR_HANDLE("Должно совпадать с наибольшим значением errno", 14955), Src_errnoh, AS_OS_MAC },
  /*261*/ { (uint32_t)106, "ECONNABORTED", AS_DESCR_HANDLE("", 15036), Src_errnoh, AS_OS_WINDOWS },
  /*262*/ { (uint32_t)107, "ENOTCONN", AS_DESCR_HANDLE("Транспортная конечная точка не подключена", 15037), Src_errnoh, AS_OS_LINUX },
  /*263*/ { (uint32_t)107, "ECONNREFUSED", AS_DESCR_HANDLE("", 15116), Src_errnoh, AS_OS_WINDOWS },
  /*264*/ { (uint32_t)108, "ESHUTDOWN", AS_DESCR_HANDLE("Отправка после закрытия транспортной конечной точки невозможна", 15117), Src_errnoh, AS_OS_LINUX },
  /*265*/ { (uint32_t)108, "ECONNRESET", AS_DESCR_HANDLE("", 15236), Src_errnoh, AS_OS_WINDOWS },
  /*266*/ { (uint32_t)109, "ETOOMANYREFS", AS_DESCR_HANDLE("Слишком много ссылок: объединение потоков невозможно", 15237), Src_errnoh, AS_OS_LINUX },
  /*267*/ { (uint32_t)109, "EDESTADDRREQ", AS_DESCR_HANDLE("", 15336), Src_errnoh, AS_OS_WINDOWS },
  /*268*/ { (uint32_t)110, "ETIMEDOUT", AS_DESCR_HANDLE("Истекло время ожидания соединения", 15337), Src_errnoh, AS_OS_LINUX },
  /*269*/ { (uint32_t)110, "EHOSTUNREACH", AS_DESCR_HANDLE("", 15401), Src_errnoh, AS_OS_WINDOWS },
  /*270*/ { (uint32_t)111, "ECONNREFUSED", AS_DESCR_HANDLE("В соединении отказано", 15402), Src_errnoh, AS_OS_LINUX },
  /*271*/ { (uint32_t)111, "EIDRM", AS_DESCR_HANDLE("", 15443), Src_errnoh, AS_OS_WINDOWS },
  /*272*/ { (uint32_t)112, "EHOSTDOWN", AS_DESCR_HANDLE("Узел не работает", 15444), Src_errnoh, AS_OS_LINUX },
  /*273*/ { (uint32_t)112, "EINPROGRESS", AS_DESCR_HANDLE("", 15475), Src_errnoh, AS_OS_WINDOWS },
  /*274*/ { (uint32_t)113, "EHOSTUNREACH", AS_DESCR_HANDLE("Маршрут к узлу отсутствует", 15476), Src_errnoh, AS_OS_LINUX },
  /*275*/ { (uint32_t)113, "EISCONN", AS_DESCR_HANDLE("", 15526), Src_errnoh, AS_OS_WINDOWS },
  /*276*/ { (uint32_t)114, "EALREADY", AS_DESCR_HANDLE("Операция уже выполняется", 15527), Src_errnoh, AS_OS_LINUX },
  /*277*/ { (uint32_t)114, "ELOOP", AS_DESCR_HANDLE("", 15574), Src_errnoh, AS_OS_WINDOWS },
  /*278*/ { (uint32_t)115, "EINPROGRESS", AS_DESCR_HANDLE("Операция выполняется", 15575), Src_errnoh, AS_OS_LINUX },
  /*279*/ { (uint32_t)115, "EMSGSIZE", AS_DESCR_HANDLE("", 15615), Src_errnoh, AS_OS_WINDOWS },
  /*280*/ { (uint32_t)116, "ESTALE", AS_DESCR_HANDLE("Устаревший файловый дескриптор NFS", 15616), Src_errnoh, AS_OS_LINUX },
  /*281*/ { (uint32_t)116, "ENETDOWN", AS_DESCR_HANDLE("", 15679), Src_errnoh, AS_OS_WINDOWS },
  /*282*/ { (uint32_t)117, "EUCLEAN", AS_DESCR_HANDLE("Структура данных требует восстановления", 15680), Src_errnoh, AS_OS_LINUX },
  /*283*/ { (uint32_t)117, "ENETRESET", AS_DESCR_HANDLE("", 15756), Src_errnoh, AS_OS_WINDOWS },
  /*284*/ { (uint32_t)118, "ENOTNAM", AS_DESCR_HANDLE("Файл не является именованным типом XENIX", 15757), Src_errnoh, AS_OS_LINUX },
  /*285*/ { (uint32_t)118, "ENETUNREACH", AS_DESCR_HANDLE("", 15828), Src_errnoh, AS_OS_WINDOWS },
  /*286*/ { (uint32_t)119, "ENAVAIL", AS_DESCR_HANDLE("Нет доступных семафоров XENIX", 15829), Src_errnoh, AS_OS_LINUX },
  /*287*/ { (uint32_t)119, "ENOBUFS", AS_DESCR_HANDLE("", 15880), Src_errnoh, AS_OS_WINDOWS },
  /*288*/ { (uint32_t)120, "EISNAM", AS_DESCR_HANDLE("Файл является именованным типом", 15881), Src_errnoh, AS_OS_LINUX },
  /*289*/ { (uint32_t)120, "EPROTONOSUPPORT", AS_DESCR_HANDLE("Протокол не поддерживается", 15941), Src_errnoh, AS_OS_SOLARIS },
  /*290*/ { (uint32_t)120, "ENODATA", AS_DESCR_HANDLE("", 15992), Src_errnoh, AS_OS_WINDOWS },
  /*291*/ { (uint32_t)121, "EREMOTEIO", AS_DESCR_HANDLE("Ошибка удалённого ввода-вывода", 15993), Src_errnoh, AS_OS_LINUX },
  /*292*/ { (uint32_t)121, "ESOCKTNOSUPPORT", AS_DESCR_HANDLE("Тип сокета не поддерживается", 16051), Src_errnoh, AS_OS_SOLARIS },
  /*293*/ { (uint32_t)121, "ENOLINK", AS_DESCR_HANDLE("", 16105), Src_errnoh, AS_OS_WINDOWS },
  /*294*/ { (uint32_t)122, "EOPNOTSUPP", AS_DESCR_HANDLE("Сокет не поддерживает эту операцию", 16106), Src_errnoh, AS_OS_SOLARIS },
  /*295*/ { (uint32_t)122, "ENOMSG", AS_DESCR_HANDLE("", 16171), Src_errnoh, AS_OS_WINDOWS },
  /*296*/ { (uint32_t)123, "EPFNOSUPPORT", AS_DESCR_HANDLE("Семейство протоколов не поддерживается", 16172), Src_errnoh, AS_OS_SOLARIS },
  /*297*/ { (uint32_t)123, "ENOPROTOOPT", AS_DESCR_HANDLE("", 16246), Src_errnoh, AS_OS_WINDOWS },
  /*298*/ { (uint32_t)124, "EAFNOSUPPORT", AS_DESCR_HANDLE("Семейство адресов не поддерживается протоколом", 16247), Src_errnoh, AS_OS_SOLARIS },
  /*299*/ { (uint32_t)124, "ENOSR", AS_DESCR_HANDLE("", 16336), Src_errnoh, AS_OS_WINDOWS },
  /*300*/ { (uint32_t)125, "EADDRINUSE", AS_DESCR_HANDLE("Адрес уже используется", 16337), Src_errnoh, AS_OS_SOLARIS },
  /*301*/ { (uint32_t)125, "ENOSTR", AS_DESCR_HANDLE("", 16380), Src_errnoh, AS_OS_WINDOWS },
  /*302*/ { (uint32_t)126, "EADDRNOTAVAIL", AS_DESCR_HANDLE("Не удалось назначить запрошенный адрес", 16381), Src_errnoh, AS_OS_SOLARIS },
  /*303*/ { (uint32_t)126, "ENOTCONN", AS_DESCR_HANDLE("", 16454), Src_errnoh, AS_OS_WINDOWS },
  /*304*/ { (uint32_t)127, "ENETDOWN", AS_DESCR_HANDLE("Сеть не работает", 16455), Src_errnoh, AS_OS_SOLARIS },
  /*305*/ { (uint32_t)127, "ENOTRECOVERABLE", AS_DESCR_HANDLE("", 16486), Src_errnoh, AS_OS_WINDOWS },
  /*306*/ { (uint32_t)128, "ENETUNREACH", AS_DESCR_HANDLE("Сеть недоступна", 16487), Src_errnoh, AS_OS_SOLARIS },
  /*307*/ { (uint32_t)128, "ENOTSOCK", AS_DESCR_HANDLE("", 16517), Src_errnoh, AS_OS_WINDOWS },
  /*308*/ { (uint32_t)129, "ENETRESET", AS_DESCR_HANDLE("Сетевое соединение разорвано из-за сброса", 16518), Src_errnoh, AS_OS_SOLARIS },
  /*309*/ { (uint32_t)129, "ENOTSUP", AS_DESCR_HANDLE("", 16596), Src_errnoh, AS_OS_WINDOWS },
  /*310*/ { (uint32_t)130, "ECONNABORTED", AS_DESCR_HANDLE("Соединение прервано программным обеспечением", 16597), Src_errnoh, AS_OS_SOLARIS },
  /*311*/ { (uint32_t)130, "EOPNOTSUPP", AS_DESCR_HANDLE("", 16683), Src_errnoh, AS_OS_WINDOWS },
  /*312*/ { (uint32_t)131, "ECONNRESET", AS_DESCR_HANDLE("Соединение сброшено удалённой стороной", 16684), Src_errnoh, AS_OS_SOLARIS },
  /*313*/ { (uint32_t)131, "EOTHER", AS_DESCR_HANDLE("", 16758), Src_errnoh, AS_OS_WINDOWS },
  /*314*/ { (uint32_t)132, "ENOBUFS", AS_DESCR_HANDLE("Недостаточно места в буфере", 16759), Src_errnoh, AS_OS_SOLARIS },
  /*315*/ { (uint32_t)132, "EOVERFLOW", AS_DESCR_HANDLE("", 16811), Src_errnoh, AS_OS_WINDOWS },
  /*316*/ { (uint32_t)133, "EISCONN", AS_DESCR_HANDLE("Сокет уже подключён", 16812), Src_errnoh, AS_OS_SOLARIS },
  /*317*/ { (uint32_t)133, "EOWNERDEAD", AS_DESCR_HANDLE("", 16849), Src_errnoh, AS_OS_WINDOWS },
  /*318*/ { (uint32_t)134, "ENOTCONN", AS_DESCR_HANDLE("Сокет не подключён", 16850), Src_errnoh, AS_OS_SOLARIS },
  /*319*/ { (uint32_t)134, "EPROTO", AS_DESCR_HANDLE("", 16885), Src_errnoh, AS_OS_WINDOWS },
  /*320*/ { (uint32_t)135, "EPROTONOSUPPORT", AS_DESCR_HANDLE("", 16886), Src_errnoh, AS_OS_WINDOWS },
  /*321*/ { (uint32_t)136, "EPROTOTYPE", AS_DESCR_HANDLE("", 16887), Src_errnoh, AS_OS_WINDOWS },
  /*322*/ { (uint32_t)137, "ETIME", AS_DESCR_HANDLE("", 16888), Src_errnoh, AS_OS_WINDOWS },
  /*323*/ { (uint32_t)138, "ETIMEDOUT", AS_DESCR_HANDLE("", 16889), Src_errnoh, AS_OS_WINDOWS },
  /*324*/ { (uint32_t)139, "ETXTBSY", AS_DESCR_HANDLE("", 16890), Src_errnoh, AS_OS_WINDOWS },
  /*325*/ { (uint32_t)140, "EWOULDBLOCK", AS_DESCR_HANDLE("", 16891), Src_errnoh, AS_OS_WINDOWS },
  /*326*/ { (uint32_t)143, "ESHUTDOWN", AS_DESCR_HANDLE("Отправка после закрытия сокета невозможна", 16892), Src_errnoh, AS_OS_SOLARIS },
  /*327*/ { (uint32_t)144, "ETOOMANYREFS", AS_DESCR_HANDLE("Слишком много ссылок: объединение потоков невозможно", 16971), Src_errnoh, AS_OS_SOLARIS },
  /*328*/ { (uint32_t)145, "ETIMEDOUT", AS_DESCR_HANDLE("Истекло время ожидания соединения", 17070), Src_errnoh, AS_OS_SOLARIS },
  /*329*/ { (uint32_t)146, "ECONNREFUSED", AS_DESCR_HANDLE("В соединении отказано", 17134), Src_errnoh, AS_OS_SOLARIS },
  /*330*/ { (uint32_t)147, "EHOSTDOWN", AS_DESCR_HANDLE("Узел не работает", 17175), Src_errnoh, AS_OS_SOLARIS },
  /*331*/ { (uint32_t)148, "EHOSTUNREACH", AS_DESCR_HANDLE("Маршрут к узлу отсутствует", 17206), Src_errnoh, AS_OS_SOLARIS },
  /*332*/ { (uint32_t)149, "EALREADY", AS_DESCR_HANDLE("Операция уже выполняется", 17256), Src_errnoh, AS_OS_SOLARIS },
  /*333*/ { (uint32_t)150, "EINPROGRESS", AS_DESCR_HANDLE("Операция выполняется", 17303), Src_errnoh, AS_OS_SOLARIS },
  /*334*/ { (uint32_t)151, "ESTALE", AS_DESCR_HANDLE("Устаревший файловый дескриптор NFS", 17343), Src_errnoh, AS_OS_SOLARIS },
  /*335*/ { (uint32_t)256, "ECVCERORR", AS_DESCR_HANDLE("", 17406), Src_errnoh, AS_OS_MAC },
  /*336*/ { (uint32_t)512, "ERESTARTSYS", AS_DESCR_HANDLE("", 17407), Src_errnoh, AS_OS_LINUX },
  /*337*/ { (uint32_t)512, "ECVPERORR", AS_DESCR_HANDLE("", 17408), Src_errnoh, AS_OS_MAC },
  /*338*/ { (uint32_t)513, "ERESTARTNOINTR", AS_DESCR_HANDLE("", 17409), Src_errnoh, AS_OS_LINUX },
  { (uint32_t)0, nullptr }
};

// 
// Item count: 339
// Constant names: 2724 bytes
// Description text: 6699 bytes
// Duplicated names: 276 EAGAIN EDEADLK ENOTBLK ETXTBSY ENOMSG ENAMETOOLONG EINPROGRESS EIDRM ENOLCK EALREADY
// Duplicated constants: 104 EAGAIN ENOTBLK ETXTBSY EDEADLK ENAMETOOLONG ENOLCK ENOSYS ENOTEMPTY ELOOP EWOULDBLOCK
// Constant duplication count: 556
// 

static int Name2CodeHash0List[8] = {106, 110, 167, 179, 187, 193, 315, -1};
static int Name2CodeHash1List[4] = {53, 77, 220, -1};
static int Name2CodeHash2List[5] = {46, 71, 211, 271, -1};
static int Name2CodeHash3List[1] = {-1};
static int Name2CodeHash4List[8] = {16, 115, 119, 138, 269, 274, 331, -1};
static int Name2CodeHash5List[2] = {162, -1};
static int Name2CodeHash6List[9] = {102, 114, 249, 261, 262, 303, 310, 318, -1};
static int Name2CodeHash7List[6] = {25, 155, 157, 241, 319, -1};
static int Name2CodeHash8List[2] = {3, -1};
static int Name2CodeHash9List[7] = {14, 24, 99, 246, 283, 308, -1};
static int Name2CodeHash10List[5] = {52, 204, 227, 307, -1};
static int Name2CodeHash11List[3] = {65, 86, -1};
static int Name2CodeHash12List[9] = {108, 122, 124, 238, 255, 287, 301, 314, -1};
static int Name2CodeHash13List[4] = {69, 89, 291, -1};
static int Name2CodeHash14List[10] = {1, 109, 113, 125, 127, 186, 200, 229, 290, -1};
static int Name2CodeHash15List[3] = {195, 215, -1};
static int Name2CodeHash16List[9] = {87, 164, 173, 223, 234, 242, 254, 300, -1};
static int Name2CodeHash17List[8] = {15, 121, 140, 142, 156, 253, 305, -1};
static int Name2CodeHash18List[1] = {-1};
static int Name2CodeHash19List[6] = {11, 41, 47, 79, 282, -1};
static int Name2CodeHash20List[5] = {225, 247, 294, 311, -1};
static int Name2CodeHash21List[4] = {168, 183, 197, -1};
static int Name2CodeHash22List[8] = {40, 91, 150, 174, 188, 189, 203, -1};
static int Name2CodeHash23List[3] = {57, 80, -1};
static int Name2CodeHash24List[6] = {38, 103, 107, 196, 205, -1};
static int Name2CodeHash25List[7] = {68, 198, 216, 218, 239, 297, -1};
static int Name2CodeHash26List[9] = {4, 7, 22, 72, 219, 259, 289, 320, -1};
static int Name2CodeHash27List[2] = {313, -1};
static int Name2CodeHash28List[9] = {135, 158, 166, 170, 226, 272, 330, 338, -1};
static int Name2CodeHash29List[11] = {50, 74, 84, 118, 231, 248, 250, 256, 298, 317, -1};
static int Name2CodeHash30List[4] = {134, 136, 144, -1};
static int Name2CodeHash31List[9] = {51, 62, 63, 100, 104, 175, 209, 325, -1};
static int Name2CodeHash32List[4] = {36, 202, 288, -1};
static int Name2CodeHash33List[7] = {29, 131, 133, 199, 235, 299, -1};
static int Name2CodeHash34List[5] = {2, 120, 266, 327, -1};
static int Name2CodeHash35List[7] = {21, 105, 252, 265, 284, 312, -1};
static int Name2CodeHash36List[6] = {64, 213, 236, 260, 321, -1};
static int Name2CodeHash37List[8] = {6, 26, 123, 268, 323, 328, 337, -1};
static int Name2CodeHash38List[7] = {9, 23, 28, 76, 95, 336, -1};
static int Name2CodeHash39List[6] = {96, 178, 243, 285, 306, -1};
static int Name2CodeHash40List[7] = {81, 146, 148, 228, 296, 335, -1};
static int Name2CodeHash41List[11] = {39, 75, 117, 153, 222, 264, 280, 292, 326, 334, -1};
static int Name2CodeHash42List[8] = {55, 61, 66, 83, 141, 184, 221, -1};
static int Name2CodeHash43List[10] = {5, 49, 78, 88, 160, 251, 276, 309, 332, -1};
static int Name2CodeHash44List[9] = {30, 31, 32, 45, 273, 278, 324, 333, -1};
static int Name2CodeHash45List[11] = {10, 12, 13, 35, 42, 112, 116, 165, 177, 191, -1};
static int Name2CodeHash46List[5] = {126, 263, 270, 329, -1};
static int Name2CodeHash47List[10] = {20, 27, 34, 60, 169, 182, 210, 233, 279, -1};
static int Name2CodeHash48List[1] = {-1};
static int Name2CodeHash49List[1] = {-1};
static int Name2CodeHash50List[3] = {94, 98, -1};
static int Name2CodeHash51List[3] = {8, 161, -1};
static int Name2CodeHash52List[8] = {17, 18, 19, 43, 67, 214, 295, -1};
static int Name2CodeHash53List[7] = {93, 180, 194, 240, 281, 304, -1};
static int Name2CodeHash54List[11] = {0, 37, 48, 58, 82, 152, 154, 171, 172, 185, -1};
static int Name2CodeHash55List[1] = {-1};
static int Name2CodeHash56List[1] = {-1};
static int Name2CodeHash57List[10] = {85, 128, 130, 190, 208, 244, 257, 286, 322, -1};
static int Name2CodeHash58List[3] = {149, 151, -1};
static int Name2CodeHash59List[9] = {44, 54, 111, 132, 176, 258, 275, 316, -1};
static int Name2CodeHash60List[14] = {73, 90, 92, 143, 145, 147, 201, 224, 232, 237, 245, 293, 302, -1};
static int Name2CodeHash61List[10] = {59, 70, 129, 159, 192, 206, 212, 217, 277, -1};
static int Name2CodeHash62List[1] = {-1};
static int Name2CodeHash63List[12] = {33, 56, 97, 101, 137, 139, 163, 181, 207, 230, 267, -1};

static const int* Name2CodeHashTable[] =
{
  Name2CodeHash0List,
  Name2CodeHash1List,
  Name2CodeHash2List,
  Name2CodeHash3List,
  Name2CodeHash4List,
  Name2CodeHash5List,
  Name2CodeHash6List,
  Name2CodeHash7List,
  Name2CodeHash8List,
  Name2CodeHash9List,
  Name2CodeHash10List,
  Name2CodeHash11List,
  Name2CodeHash12List,
  Name2CodeHash13List,
  Name2CodeHash14List,
  Name2CodeHash15List,
  Name2CodeHash16List,
  Name2CodeHash17List,
  Name2CodeHash18List,
  Name2CodeHash19List,
  Name2CodeHash20List,
  Name2CodeHash21List,
  Name2CodeHash22List,
  Name2CodeHash23List,
  Name2CodeHash24List,
  Name2CodeHash25List,
  Name2CodeHash26List,
  Name2CodeHash27List,
  Name2CodeHash28List,
  Name2CodeHash29List,
  Name2CodeHash30List,
  Name2CodeHash31List,
  Name2CodeHash32List,
  Name2CodeHash33List,
  Name2CodeHash34List,
  Name2CodeHash35List,
  Name2CodeHash36List,
  Name2CodeHash37List,
  Name2CodeHash38List,
  Name2CodeHash39List,
  Name2CodeHash40List,
  Name2CodeHash41List,
  Name2CodeHash42List,
  Name2CodeHash43List,
  Name2CodeHash44List,
  Name2CodeHash45List,
  Name2CodeHash46List,
  Name2CodeHash47List,
  Name2CodeHash48List,
  Name2CodeHash49List,
  Name2CodeHash50List,
  Name2CodeHash51List,
  Name2CodeHash52List,
  Name2CodeHash53List,
  Name2CodeHash54List,
  Name2CodeHash55List,
  Name2CodeHash56List,
  Name2CodeHash57List,
  Name2CodeHash58List,
  Name2CodeHash59List,
  Name2CodeHash60List,
  Name2CodeHash61List,
  Name2CodeHash62List,
  Name2CodeHash63List
};

static int Code2NameHash0List[1] = {-1};
static int Code2NameHash1List[1] = {-1};
static int Code2NameHash2List[1] = {-1};
static int Code2NameHash3List[1] = {-1};
static int Code2NameHash4List[1] = {-1};
static int Code2NameHash5List[1] = {-1};
static int Code2NameHash6List[1] = {-1};
static int Code2NameHash7List[1] = {-1};
static int Code2NameHash8List[1] = {-1};
static int Code2NameHash9List[1] = {-1};
static int Code2NameHash10List[1] = {-1};
static int Code2NameHash11List[1] = {-1};
static int Code2NameHash12List[1] = {-1};
static int Code2NameHash13List[1] = {-1};
static int Code2NameHash14List[2] = {0, -1};
static int Code2NameHash15List[2] = {1, -1};
static int Code2NameHash16List[3] = {2, 20, -1};
static int Code2NameHash17List[3] = {3, 21, -1};
static int Code2NameHash18List[3] = {4, 22, -1};
static int Code2NameHash19List[3] = {5, 23, -1};
static int Code2NameHash20List[4] = {6, 24, 38, -1};
static int Code2NameHash21List[4] = {7, 25, 39, -1};
static int Code2NameHash22List[4] = {8, 26, 40, -1};
static int Code2NameHash23List[8] = {27, 41, 42, 43, 86, 87, 88, -1};
static int Code2NameHash24List[9] = {28, 44, 45, 46, 47, 89, 90, 91, -1};
static int Code2NameHash25List[8] = {29, 48, 49, 50, 92, 93, 94, -1};
static int Code2NameHash26List[8] = {51, 52, 53, 54, 95, 96, 97, -1};
static int Code2NameHash27List[12] = {55, 56, 57, 58, 98, 99, 100, 134, 135, 136, 335, -1};
static int Code2NameHash28List[11] = {59, 60, 61, 62, 101, 102, 103, 137, 138, 139, -1};
static int Code2NameHash29List[11] = {63, 64, 65, 66, 104, 105, 106, 140, 141, 142, -1};
static int Code2NameHash30List[11] = {9, 107, 108, 109, 143, 144, 145, 180, 181, 182, -1};
static int Code2NameHash31List[14] = {10, 11, 12, 13, 110, 111, 112, 146, 147, 148, 183, 184, 185, -1};
static int Code2NameHash32List[11] = {14, 113, 114, 115, 149, 150, 151, 186, 187, 188, -1};
static int Code2NameHash33List[11] = {15, 30, 31, 32, 152, 153, 154, 189, 190, 191, -1};
static int Code2NameHash34List[12] = {16, 33, 155, 156, 157, 192, 193, 194, 228, 229, 230, -1};
static int Code2NameHash35List[14] = {17, 18, 19, 34, 158, 159, 160, 195, 196, 197, 231, 232, 233, -1};
static int Code2NameHash36List[11] = {35, 161, 162, 163, 198, 199, 200, 234, 235, 236, -1};
static int Code2NameHash37List[16] = {36, 67, 68, 69, 70, 201, 202, 203, 237, 238, 239, 272, 273, 336, 337, -1};
static int Code2NameHash38List[14] = {37, 71, 72, 73, 204, 205, 206, 240, 241, 242, 274, 275, 338, -1};
static int Code2NameHash39List[12] = {74, 75, 76, 207, 208, 209, 243, 244, 245, 276, 277, -1};
static int Code2NameHash40List[12] = {77, 78, 79, 116, 117, 118, 246, 247, 248, 278, 279, -1};
static int Code2NameHash41List[14] = {80, 81, 82, 119, 120, 121, 249, 250, 251, 280, 281, 306, 307, -1};
static int Code2NameHash42List[14] = {83, 84, 85, 122, 123, 124, 252, 253, 254, 282, 283, 308, 309, -1};
static int Code2NameHash43List[11] = {125, 126, 127, 255, 256, 257, 284, 285, 310, 311, -1};
static int Code2NameHash44List[12] = {128, 129, 130, 164, 165, 166, 286, 287, 312, 313, 327, -1};
static int Code2NameHash45List[12] = {131, 132, 133, 167, 168, 288, 289, 290, 314, 315, 328, -1};
static int Code2NameHash46List[9] = {169, 170, 291, 292, 293, 316, 317, 329, -1};
static int Code2NameHash47List[10] = {171, 172, 173, 210, 211, 212, 318, 319, 330, -1};
static int Code2NameHash48List[9] = {174, 175, 176, 213, 214, 215, 320, 331, -1};
static int Code2NameHash49List[9] = {177, 178, 179, 216, 217, 218, 321, 332, -1};
static int Code2NameHash50List[6] = {219, 220, 221, 322, 333, -1};
static int Code2NameHash51List[9] = {222, 223, 224, 258, 259, 260, 261, 334, -1};
static int Code2NameHash52List[6] = {225, 226, 227, 262, 263, -1};
static int Code2NameHash53List[3] = {264, 265, -1};
static int Code2NameHash54List[5] = {266, 267, 294, 295, -1};
static int Code2NameHash55List[5] = {268, 269, 296, 297, -1};
static int Code2NameHash56List[5] = {270, 271, 298, 299, -1};
static int Code2NameHash57List[3] = {300, 301, -1};
static int Code2NameHash58List[4] = {302, 303, 323, -1};
static int Code2NameHash59List[4] = {304, 305, 324, -1};
static int Code2NameHash60List[2] = {325, -1};
static int Code2NameHash61List[1] = {-1};
static int Code2NameHash62List[1] = {-1};
static int Code2NameHash63List[2] = {326, -1};

static const int* Code2NameHashTable[] =
{
  Code2NameHash0List,
  Code2NameHash1List,
  Code2NameHash2List,
  Code2NameHash3List,
  Code2NameHash4List,
  Code2NameHash5List,
  Code2NameHash6List,
  Code2NameHash7List,
  Code2NameHash8List,
  Code2NameHash9List,
  Code2NameHash10List,
  Code2NameHash11List,
  Code2NameHash12List,
  Code2NameHash13List,
  Code2NameHash14List,
  Code2NameHash15List,
  Code2NameHash16List,
  Code2NameHash17List,
  Code2NameHash18List,
  Code2NameHash19List,
  Code2NameHash20List,
  Code2NameHash21List,
  Code2NameHash22List,
  Code2NameHash23List,
  Code2NameHash24List,
  Code2NameHash25List,
  Code2NameHash26List,
  Code2NameHash27List,
  Code2NameHash28List,
  Code2NameHash29List,
  Code2NameHash30List,
  Code2NameHash31List,
  Code2NameHash32List,
  Code2NameHash33List,
  Code2NameHash34List,
  Code2NameHash35List,
  Code2NameHash36List,
  Code2NameHash37List,
  Code2NameHash38List,
  Code2NameHash39List,
  Code2NameHash40List,
  Code2NameHash41List,
  Code2NameHash42List,
  Code2NameHash43List,
  Code2NameHash44List,
  Code2NameHash45List,
  Code2NameHash46List,
  Code2NameHash47List,
  Code2NameHash48List,
  Code2NameHash49List,
  Code2NameHash50List,
  Code2NameHash51List,
  Code2NameHash52List,
  Code2NameHash53List,
  Code2NameHash54List,
  Code2NameHash55List,
  Code2NameHash56List,
  Code2NameHash57List,
  Code2NameHash58List,
  Code2NameHash59List,
  Code2NameHash60List,
  Code2NameHash61List,
  Code2NameHash62List,
  Code2NameHash63List
};


void ERRNOGetTables(TABLES& t)
{
  t.Items = Status;
  t.Code2name = Code2NameHashTable;
  t.Name2code = Name2CodeHashTable;
#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
  t.DescrGz = CompressedDescr;
  t.DescrGzLen = sizeof(CompressedDescr);
  t.DescrLen = DescrBlockSize;
#else
  t.DescrGz = nullptr;
  t.DescrGzLen = 0;
  t.DescrLen = 0;
#endif // AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
}

#else
void ERRNORefModule() {}
#endif  // #if AS_BUILD_AS_ERRNO


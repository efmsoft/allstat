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
static int DescrBlockSize = 10181;
static const uint8_t CompressedDescr[] =
{
  // Uncompressed size: 10181, Compressed size: 2501, Rate: 4.1
  0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xc5, 0x5a, 0xcd, 0x6e, 0xe4, 0xb8, 
  0x11, 0xd6, 0xa3, 0xe8, 0x98, 0x00, 0x9b, 0x1e, 0x20, 0xb9, 0xe5, 0x36, 0xf1, 0xd8, 0x88, 0x01, 
  0x8f, 0x6d, 0xb8, 0x77, 0x17, 0x7b, 0xad, 0x96, 0xd8, 0x6d, 0x7a, 0x29, 0x51, 0x4b, 0x4a, 0x9d, 
  0xb5, 0xdf, 0x66, 0x8e, 0x39, 0xcc, 0x21, 0x98, 0xdb, 0x5c, 0xfb, 0xc5, 0x52, 0x55, 0xa4, 0x24, 
  0x52, 0xad, 0x3f, 0xf7, 0x06, 0x88, 0x31, 0xc0, 0xb8, 0x5b, 0x64, 0xb1, 0x58, 0xf5, 0xd5, 0x57, 
  0x3f, 0xf2, 0x43, 0x25, 0x0c, 0x64, 0xf2, 0xf4, 0xad, 0x4c, 0x4b, 0x9d, 0xe2, 0x87, 0x42, 0xd6, 
  0x32, 0x87, 0xe4, 0x5a, 0xa5, 0x60, 0xb2, 0x67, 0x79, 0xd4, 0xa9, 0x4e, 0x73, 0x69, 0x44, 0x56, 
  0x6b, 0x23, 0x35, 0x2d, 0x12, 0xbf, 0x4b, 0x5b, 0x0b, 0x5a, 0x51, 0x19, 0x9d, 0x09, 0x1b, 0x7e, 
  0x79, 0xa7, 0xa0, 0x80, 0x1c, 0x52, 0x50, 0xa9, 0xa5, 0x2f, 0x0a, 0x48, 0x65, 0x59, 0x0b, 0x63, 
  0x9a, 0xa2, 0x62, 0xb1, 0xc6, 0x68, 0x93, 0xe6, 0x22, 0x15, 0x65, 0x6d, 0x70, 0xe1, 0x07, 0x0b, 
  0xca, 0x1f, 0x97, 0x4b, 0x5b, 0x69, 0x8b, 0xa7, 0xf3, 0x91, 0x0a, 0xdc, 0xa9, 0x9d, 0x6a, 0xee, 
  0x80, 0x32, 0xb9, 0x83, 0x54, 0xe1, 0x6f, 0x40, 0x42, 0xc0, 0x1c, 0x9a, 0x02, 0x25, 0x69, 0x9b, 
  0x0a, 0x8b, 0x5f, 0x14, 0x60, 0x25, 0xe4, 0xb4, 0xd9, 0x1c, 0x20, 0xb9, 0xd1, 0xa6, 0x80, 0x5a, 
  0xbb, 0x85, 0xee, 0x2a, 0xe2, 0x45, 0x64, 0x4d, 0x0d, 0x3b, 0x25, 0x48, 0xe4, 0xf1, 0xf4, 0x05, 
  0x0f, 0xd7, 0xc9, 0x27, 0x61, 0x33, 0x23, 0xab, 0xda, 0x69, 0xd6, 0xae, 0x0d, 0x16, 0xdc, 0xeb, 
  0xf4, 0x19, 0x5e, 0xdb, 0xeb, 0xda, 0xd4, 0xa2, 0x94, 0x32, 0x07, 0xb4, 0x87, 0x4d, 0x9e, 0xf0, 
  0x77, 0xe3, 0x6c, 0xc0, 0x37, 0x28, 0x25, 0x49, 0xc7, 0x9b, 0x57, 0xda, 0x80, 0x22, 0xed, 0x44, 
  0xb2, 0xc5, 0xfb, 0x1e, 0x65, 0x7d, 0xfa, 0x96, 0x36, 0xa5, 0xb3, 0xc7, 0x4e, 0xe9, 0xdf, 0x1a, 
  0xc1, 0xba, 0x19, 0x27, 0x60, 0x9d, 0x24, 0x52, 0xc5, 0x8a, 0xb4, 0x6a, 0x04, 0x69, 0x6a, 0xe5, 
  0xa1, 0x04, 0x93, 0x16, 0xa2, 0x40, 0xdf, 0x40, 0xf2, 0x48, 0xde, 0xb3, 0x24, 0xb4, 0x14, 0x07, 
  0xa0, 0x8b, 0x45, 0x16, 0x74, 0xb7, 0x01, 0xd2, 0xc6, 0x88, 0xdf, 0x1a, 0x29, 0x8c, 0x20, 0x7d, 
  0x42, 0xbb, 0xa3, 0x50, 0xa7, 0x99, 0xfd, 0x9f, 0xae, 0xfa, 0x14, 0xb9, 0xd6, 0x5f, 0x38, 0xd5, 
  0x59, 0x53, 0x91, 0x96, 0x01, 0xd4, 0x5e, 0xa1, 0x05, 0x52, 0x78, 0xcf, 0xcc, 0x08, 0xbc, 0x25, 
  0x8a, 0x17, 0xa5, 0x82, 0xcc, 0x61, 0x47, 0x84, 0x67, 0x59, 0xfa, 0x50, 0x4b, 0x02, 0xc2, 0x10, 
  0x49, 0x78, 0x6f, 0xc8, 0x11, 0xd3, 0xb8, 0x8b, 0x40, 0xa3, 0x3b, 0xb8, 0xd3, 0x42, 0xbd, 0x7b, 
  0x11, 0xb5, 0x83, 0xaf, 0x75, 0xea, 0xb7, 0x38, 0x0f, 0x9e, 0x9e, 0x3d, 0xfa, 0xd8, 0xa2, 0x2e, 
  0x84, 0xc8, 0x3f, 0x11, 0x1f, 0x1d, 0x00, 0x6d, 0x7b, 0x21, 0xfc, 0x65, 0x87, 0xb6, 0x61, 0x80, 
  0xa2, 0xfa, 0x5d, 0x50, 0x2c, 0x2e, 0x27, 0x98, 0xf7, 0xba, 0xa6, 0x52, 0x67, 0xb5, 0xf2, 0x7a, 
  0x02, 0xc2, 0xb0, 0x92, 0x14, 0x64, 0x15, 0x18, 0xa0, 0x6b, 0x45, 0xb6, 0x40, 0xf5, 0xce, 0xb0, 
  0xde, 0x5a, 0xfa, 0xb2, 0x47, 0x81, 0x7f, 0xa2, 0x28, 0x3b, 0x18, 0x28, 0x73, 0xf6, 0x14, 0x3a, 
  0x39, 0x27, 0x4d, 0x2a, 0x54, 0x37, 0x02, 0xaf, 0xbb, 0x74, 0xa8, 0xdd, 0x23, 0xfe, 0x82, 0x8b, 
  0x4a, 0x28, 0xe4, 0xc0, 0x84, 0x7e, 0xb1, 0x3f, 0x2a, 0xd9, 0x7a, 0xfa, 0xe8, 0x23, 0x92, 0xce, 
  0x4e, 0xad, 0x56, 0x18, 0xdf, 0xe8, 0x8a, 0xc6, 0x9c, 0x59, 0xd1, 0xc1, 0xc3, 0x26, 0x57, 0x50, 
  0x22, 0xab, 0xbc, 0x79, 0xdb, 0x19, 0x5d, 0x7b, 0x3a, 0x6b, 0xdd, 0x86, 0x26, 0x3b, 0x7d, 0x49, 
  0xf7, 0x0d, 0x9a, 0x17, 0xb7, 0xa3, 0x7e, 0xba, 0x90, 0xa5, 0x64, 0xc4, 0x22, 0xed, 0xec, 0x9b, 
  0xd2, 0x6d, 0x44, 0xf2, 0x10, 0xc5, 0xe9, 0x4b, 0x2d, 0x33, 0xde, 0x6f, 0x84, 0x6d, 0x54, 0x4d, 
  0x17, 0xef, 0x1f, 0xb0, 0xfe, 0x1d, 0x4e, 0x8d, 0xa8, 0x70, 0x11, 0x1e, 0x01, 0x86, 0x02, 0x03, 
  0xfd, 0x94, 0x37, 0x99, 0x34, 0xa7, 0xaf, 0xf0, 0x87, 0xe3, 0xde, 0x33, 0x50, 0x29, 0xcb, 0xc3, 
  0xe9, 0x3b, 0xaa, 0x26, 0x4a, 0x0b, 0x2f, 0x82, 0xb5, 0xaf, 0x65, 0xa5, 0xc9, 0x2c, 0x68, 0xd6, 
  0xda, 0xbb, 0xab, 0xd4, 0xc5, 0xce, 0xb8, 0xa7, 0xa3, 0x9e, 0x23, 0x7e, 0xd4, 0x03, 0x88, 0x39, 
  0xa3, 0xa0, 0x0f, 0x58, 0x99, 0xe4, 0x16, 0x49, 0xa4, 0x96, 0x7b, 0xbc, 0x7b, 0x8e, 0xb4, 0x28, 
  0x94, 0x44, 0x13, 0x91, 0xf4, 0x56, 0x13, 0x7f, 0x11, 0xeb, 0x6e, 0x72, 0x40, 0x67, 0x19, 0x17, 
  0x86, 0x5e, 0xff, 0x21, 0x82, 0x5f, 0x61, 0x78, 0xc2, 0xfd, 0xe9, 0x7b, 0x21, 0x0c, 0x9b, 0x22, 
  0x23, 0x87, 0x75, 0x0e, 0x49, 0x11, 0x57, 0xa8, 0xde, 0x4d, 0xeb, 0x07, 0xb4, 0x8b, 0x2c, 0x2a, 
  0x25, 0xc8, 0x12, 0x08, 0xfb, 0xe4, 0xa1, 0x97, 0xca, 0x80, 0xc8, 0x7e, 0x15, 0x35, 0xfe, 0xb7, 
  0x73, 0x14, 0xe4, 0xa3, 0x16, 0x95, 0xeb, 0xe3, 0xda, 0xad, 0x49, 0xee, 0xe5, 0x11, 0x2d, 0xf2, 
  0x57, 0xf6, 0x99, 0x2c, 0x33, 0x83, 0x9a, 0xbe, 0xf1, 0x9d, 0x98, 0x33, 0xa2, 0x14, 0xc7, 0xaa, 
  0x1e, 0x21, 0x3b, 0x7d, 0xd5, 0x03, 0x8e, 0x8b, 0xf2, 0x52, 0x4e, 0x46, 0x26, 0xe6, 0xd1, 0x5e, 
  0xf8, 0xdf, 0xf0, 0x33, 0x66, 0x29, 0x62, 0x04, 0x66, 0xfd, 0x32, 0xd3, 0x94, 0xe8, 0xf0, 0xa8, 
  0x11, 0xa0, 0xa2, 0x16, 0xc5, 0xee, 0xf4, 0x0d, 0x3d, 0xe7, 0x78, 0xab, 0xf5, 0xea, 0x88, 0xaf, 
  0x5a, 0xe9, 0x46, 0x20, 0x52, 0x33, 0xc9, 0x5a, 0xc7, 0x06, 0xb6, 0x2d, 0xdd, 0x02, 0x01, 0x8e, 
  0xc4, 0x31, 0x30, 0x72, 0xc6, 0x61, 0xad, 0x33, 0x8a, 0x1b, 0xbc, 0x59, 0xa6, 0x0d, 0x62, 0x14, 
  0x9d, 0x44, 0x71, 0xd5, 0xaf, 0x69, 0x2d, 0xd4, 0xfb, 0xc4, 0x73, 0xed, 0xc0, 0x29, 0xef, 0x01, 
  0xe2, 0x63, 0x78, 0x6e, 0x8f, 0x0c, 0x52, 0x8d, 0xad, 0xa2, 0x15, 0x63, 0x8b, 0xb6, 0x46, 0x2a, 
  0x3a, 0xe3, 0xe3, 0x12, 0x74, 0x08, 0x5f, 0x74, 0x0a, 0x8b, 0xd1, 0x01, 0xcc, 0xf2, 0x41, 0xb2, 
  0x26, 0x0d, 0xc9, 0x5b, 0x28, 0xcd, 0x34, 0x4c, 0x17, 0xe9, 0xd5, 0xf6, 0x36, 0xd4, 0x63, 0x09, 
  0x80, 0x3f, 0x46, 0xb6, 0x89, 0xcf, 0xf0, 0x48, 0xea, 0x9c, 0x3d, 0x05, 0xad, 0x87, 0xa8, 0xbc, 
  0xf2, 0xfb, 0x21, 0xb9, 0x42, 0xfb, 0xcb, 0x0e, 0x42, 0x21, 0x33, 0x6c, 0xce, 0x81, 0x74, 0x83, 
  0x5c, 0xa9, 0x24, 0x44, 0xae, 0xb4, 0x91, 0xb8, 0xb5, 0x31, 0xb9, 0x19, 0xc3, 0x11, 0xc2, 0x68, 
  0x3f, 0x7b, 0x82, 0x4f, 0x9d, 0xc1, 0x22, 0x1f, 0x01, 0xe8, 0x21, 0x1b, 0xde, 0x10, 0xad, 0x98, 
  0x09, 0x45, 0x21, 0xba, 0x88, 0xa3, 0xbb, 0x28, 0x8c, 0x42, 0x72, 0x68, 0xec, 0xa4, 0xd5, 0xde, 
  0x0b, 0x9c, 0xb1, 0x5a, 0x29, 0xae, 0x2b, 0x3b, 0xb4, 0xa2, 0x4b, 0x1a, 0x5d, 0xfb, 0xcb, 0xd9, 
  0x8c, 0xca, 0xcd, 0x4c, 0xe4, 0x81, 0x6d, 0x97, 0xe1, 0x84, 0x57, 0x32, 0x22, 0xef, 0xf5, 0xe0, 
  0xd8, 0xc4, 0x9c, 0x07, 0xc9, 0x2d, 0xf9, 0x37, 0x83, 0x62, 0x27, 0xe3, 0xaa, 0x72, 0x08, 0xa2, 
  0x50, 0x42, 0x0a, 0x19, 0x32, 0x04, 0x0b, 0x8e, 0xcb, 0x53, 0xaf, 0x72, 0x93, 0x87, 0xa2, 0x26, 
  0x4e, 0xf0, 0x02, 0xfb, 0x0a, 0x1c, 0x2b, 0x50, 0x34, 0x00, 0x59, 0xe8, 0x77, 0x0f, 0xbe, 0x1d, 
  0x65, 0x5e, 0xce, 0x4f, 0x1e, 0x12, 0xb1, 0x30, 0xa5, 0x44, 0xa9, 0xd7, 0x68, 0x80, 0xbe, 0xb1, 
  0x7a, 0x5f, 0xff, 0x0b, 0x0c, 0x63, 0xe8, 0xa8, 0x33, 0x77, 0x96, 0x3f, 0xbb, 0xea, 0xc0, 0x1e, 
  0x9e, 0x3f, 0x64, 0x13, 0x28, 0x75, 0x2e, 0x42, 0x9b, 0x9e, 0xab, 0x72, 0x17, 0xaa, 0x8f, 0xa0, 
  0xea, 0x91, 0x8c, 0xf5, 0x10, 0xb3, 0x03, 0xba, 0x0e, 0xcb, 0xc3, 0x82, 0xea, 0xcc, 0x02, 0xc1, 
  0x91, 0x5c, 0x9d, 0xbe, 0xe5, 0xf2, 0xa0, 0x27, 0x35, 0x5f, 0xd2, 0xc1, 0x3f, 0x9f, 0xac, 0x6e, 
  0x76, 0xa7, 0xef, 0x7b, 0x61, 0x92, 0x27, 0x28, 0x09, 0x14, 0x41, 0x9d, 0xbd, 0x74, 0x30, 0x9b, 
  0x8c, 0xa9, 0xa5, 0xc3, 0x7f, 0x8f, 0xdd, 0xdb, 0xb0, 0x5a, 0x40, 0x6e, 0x6a, 0xb9, 0x3d, 0x2c, 
  0x91, 0xce, 0x8f, 0xec, 0x45, 0x8e, 0x84, 0xc3, 0x48, 0x3f, 0x94, 0x73, 0x60, 0xe2, 0x51, 0x67, 
  0x60, 0x5a, 0x38, 0x3a, 0x0c, 0x2d, 0x51, 0x1e, 0x25, 0x10, 0x32, 0x6c, 0xd5, 0x9c, 0xfe, 0xcd, 
  0xec, 0x93, 0xa1, 0xcf, 0xdd, 0x06, 0x9f, 0x58, 0x82, 0x66, 0x91, 0xcb, 0x57, 0x51, 0x53, 0xf7, 
  0xc4, 0x21, 0xdc, 0x9e, 0xb4, 0x97, 0x5c, 0xb5, 0x9d, 0xbe, 0xad, 0x56, 0xf4, 0x93, 0x4f, 0x92, 
  0x60, 0xd1, 0xd7, 0xe8, 0x03, 0xcc, 0xb6, 0x12, 0xec, 0xdf, 0x07, 0x35, 0x19, 0x97, 0x82, 0x26, 
  0xb5, 0x15, 0xba, 0x80, 0x93, 0x0f, 0xb1, 0x59, 0x1e, 0x9f, 0x1d, 0xef, 0xc0, 0xba, 0x17, 0x43, 
  0xd7, 0x8c, 0xb4, 0x12, 0xae, 0x9c, 0xd8, 0xab, 0xe6, 0x45, 0xa7, 0xdb, 0x1f, 0x9f, 0xae, 0x3f, 
  0x7e, 0xa6, 0x2c, 0x0f, 0x07, 0x4d, 0xbd, 0x1d, 0xa7, 0x40, 0xaa, 0xda, 0x98, 0xf6, 0x6c, 0xe5, 
  0x09, 0x4f, 0x0d, 0xbb, 0x8e, 0x65, 0x99, 0x1e, 0x72, 0x39, 0xd4, 0x31, 0x7f, 0xa7, 0x7f, 0xba, 
  0xfe, 0xb0, 0xa5, 0x04, 0xe3, 0xc5, 0xff, 0x99, 0x12, 0x89, 0x8f, 0x05, 0x54, 0xfb, 0x19, 0xde, 
  0xa0, 0x67, 0xac, 0x15, 0xbb, 0xa9, 0x48, 0xe0, 0x32, 0x93, 0x93, 0x95, 0xc1, 0x6d, 0x18, 0x3c, 
  0x95, 0x34, 0x70, 0xde, 0xd0, 0x94, 0x44, 0x56, 0x5c, 0x98, 0x4c, 0x55, 0x2f, 0x93, 0x92, 0xda, 
  0x06, 0xa1, 0xec, 0x4a, 0x5e, 0x92, 0xe2, 0xae, 0xba, 0x5d, 0x5f, 0xae, 0x2e, 0x8a, 0xa1, 0x1a, 
  0xad, 0x0a, 0x12, 0x01, 0x86, 0xa7, 0x62, 0x02, 0xa4, 0x87, 0xcf, 0xda, 0xd6, 0xe7, 0xdc, 0xac, 
  0xe7, 0xf7, 0x3d, 0x02, 0x9e, 0xe8, 0x30, 0x27, 0x4b, 0x44, 0x8d, 0x82, 0x9e, 0x2f, 0x28, 0x19, 
  0x18, 0xec, 0x94, 0xf0, 0x03, 0xa2, 0x8e, 0x9c, 0x4f, 0x47, 0x8c, 0x6f, 0x89, 0x9a, 0x49, 0x4f, 
  0x4b, 0xf3, 0x35, 0xe7, 0xc4, 0x0e, 0x9f, 0x4c, 0x11, 0xab, 0xcf, 0xd1, 0x60, 0xe5, 0xcc, 0x5d, 
  0xed, 0xa8, 0x62, 0x7e, 0x53, 0x37, 0x8d, 0x81, 0xfc, 0x88, 0x6d, 0xa7, 0xb4, 0x62, 0x28, 0xa7, 
  0xb1, 0x8d, 0x1b, 0x73, 0x8c, 0x2c, 0xed, 0xbe, 0xb2, 0xa6, 0xd0, 0x4d, 0x59, 0x4f, 0xa6, 0xd0, 
  0xb3, 0x85, 0xdd, 0x17, 0x99, 0x2e, 0x1a, 0x64, 0xef, 0xb6, 0x9a, 0x47, 0x36, 0xa3, 0x10, 0x27, 
  0x0e, 0x2f, 0x8f, 0x64, 0x86, 0xb8, 0xf2, 0x0b, 0xf8, 0xe0, 0xfe, 0x66, 0x8b, 0x06, 0x42, 0x5a, 
  0x15, 0xb5, 0x5e, 0x2f, 0xae, 0x5b, 0xd8, 0x95, 0x0d, 0x53, 0x30, 0x77, 0x26, 0xb7, 0x2d, 0x16, 
  0x9a, 0x1a, 0xc6, 0x36, 0x6f, 0x5d, 0xed, 0x56, 0xba, 0xc9, 0x4e, 0x54, 0x8e, 0x23, 0xed, 0xa6, 
  0xc5, 0xe9, 0xbb, 0xc2, 0xa2, 0x98, 0xe4, 0x59, 0x50, 0xbe, 0xab, 0x0f, 0x0a, 0x88, 0xa7, 0xc7, 
  0x2b, 0x4f, 0x00, 0xc1, 0x68, 0x06, 0x69, 0xb4, 0x80, 0x4a, 0xb8, 0xec, 0xe9, 0x27, 0x3b, 0xdc, 
  0xcd, 0x50, 0xe9, 0x23, 0x4a, 0xdf, 0x4c, 0x76, 0xf4, 0x9c, 0x39, 0x14, 0xb3, 0x6e, 0x14, 0xd6, 
  0x88, 0x9e, 0x3d, 0xf5, 0xa5, 0xa8, 0xe7, 0xd3, 0xcd, 0x36, 0xf9, 0x59, 0x18, 0xdb, 0x66, 0x5e, 
  0x3a, 0x0e, 0x6b, 0x53, 0x6a, 0x00, 0x32, 0xd7, 0x12, 0x5b, 0x61, 0x8e, 0x94, 0xf2, 0x7b, 0xf8, 
  0xb5, 0xf2, 0xfa, 0x66, 0x84, 0x7b, 0x06, 0x74, 0x82, 0x28, 0x85, 0xa3, 0x14, 0x2a, 0xbb, 0xb1, 
  0xf5, 0x2f, 0x3a, 0xfd, 0x83, 0x5c, 0xf9, 0x6e, 0x83, 0xfc, 0x0c, 0x8a, 0x8d, 0x1a, 0xcf, 0x14, 
  0xfc, 0x64, 0xa3, 0x6f, 0x4f, 0x3c, 0x97, 0x09, 0xcc, 0x11, 0x84, 0xdb, 0xe0, 0x56, 0x9c, 0x57, 
  0x9c, 0x3a, 0xf1, 0xdd, 0x3c, 0xa9, 0x38, 0xfb, 0x62, 0x62, 0x27, 0xa3, 0x04, 0x91, 0x4d, 0xf1, 
  0x91, 0xcb, 0xf3, 0x21, 0x44, 0x7b, 0x72, 0x15, 0x5c, 0x92, 0x63, 0x75, 0x74, 0x46, 0xd8, 0x57, 
  0xad, 0x65, 0x9b, 0x56, 0xce, 0x2b, 0x8b, 0xbe, 0x2c, 0x0f, 0xba, 0xe3, 0xd0, 0x52, 0x4a, 0x08, 
  0x1e, 0x6f, 0xb5, 0x26, 0xf7, 0xbd, 0x6b, 0x97, 0x91, 0xe8, 0xf9, 0xa0, 0x62, 0x66, 0x7c, 0x12, 
  0xf7, 0xa4, 0x5c, 0x1d, 0x71, 0x7a, 0x9f, 0xea, 0x97, 0xef, 0x3c, 0x51, 0x8d, 0x8c, 0x48, 0xa3, 
  0x0a, 0x19, 0x0b, 0xce, 0x1c, 0x15, 0x01, 0xf6, 0xdc, 0x0e, 0xd5, 0x94, 0xba, 0x16, 0x19, 0xd5, 
  0x5b, 0x05, 0x5a, 0x85, 0x2a, 0xf0, 0x14, 0x4b, 0x09, 0x61, 0x81, 0x66, 0x8d, 0xdc, 0x1c, 0x61, 
  0xd2, 0x3e, 0x4f, 0xd5, 0x54, 0xb1, 0xfb, 0x11, 0x95, 0x9e, 0xf5, 0x2f, 0xa8, 0x02, 0x79, 0x09, 
  0x8b, 0x72, 0xdb, 0x96, 0x52, 0x91, 0xbb, 0x23, 0x13, 0xad, 0x51, 0x2e, 0x87, 0xd3, 0x7f, 0x20, 
  0xa4, 0x1b, 0x68, 0x68, 0x77, 0xcb, 0x07, 0x51, 0xa6, 0x49, 0x5d, 0xad, 0xcb, 0xa4, 0x24, 0x1c, 
  0x96, 0x24, 0xb5, 0x64, 0xde, 0x83, 0x1d, 0x64, 0xc8, 0x78, 0xb6, 0x35, 0xfa, 0x46, 0xc9, 0x1d, 
  0xcb, 0xdd, 0xe8, 0xa6, 0xf6, 0xbe, 0x6f, 0x0f, 0x1d, 0x0c, 0x42, 0xbb, 0xa3, 0x91, 0xb7, 0x16, 
  0xe7, 0xcb, 0xdd, 0x20, 0x2f, 0xaa, 0x14, 0xc2, 0xeb, 0x13, 0x85, 0xbf, 0x41, 0x6f, 0x48, 0xac, 
  0x78, 0x7a, 0x1b, 0xd8, 0xc0, 0x08, 0x67, 0xf3, 0x4f, 0x1f, 0xd6, 0x15, 0x1c, 0x7c, 0xaf, 0x37, 
  0x0f, 0xa2, 0xa8, 0xae, 0x73, 0xa3, 0x40, 0xe3, 0xf3, 0x14, 0xf0, 0x24, 0x6a, 0xda, 0xfe, 0x9d, 
  0xdd, 0x23, 0x05, 0x7e, 0x70, 0x55, 0xf9, 0x0b, 0x16, 0x07, 0x0a, 0x3f, 0xec, 0x31, 0xec, 0x5d, 
  0x9f, 0x89, 0x1c, 0xa7, 0x2e, 0xc7, 0xdf, 0x06, 0xcd, 0x93, 0x35, 0x5c, 0xf0, 0xf1, 0xa0, 0xf9, 
  0xb5, 0x16, 0x36, 0x2c, 0x84, 0xff, 0x0f, 0xb8, 0xdb, 0xf0, 0xab, 0x89, 0xf9, 0xf7, 0x1f, 0xd4, 
  0x70, 0xf5, 0x2d, 0x8b, 0xa1, 0x24, 0x3a, 0xfa, 0x46, 0x62, 0x25, 0xea, 0x36, 0x41, 0xea, 0x8b, 
  0x66, 0x9e, 0x6d, 0x55, 0xd4, 0x8e, 0x30, 0xae, 0x1e, 0x7f, 0x3a, 0x9f, 0xb4, 0xf6, 0xa3, 0xde, 
  0x0b, 0xb1, 0xb6, 0x99, 0xac, 0x16, 0x50, 0xff, 0x63, 0x90, 0x79, 0xd4, 0xa4, 0x3f, 0x29, 0xb9, 
  0x20, 0x6f, 0xcb, 0x7c, 0xa0, 0xc3, 0xfb, 0xa0, 0xb7, 0xb9, 0x7c, 0x26, 0xd8, 0xce, 0xbd, 0x3f, 
  0x43, 0xf6, 0xfc, 0x97, 0x87, 0xb4, 0x00, 0xc5, 0x94, 0x96, 0xeb, 0x79, 0x80, 0x6d, 0x56, 0x4e, 
  0x05, 0x47, 0xa7, 0x23, 0x91, 0xb2, 0x3d, 0x50, 0xc2, 0x49, 0xf7, 0x60, 0xec, 0x31, 0x33, 0x19, 
  0x9c, 0x1a, 0x8e, 0xfd, 0xa3, 0xc9, 0x94, 0x98, 0x2b, 0xd7, 0x2f, 0x98, 0x0e, 0xae, 0x9f, 0xfd, 
  0x8d, 0xbc, 0x07, 0x6c, 0x51, 0x4f, 0x78, 0x9b, 0x1a, 0x0d, 0xce, 0x07, 0xf5, 0x56, 0x3a, 0xdf, 
  0x41, 0x8c, 0xf6, 0x0f, 0x37, 0xb7, 0x37, 0x0f, 0x3f, 0x38, 0xcf, 0x72, 0xe3, 0xe6, 0xf3, 0x7c, 
  0x06, 0x3b, 0xa4, 0x0b, 0x3f, 0xe3, 0xe7, 0xfe, 0x6a, 0x62, 0x62, 0xf8, 0xb1, 0x36, 0x72, 0xd7, 
  0xf8, 0x17, 0x41, 0x7e, 0x62, 0x9b, 0x2f, 0x55, 0xe8, 0x33, 0xd3, 0xc1, 0xcf, 0x7d, 0xe9, 0x34, 
  0xf1, 0x7a, 0xa8, 0x0d, 0x14, 0x47, 0x48, 0x3f, 0xdd, 0x70, 0xff, 0x52, 0x35, 0x54, 0x8b, 0x70, 
  0x1b, 0x4c, 0x82, 0x51, 0x89, 0x12, 0x0d, 0x63, 0x5c, 0x33, 0x31, 0xf1, 0x12, 0xeb, 0x49, 0x50, 
  0x0d, 0x37, 0x98, 0x34, 0xbe, 0x2f, 0x02, 0x56, 0x8f, 0x17, 0xcf, 0xfc, 0x3e, 0x9c, 0x84, 0xf4, 
  0x1d, 0xf1, 0x8a, 0xc8, 0xb8, 0x1e, 0x0c, 0xef, 0x56, 0x8c, 0x1a, 0xfb, 0xcb, 0xce, 0x87, 0xc4, 
  0xfc, 0x70, 0x71, 0xb1, 0x8f, 0xbc, 0x2c, 0x32, 0xd6, 0x4f, 0x1a, 0x47, 0x5e, 0x3c, 0x7a, 0xcb, 
  0x4d, 0x85, 0xc5, 0xf4, 0x68, 0x71, 0xa4, 0x29, 0x99, 0x1a, 0x23, 0x2e, 0x0e, 0x2a, 0xdc, 0x4b, 
  0x46, 0x46, 0xa4, 0xd7, 0xe7, 0xc2, 0x01, 0x62, 0x34, 0x85, 0x9a, 0x00, 0xee, 0x85, 0x03, 0xc3, 
  0x3b, 0x9a, 0xf2, 0xa9, 0xd3, 0x57, 0x2a, 0xad, 0x02, 0x9b, 0xf6, 0xa6, 0xf1, 0x73, 0x6f, 0xb2, 
  0xf3, 0x05, 0xb3, 0xc2, 0x7e, 0x3a, 0x34, 0x3e, 0x11, 0x5a, 0x3b, 0x0c, 0x74, 0xe0, 0xee, 0xc6, 
  0x5c, 0xd4, 0x86, 0xe2, 0xff, 0x66, 0x62, 0xde, 0x35, 0x1f, 0xfc, 0x23, 0xc3, 0x41, 0xbe, 0x98, 
  0x62, 0xa7, 0xb9, 0xbf, 0x9f, 0xf0, 0x76, 0x62, 0xdb, 0xed, 0xe1, 0xcd, 0x6f, 0xa0, 0x89, 0x29, 
  0x60, 0xf5, 0xb9, 0xa3, 0x22, 0xd7, 0xa4, 0xf2, 0xd0, 0xa0, 0x70, 0xfc, 0x57, 0xc0, 0x2b, 0xea, 
  0x72, 0xf4, 0x25, 0x52, 0x8a, 0xe6, 0x2e, 0x75, 0xb2, 0xc8, 0x40, 0x67, 0xaf, 0x65, 0x56, 0xcf, 
  0x00, 0x27, 0xc5, 0x26, 0x17, 0x8d, 0xf0, 0x56, 0x8d, 0xdc, 0x7a, 0xc8, 0x8c, 0xce, 0xc8, 0xe6, 
  0x46, 0x42, 0x0b, 0x13, 0x9e, 0xc5, 0x17, 0x9b, 0xf3, 0x2f, 0x56, 0x57, 0xce, 0x34, 0x06, 0xa3, 
  0x02, 0x2e, 0x7c, 0x11, 0xea, 0xf4, 0x8e, 0x19, 0xba, 0x18, 0xba, 0x6f, 0xf9, 0x23, 0x18, 0x93, 
  0x32, 0x33, 0x51, 0xb3, 0xdd, 0xf7, 0x3a, 0xbf, 0x5c, 0xdf, 0xdf, 0xfe, 0xd2, 0x5d, 0xcb, 0xd2, 
  0xbb, 0x6b, 0x2c, 0x72, 0x90, 0xf7, 0xf8, 0x41, 0xd4, 0x96, 0x26, 0xd7, 0x0b, 0xf2, 0x26, 0x52, 
  0x68, 0x4f, 0x44, 0x34, 0x63, 0x74, 0x8d, 0xc5, 0x5c, 0x8a, 0x5c, 0xc7, 0x11, 0xcb, 0xa9, 0xe9, 
  0x92, 0x34, 0xb2, 0x90, 0x1f, 0xde, 0x47, 0xe6, 0x33, 0xdc, 0x3c, 0x45, 0xc4, 0x17, 0xb2, 0xea, 
  0x85, 0x8c, 0x79, 0x01, 0x0b, 0xae, 0x65, 0xb9, 0xf9, 0x37, 0x18, 0xf3, 0x2f, 0x23, 0xfc, 0xcf, 
  0x7b, 0xdf, 0x23, 0x5c, 0xc2, 0x17, 0xef, 0xa3, 0x8b, 0x31, 0xb6, 0x98, 0x21, 0x8b, 0x79, 0xae, 
  0x58, 0xa2, 0x8a, 0x77, 0xfc, 0x09, 0xc6, 0x24, 0x51, 0xe0, 0xcf, 0x7f, 0x01, 0x3a, 0xcd, 0xec, 
  0x08, 0xc5, 0x27, 0x00, 0x00, 
};
#endif  // #if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
static constexpr uint64_t _GENERATOR_ = AS_GENERATOR::AS_ERRNO;
#endif

static const STATUS_ITEM Status[] =
{
  /*0*/ { (uint32_t)1, "EPERM", AS_DESCR_HANDLE("Operación no permitida", 0), Src_errnoh, AS_OS_ANY },
  /*1*/ { (uint32_t)2, "ENOENT", AS_DESCR_HANDLE("El archivo o directorio no existe", 24), Src_errnoh, AS_OS_ANY },
  /*2*/ { (uint32_t)3, "ESRCH", AS_DESCR_HANDLE("El proceso no existe", 58), Src_errnoh, AS_OS_ANY },
  /*3*/ { (uint32_t)4, "EINTR", AS_DESCR_HANDLE("Llamada al sistema interrumpida", 79), Src_errnoh, AS_OS_ANY },
  /*4*/ { (uint32_t)5, "EIO", AS_DESCR_HANDLE("Error de entrada/salida", 111), Src_errnoh, AS_OS_ANY },
  /*5*/ { (uint32_t)6, "ENXIO", AS_DESCR_HANDLE("El dispositivo o la dirección no existen", 135), Src_errnoh, AS_OS_ANY },
  /*6*/ { (uint32_t)7, "E2BIG", AS_DESCR_HANDLE("La lista de argumentos es demasiado larga", 177), Src_errnoh, AS_OS_ANY },
  /*7*/ { (uint32_t)8, "ENOEXEC", AS_DESCR_HANDLE("Formato de archivo ejecutable no válido", 219), Src_errnoh, AS_OS_ANY },
  /*8*/ { (uint32_t)9, "EBADF", AS_DESCR_HANDLE("Descriptor de archivo no válido", 260), Src_errnoh, AS_OS_ANY },
  /*9*/ { (uint32_t)10, "ECHILD", AS_DESCR_HANDLE("No hay procesos secundarios", 293), Src_errnoh, AS_OS_ANY },
  /*10*/ { (uint32_t)11, "EAGAIN", AS_DESCR_HANDLE("Recurso no disponible temporalmente", 321), Src_errnoh, AS_OS_LINUX },
  /*11*/ { (uint32_t)11, "EDEADLK", AS_DESCR_HANDLE("Se evitó un interbloqueo de recursos", 357), Src_errnoh, AS_OS_MAC },
  /*12*/ { (uint32_t)11, "EAGAIN", AS_DESCR_HANDLE("Recurso no disponible temporalmente", 395), Src_errnoh, AS_OS_SOLARIS },
  /*13*/ { (uint32_t)11, "EAGAIN", AS_DESCR_HANDLE("", 431), Src_errnoh, AS_OS_WINDOWS },
  /*14*/ { (uint32_t)12, "ENOMEM", AS_DESCR_HANDLE("No se puede asignar memoria", 432), Src_errnoh, AS_OS_ANY },
  /*15*/ { (uint32_t)13, "EACCES", AS_DESCR_HANDLE("Permiso denegado", 460), Src_errnoh, AS_OS_ANY },
  /*16*/ { (uint32_t)14, "EFAULT", AS_DESCR_HANDLE("Dirección no válida", 477), Src_errnoh, AS_OS_ANY },
  /*17*/ { (uint32_t)15, "ENOTBLK", AS_DESCR_HANDLE("Se requiere un dispositivo de bloques", 499), Src_errnoh, AS_OS_LINUX },
  /*18*/ { (uint32_t)15, "ENOTBLK", AS_DESCR_HANDLE("Se requiere un dispositivo de bloques", 537), Src_errnoh, AS_OS_MAC },
  /*19*/ { (uint32_t)15, "ENOTBLK", AS_DESCR_HANDLE("Se requiere un dispositivo de bloques", 575), Src_errnoh, AS_OS_SOLARIS },
  /*20*/ { (uint32_t)16, "EBUSY", AS_DESCR_HANDLE("Dispositivo o recurso ocupado", 613), Src_errnoh, AS_OS_ANY },
  /*21*/ { (uint32_t)17, "EEXIST", AS_DESCR_HANDLE("El archivo ya existe", 643), Src_errnoh, AS_OS_ANY },
  /*22*/ { (uint32_t)18, "EXDEV", AS_DESCR_HANDLE("No se puede crear un enlace entre dispositivos distintos", 664), Src_errnoh, AS_OS_ANY },
  /*23*/ { (uint32_t)19, "ENODEV", AS_DESCR_HANDLE("El dispositivo no admite esta operación", 721), Src_errnoh, AS_OS_ANY },
  /*24*/ { (uint32_t)20, "ENOTDIR", AS_DESCR_HANDLE("El objeto no es un directorio", 762), Src_errnoh, AS_OS_ANY },
  /*25*/ { (uint32_t)21, "EISDIR", AS_DESCR_HANDLE("El objeto es un directorio", 792), Src_errnoh, AS_OS_ANY },
  /*26*/ { (uint32_t)22, "EINVAL", AS_DESCR_HANDLE("Argumento no válido", 819), Src_errnoh, AS_OS_ANY },
  /*27*/ { (uint32_t)23, "ENFILE", AS_DESCR_HANDLE("Hay demasiados archivos abiertos en el sistema", 840), Src_errnoh, AS_OS_ANY },
  /*28*/ { (uint32_t)24, "EMFILE", AS_DESCR_HANDLE("Hay demasiados archivos abiertos", 887), Src_errnoh, AS_OS_ANY },
  /*29*/ { (uint32_t)25, "ENOTTY", AS_DESCR_HANDLE("La operación ioctl no es apropiada para este dispositivo", 920), Src_errnoh, AS_OS_ANY },
  /*30*/ { (uint32_t)26, "ETXTBSY", AS_DESCR_HANDLE("Archivo ejecutable ocupado", 978), Src_errnoh, AS_OS_LINUX },
  /*31*/ { (uint32_t)26, "ETXTBSY", AS_DESCR_HANDLE("Archivo ejecutable ocupado", 1005), Src_errnoh, AS_OS_MAC },
  /*32*/ { (uint32_t)26, "ETXTBSY", AS_DESCR_HANDLE("Archivo ejecutable ocupado", 1032), Src_errnoh, AS_OS_SOLARIS },
  /*33*/ { (uint32_t)27, "EFBIG", AS_DESCR_HANDLE("El archivo es demasiado grande", 1059), Src_errnoh, AS_OS_ANY },
  /*34*/ { (uint32_t)28, "ENOSPC", AS_DESCR_HANDLE("No queda espacio disponible en el dispositivo", 1090), Src_errnoh, AS_OS_ANY },
  /*35*/ { (uint32_t)29, "ESPIPE", AS_DESCR_HANDLE("Posicionamiento no válido en el archivo", 1136), Src_errnoh, AS_OS_ANY },
  /*36*/ { (uint32_t)30, "EROFS", AS_DESCR_HANDLE("Sistema de archivos de solo lectura", 1177), Src_errnoh, AS_OS_ANY },
  /*37*/ { (uint32_t)31, "EMLINK", AS_DESCR_HANDLE("Hay demasiados enlaces", 1213), Src_errnoh, AS_OS_ANY },
  /*38*/ { (uint32_t)32, "EPIPE", AS_DESCR_HANDLE("Canalización rota", 1236), Src_errnoh, AS_OS_ANY },
  /*39*/ { (uint32_t)33, "EDOM", AS_DESCR_HANDLE("El argumento está fuera del dominio de la función matemática", 1255), Src_errnoh, AS_OS_ANY },
  /*40*/ { (uint32_t)34, "ERANGE", AS_DESCR_HANDLE("El resultado matemático no se puede representar", 1319), Src_errnoh, AS_OS_ANY },
  /*41*/ { (uint32_t)35, "EDEADLK", AS_DESCR_HANDLE("Se produciría un interbloqueo de recursos", 1368), Src_errnoh, AS_OS_LINUX },
  /*42*/ { (uint32_t)35, "EAGAIN", AS_DESCR_HANDLE("Recurso no disponible temporalmente", 1411), Src_errnoh, AS_OS_MAC },
  /*43*/ { (uint32_t)35, "ENOMSG", AS_DESCR_HANDLE("No hay ningún mensaje del tipo solicitado", 1447), Src_errnoh, AS_OS_SOLARIS },
  /*44*/ { (uint32_t)36, "ENAMETOOLONG", AS_DESCR_HANDLE("El nombre del archivo es demasiado largo", 1490), Src_errnoh, AS_OS_LINUX },
  /*45*/ { (uint32_t)36, "EINPROGRESS", AS_DESCR_HANDLE("La operación está en curso", 1531), Src_errnoh, AS_OS_MAC },
  /*46*/ { (uint32_t)36, "EIDRM", AS_DESCR_HANDLE("Identificador eliminado", 1560), Src_errnoh, AS_OS_SOLARIS },
  /*47*/ { (uint32_t)36, "EDEADLK", AS_DESCR_HANDLE("", 1584), Src_errnoh, AS_OS_WINDOWS },
  /*48*/ { (uint32_t)37, "ENOLCK", AS_DESCR_HANDLE("No hay bloqueos de registros disponibles", 1585), Src_errnoh, AS_OS_LINUX },
  /*49*/ { (uint32_t)37, "EALREADY", AS_DESCR_HANDLE("La operación ya está en curso", 1626), Src_errnoh, AS_OS_MAC },
  /*50*/ { (uint32_t)37, "ECHRNG", AS_DESCR_HANDLE("Número de canal fuera de rango", 1658), Src_errnoh, AS_OS_SOLARIS },
  /*51*/ { (uint32_t)38, "ENOSYS", AS_DESCR_HANDLE("Función no implementada", 1690), Src_errnoh, AS_OS_LINUX },
  /*52*/ { (uint32_t)38, "ENOTSOCK", AS_DESCR_HANDLE("Operación de socket sobre un objeto que no es un socket", 1715), Src_errnoh, AS_OS_MAC },
  /*53*/ { (uint32_t)38, "EL2NSYNC", AS_DESCR_HANDLE("Nivel 2 no sincronizado", 1772), Src_errnoh, AS_OS_SOLARIS },
  /*54*/ { (uint32_t)38, "ENAMETOOLONG", AS_DESCR_HANDLE("", 1796), Src_errnoh, AS_OS_WINDOWS },
  /*55*/ { (uint32_t)39, "ENOTEMPTY", AS_DESCR_HANDLE("El directorio no está vacío", 1797), Src_errnoh, AS_OS_LINUX },
  /*56*/ { (uint32_t)39, "EDESTADDRREQ", AS_DESCR_HANDLE("Se requiere una dirección de destino", 1827), Src_errnoh, AS_OS_MAC },
  /*57*/ { (uint32_t)39, "EL3HLT", AS_DESCR_HANDLE("Nivel 3 detenido", 1865), Src_errnoh, AS_OS_SOLARIS },
  /*58*/ { (uint32_t)39, "ENOLCK", AS_DESCR_HANDLE("", 1882), Src_errnoh, AS_OS_WINDOWS },
  /*59*/ { (uint32_t)40, "ELOOP", AS_DESCR_HANDLE("Se encontraron demasiados enlaces simbólicos", 1883), Src_errnoh, AS_OS_LINUX },
  /*60*/ { (uint32_t)40, "EMSGSIZE", AS_DESCR_HANDLE("El mensaje es demasiado largo", 1929), Src_errnoh, AS_OS_MAC },
  /*61*/ { (uint32_t)40, "EL3RST", AS_DESCR_HANDLE("Nivel 3 reiniciado", 1959), Src_errnoh, AS_OS_SOLARIS },
  /*62*/ { (uint32_t)40, "ENOSYS", AS_DESCR_HANDLE("", 1978), Src_errnoh, AS_OS_WINDOWS },
  /*63*/ { (uint32_t)41, "EWOULDBLOCK", AS_DESCR_HANDLE("La operación se bloquearía", 1979), Src_errnoh, AS_OS_LINUX },
  /*64*/ { (uint32_t)41, "EPROTOTYPE", AS_DESCR_HANDLE("El tipo de protocolo no corresponde al tipo de socket", 2008), Src_errnoh, AS_OS_MAC },
  /*65*/ { (uint32_t)41, "ELNRNG", AS_DESCR_HANDLE("Número de enlace fuera de rango", 2062), Src_errnoh, AS_OS_SOLARIS },
  /*66*/ { (uint32_t)41, "ENOTEMPTY", AS_DESCR_HANDLE("", 2095), Src_errnoh, AS_OS_WINDOWS },
  /*67*/ { (uint32_t)42, "ENOMSG", AS_DESCR_HANDLE("No hay ningún mensaje del tipo solicitado", 2096), Src_errnoh, AS_OS_LINUX },
  /*68*/ { (uint32_t)42, "ENOPROTOOPT", AS_DESCR_HANDLE("Protocolo no disponible", 2139), Src_errnoh, AS_OS_MAC },
  /*69*/ { (uint32_t)42, "EUNATCH", AS_DESCR_HANDLE("El controlador del protocolo no está conectado", 2163), Src_errnoh, AS_OS_SOLARIS },
  /*70*/ { (uint32_t)42, "EILSEQ", AS_DESCR_HANDLE("", 2211), Src_errnoh, AS_OS_WINDOWS },
  /*71*/ { (uint32_t)43, "EIDRM", AS_DESCR_HANDLE("Identificador eliminado", 2212), Src_errnoh, AS_OS_LINUX },
  /*72*/ { (uint32_t)43, "EPROTONOSUPPORT", AS_DESCR_HANDLE("Protocolo no admitido", 2236), Src_errnoh, AS_OS_MAC },
  /*73*/ { (uint32_t)43, "ENOCSI", AS_DESCR_HANDLE("No hay ninguna estructura CSI disponible", 2258), Src_errnoh, AS_OS_SOLARIS },
  /*74*/ { (uint32_t)44, "ECHRNG", AS_DESCR_HANDLE("Número de canal fuera de rango", 2299), Src_errnoh, AS_OS_LINUX },
  /*75*/ { (uint32_t)44, "ESOCKTNOSUPPORT", AS_DESCR_HANDLE("Tipo de socket no admitido", 2331), Src_errnoh, AS_OS_MAC },
  /*76*/ { (uint32_t)44, "EL2HLT", AS_DESCR_HANDLE("Nivel 2 detenido", 2358), Src_errnoh, AS_OS_SOLARIS },
  /*77*/ { (uint32_t)45, "EL2NSYNC", AS_DESCR_HANDLE("Nivel 2 no sincronizado", 2375), Src_errnoh, AS_OS_LINUX },
  /*78*/ { (uint32_t)45, "ENOTSUP", AS_DESCR_HANDLE("Operación no admitida", 2399), Src_errnoh, AS_OS_MAC },
  /*79*/ { (uint32_t)45, "EDEADLK", AS_DESCR_HANDLE("Condición de interbloqueo.", 2422), Src_errnoh, AS_OS_SOLARIS },
  /*80*/ { (uint32_t)46, "EL3HLT", AS_DESCR_HANDLE("Nivel 3 detenido", 2450), Src_errnoh, AS_OS_LINUX },
  /*81*/ { (uint32_t)46, "EPFNOSUPPORT", AS_DESCR_HANDLE("Familia de protocolos no admitida", 2467), Src_errnoh, AS_OS_MAC },
  /*82*/ { (uint32_t)46, "ENOLCK", AS_DESCR_HANDLE("No hay bloqueos de registros disponibles.", 2501), Src_errnoh, AS_OS_SOLARIS },
  /*83*/ { (uint32_t)47, "EL3RST", AS_DESCR_HANDLE("Nivel 3 reiniciado", 2543), Src_errnoh, AS_OS_LINUX },
  /*84*/ { (uint32_t)47, "EAFNOSUPPORT", AS_DESCR_HANDLE("La familia de protocolos no admite esta familia de direcciones", 2562), Src_errnoh, AS_OS_MAC },
  /*85*/ { (uint32_t)47, "ECANCELED", AS_DESCR_HANDLE("Operación cancelada", 2625), Src_errnoh, AS_OS_SOLARIS },
  /*86*/ { (uint32_t)48, "ELNRNG", AS_DESCR_HANDLE("Número de enlace fuera de rango", 2646), Src_errnoh, AS_OS_LINUX },
  /*87*/ { (uint32_t)48, "EADDRINUSE", AS_DESCR_HANDLE("La dirección ya está en uso", 2679), Src_errnoh, AS_OS_MAC },
  /*88*/ { (uint32_t)48, "ENOTSUP", AS_DESCR_HANDLE("Operación no admitida", 2709), Src_errnoh, AS_OS_SOLARIS },
  /*89*/ { (uint32_t)49, "EUNATCH", AS_DESCR_HANDLE("El controlador del protocolo no está conectado", 2732), Src_errnoh, AS_OS_LINUX },
  /*90*/ { (uint32_t)49, "EADDRNOTAVAIL", AS_DESCR_HANDLE("No se puede asignar la dirección solicitada", 2780), Src_errnoh, AS_OS_MAC },
  /*91*/ { (uint32_t)49, "EDQUOT", AS_DESCR_HANDLE("Cuota de disco excedida", 2825), Src_errnoh, AS_OS_SOLARIS },
  /*92*/ { (uint32_t)50, "ENOCSI", AS_DESCR_HANDLE("No hay ninguna estructura CSI disponible", 2849), Src_errnoh, AS_OS_LINUX },
  /*93*/ { (uint32_t)50, "ENETDOWN", AS_DESCR_HANDLE("La red no está operativa", 2890), Src_errnoh, AS_OS_MAC },
  /*94*/ { (uint32_t)50, "EBADE", AS_DESCR_HANDLE("Intercambio no válido", 2916), Src_errnoh, AS_OS_SOLARIS },
  /*95*/ { (uint32_t)51, "EL2HLT", AS_DESCR_HANDLE("Nivel 2 detenido", 2939), Src_errnoh, AS_OS_LINUX },
  /*96*/ { (uint32_t)51, "ENETUNREACH", AS_DESCR_HANDLE("La red no es accesible", 2956), Src_errnoh, AS_OS_MAC },
  /*97*/ { (uint32_t)51, "EBADR", AS_DESCR_HANDLE("Descriptor de solicitud no válido", 2979), Src_errnoh, AS_OS_SOLARIS },
  /*98*/ { (uint32_t)52, "EBADE", AS_DESCR_HANDLE("Intercambio no válido", 3014), Src_errnoh, AS_OS_LINUX },
  /*99*/ { (uint32_t)52, "ENETRESET", AS_DESCR_HANDLE("La red interrumpió la conexión debido a un reinicio", 3037), Src_errnoh, AS_OS_MAC },
  /*100*/ { (uint32_t)52, "EXFULL", AS_DESCR_HANDLE("Intercambio lleno", 3091), Src_errnoh, AS_OS_SOLARIS },
  /*101*/ { (uint32_t)53, "EBADR", AS_DESCR_HANDLE("Descriptor de solicitud no válido", 3109), Src_errnoh, AS_OS_LINUX },
  /*102*/ { (uint32_t)53, "ECONNABORTED", AS_DESCR_HANDLE("El software provocó la interrupción de la conexión", 3144), Src_errnoh, AS_OS_MAC },
  /*103*/ { (uint32_t)53, "ENOANO", AS_DESCR_HANDLE("No hay ningún anode disponible", 3198), Src_errnoh, AS_OS_SOLARIS },
  /*104*/ { (uint32_t)54, "EXFULL", AS_DESCR_HANDLE("Intercambio lleno", 3230), Src_errnoh, AS_OS_LINUX },
  /*105*/ { (uint32_t)54, "ECONNRESET", AS_DESCR_HANDLE("La conexión fue reiniciada por el extremo remoto", 3248), Src_errnoh, AS_OS_MAC },
  /*106*/ { (uint32_t)54, "EBADRQC", AS_DESCR_HANDLE("Código de solicitud no válido", 3298), Src_errnoh, AS_OS_SOLARIS },
  /*107*/ { (uint32_t)55, "ENOANO", AS_DESCR_HANDLE("No hay ningún anode disponible", 3330), Src_errnoh, AS_OS_LINUX },
  /*108*/ { (uint32_t)55, "ENOBUFS", AS_DESCR_HANDLE("No hay espacio disponible en el búfer", 3362), Src_errnoh, AS_OS_MAC },
  /*109*/ { (uint32_t)55, "EBADSLT", AS_DESCR_HANDLE("Ranura no válida", 3401), Src_errnoh, AS_OS_SOLARIS },
  /*110*/ { (uint32_t)56, "EBADRQC", AS_DESCR_HANDLE("Código de solicitud no válido", 3419), Src_errnoh, AS_OS_LINUX },
  /*111*/ { (uint32_t)56, "EISCONN", AS_DESCR_HANDLE("El socket ya está conectado", 3451), Src_errnoh, AS_OS_MAC },
  /*112*/ { (uint32_t)56, "EDEADLOCK", AS_DESCR_HANDLE("Interbloqueo al bloquear el archivo", 3480), Src_errnoh, AS_OS_SOLARIS },
  /*113*/ { (uint32_t)57, "EBADSLT", AS_DESCR_HANDLE("Ranura no válida", 3516), Src_errnoh, AS_OS_LINUX },
  /*114*/ { (uint32_t)57, "ENOTCONN", AS_DESCR_HANDLE("El socket no está conectado", 3534), Src_errnoh, AS_OS_MAC },
  /*115*/ { (uint32_t)57, "EBFONT", AS_DESCR_HANDLE("Formato de archivo de fuente no válido", 3563), Src_errnoh, AS_OS_SOLARIS },
  /*116*/ { (uint32_t)58, "EDEADLOCK", AS_DESCR_HANDLE("Interbloqueo al bloquear el archivo", 3603), Src_errnoh, AS_OS_LINUX },
  /*117*/ { (uint32_t)58, "ESHUTDOWN", AS_DESCR_HANDLE("No se puede enviar después de cerrar el socket", 3639), Src_errnoh, AS_OS_MAC },
  /*118*/ { (uint32_t)58, "EOWNERDEAD", AS_DESCR_HANDLE("El proceso propietario del bloqueo finalizó", 3687), Src_errnoh, AS_OS_SOLARIS },
  /*119*/ { (uint32_t)59, "EBFONT", AS_DESCR_HANDLE("Formato de archivo de fuente no válido", 3732), Src_errnoh, AS_OS_LINUX },
  /*120*/ { (uint32_t)59, "ETOOMANYREFS", AS_DESCR_HANDLE("Demasiadas referencias: no se puede realizar splice", 3772), Src_errnoh, AS_OS_MAC },
  /*121*/ { (uint32_t)59, "ENOTRECOVERABLE", AS_DESCR_HANDLE("El estado del bloqueo no se puede recuperar", 3824), Src_errnoh, AS_OS_SOLARIS },
  /*122*/ { (uint32_t)60, "ENOSTR", AS_DESCR_HANDLE("El dispositivo no es un flujo STREAM", 3868), Src_errnoh, AS_OS_LINUX },
  /*123*/ { (uint32_t)60, "ETIMEDOUT", AS_DESCR_HANDLE("Se agotó el tiempo de espera de la operación", 3905), Src_errnoh, AS_OS_MAC },
  /*124*/ { (uint32_t)60, "ENOSTR", AS_DESCR_HANDLE("El dispositivo no es un flujo STREAM", 3952), Src_errnoh, AS_OS_SOLARIS },
  /*125*/ { (uint32_t)61, "ENODATA", AS_DESCR_HANDLE("No hay datos disponibles (E/S sin espera)", 3989), Src_errnoh, AS_OS_LINUX },
  /*126*/ { (uint32_t)61, "ECONNREFUSED", AS_DESCR_HANDLE("Conexión rechazada", 4031), Src_errnoh, AS_OS_MAC },
  /*127*/ { (uint32_t)61, "ENODATA", AS_DESCR_HANDLE("No hay datos disponibles (E/S sin espera)", 4051), Src_errnoh, AS_OS_SOLARIS },
  /*128*/ { (uint32_t)62, "ETIME", AS_DESCR_HANDLE("El temporizador ha expirado", 4093), Src_errnoh, AS_OS_LINUX },
  /*129*/ { (uint32_t)62, "ELOOP", AS_DESCR_HANDLE("Hay demasiados niveles de enlaces simbólicos", 4121), Src_errnoh, AS_OS_MAC },
  /*130*/ { (uint32_t)62, "ETIME", AS_DESCR_HANDLE("El temporizador ha expirado", 4167), Src_errnoh, AS_OS_SOLARIS },
  /*131*/ { (uint32_t)63, "ENOSR", AS_DESCR_HANDLE("No quedan recursos de STREAMS", 4195), Src_errnoh, AS_OS_LINUX },
  /*132*/ { (uint32_t)63, "ENAMETOOLONG", AS_DESCR_HANDLE("El nombre del archivo es demasiado largo", 4225), Src_errnoh, AS_OS_MAC },
  /*133*/ { (uint32_t)63, "ENOSR", AS_DESCR_HANDLE("No quedan recursos de STREAMS", 4266), Src_errnoh, AS_OS_SOLARIS },
  /*134*/ { (uint32_t)64, "ENONET", AS_DESCR_HANDLE("El equipo no está en la red", 4296), Src_errnoh, AS_OS_LINUX },
  /*135*/ { (uint32_t)64, "EHOSTDOWN", AS_DESCR_HANDLE("El host no está operativo", 4325), Src_errnoh, AS_OS_MAC },
  /*136*/ { (uint32_t)64, "ENONET", AS_DESCR_HANDLE("El equipo no está en la red", 4352), Src_errnoh, AS_OS_SOLARIS },
  /*137*/ { (uint32_t)65, "ENOPKG", AS_DESCR_HANDLE("Paquete no instalado", 4381), Src_errnoh, AS_OS_LINUX },
  /*138*/ { (uint32_t)65, "EHOSTUNREACH", AS_DESCR_HANDLE("No hay una ruta hacia el host", 4402), Src_errnoh, AS_OS_MAC },
  /*139*/ { (uint32_t)65, "ENOPKG", AS_DESCR_HANDLE("Paquete no instalado", 4432), Src_errnoh, AS_OS_SOLARIS },
  /*140*/ { (uint32_t)66, "EREMOTE", AS_DESCR_HANDLE("El objeto es remoto", 4453), Src_errnoh, AS_OS_LINUX },
  /*141*/ { (uint32_t)66, "ENOTEMPTY", AS_DESCR_HANDLE("El directorio no está vacío", 4473), Src_errnoh, AS_OS_MAC },
  /*142*/ { (uint32_t)66, "EREMOTE", AS_DESCR_HANDLE("El objeto es remoto", 4503), Src_errnoh, AS_OS_SOLARIS },
  /*143*/ { (uint32_t)67, "ENOLINK", AS_DESCR_HANDLE("El enlace se ha interrumpido", 4523), Src_errnoh, AS_OS_LINUX },
  /*144*/ { (uint32_t)67, "EPROCLIM", AS_DESCR_HANDLE("Hay demasiados procesos", 4552), Src_errnoh, AS_OS_MAC },
  /*145*/ { (uint32_t)67, "ENOLINK", AS_DESCR_HANDLE("El enlace se ha interrumpido", 4576), Src_errnoh, AS_OS_SOLARIS },
  /*146*/ { (uint32_t)68, "EADV", AS_DESCR_HANDLE("Error de advertise", 4605), Src_errnoh, AS_OS_LINUX },
  /*147*/ { (uint32_t)68, "EUSERS", AS_DESCR_HANDLE("Hay demasiados usuarios", 4624), Src_errnoh, AS_OS_MAC },
  /*148*/ { (uint32_t)68, "EADV", AS_DESCR_HANDLE("Error de advertise", 4648), Src_errnoh, AS_OS_SOLARIS },
  /*149*/ { (uint32_t)69, "ESRMNT", AS_DESCR_HANDLE("Error de srmount", 4667), Src_errnoh, AS_OS_LINUX },
  /*150*/ { (uint32_t)69, "EDQUOT", AS_DESCR_HANDLE("Cuota de disco excedida", 4684), Src_errnoh, AS_OS_MAC },
  /*151*/ { (uint32_t)69, "ESRMNT", AS_DESCR_HANDLE("Error de srmount", 4708), Src_errnoh, AS_OS_SOLARIS },
  /*152*/ { (uint32_t)70, "ECOMM", AS_DESCR_HANDLE("Error de comunicación durante el envío", 4725), Src_errnoh, AS_OS_LINUX },
  /*153*/ { (uint32_t)70, "ESTALE", AS_DESCR_HANDLE("Identificador de archivo NFS obsoleto", 4766), Src_errnoh, AS_OS_MAC },
  /*154*/ { (uint32_t)70, "ECOMM", AS_DESCR_HANDLE("Error de comunicación durante el envío", 4804), Src_errnoh, AS_OS_SOLARIS },
  /*155*/ { (uint32_t)71, "EPROTO", AS_DESCR_HANDLE("Error de protocolo", 4845), Src_errnoh, AS_OS_LINUX },
  /*156*/ { (uint32_t)71, "EREMOTE", AS_DESCR_HANDLE("Hay demasiados niveles remotos en la ruta", 4864), Src_errnoh, AS_OS_MAC },
  /*157*/ { (uint32_t)71, "EPROTO", AS_DESCR_HANDLE("Error de protocolo", 4906), Src_errnoh, AS_OS_SOLARIS },
  /*158*/ { (uint32_t)72, "EMULTIHOP", AS_DESCR_HANDLE("Se intentó una operación con múltiples saltos", 4925), Src_errnoh, AS_OS_LINUX },
  /*159*/ { (uint32_t)72, "EBADRPC", AS_DESCR_HANDLE("La estructura RPC no es válida", 4974), Src_errnoh, AS_OS_MAC },
  /*160*/ { (uint32_t)72, "ELOCKUNMAPPED", AS_DESCR_HANDLE("Se desmapeó la memoria que contenía un bloqueo activo", 5006), Src_errnoh, AS_OS_SOLARIS },
  /*161*/ { (uint32_t)73, "EDOTDOT", AS_DESCR_HANDLE("Error específico de RFS", 5062), Src_errnoh, AS_OS_LINUX },
  /*162*/ { (uint32_t)73, "ERPCMISMATCH", AS_DESCR_HANDLE("Versión de RPC incorrecta", 5087), Src_errnoh, AS_OS_MAC },
  /*163*/ { (uint32_t)73, "ENOTACTIVE", AS_DESCR_HANDLE("El servicio no está activo", 5114), Src_errnoh, AS_OS_SOLARIS },
  /*164*/ { (uint32_t)74, "EBADMSG", AS_DESCR_HANDLE("El mensaje no contiene datos", 5142), Src_errnoh, AS_OS_LINUX },
  /*165*/ { (uint32_t)74, "EPROGUNAVAIL", AS_DESCR_HANDLE("Programa RPC no disponible", 5171), Src_errnoh, AS_OS_MAC },
  /*166*/ { (uint32_t)74, "EMULTIHOP", AS_DESCR_HANDLE("Se intentó una operación con múltiples saltos", 5198), Src_errnoh, AS_OS_SOLARIS },
  /*167*/ { (uint32_t)75, "EOVERFLOW", AS_DESCR_HANDLE("Valor demasiado grande para el tipo de datos definido", 5247), Src_errnoh, AS_OS_LINUX },
  /*168*/ { (uint32_t)75, "EPROGMISMATCH", AS_DESCR_HANDLE("Versión del programa incorrecta", 5301), Src_errnoh, AS_OS_MAC },
  /*169*/ { (uint32_t)76, "ENOTUNIQ", AS_DESCR_HANDLE("El nombre no es único en la red", 5334), Src_errnoh, AS_OS_LINUX },
  /*170*/ { (uint32_t)76, "EPROCUNAVAIL", AS_DESCR_HANDLE("Procedimiento no válido para el programa RPC", 5367), Src_errnoh, AS_OS_MAC },
  /*171*/ { (uint32_t)77, "EBADFD", AS_DESCR_HANDLE("El descriptor de archivo está en un estado no válido", 5413), Src_errnoh, AS_OS_LINUX },
  /*172*/ { (uint32_t)77, "ENOLCK", AS_DESCR_HANDLE("No hay bloqueos disponibles", 5468), Src_errnoh, AS_OS_MAC },
  /*173*/ { (uint32_t)77, "EBADMSG", AS_DESCR_HANDLE("Se intentó leer un mensaje que no se puede leer", 5496), Src_errnoh, AS_OS_SOLARIS },
  /*174*/ { (uint32_t)78, "EREMCHG", AS_DESCR_HANDLE("La dirección remota ha cambiado", 5545), Src_errnoh, AS_OS_LINUX },
  /*175*/ { (uint32_t)78, "ENOSYS", AS_DESCR_HANDLE("Función no implementada", 5578), Src_errnoh, AS_OS_MAC },
  /*176*/ { (uint32_t)78, "ENAMETOOLONG", AS_DESCR_HANDLE("La ruta es demasiado larga", 5603), Src_errnoh, AS_OS_SOLARIS },
  /*177*/ { (uint32_t)79, "ELIBACC", AS_DESCR_HANDLE("No se puede acceder a una biblioteca compartida necesaria", 5630), Src_errnoh, AS_OS_LINUX },
  /*178*/ { (uint32_t)79, "EFTYPE", AS_DESCR_HANDLE("Tipo o formato de archivo no apropiado", 5688), Src_errnoh, AS_OS_MAC },
  /*179*/ { (uint32_t)79, "EOVERFLOW", AS_DESCR_HANDLE("Valor demasiado grande para almacenarse en el tipo de datos", 5727), Src_errnoh, AS_OS_SOLARIS },
  /*180*/ { (uint32_t)80, "ELIBBAD", AS_DESCR_HANDLE("Se intentó acceder a una biblioteca compartida dañada", 5787), Src_errnoh, AS_OS_LINUX },
  /*181*/ { (uint32_t)80, "EAUTH", AS_DESCR_HANDLE("Error de autenticación", 5843), Src_errnoh, AS_OS_MAC },
  /*182*/ { (uint32_t)80, "ENOTUNIQ", AS_DESCR_HANDLE("El nombre de inicio de sesión indicado no es único", 5867), Src_errnoh, AS_OS_SOLARIS },
  /*183*/ { (uint32_t)81, "ELIBSCN", AS_DESCR_HANDLE("La sección .lib de a.out está dañada", 5920), Src_errnoh, AS_OS_LINUX },
  /*184*/ { (uint32_t)81, "ENEEDAUTH", AS_DESCR_HANDLE("Se requiere un autenticador", 5960), Src_errnoh, AS_OS_MAC },
  /*185*/ { (uint32_t)81, "EBADFD", AS_DESCR_HANDLE("Descriptor de archivo no válido para esta operación", 5988), Src_errnoh, AS_OS_SOLARIS },
  /*186*/ { (uint32_t)82, "ELIBMAX", AS_DESCR_HANDLE("Se intentó enlazar demasiadas bibliotecas compartidas", 6042), Src_errnoh, AS_OS_LINUX },
  /*187*/ { (uint32_t)82, "EPWROFF", AS_DESCR_HANDLE("El dispositivo está apagado", 6097), Src_errnoh, AS_OS_MAC },
  /*188*/ { (uint32_t)82, "EREMCHG", AS_DESCR_HANDLE("La dirección remota ha cambiado", 6126), Src_errnoh, AS_OS_SOLARIS },
  /*189*/ { (uint32_t)83, "ELIBEXEC", AS_DESCR_HANDLE("No se puede ejecutar directamente una biblioteca compartida", 6159), Src_errnoh, AS_OS_LINUX },
  /*190*/ { (uint32_t)83, "EDEVERR", AS_DESCR_HANDLE("Error del dispositivo, por ejemplo, falta de papel", 6219), Src_errnoh, AS_OS_MAC },
  /*191*/ { (uint32_t)83, "ELIBACC", AS_DESCR_HANDLE("No se puede acceder a una biblioteca compartida necesaria.", 6270), Src_errnoh, AS_OS_SOLARIS },
  /*192*/ { (uint32_t)84, "EILSEQ", AS_DESCR_HANDLE("Secuencia de bytes no válida", 6329), Src_errnoh, AS_OS_LINUX },
  /*193*/ { (uint32_t)84, "EOVERFLOW", AS_DESCR_HANDLE("Valor demasiado grande para almacenarse en el tipo de datos", 6359), Src_errnoh, AS_OS_MAC },
  /*194*/ { (uint32_t)84, "ELIBBAD", AS_DESCR_HANDLE("Se intentó acceder a una biblioteca compartida dañada.", 6419), Src_errnoh, AS_OS_SOLARIS },
  /*195*/ { (uint32_t)85, "ERESTART", AS_DESCR_HANDLE("La llamada al sistema interrumpida debe reiniciarse", 6476), Src_errnoh, AS_OS_LINUX },
  /*196*/ { (uint32_t)85, "EBADEXEC", AS_DESCR_HANDLE("Ejecutable no válido", 6528), Src_errnoh, AS_OS_MAC },
  /*197*/ { (uint32_t)85, "ELIBSCN", AS_DESCR_HANDLE("La sección .lib de a.out está dañada.", 6550), Src_errnoh, AS_OS_SOLARIS },
  /*198*/ { (uint32_t)86, "ESTRPIPE", AS_DESCR_HANDLE("Error de canalización STREAMS", 6591), Src_errnoh, AS_OS_LINUX },
  /*199*/ { (uint32_t)86, "EBADARCH", AS_DESCR_HANDLE("Tipo de CPU no válido en el ejecutable", 6622), Src_errnoh, AS_OS_MAC },
  /*200*/ { (uint32_t)86, "ELIBMAX", AS_DESCR_HANDLE("Se intentó enlazar demasiadas bibliotecas compartidas.", 6662), Src_errnoh, AS_OS_SOLARIS },
  /*201*/ { (uint32_t)87, "EUSERS", AS_DESCR_HANDLE("Hay demasiados usuarios", 6718), Src_errnoh, AS_OS_LINUX },
  /*202*/ { (uint32_t)87, "ESHLIBVERS", AS_DESCR_HANDLE("La versión de la biblioteca compartida no coincide", 6742), Src_errnoh, AS_OS_MAC },
  /*203*/ { (uint32_t)87, "ELIBEXEC", AS_DESCR_HANDLE("Se intentó ejecutar directamente una biblioteca compartida.", 6794), Src_errnoh, AS_OS_SOLARIS },
  /*204*/ { (uint32_t)88, "ENOTSOCK", AS_DESCR_HANDLE("Operación de socket sobre un objeto que no es un socket", 6855), Src_errnoh, AS_OS_LINUX },
  /*205*/ { (uint32_t)88, "EBADMACHO", AS_DESCR_HANDLE("Archivo Mach-O malformado", 6912), Src_errnoh, AS_OS_MAC },
  /*206*/ { (uint32_t)88, "EILSEQ", AS_DESCR_HANDLE("Secuencia de bytes no válida.", 6938), Src_errnoh, AS_OS_SOLARIS },
  /*207*/ { (uint32_t)89, "EDESTADDRREQ", AS_DESCR_HANDLE("Se requiere una dirección de destino", 6969), Src_errnoh, AS_OS_LINUX },
  /*208*/ { (uint32_t)89, "ECANCELED", AS_DESCR_HANDLE("Operación cancelada", 7007), Src_errnoh, AS_OS_MAC },
  /*209*/ { (uint32_t)89, "ENOSYS", AS_DESCR_HANDLE("Operación del sistema de archivos no admitida", 7028), Src_errnoh, AS_OS_SOLARIS },
  /*210*/ { (uint32_t)90, "EMSGSIZE", AS_DESCR_HANDLE("El mensaje es demasiado largo", 7075), Src_errnoh, AS_OS_LINUX },
  /*211*/ { (uint32_t)90, "EIDRM", AS_DESCR_HANDLE("Identificador eliminado", 7105), Src_errnoh, AS_OS_MAC },
  /*212*/ { (uint32_t)90, "ELOOP", AS_DESCR_HANDLE("Bucle de enlaces simbólicos", 7129), Src_errnoh, AS_OS_SOLARIS },
  /*213*/ { (uint32_t)91, "EPROTOTYPE", AS_DESCR_HANDLE("El tipo de protocolo no corresponde al tipo de socket", 7158), Src_errnoh, AS_OS_LINUX },
  /*214*/ { (uint32_t)91, "ENOMSG", AS_DESCR_HANDLE("No hay ningún mensaje del tipo solicitado", 7212), Src_errnoh, AS_OS_MAC },
  /*215*/ { (uint32_t)91, "ERESTART", AS_DESCR_HANDLE("Llamada al sistema reiniciable", 7255), Src_errnoh, AS_OS_SOLARIS },
  /*216*/ { (uint32_t)92, "ENOPROTOOPT", AS_DESCR_HANDLE("Protocolo no disponible", 7286), Src_errnoh, AS_OS_LINUX },
  /*217*/ { (uint32_t)92, "EILSEQ", AS_DESCR_HANDLE("Secuencia de bytes no válida", 7310), Src_errnoh, AS_OS_MAC },
  /*218*/ { (uint32_t)92, "ESTRPIPE", AS_DESCR_HANDLE("Si es una canalización/FIFO, no esperar en la cabecera del flujo", 7340), Src_errnoh, AS_OS_SOLARIS },
  /*219*/ { (uint32_t)93, "EPROTONOSUPPORT", AS_DESCR_HANDLE("Protocolo no admitido", 7406), Src_errnoh, AS_OS_LINUX },
  /*220*/ { (uint32_t)93, "ENOATTR", AS_DESCR_HANDLE("Atributo no encontrado", 7428), Src_errnoh, AS_OS_MAC },
  /*221*/ { (uint32_t)93, "ENOTEMPTY", AS_DESCR_HANDLE("El directorio no está vacío", 7451), Src_errnoh, AS_OS_SOLARIS },
  /*222*/ { (uint32_t)94, "ESOCKTNOSUPPORT", AS_DESCR_HANDLE("Tipo de socket no admitido", 7481), Src_errnoh, AS_OS_LINUX },
  /*223*/ { (uint32_t)94, "EBADMSG", AS_DESCR_HANDLE("Mensaje no válido", 7508), Src_errnoh, AS_OS_MAC },
  /*224*/ { (uint32_t)94, "EUSERS", AS_DESCR_HANDLE("Hay demasiados usuarios para UFS", 7527), Src_errnoh, AS_OS_SOLARIS },
  /*225*/ { (uint32_t)95, "EOPNOTSUPP", AS_DESCR_HANDLE("El punto final de transporte no admite esta operación", 7560), Src_errnoh, AS_OS_LINUX },
  /*226*/ { (uint32_t)95, "EMULTIHOP", AS_DESCR_HANDLE("Reservado", 7615), Src_errnoh, AS_OS_MAC },
  /*227*/ { (uint32_t)95, "ENOTSOCK", AS_DESCR_HANDLE("Operación de socket sobre un objeto que no es un socket", 7625), Src_errnoh, AS_OS_SOLARIS },
  /*228*/ { (uint32_t)96, "EPFNOSUPPORT", AS_DESCR_HANDLE("Familia de protocolos no admitida", 7682), Src_errnoh, AS_OS_LINUX },
  /*229*/ { (uint32_t)96, "ENODATA", AS_DESCR_HANDLE("No hay ningún mensaje disponible en el STREAM", 7716), Src_errnoh, AS_OS_MAC },
  /*230*/ { (uint32_t)96, "EDESTADDRREQ", AS_DESCR_HANDLE("Se requiere una dirección de destino", 7763), Src_errnoh, AS_OS_SOLARIS },
  /*231*/ { (uint32_t)97, "EAFNOSUPPORT", AS_DESCR_HANDLE("El protocolo no admite esta familia de direcciones", 7801), Src_errnoh, AS_OS_LINUX },
  /*232*/ { (uint32_t)97, "ENOLINK", AS_DESCR_HANDLE("Reservado", 7852), Src_errnoh, AS_OS_MAC },
  /*233*/ { (uint32_t)97, "EMSGSIZE", AS_DESCR_HANDLE("El mensaje es demasiado largo", 7862), Src_errnoh, AS_OS_SOLARIS },
  /*234*/ { (uint32_t)98, "EADDRINUSE", AS_DESCR_HANDLE("La dirección ya está en uso", 7892), Src_errnoh, AS_OS_LINUX },
  /*235*/ { (uint32_t)98, "ENOSR", AS_DESCR_HANDLE("No quedan recursos de STREAMS", 7922), Src_errnoh, AS_OS_MAC },
  /*236*/ { (uint32_t)98, "EPROTOTYPE", AS_DESCR_HANDLE("El tipo de protocolo no corresponde al tipo de socket", 7952), Src_errnoh, AS_OS_SOLARIS },
  /*237*/ { (uint32_t)99, "EADDRNOTAVAIL", AS_DESCR_HANDLE("No se puede asignar la dirección solicitada", 8006), Src_errnoh, AS_OS_LINUX },
  /*238*/ { (uint32_t)99, "ENOSTR", AS_DESCR_HANDLE("El objeto no es un STREAM", 8051), Src_errnoh, AS_OS_MAC },
  /*239*/ { (uint32_t)99, "ENOPROTOOPT", AS_DESCR_HANDLE("Protocolo no disponible", 8077), Src_errnoh, AS_OS_SOLARIS },
  /*240*/ { (uint32_t)100, "ENETDOWN", AS_DESCR_HANDLE("La red no está operativa", 8101), Src_errnoh, AS_OS_LINUX },
  /*241*/ { (uint32_t)100, "EPROTO", AS_DESCR_HANDLE("Error de protocolo", 8127), Src_errnoh, AS_OS_MAC },
  /*242*/ { (uint32_t)100, "EADDRINUSE", AS_DESCR_HANDLE("", 8146), Src_errnoh, AS_OS_WINDOWS },
  /*243*/ { (uint32_t)101, "ENETUNREACH", AS_DESCR_HANDLE("La red no es accesible", 8147), Src_errnoh, AS_OS_LINUX },
  /*244*/ { (uint32_t)101, "ETIME", AS_DESCR_HANDLE("Se agotó el tiempo de espera de ioctl para STREAM", 8170), Src_errnoh, AS_OS_MAC },
  /*245*/ { (uint32_t)101, "EADDRNOTAVAIL", AS_DESCR_HANDLE("", 8221), Src_errnoh, AS_OS_WINDOWS },
  /*246*/ { (uint32_t)102, "ENETRESET", AS_DESCR_HANDLE("La red interrumpió la conexión debido a un reinicio", 8222), Src_errnoh, AS_OS_LINUX },
  /*247*/ { (uint32_t)102, "EOPNOTSUPP", AS_DESCR_HANDLE("El socket no admite esta operación", 8276), Src_errnoh, AS_OS_MAC },
  /*248*/ { (uint32_t)102, "EAFNOSUPPORT", AS_DESCR_HANDLE("", 8312), Src_errnoh, AS_OS_WINDOWS },
  /*249*/ { (uint32_t)103, "ECONNABORTED", AS_DESCR_HANDLE("El software provocó la interrupción de la conexión", 8313), Src_errnoh, AS_OS_LINUX },
  /*250*/ { (uint32_t)103, "ENOPOLICY", AS_DESCR_HANDLE("La política solicitada no está registrada", 8367), Src_errnoh, AS_OS_MAC },
  /*251*/ { (uint32_t)103, "EALREADY", AS_DESCR_HANDLE("", 8411), Src_errnoh, AS_OS_WINDOWS },
  /*252*/ { (uint32_t)104, "ECONNRESET", AS_DESCR_HANDLE("La conexión fue reiniciada por el extremo remoto", 8412), Src_errnoh, AS_OS_LINUX },
  /*253*/ { (uint32_t)104, "ENOTRECOVERABLE", AS_DESCR_HANDLE("El estado no se puede recuperar", 8462), Src_errnoh, AS_OS_MAC },
  /*254*/ { (uint32_t)104, "EBADMSG", AS_DESCR_HANDLE("", 8494), Src_errnoh, AS_OS_WINDOWS },
  /*255*/ { (uint32_t)105, "ENOBUFS", AS_DESCR_HANDLE("No hay espacio disponible en el búfer", 8495), Src_errnoh, AS_OS_LINUX },
  /*256*/ { (uint32_t)105, "EOWNERDEAD", AS_DESCR_HANDLE("El propietario anterior del bloqueo finalizó", 8534), Src_errnoh, AS_OS_MAC },
  /*257*/ { (uint32_t)105, "ECANCELED", AS_DESCR_HANDLE("", 8580), Src_errnoh, AS_OS_WINDOWS },
  /*258*/ { (uint32_t)106, "EISCONN", AS_DESCR_HANDLE("El punto final de transporte ya está conectado", 8581), Src_errnoh, AS_OS_LINUX },
  /*259*/ { (uint32_t)106, "EQFULL", AS_DESCR_HANDLE("La cola de salida de la interfaz está llena", 8629), Src_errnoh, AS_OS_MAC },
  /*260*/ { (uint32_t)106, "ELAST", AS_DESCR_HANDLE("Debe ser igual al mayor valor de errno", 8674), Src_errnoh, AS_OS_MAC },
  /*261*/ { (uint32_t)106, "ECONNABORTED", AS_DESCR_HANDLE("", 8713), Src_errnoh, AS_OS_WINDOWS },
  /*262*/ { (uint32_t)107, "ENOTCONN", AS_DESCR_HANDLE("El punto final de transporte no está conectado", 8714), Src_errnoh, AS_OS_LINUX },
  /*263*/ { (uint32_t)107, "ECONNREFUSED", AS_DESCR_HANDLE("", 8762), Src_errnoh, AS_OS_WINDOWS },
  /*264*/ { (uint32_t)108, "ESHUTDOWN", AS_DESCR_HANDLE("No se puede enviar después de cerrar el punto final de transporte", 8763), Src_errnoh, AS_OS_LINUX },
  /*265*/ { (uint32_t)108, "ECONNRESET", AS_DESCR_HANDLE("", 8830), Src_errnoh, AS_OS_WINDOWS },
  /*266*/ { (uint32_t)109, "ETOOMANYREFS", AS_DESCR_HANDLE("Demasiadas referencias: no se puede realizar splice", 8831), Src_errnoh, AS_OS_LINUX },
  /*267*/ { (uint32_t)109, "EDESTADDRREQ", AS_DESCR_HANDLE("", 8883), Src_errnoh, AS_OS_WINDOWS },
  /*268*/ { (uint32_t)110, "ETIMEDOUT", AS_DESCR_HANDLE("Se agotó el tiempo de espera de la conexión", 8884), Src_errnoh, AS_OS_LINUX },
  /*269*/ { (uint32_t)110, "EHOSTUNREACH", AS_DESCR_HANDLE("", 8930), Src_errnoh, AS_OS_WINDOWS },
  /*270*/ { (uint32_t)111, "ECONNREFUSED", AS_DESCR_HANDLE("Conexión rechazada", 8931), Src_errnoh, AS_OS_LINUX },
  /*271*/ { (uint32_t)111, "EIDRM", AS_DESCR_HANDLE("", 8951), Src_errnoh, AS_OS_WINDOWS },
  /*272*/ { (uint32_t)112, "EHOSTDOWN", AS_DESCR_HANDLE("El host no está operativo", 8952), Src_errnoh, AS_OS_LINUX },
  /*273*/ { (uint32_t)112, "EINPROGRESS", AS_DESCR_HANDLE("", 8979), Src_errnoh, AS_OS_WINDOWS },
  /*274*/ { (uint32_t)113, "EHOSTUNREACH", AS_DESCR_HANDLE("No hay una ruta hacia el host", 8980), Src_errnoh, AS_OS_LINUX },
  /*275*/ { (uint32_t)113, "EISCONN", AS_DESCR_HANDLE("", 9010), Src_errnoh, AS_OS_WINDOWS },
  /*276*/ { (uint32_t)114, "EALREADY", AS_DESCR_HANDLE("La operación ya está en curso", 9011), Src_errnoh, AS_OS_LINUX },
  /*277*/ { (uint32_t)114, "ELOOP", AS_DESCR_HANDLE("", 9043), Src_errnoh, AS_OS_WINDOWS },
  /*278*/ { (uint32_t)115, "EINPROGRESS", AS_DESCR_HANDLE("La operación está en curso", 9044), Src_errnoh, AS_OS_LINUX },
  /*279*/ { (uint32_t)115, "EMSGSIZE", AS_DESCR_HANDLE("", 9073), Src_errnoh, AS_OS_WINDOWS },
  /*280*/ { (uint32_t)116, "ESTALE", AS_DESCR_HANDLE("Identificador de archivo NFS obsoleto", 9074), Src_errnoh, AS_OS_LINUX },
  /*281*/ { (uint32_t)116, "ENETDOWN", AS_DESCR_HANDLE("", 9112), Src_errnoh, AS_OS_WINDOWS },
  /*282*/ { (uint32_t)117, "EUCLEAN", AS_DESCR_HANDLE("La estructura necesita reparación", 9113), Src_errnoh, AS_OS_LINUX },
  /*283*/ { (uint32_t)117, "ENETRESET", AS_DESCR_HANDLE("", 9148), Src_errnoh, AS_OS_WINDOWS },
  /*284*/ { (uint32_t)118, "ENOTNAM", AS_DESCR_HANDLE("No es un archivo de tipo con nombre de XENIX", 9149), Src_errnoh, AS_OS_LINUX },
  /*285*/ { (uint32_t)118, "ENETUNREACH", AS_DESCR_HANDLE("", 9194), Src_errnoh, AS_OS_WINDOWS },
  /*286*/ { (uint32_t)119, "ENAVAIL", AS_DESCR_HANDLE("No hay semáforos XENIX disponibles", 9195), Src_errnoh, AS_OS_LINUX },
  /*287*/ { (uint32_t)119, "ENOBUFS", AS_DESCR_HANDLE("", 9231), Src_errnoh, AS_OS_WINDOWS },
  /*288*/ { (uint32_t)120, "EISNAM", AS_DESCR_HANDLE("Es un archivo de tipo con nombre", 9232), Src_errnoh, AS_OS_LINUX },
  /*289*/ { (uint32_t)120, "EPROTONOSUPPORT", AS_DESCR_HANDLE("Protocolo no admitido", 9265), Src_errnoh, AS_OS_SOLARIS },
  /*290*/ { (uint32_t)120, "ENODATA", AS_DESCR_HANDLE("", 9287), Src_errnoh, AS_OS_WINDOWS },
  /*291*/ { (uint32_t)121, "EREMOTEIO", AS_DESCR_HANDLE("Error de E/S remota", 9288), Src_errnoh, AS_OS_LINUX },
  /*292*/ { (uint32_t)121, "ESOCKTNOSUPPORT", AS_DESCR_HANDLE("Tipo de socket no admitido", 9308), Src_errnoh, AS_OS_SOLARIS },
  /*293*/ { (uint32_t)121, "ENOLINK", AS_DESCR_HANDLE("", 9335), Src_errnoh, AS_OS_WINDOWS },
  /*294*/ { (uint32_t)122, "EOPNOTSUPP", AS_DESCR_HANDLE("El socket no admite esta operación", 9336), Src_errnoh, AS_OS_SOLARIS },
  /*295*/ { (uint32_t)122, "ENOMSG", AS_DESCR_HANDLE("", 9372), Src_errnoh, AS_OS_WINDOWS },
  /*296*/ { (uint32_t)123, "EPFNOSUPPORT", AS_DESCR_HANDLE("Familia de protocolos no admitida", 9373), Src_errnoh, AS_OS_SOLARIS },
  /*297*/ { (uint32_t)123, "ENOPROTOOPT", AS_DESCR_HANDLE("", 9407), Src_errnoh, AS_OS_WINDOWS },
  /*298*/ { (uint32_t)124, "EAFNOSUPPORT", AS_DESCR_HANDLE("El protocolo no admite esta familia de direcciones", 9408), Src_errnoh, AS_OS_SOLARIS },
  /*299*/ { (uint32_t)124, "ENOSR", AS_DESCR_HANDLE("", 9459), Src_errnoh, AS_OS_WINDOWS },
  /*300*/ { (uint32_t)125, "EADDRINUSE", AS_DESCR_HANDLE("La dirección ya está en uso", 9460), Src_errnoh, AS_OS_SOLARIS },
  /*301*/ { (uint32_t)125, "ENOSTR", AS_DESCR_HANDLE("", 9490), Src_errnoh, AS_OS_WINDOWS },
  /*302*/ { (uint32_t)126, "EADDRNOTAVAIL", AS_DESCR_HANDLE("No se puede asignar la dirección solicitada", 9491), Src_errnoh, AS_OS_SOLARIS },
  /*303*/ { (uint32_t)126, "ENOTCONN", AS_DESCR_HANDLE("", 9536), Src_errnoh, AS_OS_WINDOWS },
  /*304*/ { (uint32_t)127, "ENETDOWN", AS_DESCR_HANDLE("La red no está operativa", 9537), Src_errnoh, AS_OS_SOLARIS },
  /*305*/ { (uint32_t)127, "ENOTRECOVERABLE", AS_DESCR_HANDLE("", 9563), Src_errnoh, AS_OS_WINDOWS },
  /*306*/ { (uint32_t)128, "ENETUNREACH", AS_DESCR_HANDLE("La red no es accesible", 9564), Src_errnoh, AS_OS_SOLARIS },
  /*307*/ { (uint32_t)128, "ENOTSOCK", AS_DESCR_HANDLE("", 9587), Src_errnoh, AS_OS_WINDOWS },
  /*308*/ { (uint32_t)129, "ENETRESET", AS_DESCR_HANDLE("La red interrumpió la conexión debido a un reinicio", 9588), Src_errnoh, AS_OS_SOLARIS },
  /*309*/ { (uint32_t)129, "ENOTSUP", AS_DESCR_HANDLE("", 9642), Src_errnoh, AS_OS_WINDOWS },
  /*310*/ { (uint32_t)130, "ECONNABORTED", AS_DESCR_HANDLE("El software provocó la interrupción de la conexión", 9643), Src_errnoh, AS_OS_SOLARIS },
  /*311*/ { (uint32_t)130, "EOPNOTSUPP", AS_DESCR_HANDLE("", 9697), Src_errnoh, AS_OS_WINDOWS },
  /*312*/ { (uint32_t)131, "ECONNRESET", AS_DESCR_HANDLE("La conexión fue reiniciada por el extremo remoto", 9698), Src_errnoh, AS_OS_SOLARIS },
  /*313*/ { (uint32_t)131, "EOTHER", AS_DESCR_HANDLE("", 9748), Src_errnoh, AS_OS_WINDOWS },
  /*314*/ { (uint32_t)132, "ENOBUFS", AS_DESCR_HANDLE("No hay espacio disponible en el búfer", 9749), Src_errnoh, AS_OS_SOLARIS },
  /*315*/ { (uint32_t)132, "EOVERFLOW", AS_DESCR_HANDLE("", 9788), Src_errnoh, AS_OS_WINDOWS },
  /*316*/ { (uint32_t)133, "EISCONN", AS_DESCR_HANDLE("El socket ya está conectado", 9789), Src_errnoh, AS_OS_SOLARIS },
  /*317*/ { (uint32_t)133, "EOWNERDEAD", AS_DESCR_HANDLE("", 9818), Src_errnoh, AS_OS_WINDOWS },
  /*318*/ { (uint32_t)134, "ENOTCONN", AS_DESCR_HANDLE("El socket no está conectado", 9819), Src_errnoh, AS_OS_SOLARIS },
  /*319*/ { (uint32_t)134, "EPROTO", AS_DESCR_HANDLE("", 9848), Src_errnoh, AS_OS_WINDOWS },
  /*320*/ { (uint32_t)135, "EPROTONOSUPPORT", AS_DESCR_HANDLE("", 9849), Src_errnoh, AS_OS_WINDOWS },
  /*321*/ { (uint32_t)136, "EPROTOTYPE", AS_DESCR_HANDLE("", 9850), Src_errnoh, AS_OS_WINDOWS },
  /*322*/ { (uint32_t)137, "ETIME", AS_DESCR_HANDLE("", 9851), Src_errnoh, AS_OS_WINDOWS },
  /*323*/ { (uint32_t)138, "ETIMEDOUT", AS_DESCR_HANDLE("", 9852), Src_errnoh, AS_OS_WINDOWS },
  /*324*/ { (uint32_t)139, "ETXTBSY", AS_DESCR_HANDLE("", 9853), Src_errnoh, AS_OS_WINDOWS },
  /*325*/ { (uint32_t)140, "EWOULDBLOCK", AS_DESCR_HANDLE("", 9854), Src_errnoh, AS_OS_WINDOWS },
  /*326*/ { (uint32_t)143, "ESHUTDOWN", AS_DESCR_HANDLE("No se puede enviar después de cerrar el socket", 9855), Src_errnoh, AS_OS_SOLARIS },
  /*327*/ { (uint32_t)144, "ETOOMANYREFS", AS_DESCR_HANDLE("Demasiadas referencias: no se puede realizar splice", 9903), Src_errnoh, AS_OS_SOLARIS },
  /*328*/ { (uint32_t)145, "ETIMEDOUT", AS_DESCR_HANDLE("Se agotó el tiempo de espera de la conexión", 9955), Src_errnoh, AS_OS_SOLARIS },
  /*329*/ { (uint32_t)146, "ECONNREFUSED", AS_DESCR_HANDLE("Conexión rechazada", 10001), Src_errnoh, AS_OS_SOLARIS },
  /*330*/ { (uint32_t)147, "EHOSTDOWN", AS_DESCR_HANDLE("El host no está operativo", 10021), Src_errnoh, AS_OS_SOLARIS },
  /*331*/ { (uint32_t)148, "EHOSTUNREACH", AS_DESCR_HANDLE("No hay una ruta hacia el host", 10048), Src_errnoh, AS_OS_SOLARIS },
  /*332*/ { (uint32_t)149, "EALREADY", AS_DESCR_HANDLE("La operación ya está en curso", 10078), Src_errnoh, AS_OS_SOLARIS },
  /*333*/ { (uint32_t)150, "EINPROGRESS", AS_DESCR_HANDLE("La operación está en curso", 10110), Src_errnoh, AS_OS_SOLARIS },
  /*334*/ { (uint32_t)151, "ESTALE", AS_DESCR_HANDLE("Identificador de archivo NFS obsoleto", 10139), Src_errnoh, AS_OS_SOLARIS },
  /*335*/ { (uint32_t)256, "ECVCERORR", AS_DESCR_HANDLE("", 10177), Src_errnoh, AS_OS_MAC },
  /*336*/ { (uint32_t)512, "ERESTARTSYS", AS_DESCR_HANDLE("", 10178), Src_errnoh, AS_OS_LINUX },
  /*337*/ { (uint32_t)512, "ECVPERORR", AS_DESCR_HANDLE("", 10179), Src_errnoh, AS_OS_MAC },
  /*338*/ { (uint32_t)513, "ERESTARTNOINTR", AS_DESCR_HANDLE("", 10180), Src_errnoh, AS_OS_LINUX },
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


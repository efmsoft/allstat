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
static int DescrBlockSize = 6534;
static const uint8_t CompressedDescr[] =
{
  // Uncompressed size: 6534, Compressed size: 2164, Rate: 3.0
  0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xad, 0x58, 0xdb, 0x6e, 0xdb, 0x48, 
  0x12, 0xe5, 0xa7, 0xf0, 0x07, 0x76, 0x02, 0xec, 0x7e, 0xc1, 0x22, 0x98, 0x00, 0x79, 0x98, 0xc9, 
  0x20, 0xde, 0x01, 0xe6, 0x35, 0x73, 0x01, 0x76, 0x80, 0xd9, 0x18, 0xc8, 0x64, 0xde, 0x25, 0xdb, 
  0xba, 0xd9, 0x92, 0x29, 0xaf, 0x64, 0xcb, 0x17, 0xca, 0x92, 0x6c, 0x39, 0x56, 0x9c, 0x48, 0x94, 
  0x62, 0xc7, 0x96, 0x45, 0x5d, 0x7e, 0x86, 0x7d, 0xe1, 0x53, 0x7e, 0x61, 0xab, 0x58, 0x4d, 0x8a, 
  0xa4, 0x28, 0xd9, 0x01, 0xd6, 0x2f, 0x16, 0xc9, 0xee, 0xea, 0xaa, 0x3a, 0xa7, 0x6e, 0xed, 0x0c, 
  0x4b, 0x2c, 0x93, 0x96, 0xbd, 0x21, 0x2f, 0x5c, 0xca, 0x56, 0x91, 0x77, 0xdb, 0xbc, 0x52, 0x72, 
  0x26, 0xa6, 0xc6, 0x3f, 0xb5, 0xb8, 0x59, 0xc0, 0xe7, 0x83, 0x9c, 0x63, 0xdf, 0xf2, 0xfc, 0x81, 
  0x38, 0xe9, 0xb1, 0xc9, 0xfe, 0xfc, 0x83, 0x9c, 0x9d, 0x88, 0xce, 0x8e, 0x26, 0xae, 0x6d, 0x61, 
  0x37, 0x64, 0x7f, 0x53, 0x54, 0x3b, 0xf2, 0xec, 0x83, 0x33, 0xec, 0xf2, 0x83, 0xae, 0x26, 0xa7, 
  0x15, 0x96, 0xb9, 0x78, 0x82, 0xff, 0x72, 0x23, 0xb7, 0x7a, 0x24, 0x2d, 0x2b, 0xb4, 0xb3, 0x37, 
  0x65, 0xed, 0x1c, 0x88, 0x64, 0x66, 0x9f, 0xd5, 0x53, 0x1a, 0x33, 0x36, 0xf8, 0x7e, 0x9f, 0xe5, 
  0x6b, 0xb2, 0xd5, 0x91, 0xb3, 0x9c, 0xbb, 0x3f, 0x83, 0x57, 0x96, 0xd2, 0x88, 0x8e, 0x6f, 0x8e, 
  0xd9, 0xd8, 0xf0, 0xe5, 0xd0, 0x2b, 0xc3, 0x90, 0xb3, 0xbe, 0xf8, 0xf8, 0x8e, 0xd7, 0x9a, 0x7c, 
  0x3f, 0xaf, 0xa4, 0xb3, 0x6e, 0x59, 0xe9, 0x25, 0x3f, 0x6f, 0xf1, 0x51, 0x99, 0x1f, 0x6f, 0xf0, 
  0xda, 0xad, 0x03, 0x56, 0x1a, 0x16, 0x28, 0xa8, 0xb1, 0xbb, 0x4f, 0x6e, 0x7a, 0xc6, 0x32, 0x25, 
  0xf5, 0xb9, 0x6b, 0xbb, 0xd5, 0xf4, 0x92, 0xb5, 0x1a, 0x4a, 0xbe, 0xde, 0x67, 0xf9, 0xac, 0x9b, 
  0x29, 0xb1, 0x6c, 0x86, 0x75, 0x0f, 0x35, 0x5e, 0xdf, 0x74, 0x8f, 0xca, 0x60, 0x27, 0xdf, 0xf9, 
  0xaf, 0xb0, 0xeb, 0x1a, 0x59, 0xa0, 0x54, 0x70, 0xcd, 0x94, 0x7c, 0x97, 0x66, 0xf5, 0x1a, 0x19, 
  0xf8, 0xe0, 0x73, 0xe0, 0x07, 0x5f, 0x99, 0x73, 0x36, 0x3b, 0x52, 0xe6, 0x81, 0xa2, 0x70, 0x1e, 
  0x33, 0x3b, 0x9a, 0xe3, 0x43, 0x24, 0xef, 0x3a, 0xb4, 0xc3, 0xad, 0x4c, 0xf9, 0xee, 0x85, 0xda, 
  0x0e, 0x9f, 0x79, 0xd5, 0xe2, 0xc5, 0xf4, 0x1c, 0x3b, 0x7c, 0x75, 0x68, 0xf9, 0x78, 0x05, 0xbf, 
  0xc8, 0xcd, 0x4a, 0x57, 0x82, 0x0d, 0xd1, 0x2a, 0x54, 0xd8, 0x38, 0x25, 0x8e, 0xb7, 0xe8, 0x5c, 
  0xf0, 0x3f, 0x6b, 0x1f, 0x6b, 0x4b, 0xde, 0xfa, 0xd8, 0xc1, 0x09, 0x6e, 0x6a, 0x03, 0x11, 0xb7, 
  0x2e, 0xf4, 0xdf, 0xd7, 0x7f, 0x79, 0xfb, 0x87, 0xae, 0xce, 0x8e, 0x03, 0x47, 0x36, 0x7d, 0xcd, 
  0xdb, 0xd0, 0x89, 0x97, 0x81, 0x8d, 0xdb, 0x0a, 0xde, 0xc2, 0x7b, 0x67, 0x72, 0x24, 0xde, 0x8f, 
  0xdc, 0xda, 0x8d, 0xe6, 0xd6, 0x4f, 0x11, 0x9e, 0xde, 0xb1, 0x33, 0x29, 0x05, 0xa7, 0x5f, 0x49, 
  0xcb, 0x26, 0x09, 0x64, 0xa1, 0x46, 0xce, 0x02, 0xc3, 0x95, 0x0d, 0xa2, 0xd7, 0x72, 0xd3, 0x15, 
  0x70, 0x2f, 0xd0, 0x14, 0x4c, 0xd4, 0x90, 0x79, 0xdd, 0x77, 0x2c, 0x37, 0xc1, 0x1f, 0x9e, 0x87, 
  0xe4, 0x6d, 0x06, 0x48, 0x8b, 0x72, 0xef, 0x0b, 0xac, 0xd1, 0x50, 0x2b, 0xe4, 0xac, 0x2c, 0x7a, 
  0x35, 0x61, 0x57, 0xf8, 0xa9, 0x49, 0xc4, 0x00, 0xb6, 0x8a, 0xf6, 0x48, 0x63, 0xfd, 0x2c, 0x33, 
  0xf6, 0x44, 0xb5, 0xf1, 0x08, 0x4a, 0xa9, 0x10, 0x28, 0xa4, 0x80, 0x0a, 0x62, 0x60, 0xb3, 0xd3, 
  0x1d, 0x74, 0xf1, 0x6d, 0x9e, 0xa7, 0x7d, 0x5a, 0xb3, 0x72, 0x49, 0x85, 0x00, 0x99, 0x84, 0x4e, 
  0x31, 0x21, 0x2a, 0x4e, 0xc0, 0x4d, 0x1a, 0x6f, 0xe6, 0xa4, 0x95, 0x05, 0xce, 0x83, 0xfa, 0xc0, 
  0x41, 0x71, 0x69, 0xbb, 0x47, 0x6d, 0xcd, 0xa7, 0xbe, 0x77, 0x04, 0xc8, 0x93, 0xbd, 0x3e, 0xc0, 
  0x8d, 0x4a, 0x90, 0x08, 0xa4, 0x52, 0x20, 0xc2, 0x4d, 0x1d, 0xa3, 0xf9, 0xc6, 0x1d, 0x59, 0x29, 
  0x8b, 0x9b, 0xec, 0xe4, 0x46, 0x23, 0xf3, 0xb9, 0x79, 0xc5, 0x7a, 0xa7, 0x62, 0xb7, 0xaf, 0x31, 
  0xeb, 0x1e, 0xbc, 0xcb, 0x2e, 0x6a, 0xe0, 0x3a, 0xd6, 0xad, 0xc1, 0xa3, 0x1c, 0xb4, 0x08, 0x2b, 
  0x67, 0x94, 0x0d, 0xde, 0x2b, 0xaf, 0x8b, 0x8f, 0x1f, 0xf5, 0xbf, 0xeb, 0x6c, 0xb0, 0x81, 0x02, 
  0xca, 0x90, 0x44, 0x2e, 0x34, 0x8d, 0x38, 0x07, 0x42, 0x00, 0x2c, 0x45, 0x7c, 0x78, 0x05, 0x06, 
  0xa8, 0x98, 0xc7, 0x3d, 0xff, 0xc0, 0x3d, 0xa8, 0x5d, 0x1a, 0xcc, 0x3c, 0xd3, 0x34, 0x37, 0x9d, 
  0x63, 0xf9, 0x3e, 0x58, 0x80, 0x16, 0x1a, 0x77, 0x84, 0x9c, 0x4f, 0x3d, 0xcf, 0x49, 0xca, 0x35, 
  0xe1, 0xcd, 0x6e, 0xae, 0x24, 0x26, 0x3d, 0xcd, 0xb7, 0xb5, 0x9f, 0x75, 0x0f, 0x6d, 0xd6, 0x3a, 
  0xd5, 0x58, 0xc9, 0x90, 0xbd, 0x1e, 0x39, 0xd9, 0x19, 0xee, 0x06, 0x3a, 0x23, 0x18, 0xc5, 0x7b, 
  0x88, 0x68, 0x64, 0x86, 0xbc, 0xb3, 0xc4, 0xf8, 0x20, 0xee, 0x8d, 0x95, 0x30, 0x91, 0xdc, 0x10, 
  0xa4, 0xe6, 0x95, 0x9c, 0x9d, 0xa2, 0x6c, 0xef, 0x83, 0xfb, 0x7e, 0xc0, 0xb6, 0x3b, 0x90, 0x80, 
  0xd8, 0xc8, 0xd0, 0x96, 0x00, 0x16, 0x84, 0x2c, 0x44, 0x0f, 0xed, 0x8a, 0x43, 0xa8, 0x3f, 0x5d, 
  0x7b, 0xae, 0x7b, 0x5c, 0xdb, 0x5a, 0x82, 0x58, 0x44, 0x86, 0x6f, 0x1b, 0xe9, 0x3a, 0xc7, 0x63, 
  0xee, 0xdb, 0x04, 0x88, 0x12, 0x12, 0x07, 0xf1, 0x58, 0x31, 0x38, 0x01, 0xa1, 0x45, 0xc5, 0x79, 
  0xcd, 0x58, 0x4e, 0xbf, 0x04, 0x98, 0x82, 0x5d, 0x11, 0x51, 0x2a, 0x89, 0x1a, 0x21, 0xc2, 0x1a, 
  0x07, 0xe0, 0xef, 0xe5, 0x10, 0xd1, 0x16, 0xf2, 0x2a, 0x2b, 0x35, 0x11, 0x88, 0x04, 0x7b, 0x56, 
  0x61, 0x13, 0x4e, 0xee, 0xd2, 0xba, 0xe3, 0x83, 0x0d, 0xd0, 0xdd, 0x27, 0xe7, 0x39, 0x90, 0xf5, 
  0x10, 0x3e, 0xb8, 0x67, 0x75, 0x3c, 0xc3, 0x3b, 0x79, 0x15, 0x46, 0x62, 0xb2, 0x27, 0x6c, 0x33, 
  0x94, 0x54, 0xbc, 0x24, 0x0b, 0x8b, 0x9c, 0x51, 0x9b, 0x97, 0xce, 0x12, 0x11, 0xf1, 0xb6, 0x10, 
  0x8f, 0xe4, 0x74, 0x3a, 0xdf, 0x42, 0xca, 0x04, 0xe5, 0x6d, 0x51, 0x16, 0x9d, 0x75, 0xd2, 0x24, 
  0x97, 0xca, 0x54, 0x91, 0x0e, 0x25, 0x4b, 0x35, 0x5a, 0x85, 0xaa, 0xd8, 0xad, 0xe5, 0x42, 0xe5, 
  0xc4, 0xc2, 0x64, 0x63, 0x8d, 0x65, 0xee, 0x86, 0x36, 0x62, 0x29, 0x00, 0xb5, 0xc8, 0x48, 0xfd, 
  0xd5, 0xeb, 0xf5, 0x5f, 0x7f, 0x8b, 0xca, 0xa2, 0x65, 0xe8, 0x6f, 0xeb, 0x5e, 0x7c, 0xb0, 0x14, 
  0xa0, 0xb1, 0x13, 0x1c, 0xfb, 0x5c, 0x34, 0xd3, 0x51, 0x29, 0x31, 0xbf, 0x89, 0x71, 0x85, 0x65, 
  0x3f, 0xb1, 0xe2, 0x48, 0xa5, 0xf1, 0x40, 0x02, 0xbf, 0x9c, 0x40, 0x26, 0x5f, 0x22, 0x71, 0x9e, 
  0x8b, 0x00, 0x0f, 0xb2, 0x94, 0x12, 0x26, 0x10, 0x2d, 0x42, 0xdb, 0xb8, 0xb8, 0x79, 0xb2, 0xf2, 
  0xc9, 0xa0, 0x61, 0x16, 0x98, 0x54, 0x96, 0x76, 0x16, 0x71, 0x89, 0xf3, 0xa3, 0x33, 0xd7, 0x6e, 
  0xad, 0xcb, 0xca, 0xbb, 0x8a, 0x3b, 0xc6, 0x9e, 0x9b, 0x82, 0x03, 0x81, 0x71, 0x66, 0x01, 0x16, 
  0xa2, 0xca, 0x5e, 0xef, 0x01, 0x2a, 0x0a, 0x3b, 0x8f, 0xde, 0x5c, 0x7a, 0x12, 0x1b, 0xef, 0x63, 
  0xf5, 0xf4, 0x72, 0xdb, 0x97, 0x71, 0x91, 0x04, 0xf2, 0x9d, 0x31, 0xaa, 0x07, 0xa2, 0xd4, 0x73, 
  0xfa, 0x8c, 0xb5, 0x4b, 0xa1, 0x3a, 0x7f, 0x68, 0xe9, 0x6b, 0xff, 0x7a, 0xf9, 0xed, 0x3f, 0xbf, 
  0x53, 0x81, 0x02, 0xc4, 0x84, 0xf2, 0x92, 0xbc, 0x00, 0xdd, 0xd0, 0xe7, 0xa5, 0xde, 0x97, 0x71, 
  0x1e, 0x4e, 0x72, 0x46, 0xbb, 0x98, 0xd0, 0xb1, 0xae, 0x36, 0xf4, 0xe7, 0x4f, 0x5e, 0x7c, 0x19, 
  0x17, 0xe6, 0x80, 0xaa, 0x5e, 0xe6, 0x31, 0x5b, 0x7a, 0x2d, 0x38, 0x90, 0x1d, 0x75, 0x90, 0xc7, 
  0x79, 0x28, 0x18, 0x0d, 0x2d, 0x9c, 0xab, 0x81, 0xe0, 0x62, 0x74, 0xa9, 0x32, 0x76, 0xc2, 0x5a, 
  0xd2, 0x6d, 0x4d, 0xa7, 0xe2, 0x28, 0x53, 0x35, 0xd6, 0x9f, 0x2c, 0xd4, 0xbd, 0xe4, 0x45, 0xe6, 
  0x47, 0x6e, 0x8e, 0xe6, 0xf1, 0x0c, 0x65, 0xc2, 0x0b, 0x03, 0x88, 0x7a, 0x1b, 0x3e, 0xe0, 0x11, 
  0x1e, 0x38, 0xcb, 0x17, 0x2a, 0xc6, 0x17, 0x33, 0x5e, 0x95, 0x2b, 0xc8, 0xf3, 0x8c, 0x4f, 0xcc, 
  0x7c, 0x9f, 0x84, 0x20, 0x7e, 0x90, 0x6c, 0xaa, 0x83, 0xa4, 0xb5, 0x54, 0x02, 0x81, 0x50, 0xe0, 
  0x16, 0x39, 0x33, 0x01, 0x65, 0xd5, 0x5f, 0x44, 0x0a, 0xdd, 0xd2, 0x55, 0x94, 0xc8, 0xe6, 0x09, 
  0x82, 0x88, 0xa2, 0x3c, 0xb5, 0xf0, 0xd1, 0xb3, 0x1c, 0xe8, 0xc5, 0x86, 0x9b, 0x8a, 0x2f, 0x80, 
  0x07, 0xcf, 0xdf, 0xf9, 0x9e, 0x5d, 0xfc, 0xfe, 0xe7, 0x9b, 0xff, 0xac, 0xff, 0xf5, 0xfa, 0xad, 
  0xee, 0x2f, 0x4f, 0x4c, 0x60, 0xb1, 0x45, 0xc4, 0x5f, 0xc4, 0xc8, 0x63, 0x3b, 0xd4, 0x19, 0x67, 
  0xd6, 0x52, 0xdf, 0xbe, 0x7f, 0xb6, 0xa6, 0x2b, 0x60, 0x8c, 0x0b, 0xde, 0xd8, 0x42, 0x07, 0xb7, 
  0x07, 0xd8, 0x38, 0xae, 0xda, 0xa5, 0xd2, 0x2c, 0x3d, 0xa0, 0x49, 0xd3, 0x2d, 0x48, 0x2b, 0x5e, 
  0x5c, 0xa0, 0x2f, 0x22, 0xf4, 0x88, 0xac, 0x65, 0xfd, 0xba, 0xb4, 0xf6, 0xb1, 0xb5, 0x68, 0x1f, 
  0xcb, 0xbb, 0x6b, 0x95, 0xbe, 0x5f, 0xfe, 0xf0, 0x54, 0x25, 0x58, 0xd5, 0xb4, 0xa2, 0x16, 0xdb, 
  0x4d, 0x0a, 0x35, 0x8c, 0x52, 0xcf, 0xdb, 0x98, 0x91, 0xbc, 0x6a, 0xc1, 0x0f, 0x9b, 0xac, 0xbf, 
  0xa5, 0xbd, 0x04, 0xd5, 0x45, 0xe1, 0x1e, 0xfa, 0x37, 0x25, 0xdc, 0x13, 0x53, 0xc8, 0x03, 0x33, 
  0xe6, 0xb5, 0x9f, 0x6d, 0x37, 0xe4, 0xe6, 0x04, 0xe1, 0x6d, 0x43, 0x5e, 0xdd, 0xe5, 0x37, 0x36, 
  0x56, 0x86, 0xed, 0x5b, 0x0e, 0x01, 0x4d, 0x81, 0x44, 0xa1, 0xa0, 0x8a, 0xbe, 0x27, 0xc2, 0xab, 
  0x1b, 0xa1, 0x51, 0x22, 0x51, 0x67, 0x96, 0x1a, 0x83, 0x5a, 0x20, 0x92, 0xfa, 0x47, 0xcc, 0x43, 
  0x9e, 0x20, 0x2a, 0xcd, 0x90, 0xac, 0x65, 0x27, 0xa5, 0x7a, 0x5b, 0x12, 0x18, 0xd7, 0xcc, 0xaf, 
  0x0b, 0xdb, 0x58, 0x8e, 0xca, 0x25, 0x71, 0xd9, 0xc7, 0x6f, 0x55, 0xcb, 0x19, 0xa6, 0xfc, 0x1d, 
  0xe8, 0xcf, 0x1c, 0xfc, 0xf6, 0x27, 0x9f, 0xe8, 0x3c, 0x44, 0x56, 0x44, 0xa7, 0x22, 0x3f, 0xf7, 
  0x7a, 0xe9, 0xcc, 0xd3, 0x1b, 0xda, 0x64, 0xf0, 0x9a, 0x2a, 0x3f, 0xd0, 0x32, 0x93, 0x9d, 0x0a, 
  0x27, 0xbf, 0xb8, 0xf2, 0x93, 0x1b, 0x5e, 0xbd, 0x5f, 0xe8, 0x0e, 0x09, 0xd9, 0x50, 0xa7, 0x4a, 
  0xed, 0x70, 0x6f, 0xe6, 0xd6, 0x7a, 0xaa, 0x69, 0x02, 0xdd, 0x33, 0x03, 0x67, 0xf4, 0x81, 0x8d, 
  0x2a, 0x4a, 0x3f, 0x72, 0x00, 0x0c, 0x3b, 0x94, 0x07, 0x83, 0x09, 0x02, 0x3d, 0x46, 0x0e, 0x09, 
  0xf2, 0x20, 0x0e, 0x3e, 0x99, 0x0b, 0x68, 0x0c, 0xc2, 0xae, 0xd3, 0x54, 0x27, 0x4c, 0xa7, 0x94, 
  0x1a, 0xac, 0x6e, 0x44, 0x4e, 0x91, 0xa3, 0x0f, 0x8e, 0x3d, 0x71, 0xaf, 0x8a, 0xd2, 0x4a, 0xfb, 
  0x51, 0x60, 0x1f, 0x01, 0x0a, 0x68, 0x76, 0xca, 0x96, 0xd3, 0xbd, 0xb8, 0x37, 0x5f, 0x7d, 0xb3, 
  0xfe, 0xd7, 0x5b, 0x9d, 0x08, 0xaa, 0x7f, 0xf3, 0xc7, 0xef, 0x3f, 0xeb, 0x72, 0x1b, 0x0b, 0x34, 
  0x09, 0x57, 0x4d, 0x6b, 0x58, 0x2c, 0xe4, 0xb2, 0xb8, 0xb3, 0x01, 0xeb, 0xa0, 0xdd, 0xf0, 0x49, 
  0xea, 0xf9, 0x97, 0x12, 0x62, 0x58, 0xc3, 0x20, 0x2d, 0x62, 0xb2, 0x16, 0xd5, 0xcf, 0x18, 0xc2, 
  0x41, 0xda, 0x4a, 0x76, 0x3c, 0xb9, 0x43, 0xc0, 0x03, 0x4c, 0x30, 0x5e, 0xf7, 0x1d, 0xb2, 0x97, 
  0x46, 0x41, 0xcf, 0x52, 0xf0, 0x9c, 0x33, 0xdd, 0x61, 0xef, 0x36, 0xc4, 0x78, 0x24, 0x46, 0xc3, 
  0x87, 0x00, 0x51, 0x83, 0x53, 0xb7, 0x86, 0xf6, 0x8e, 0x0c, 0x18, 0xbc, 0xff, 0x6f, 0x20, 0xf8, 
  0x17, 0x00, 0x58, 0xe7, 0x43, 0x17, 0x03, 0x6c, 0x54, 0x85, 0x7e, 0x81, 0x1f, 0xf4, 0x59, 0xd9, 
  0x82, 0x40, 0x5b, 0x98, 0xfc, 0xc8, 0x73, 0x0f, 0x00, 0xe2, 0x17, 0x06, 0x9a, 0xe0, 0x82, 0x24, 
  0x16, 0x91, 0xa4, 0x36, 0x3f, 0xfd, 0xe1, 0x47, 0x5d, 0x11, 0xee, 0x51, 0xa0, 0x44, 0xd2, 0x6b, 
  0xf0, 0x71, 0x21, 0x69, 0x78, 0x42, 0xe2, 0x40, 0x7c, 0xdd, 0xac, 0xf4, 0xdd, 0xab, 0x5f, 0xfe, 
  0xfd, 0xb7, 0x17, 0x7a, 0x42, 0x4b, 0x90, 0x80, 0x4a, 0xc2, 0xdc, 0x14, 0xef, 0x90, 0x83, 0xae, 
  0x37, 0x98, 0xd5, 0xc9, 0xef, 0x7e, 0x07, 0x1c, 0x1e, 0x9b, 0x92, 0xa7, 0x91, 0x48, 0x01, 0x9f, 
  0x5e, 0x89, 0x5d, 0xeb, 0x11, 0xb3, 0xd3, 0xca, 0x09, 0xc9, 0xb0, 0xc2, 0x60, 0xc7, 0xa8, 0xb0, 
  0x30, 0x40, 0x25, 0xb1, 0xd1, 0xcb, 0xa0, 0x84, 0xf3, 0x93, 0x67, 0xcf, 0x9f, 0xbd, 0x40, 0x82, 
  0x0f, 0x4b, 0x78, 0x79, 0x62, 0x76, 0x74, 0x9f, 0x07, 0xfc, 0x73, 0x9a, 0xb5, 0x6f, 0x00, 0x71, 
  0x67, 0xbc, 0x27, 0xcc, 0x66, 0xe2, 0x58, 0x65, 0x5e, 0xf1, 0xc2, 0x14, 0x2a, 0x3c, 0x1b, 0x9c, 
  0xf2, 0xd4, 0x65, 0xb4, 0x58, 0xaf, 0x1a, 0xa1, 0xc8, 0x14, 0xff, 0xae, 0x24, 0xc4, 0x0e, 0xe8, 
  0x8d, 0x7e, 0x7c, 0xb6, 0x86, 0xbd, 0x90, 0x33, 0x6e, 0xca, 0x69, 0x05, 0x3a, 0x61, 0xb1, 0x71, 
  0x9f, 0x74, 0x09, 0x33, 0xab, 0x8b, 0xfd, 0x23, 0x88, 0xab, 0xaf, 0x24, 0x48, 0xf2, 0x8c, 0x45, 
  0x36, 0xeb, 0xf3, 0x8b, 0x10, 0xcf, 0x77, 0xca, 0xe1, 0x09, 0x34, 0x09, 0x9c, 0x9c, 0x30, 0x64, 
  0xcd, 0x35, 0x8b, 0xb0, 0x23, 0x61, 0xa4, 0x8a, 0x4f, 0x3c, 0x4a, 0x0b, 0xea, 0x3f, 0x1e, 0xc3, 
  0x92, 0x15, 0x33, 0x56, 0xb4, 0x5d, 0x8d, 0x93, 0x22, 0x3e, 0x50, 0x45, 0xba, 0x85, 0x85, 0xd9, 
  0x49, 0xe9, 0x45, 0x17, 0x51, 0xaa, 0x29, 0x7e, 0x68, 0x4e, 0x0a, 0xab, 0x1b, 0xc7, 0x6e, 0xc5, 
  0x78, 0x04, 0x84, 0xba, 0xee, 0xb0, 0x2c, 0xde, 0x94, 0x8a, 0xee, 0x81, 0xd8, 0xbf, 0xd0, 0x96, 
  0x0c, 0x46, 0xf3, 0x32, 0x1c, 0x34, 0xf2, 0x0f, 0x4d, 0x42, 0x80, 0x2e, 0xd4, 0x25, 0x67, 0x08, 
  0x9c, 0x4d, 0xc1, 0x3a, 0x99, 0xca, 0xcc, 0x27, 0x89, 0x08, 0xdd, 0x42, 0x33, 0x10, 0x98, 0x60, 
  0x9c, 0xab, 0x6b, 0xd6, 0xc3, 0x06, 0x04, 0x8f, 0x9a, 0xd6, 0xd8, 0x2c, 0xe3, 0xb6, 0x6c, 0xd1, 
  0x2d, 0x60, 0x77, 0x63, 0xa6, 0x20, 0xb3, 0x23, 0x80, 0xbf, 0xbd, 0x79, 0xf3, 0x7a, 0x5d, 0x47, 
  0xe8, 0x23, 0xf2, 0xe6, 0xa3, 0x51, 0xf4, 0x98, 0xc4, 0x79, 0x67, 0xe5, 0xec, 0xe2, 0x3b, 0x43, 
  0x61, 0x10, 0x1f, 0x31, 0x16, 0xda, 0xf5, 0xe5, 0x3d, 0x78, 0xd2, 0xe5, 0x55, 0xd2, 0x9d, 0xd8, 
  0x8a, 0x56, 0x55, 0xa3, 0xe6, 0x91, 0xc2, 0x83, 0x0f, 0x33, 0xa2, 0x9c, 0xd5, 0x7c, 0xde, 0xfd, 
  0xf4, 0xed, 0xf7, 0xcf, 0x7f, 0xd2, 0xd9, 0xde, 0x04, 0xbb, 0x02, 0xaa, 0x14, 0x9e, 0x8c, 0x05, 
  0x90, 0xd4, 0x4a, 0x68, 0x72, 0x31, 0x4b, 0xe6, 0xf0, 0x52, 0xe7, 0xd0, 0x4a, 0xd8, 0x97, 0x90, 
  0x7d, 0x54, 0x55, 0xc7, 0xe1, 0xc9, 0xef, 0xb9, 0x57, 0xe5, 0x9c, 0xd5, 0x94, 0x4c, 0xce, 0x0b, 
  0x5a, 0x72, 0x88, 0x27, 0x05, 0xf3, 0xca, 0x68, 0x5c, 0x08, 0xb8, 0x85, 0x18, 0x53, 0x2f, 0xd4, 
  0x58, 0x35, 0x5f, 0xb7, 0x34, 0x54, 0x96, 0xc4, 0xc5, 0x43, 0x41, 0x90, 0x34, 0xe9, 0x27, 0x0d, 
  0xf1, 0xea, 0xef, 0x81, 0xe1, 0x7c, 0x15, 0x57, 0x23, 0x54, 0x8d, 0x33, 0x75, 0x61, 0xae, 0x5c, 
  0xc6, 0xd3, 0x04, 0x9a, 0x26, 0xb0, 0x74, 0x05, 0x49, 0xe1, 0xef, 0x7f, 0xb7, 0x84, 0x74, 0xe7, 
  0x86, 0x19, 0x00, 0x00, 
};
#endif  // #if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
static constexpr uint64_t _GENERATOR_ = AS_GENERATOR::AS_ERRNO;
#endif

static const STATUS_ITEM Status[] =
{
  /*0*/ { (uint32_t)1, "EPERM", AS_DESCR_HANDLE("不允许执行此操作", 0), Src_errnoh, AS_OS_ANY },
  /*1*/ { (uint32_t)2, "ENOENT", AS_DESCR_HANDLE("没有此文件或目录", 25), Src_errnoh, AS_OS_ANY },
  /*2*/ { (uint32_t)3, "ESRCH", AS_DESCR_HANDLE("没有此进程", 50), Src_errnoh, AS_OS_ANY },
  /*3*/ { (uint32_t)4, "EINTR", AS_DESCR_HANDLE("系统调用被中断", 66), Src_errnoh, AS_OS_ANY },
  /*4*/ { (uint32_t)5, "EIO", AS_DESCR_HANDLE("输入/输出错误", 88), Src_errnoh, AS_OS_ANY },
  /*5*/ { (uint32_t)6, "ENXIO", AS_DESCR_HANDLE("没有此设备或地址", 108), Src_errnoh, AS_OS_ANY },
  /*6*/ { (uint32_t)7, "E2BIG", AS_DESCR_HANDLE("参数列表过长", 133), Src_errnoh, AS_OS_ANY },
  /*7*/ { (uint32_t)8, "ENOEXEC", AS_DESCR_HANDLE("可执行文件格式错误", 152), Src_errnoh, AS_OS_ANY },
  /*8*/ { (uint32_t)9, "EBADF", AS_DESCR_HANDLE("文件描述符无效", 180), Src_errnoh, AS_OS_ANY },
  /*9*/ { (uint32_t)10, "ECHILD", AS_DESCR_HANDLE("没有子进程", 202), Src_errnoh, AS_OS_ANY },
  /*10*/ { (uint32_t)11, "EAGAIN", AS_DESCR_HANDLE("资源暂时不可用", 218), Src_errnoh, AS_OS_LINUX },
  /*11*/ { (uint32_t)11, "EDEADLK", AS_DESCR_HANDLE("已避免资源死锁", 240), Src_errnoh, AS_OS_MAC },
  /*12*/ { (uint32_t)11, "EAGAIN", AS_DESCR_HANDLE("资源暂时不可用", 262), Src_errnoh, AS_OS_SOLARIS },
  /*13*/ { (uint32_t)11, "EAGAIN", AS_DESCR_HANDLE("", 284), Src_errnoh, AS_OS_WINDOWS },
  /*14*/ { (uint32_t)12, "ENOMEM", AS_DESCR_HANDLE("无法分配内存", 285), Src_errnoh, AS_OS_ANY },
  /*15*/ { (uint32_t)13, "EACCES", AS_DESCR_HANDLE("权限被拒绝", 304), Src_errnoh, AS_OS_ANY },
  /*16*/ { (uint32_t)14, "EFAULT", AS_DESCR_HANDLE("地址无效", 320), Src_errnoh, AS_OS_ANY },
  /*17*/ { (uint32_t)15, "ENOTBLK", AS_DESCR_HANDLE("需要块设备", 333), Src_errnoh, AS_OS_LINUX },
  /*18*/ { (uint32_t)15, "ENOTBLK", AS_DESCR_HANDLE("需要块设备", 349), Src_errnoh, AS_OS_MAC },
  /*19*/ { (uint32_t)15, "ENOTBLK", AS_DESCR_HANDLE("需要块设备", 365), Src_errnoh, AS_OS_SOLARIS },
  /*20*/ { (uint32_t)16, "EBUSY", AS_DESCR_HANDLE("设备或资源正忙", 381), Src_errnoh, AS_OS_ANY },
  /*21*/ { (uint32_t)17, "EEXIST", AS_DESCR_HANDLE("文件已存在", 403), Src_errnoh, AS_OS_ANY },
  /*22*/ { (uint32_t)18, "EXDEV", AS_DESCR_HANDLE("不允许跨设备链接", 419), Src_errnoh, AS_OS_ANY },
  /*23*/ { (uint32_t)19, "ENODEV", AS_DESCR_HANDLE("设备不支持此操作", 444), Src_errnoh, AS_OS_ANY },
  /*24*/ { (uint32_t)20, "ENOTDIR", AS_DESCR_HANDLE("不是目录", 469), Src_errnoh, AS_OS_ANY },
  /*25*/ { (uint32_t)21, "EISDIR", AS_DESCR_HANDLE("是目录", 482), Src_errnoh, AS_OS_ANY },
  /*26*/ { (uint32_t)22, "EINVAL", AS_DESCR_HANDLE("参数无效", 492), Src_errnoh, AS_OS_ANY },
  /*27*/ { (uint32_t)23, "ENFILE", AS_DESCR_HANDLE("系统中打开的文件过多", 505), Src_errnoh, AS_OS_ANY },
  /*28*/ { (uint32_t)24, "EMFILE", AS_DESCR_HANDLE("打开的文件过多", 536), Src_errnoh, AS_OS_ANY },
  /*29*/ { (uint32_t)25, "ENOTTY", AS_DESCR_HANDLE("此设备不适用该 ioctl 操作", 558), Src_errnoh, AS_OS_ANY },
  /*30*/ { (uint32_t)26, "ETXTBSY", AS_DESCR_HANDLE("可执行文件正忙", 593), Src_errnoh, AS_OS_LINUX },
  /*31*/ { (uint32_t)26, "ETXTBSY", AS_DESCR_HANDLE("可执行文件正忙", 615), Src_errnoh, AS_OS_MAC },
  /*32*/ { (uint32_t)26, "ETXTBSY", AS_DESCR_HANDLE("可执行文件正忙", 637), Src_errnoh, AS_OS_SOLARIS },
  /*33*/ { (uint32_t)27, "EFBIG", AS_DESCR_HANDLE("文件过大", 659), Src_errnoh, AS_OS_ANY },
  /*34*/ { (uint32_t)28, "ENOSPC", AS_DESCR_HANDLE("设备上没有剩余空间", 672), Src_errnoh, AS_OS_ANY },
  /*35*/ { (uint32_t)29, "ESPIPE", AS_DESCR_HANDLE("非法定位操作", 700), Src_errnoh, AS_OS_ANY },
  /*36*/ { (uint32_t)30, "EROFS", AS_DESCR_HANDLE("只读文件系统", 719), Src_errnoh, AS_OS_ANY },
  /*37*/ { (uint32_t)31, "EMLINK", AS_DESCR_HANDLE("链接数过多", 738), Src_errnoh, AS_OS_ANY },
  /*38*/ { (uint32_t)32, "EPIPE", AS_DESCR_HANDLE("管道已断开", 754), Src_errnoh, AS_OS_ANY },
  /*39*/ { (uint32_t)33, "EDOM", AS_DESCR_HANDLE("数学函数参数超出定义域", 770), Src_errnoh, AS_OS_ANY },
  /*40*/ { (uint32_t)34, "ERANGE", AS_DESCR_HANDLE("数学运算结果无法表示", 804), Src_errnoh, AS_OS_ANY },
  /*41*/ { (uint32_t)35, "EDEADLK", AS_DESCR_HANDLE("将发生资源死锁", 835), Src_errnoh, AS_OS_LINUX },
  /*42*/ { (uint32_t)35, "EAGAIN", AS_DESCR_HANDLE("资源暂时不可用", 857), Src_errnoh, AS_OS_MAC },
  /*43*/ { (uint32_t)35, "ENOMSG", AS_DESCR_HANDLE("没有所需类型的消息", 879), Src_errnoh, AS_OS_SOLARIS },
  /*44*/ { (uint32_t)36, "ENAMETOOLONG", AS_DESCR_HANDLE("文件名过长", 907), Src_errnoh, AS_OS_LINUX },
  /*45*/ { (uint32_t)36, "EINPROGRESS", AS_DESCR_HANDLE("操作正在进行", 923), Src_errnoh, AS_OS_MAC },
  /*46*/ { (uint32_t)36, "EIDRM", AS_DESCR_HANDLE("标识符已被移除", 942), Src_errnoh, AS_OS_SOLARIS },
  /*47*/ { (uint32_t)36, "EDEADLK", AS_DESCR_HANDLE("", 964), Src_errnoh, AS_OS_WINDOWS },
  /*48*/ { (uint32_t)37, "ENOLCK", AS_DESCR_HANDLE("没有可用的记录锁", 965), Src_errnoh, AS_OS_LINUX },
  /*49*/ { (uint32_t)37, "EALREADY", AS_DESCR_HANDLE("操作已在进行", 990), Src_errnoh, AS_OS_MAC },
  /*50*/ { (uint32_t)37, "ECHRNG", AS_DESCR_HANDLE("通道号超出范围", 1009), Src_errnoh, AS_OS_SOLARIS },
  /*51*/ { (uint32_t)38, "ENOSYS", AS_DESCR_HANDLE("函数未实现", 1031), Src_errnoh, AS_OS_LINUX },
  /*52*/ { (uint32_t)38, "ENOTSOCK", AS_DESCR_HANDLE("对非套接字对象执行了套接字操作", 1047), Src_errnoh, AS_OS_MAC },
  /*53*/ { (uint32_t)38, "EL2NSYNC", AS_DESCR_HANDLE("第 2 层未同步", 1093), Src_errnoh, AS_OS_SOLARIS },
  /*54*/ { (uint32_t)38, "ENAMETOOLONG", AS_DESCR_HANDLE("", 1112), Src_errnoh, AS_OS_WINDOWS },
  /*55*/ { (uint32_t)39, "ENOTEMPTY", AS_DESCR_HANDLE("目录非空", 1113), Src_errnoh, AS_OS_LINUX },
  /*56*/ { (uint32_t)39, "EDESTADDRREQ", AS_DESCR_HANDLE("需要目标地址", 1126), Src_errnoh, AS_OS_MAC },
  /*57*/ { (uint32_t)39, "EL3HLT", AS_DESCR_HANDLE("第 3 层已停止", 1145), Src_errnoh, AS_OS_SOLARIS },
  /*58*/ { (uint32_t)39, "ENOLCK", AS_DESCR_HANDLE("", 1164), Src_errnoh, AS_OS_WINDOWS },
  /*59*/ { (uint32_t)40, "ELOOP", AS_DESCR_HANDLE("遇到的符号链接过多", 1165), Src_errnoh, AS_OS_LINUX },
  /*60*/ { (uint32_t)40, "EMSGSIZE", AS_DESCR_HANDLE("消息过长", 1193), Src_errnoh, AS_OS_MAC },
  /*61*/ { (uint32_t)40, "EL3RST", AS_DESCR_HANDLE("第 3 层已重置", 1206), Src_errnoh, AS_OS_SOLARIS },
  /*62*/ { (uint32_t)40, "ENOSYS", AS_DESCR_HANDLE("", 1225), Src_errnoh, AS_OS_WINDOWS },
  /*63*/ { (uint32_t)41, "EWOULDBLOCK", AS_DESCR_HANDLE("操作将阻塞", 1226), Src_errnoh, AS_OS_LINUX },
  /*64*/ { (uint32_t)41, "EPROTOTYPE", AS_DESCR_HANDLE("协议类型与套接字不匹配", 1242), Src_errnoh, AS_OS_MAC },
  /*65*/ { (uint32_t)41, "ELNRNG", AS_DESCR_HANDLE("链路编号超出范围", 1276), Src_errnoh, AS_OS_SOLARIS },
  /*66*/ { (uint32_t)41, "ENOTEMPTY", AS_DESCR_HANDLE("", 1301), Src_errnoh, AS_OS_WINDOWS },
  /*67*/ { (uint32_t)42, "ENOMSG", AS_DESCR_HANDLE("没有所需类型的消息", 1302), Src_errnoh, AS_OS_LINUX },
  /*68*/ { (uint32_t)42, "ENOPROTOOPT", AS_DESCR_HANDLE("协议不可用", 1330), Src_errnoh, AS_OS_MAC },
  /*69*/ { (uint32_t)42, "EUNATCH", AS_DESCR_HANDLE("未连接协议驱动程序", 1346), Src_errnoh, AS_OS_SOLARIS },
  /*70*/ { (uint32_t)42, "EILSEQ", AS_DESCR_HANDLE("", 1374), Src_errnoh, AS_OS_WINDOWS },
  /*71*/ { (uint32_t)43, "EIDRM", AS_DESCR_HANDLE("标识符已被移除", 1375), Src_errnoh, AS_OS_LINUX },
  /*72*/ { (uint32_t)43, "EPROTONOSUPPORT", AS_DESCR_HANDLE("不支持该协议", 1397), Src_errnoh, AS_OS_MAC },
  /*73*/ { (uint32_t)43, "ENOCSI", AS_DESCR_HANDLE("没有可用的 CSI 结构", 1416), Src_errnoh, AS_OS_SOLARIS },
  /*74*/ { (uint32_t)44, "ECHRNG", AS_DESCR_HANDLE("通道号超出范围", 1443), Src_errnoh, AS_OS_LINUX },
  /*75*/ { (uint32_t)44, "ESOCKTNOSUPPORT", AS_DESCR_HANDLE("不支持该套接字类型", 1465), Src_errnoh, AS_OS_MAC },
  /*76*/ { (uint32_t)44, "EL2HLT", AS_DESCR_HANDLE("第 2 层已停止", 1493), Src_errnoh, AS_OS_SOLARIS },
  /*77*/ { (uint32_t)45, "EL2NSYNC", AS_DESCR_HANDLE("第 2 层未同步", 1512), Src_errnoh, AS_OS_LINUX },
  /*78*/ { (uint32_t)45, "ENOTSUP", AS_DESCR_HANDLE("不支持此操作", 1531), Src_errnoh, AS_OS_MAC },
  /*79*/ { (uint32_t)45, "EDEADLK", AS_DESCR_HANDLE("发生死锁", 1550), Src_errnoh, AS_OS_SOLARIS },
  /*80*/ { (uint32_t)46, "EL3HLT", AS_DESCR_HANDLE("第 3 层已停止", 1563), Src_errnoh, AS_OS_LINUX },
  /*81*/ { (uint32_t)46, "EPFNOSUPPORT", AS_DESCR_HANDLE("不支持该协议族", 1582), Src_errnoh, AS_OS_MAC },
  /*82*/ { (uint32_t)46, "ENOLCK", AS_DESCR_HANDLE("没有可用的记录锁", 1604), Src_errnoh, AS_OS_SOLARIS },
  /*83*/ { (uint32_t)47, "EL3RST", AS_DESCR_HANDLE("第 3 层已重置", 1629), Src_errnoh, AS_OS_LINUX },
  /*84*/ { (uint32_t)47, "EAFNOSUPPORT", AS_DESCR_HANDLE("协议族不支持该地址族", 1648), Src_errnoh, AS_OS_MAC },
  /*85*/ { (uint32_t)47, "ECANCELED", AS_DESCR_HANDLE("操作已取消", 1679), Src_errnoh, AS_OS_SOLARIS },
  /*86*/ { (uint32_t)48, "ELNRNG", AS_DESCR_HANDLE("链路编号超出范围", 1695), Src_errnoh, AS_OS_LINUX },
  /*87*/ { (uint32_t)48, "EADDRINUSE", AS_DESCR_HANDLE("地址已被占用", 1720), Src_errnoh, AS_OS_MAC },
  /*88*/ { (uint32_t)48, "ENOTSUP", AS_DESCR_HANDLE("不支持此操作", 1739), Src_errnoh, AS_OS_SOLARIS },
  /*89*/ { (uint32_t)49, "EUNATCH", AS_DESCR_HANDLE("未连接协议驱动程序", 1758), Src_errnoh, AS_OS_LINUX },
  /*90*/ { (uint32_t)49, "EADDRNOTAVAIL", AS_DESCR_HANDLE("无法分配请求的地址", 1786), Src_errnoh, AS_OS_MAC },
  /*91*/ { (uint32_t)49, "EDQUOT", AS_DESCR_HANDLE("磁盘配额已超出", 1814), Src_errnoh, AS_OS_SOLARIS },
  /*92*/ { (uint32_t)50, "ENOCSI", AS_DESCR_HANDLE("没有可用的 CSI 结构", 1836), Src_errnoh, AS_OS_LINUX },
  /*93*/ { (uint32_t)50, "ENETDOWN", AS_DESCR_HANDLE("网络已断开", 1863), Src_errnoh, AS_OS_MAC },
  /*94*/ { (uint32_t)50, "EBADE", AS_DESCR_HANDLE("无效的交换", 1879), Src_errnoh, AS_OS_SOLARIS },
  /*95*/ { (uint32_t)51, "EL2HLT", AS_DESCR_HANDLE("第 2 层已停止", 1895), Src_errnoh, AS_OS_LINUX },
  /*96*/ { (uint32_t)51, "ENETUNREACH", AS_DESCR_HANDLE("网络不可达", 1914), Src_errnoh, AS_OS_MAC },
  /*97*/ { (uint32_t)51, "EBADR", AS_DESCR_HANDLE("无效的请求描述符", 1930), Src_errnoh, AS_OS_SOLARIS },
  /*98*/ { (uint32_t)52, "EBADE", AS_DESCR_HANDLE("无效的交换", 1955), Src_errnoh, AS_OS_LINUX },
  /*99*/ { (uint32_t)52, "ENETRESET", AS_DESCR_HANDLE("网络因重置而断开连接", 1971), Src_errnoh, AS_OS_MAC },
  /*100*/ { (uint32_t)52, "EXFULL", AS_DESCR_HANDLE("交换已满", 2002), Src_errnoh, AS_OS_SOLARIS },
  /*101*/ { (uint32_t)53, "EBADR", AS_DESCR_HANDLE("无效的请求描述符", 2015), Src_errnoh, AS_OS_LINUX },
  /*102*/ { (uint32_t)53, "ECONNABORTED", AS_DESCR_HANDLE("软件导致连接中止", 2040), Src_errnoh, AS_OS_MAC },
  /*103*/ { (uint32_t)53, "ENOANO", AS_DESCR_HANDLE("没有 anode", 2065), Src_errnoh, AS_OS_SOLARIS },
  /*104*/ { (uint32_t)54, "EXFULL", AS_DESCR_HANDLE("交换已满", 2078), Src_errnoh, AS_OS_LINUX },
  /*105*/ { (uint32_t)54, "ECONNRESET", AS_DESCR_HANDLE("连接被对端重置", 2091), Src_errnoh, AS_OS_MAC },
  /*106*/ { (uint32_t)54, "EBADRQC", AS_DESCR_HANDLE("无效的请求代码", 2113), Src_errnoh, AS_OS_SOLARIS },
  /*107*/ { (uint32_t)55, "ENOANO", AS_DESCR_HANDLE("没有 anode", 2135), Src_errnoh, AS_OS_LINUX },
  /*108*/ { (uint32_t)55, "ENOBUFS", AS_DESCR_HANDLE("没有可用的缓冲区空间", 2148), Src_errnoh, AS_OS_MAC },
  /*109*/ { (uint32_t)55, "EBADSLT", AS_DESCR_HANDLE("无效的槽位", 2179), Src_errnoh, AS_OS_SOLARIS },
  /*110*/ { (uint32_t)56, "EBADRQC", AS_DESCR_HANDLE("无效的请求代码", 2195), Src_errnoh, AS_OS_LINUX },
  /*111*/ { (uint32_t)56, "EISCONN", AS_DESCR_HANDLE("套接字已连接", 2217), Src_errnoh, AS_OS_MAC },
  /*112*/ { (uint32_t)56, "EDEADLOCK", AS_DESCR_HANDLE("文件锁发生死锁", 2236), Src_errnoh, AS_OS_SOLARIS },
  /*113*/ { (uint32_t)57, "EBADSLT", AS_DESCR_HANDLE("无效的槽位", 2258), Src_errnoh, AS_OS_LINUX },
  /*114*/ { (uint32_t)57, "ENOTCONN", AS_DESCR_HANDLE("套接字未连接", 2274), Src_errnoh, AS_OS_MAC },
  /*115*/ { (uint32_t)57, "EBFONT", AS_DESCR_HANDLE("字体文件格式错误", 2293), Src_errnoh, AS_OS_SOLARIS },
  /*116*/ { (uint32_t)58, "EDEADLOCK", AS_DESCR_HANDLE("文件锁发生死锁", 2318), Src_errnoh, AS_OS_LINUX },
  /*117*/ { (uint32_t)58, "ESHUTDOWN", AS_DESCR_HANDLE("套接字关闭后无法发送", 2340), Src_errnoh, AS_OS_MAC },
  /*118*/ { (uint32_t)58, "EOWNERDEAD", AS_DESCR_HANDLE("持有锁的进程已终止", 2371), Src_errnoh, AS_OS_SOLARIS },
  /*119*/ { (uint32_t)59, "EBFONT", AS_DESCR_HANDLE("字体文件格式错误", 2399), Src_errnoh, AS_OS_LINUX },
  /*120*/ { (uint32_t)59, "ETOOMANYREFS", AS_DESCR_HANDLE("引用过多，无法拼接", 2424), Src_errnoh, AS_OS_MAC },
  /*121*/ { (uint32_t)59, "ENOTRECOVERABLE", AS_DESCR_HANDLE("锁无法恢复", 2452), Src_errnoh, AS_OS_SOLARIS },
  /*122*/ { (uint32_t)60, "ENOSTR", AS_DESCR_HANDLE("设备不是 STREAM", 2468), Src_errnoh, AS_OS_LINUX },
  /*123*/ { (uint32_t)60, "ETIMEDOUT", AS_DESCR_HANDLE("操作超时", 2488), Src_errnoh, AS_OS_MAC },
  /*124*/ { (uint32_t)60, "ENOSTR", AS_DESCR_HANDLE("设备不是 STREAM", 2501), Src_errnoh, AS_OS_SOLARIS },
  /*125*/ { (uint32_t)61, "ENODATA", AS_DESCR_HANDLE("无数据（用于非延迟 I/O）", 2521), Src_errnoh, AS_OS_LINUX },
  /*126*/ { (uint32_t)61, "ECONNREFUSED", AS_DESCR_HANDLE("连接被拒绝", 2556), Src_errnoh, AS_OS_MAC },
  /*127*/ { (uint32_t)61, "ENODATA", AS_DESCR_HANDLE("无数据（用于非延迟 I/O）", 2572), Src_errnoh, AS_OS_SOLARIS },
  /*128*/ { (uint32_t)62, "ETIME", AS_DESCR_HANDLE("计时器已到期", 2607), Src_errnoh, AS_OS_LINUX },
  /*129*/ { (uint32_t)62, "ELOOP", AS_DESCR_HANDLE("符号链接层级过多", 2626), Src_errnoh, AS_OS_MAC },
  /*130*/ { (uint32_t)62, "ETIME", AS_DESCR_HANDLE("计时器已到期", 2651), Src_errnoh, AS_OS_SOLARIS },
  /*131*/ { (uint32_t)63, "ENOSR", AS_DESCR_HANDLE("STREAMS 资源耗尽", 2670), Src_errnoh, AS_OS_LINUX },
  /*132*/ { (uint32_t)63, "ENAMETOOLONG", AS_DESCR_HANDLE("文件名过长", 2691), Src_errnoh, AS_OS_MAC },
  /*133*/ { (uint32_t)63, "ENOSR", AS_DESCR_HANDLE("STREAMS 资源耗尽", 2707), Src_errnoh, AS_OS_SOLARIS },
  /*134*/ { (uint32_t)64, "ENONET", AS_DESCR_HANDLE("本机未连接到网络", 2728), Src_errnoh, AS_OS_LINUX },
  /*135*/ { (uint32_t)64, "EHOSTDOWN", AS_DESCR_HANDLE("主机已关闭", 2753), Src_errnoh, AS_OS_MAC },
  /*136*/ { (uint32_t)64, "ENONET", AS_DESCR_HANDLE("本机未连接到网络", 2769), Src_errnoh, AS_OS_SOLARIS },
  /*137*/ { (uint32_t)65, "ENOPKG", AS_DESCR_HANDLE("软件包未安装", 2794), Src_errnoh, AS_OS_LINUX },
  /*138*/ { (uint32_t)65, "EHOSTUNREACH", AS_DESCR_HANDLE("没有到主机的路由", 2813), Src_errnoh, AS_OS_MAC },
  /*139*/ { (uint32_t)65, "ENOPKG", AS_DESCR_HANDLE("软件包未安装", 2838), Src_errnoh, AS_OS_SOLARIS },
  /*140*/ { (uint32_t)66, "EREMOTE", AS_DESCR_HANDLE("对象位于远程系统", 2857), Src_errnoh, AS_OS_LINUX },
  /*141*/ { (uint32_t)66, "ENOTEMPTY", AS_DESCR_HANDLE("目录非空", 2882), Src_errnoh, AS_OS_MAC },
  /*142*/ { (uint32_t)66, "EREMOTE", AS_DESCR_HANDLE("对象位于远程系统", 2895), Src_errnoh, AS_OS_SOLARIS },
  /*143*/ { (uint32_t)67, "ENOLINK", AS_DESCR_HANDLE("链路已断开", 2920), Src_errnoh, AS_OS_LINUX },
  /*144*/ { (uint32_t)67, "EPROCLIM", AS_DESCR_HANDLE("进程过多", 2936), Src_errnoh, AS_OS_MAC },
  /*145*/ { (uint32_t)67, "ENOLINK", AS_DESCR_HANDLE("链路已断开", 2949), Src_errnoh, AS_OS_SOLARIS },
  /*146*/ { (uint32_t)68, "EADV", AS_DESCR_HANDLE("资源发布错误", 2965), Src_errnoh, AS_OS_LINUX },
  /*147*/ { (uint32_t)68, "EUSERS", AS_DESCR_HANDLE("用户过多", 2984), Src_errnoh, AS_OS_MAC },
  /*148*/ { (uint32_t)68, "EADV", AS_DESCR_HANDLE("资源发布错误", 2997), Src_errnoh, AS_OS_SOLARIS },
  /*149*/ { (uint32_t)69, "ESRMNT", AS_DESCR_HANDLE("srmount 错误", 3016), Src_errnoh, AS_OS_LINUX },
  /*150*/ { (uint32_t)69, "EDQUOT", AS_DESCR_HANDLE("磁盘配额已超出", 3031), Src_errnoh, AS_OS_MAC },
  /*151*/ { (uint32_t)69, "ESRMNT", AS_DESCR_HANDLE("srmount 错误", 3053), Src_errnoh, AS_OS_SOLARIS },
  /*152*/ { (uint32_t)70, "ECOMM", AS_DESCR_HANDLE("发送时发生通信错误", 3068), Src_errnoh, AS_OS_LINUX },
  /*153*/ { (uint32_t)70, "ESTALE", AS_DESCR_HANDLE("NFS 文件句柄已失效", 3096), Src_errnoh, AS_OS_MAC },
  /*154*/ { (uint32_t)70, "ECOMM", AS_DESCR_HANDLE("发送时发生通信错误", 3122), Src_errnoh, AS_OS_SOLARIS },
  /*155*/ { (uint32_t)71, "EPROTO", AS_DESCR_HANDLE("协议错误", 3150), Src_errnoh, AS_OS_LINUX },
  /*156*/ { (uint32_t)71, "EREMOTE", AS_DESCR_HANDLE("路径中的远程层级过多", 3163), Src_errnoh, AS_OS_MAC },
  /*157*/ { (uint32_t)71, "EPROTO", AS_DESCR_HANDLE("协议错误", 3194), Src_errnoh, AS_OS_SOLARIS },
  /*158*/ { (uint32_t)72, "EMULTIHOP", AS_DESCR_HANDLE("尝试了多跳操作", 3207), Src_errnoh, AS_OS_LINUX },
  /*159*/ { (uint32_t)72, "EBADRPC", AS_DESCR_HANDLE("RPC 结构无效", 3229), Src_errnoh, AS_OS_MAC },
  /*160*/ { (uint32_t)72, "ELOCKUNMAPPED", AS_DESCR_HANDLE("已加锁的锁对象被取消映射", 3246), Src_errnoh, AS_OS_SOLARIS },
  /*161*/ { (uint32_t)73, "EDOTDOT", AS_DESCR_HANDLE("RFS 特定错误", 3283), Src_errnoh, AS_OS_LINUX },
  /*162*/ { (uint32_t)73, "ERPCMISMATCH", AS_DESCR_HANDLE("RPC 版本不匹配", 3300), Src_errnoh, AS_OS_MAC },
  /*163*/ { (uint32_t)73, "ENOTACTIVE", AS_DESCR_HANDLE("功能未处于活动状态", 3320), Src_errnoh, AS_OS_SOLARIS },
  /*164*/ { (uint32_t)74, "EBADMSG", AS_DESCR_HANDLE("不是数据消息", 3348), Src_errnoh, AS_OS_LINUX },
  /*165*/ { (uint32_t)74, "EPROGUNAVAIL", AS_DESCR_HANDLE("RPC 程序不可用", 3367), Src_errnoh, AS_OS_MAC },
  /*166*/ { (uint32_t)74, "EMULTIHOP", AS_DESCR_HANDLE("尝试了多跳操作", 3387), Src_errnoh, AS_OS_SOLARIS },
  /*167*/ { (uint32_t)75, "EOVERFLOW", AS_DESCR_HANDLE("值对于定义的数据类型而言过大", 3409), Src_errnoh, AS_OS_LINUX },
  /*168*/ { (uint32_t)75, "EPROGMISMATCH", AS_DESCR_HANDLE("程序版本不匹配", 3452), Src_errnoh, AS_OS_MAC },
  /*169*/ { (uint32_t)76, "ENOTUNIQ", AS_DESCR_HANDLE("网络上的名称不唯一", 3474), Src_errnoh, AS_OS_LINUX },
  /*170*/ { (uint32_t)76, "EPROCUNAVAIL", AS_DESCR_HANDLE("程序的过程无效", 3502), Src_errnoh, AS_OS_MAC },
  /*171*/ { (uint32_t)77, "EBADFD", AS_DESCR_HANDLE("文件描述符状态无效", 3524), Src_errnoh, AS_OS_LINUX },
  /*172*/ { (uint32_t)77, "ENOLCK", AS_DESCR_HANDLE("没有可用的锁", 3552), Src_errnoh, AS_OS_MAC },
  /*173*/ { (uint32_t)77, "EBADMSG", AS_DESCR_HANDLE("尝试读取不可读消息", 3571), Src_errnoh, AS_OS_SOLARIS },
  /*174*/ { (uint32_t)78, "EREMCHG", AS_DESCR_HANDLE("远程地址已更改", 3599), Src_errnoh, AS_OS_LINUX },
  /*175*/ { (uint32_t)78, "ENOSYS", AS_DESCR_HANDLE("函数未实现", 3621), Src_errnoh, AS_OS_MAC },
  /*176*/ { (uint32_t)78, "ENAMETOOLONG", AS_DESCR_HANDLE("路径名过长", 3637), Src_errnoh, AS_OS_SOLARIS },
  /*177*/ { (uint32_t)79, "ELIBACC", AS_DESCR_HANDLE("无法访问所需的共享库", 3653), Src_errnoh, AS_OS_LINUX },
  /*178*/ { (uint32_t)79, "EFTYPE", AS_DESCR_HANDLE("文件类型或格式不适用", 3684), Src_errnoh, AS_OS_MAC },
  /*179*/ { (uint32_t)79, "EOVERFLOW", AS_DESCR_HANDLE("值过大，无法存入该数据类型", 3715), Src_errnoh, AS_OS_SOLARIS },
  /*180*/ { (uint32_t)80, "ELIBBAD", AS_DESCR_HANDLE("正在访问损坏的共享库", 3755), Src_errnoh, AS_OS_LINUX },
  /*181*/ { (uint32_t)80, "EAUTH", AS_DESCR_HANDLE("身份验证错误", 3786), Src_errnoh, AS_OS_MAC },
  /*182*/ { (uint32_t)80, "ENOTUNIQ", AS_DESCR_HANDLE("给定的逻辑名称不唯一", 3805), Src_errnoh, AS_OS_SOLARIS },
  /*183*/ { (uint32_t)81, "ELIBSCN", AS_DESCR_HANDLE("a.out 中的 .lib 节已损坏", 3836), Src_errnoh, AS_OS_LINUX },
  /*184*/ { (uint32_t)81, "ENEEDAUTH", AS_DESCR_HANDLE("需要身份验证器", 3867), Src_errnoh, AS_OS_MAC },
  /*185*/ { (uint32_t)81, "EBADFD", AS_DESCR_HANDLE("文件描述符对此操作无效", 3889), Src_errnoh, AS_OS_SOLARIS },
  /*186*/ { (uint32_t)82, "ELIBMAX", AS_DESCR_HANDLE("尝试链接的共享库过多", 3923), Src_errnoh, AS_OS_LINUX },
  /*187*/ { (uint32_t)82, "EPWROFF", AS_DESCR_HANDLE("设备电源已关闭", 3954), Src_errnoh, AS_OS_MAC },
  /*188*/ { (uint32_t)82, "EREMCHG", AS_DESCR_HANDLE("远程地址已更改", 3976), Src_errnoh, AS_OS_SOLARIS },
  /*189*/ { (uint32_t)83, "ELIBEXEC", AS_DESCR_HANDLE("无法直接执行共享库", 3998), Src_errnoh, AS_OS_LINUX },
  /*190*/ { (uint32_t)83, "EDEVERR", AS_DESCR_HANDLE("设备错误，例如缺纸", 4026), Src_errnoh, AS_OS_MAC },
  /*191*/ { (uint32_t)83, "ELIBACC", AS_DESCR_HANDLE("无法访问所需的共享库", 4054), Src_errnoh, AS_OS_SOLARIS },
  /*192*/ { (uint32_t)84, "EILSEQ", AS_DESCR_HANDLE("非法字节序列", 4085), Src_errnoh, AS_OS_LINUX },
  /*193*/ { (uint32_t)84, "EOVERFLOW", AS_DESCR_HANDLE("值过大，无法存入该数据类型", 4104), Src_errnoh, AS_OS_MAC },
  /*194*/ { (uint32_t)84, "ELIBBAD", AS_DESCR_HANDLE("正在访问损坏的共享库", 4144), Src_errnoh, AS_OS_SOLARIS },
  /*195*/ { (uint32_t)85, "ERESTART", AS_DESCR_HANDLE("被中断的系统调用应重新启动", 4175), Src_errnoh, AS_OS_LINUX },
  /*196*/ { (uint32_t)85, "EBADEXEC", AS_DESCR_HANDLE("可执行文件无效", 4215), Src_errnoh, AS_OS_MAC },
  /*197*/ { (uint32_t)85, "ELIBSCN", AS_DESCR_HANDLE("a.out 中的 .lib 节已损坏", 4237), Src_errnoh, AS_OS_SOLARIS },
  /*198*/ { (uint32_t)86, "ESTRPIPE", AS_DESCR_HANDLE("STREAMS 管道错误", 4268), Src_errnoh, AS_OS_LINUX },
  /*199*/ { (uint32_t)86, "EBADARCH", AS_DESCR_HANDLE("可执行文件中的 CPU 类型无效", 4289), Src_errnoh, AS_OS_MAC },
  /*200*/ { (uint32_t)86, "ELIBMAX", AS_DESCR_HANDLE("尝试链接的共享库过多", 4328), Src_errnoh, AS_OS_SOLARIS },
  /*201*/ { (uint32_t)87, "EUSERS", AS_DESCR_HANDLE("用户过多", 4359), Src_errnoh, AS_OS_LINUX },
  /*202*/ { (uint32_t)87, "ESHLIBVERS", AS_DESCR_HANDLE("共享库版本不匹配", 4372), Src_errnoh, AS_OS_MAC },
  /*203*/ { (uint32_t)87, "ELIBEXEC", AS_DESCR_HANDLE("尝试执行共享库", 4397), Src_errnoh, AS_OS_SOLARIS },
  /*204*/ { (uint32_t)88, "ENOTSOCK", AS_DESCR_HANDLE("对非套接字对象执行了套接字操作", 4419), Src_errnoh, AS_OS_LINUX },
  /*205*/ { (uint32_t)88, "EBADMACHO", AS_DESCR_HANDLE("Mach-O 文件格式错误", 4465), Src_errnoh, AS_OS_MAC },
  /*206*/ { (uint32_t)88, "EILSEQ", AS_DESCR_HANDLE("非法字节序列", 4491), Src_errnoh, AS_OS_SOLARIS },
  /*207*/ { (uint32_t)89, "EDESTADDRREQ", AS_DESCR_HANDLE("需要目标地址", 4510), Src_errnoh, AS_OS_LINUX },
  /*208*/ { (uint32_t)89, "ECANCELED", AS_DESCR_HANDLE("操作已取消", 4529), Src_errnoh, AS_OS_MAC },
  /*209*/ { (uint32_t)89, "ENOSYS", AS_DESCR_HANDLE("不支持的文件系统操作", 4545), Src_errnoh, AS_OS_SOLARIS },
  /*210*/ { (uint32_t)90, "EMSGSIZE", AS_DESCR_HANDLE("消息过长", 4576), Src_errnoh, AS_OS_LINUX },
  /*211*/ { (uint32_t)90, "EIDRM", AS_DESCR_HANDLE("标识符已被移除", 4589), Src_errnoh, AS_OS_MAC },
  /*212*/ { (uint32_t)90, "ELOOP", AS_DESCR_HANDLE("符号链接循环", 4611), Src_errnoh, AS_OS_SOLARIS },
  /*213*/ { (uint32_t)91, "EPROTOTYPE", AS_DESCR_HANDLE("协议类型与套接字不匹配", 4630), Src_errnoh, AS_OS_LINUX },
  /*214*/ { (uint32_t)91, "ENOMSG", AS_DESCR_HANDLE("没有所需类型的消息", 4664), Src_errnoh, AS_OS_MAC },
  /*215*/ { (uint32_t)91, "ERESTART", AS_DESCR_HANDLE("可重新启动的系统调用", 4692), Src_errnoh, AS_OS_SOLARIS },
  /*216*/ { (uint32_t)92, "ENOPROTOOPT", AS_DESCR_HANDLE("协议不可用", 4723), Src_errnoh, AS_OS_LINUX },
  /*217*/ { (uint32_t)92, "EILSEQ", AS_DESCR_HANDLE("非法字节序列", 4739), Src_errnoh, AS_OS_MAC },
  /*218*/ { (uint32_t)92, "ESTRPIPE", AS_DESCR_HANDLE("对于管道/FIFO，不要在 STREAMS 流头中休眠", 4758), Src_errnoh, AS_OS_SOLARIS },
  /*219*/ { (uint32_t)93, "EPROTONOSUPPORT", AS_DESCR_HANDLE("不支持该协议", 4812), Src_errnoh, AS_OS_LINUX },
  /*220*/ { (uint32_t)93, "ENOATTR", AS_DESCR_HANDLE("未找到属性", 4831), Src_errnoh, AS_OS_MAC },
  /*221*/ { (uint32_t)93, "ENOTEMPTY", AS_DESCR_HANDLE("目录非空", 4847), Src_errnoh, AS_OS_SOLARIS },
  /*222*/ { (uint32_t)94, "ESOCKTNOSUPPORT", AS_DESCR_HANDLE("不支持该套接字类型", 4860), Src_errnoh, AS_OS_LINUX },
  /*223*/ { (uint32_t)94, "EBADMSG", AS_DESCR_HANDLE("消息无效", 4888), Src_errnoh, AS_OS_MAC },
  /*224*/ { (uint32_t)94, "EUSERS", AS_DESCR_HANDLE("用户过多（UFS）", 4901), Src_errnoh, AS_OS_SOLARIS },
  /*225*/ { (uint32_t)95, "EOPNOTSUPP", AS_DESCR_HANDLE("传输端点不支持此操作", 4923), Src_errnoh, AS_OS_LINUX },
  /*226*/ { (uint32_t)95, "EMULTIHOP", AS_DESCR_HANDLE("保留值", 4954), Src_errnoh, AS_OS_MAC },
  /*227*/ { (uint32_t)95, "ENOTSOCK", AS_DESCR_HANDLE("对非套接字对象执行了套接字操作", 4964), Src_errnoh, AS_OS_SOLARIS },
  /*228*/ { (uint32_t)96, "EPFNOSUPPORT", AS_DESCR_HANDLE("不支持该协议族", 5010), Src_errnoh, AS_OS_LINUX },
  /*229*/ { (uint32_t)96, "ENODATA", AS_DESCR_HANDLE("STREAM 上没有可用消息", 5032), Src_errnoh, AS_OS_MAC },
  /*230*/ { (uint32_t)96, "EDESTADDRREQ", AS_DESCR_HANDLE("需要目标地址", 5061), Src_errnoh, AS_OS_SOLARIS },
  /*231*/ { (uint32_t)97, "EAFNOSUPPORT", AS_DESCR_HANDLE("协议不支持该地址族", 5080), Src_errnoh, AS_OS_LINUX },
  /*232*/ { (uint32_t)97, "ENOLINK", AS_DESCR_HANDLE("保留值", 5108), Src_errnoh, AS_OS_MAC },
  /*233*/ { (uint32_t)97, "EMSGSIZE", AS_DESCR_HANDLE("消息过长", 5118), Src_errnoh, AS_OS_SOLARIS },
  /*234*/ { (uint32_t)98, "EADDRINUSE", AS_DESCR_HANDLE("地址已被占用", 5131), Src_errnoh, AS_OS_LINUX },
  /*235*/ { (uint32_t)98, "ENOSR", AS_DESCR_HANDLE("没有可用的 STREAM 资源", 5150), Src_errnoh, AS_OS_MAC },
  /*236*/ { (uint32_t)98, "EPROTOTYPE", AS_DESCR_HANDLE("协议类型与套接字不匹配", 5180), Src_errnoh, AS_OS_SOLARIS },
  /*237*/ { (uint32_t)99, "EADDRNOTAVAIL", AS_DESCR_HANDLE("无法分配请求的地址", 5214), Src_errnoh, AS_OS_LINUX },
  /*238*/ { (uint32_t)99, "ENOSTR", AS_DESCR_HANDLE("不是 STREAM", 5242), Src_errnoh, AS_OS_MAC },
  /*239*/ { (uint32_t)99, "ENOPROTOOPT", AS_DESCR_HANDLE("协议不可用", 5256), Src_errnoh, AS_OS_SOLARIS },
  /*240*/ { (uint32_t)100, "ENETDOWN", AS_DESCR_HANDLE("网络已断开", 5272), Src_errnoh, AS_OS_LINUX },
  /*241*/ { (uint32_t)100, "EPROTO", AS_DESCR_HANDLE("协议错误", 5288), Src_errnoh, AS_OS_MAC },
  /*242*/ { (uint32_t)100, "EADDRINUSE", AS_DESCR_HANDLE("", 5301), Src_errnoh, AS_OS_WINDOWS },
  /*243*/ { (uint32_t)101, "ENETUNREACH", AS_DESCR_HANDLE("网络不可达", 5302), Src_errnoh, AS_OS_LINUX },
  /*244*/ { (uint32_t)101, "ETIME", AS_DESCR_HANDLE("STREAM ioctl 超时", 5318), Src_errnoh, AS_OS_MAC },
  /*245*/ { (uint32_t)101, "EADDRNOTAVAIL", AS_DESCR_HANDLE("", 5338), Src_errnoh, AS_OS_WINDOWS },
  /*246*/ { (uint32_t)102, "ENETRESET", AS_DESCR_HANDLE("网络因重置而断开连接", 5339), Src_errnoh, AS_OS_LINUX },
  /*247*/ { (uint32_t)102, "EOPNOTSUPP", AS_DESCR_HANDLE("套接字不支持此操作", 5370), Src_errnoh, AS_OS_MAC },
  /*248*/ { (uint32_t)102, "EAFNOSUPPORT", AS_DESCR_HANDLE("", 5398), Src_errnoh, AS_OS_WINDOWS },
  /*249*/ { (uint32_t)103, "ECONNABORTED", AS_DESCR_HANDLE("软件导致连接中止", 5399), Src_errnoh, AS_OS_LINUX },
  /*250*/ { (uint32_t)103, "ENOPOLICY", AS_DESCR_HANDLE("未注册此策略", 5424), Src_errnoh, AS_OS_MAC },
  /*251*/ { (uint32_t)103, "EALREADY", AS_DESCR_HANDLE("", 5443), Src_errnoh, AS_OS_WINDOWS },
  /*252*/ { (uint32_t)104, "ECONNRESET", AS_DESCR_HANDLE("连接被对端重置", 5444), Src_errnoh, AS_OS_LINUX },
  /*253*/ { (uint32_t)104, "ENOTRECOVERABLE", AS_DESCR_HANDLE("状态无法恢复", 5466), Src_errnoh, AS_OS_MAC },
  /*254*/ { (uint32_t)104, "EBADMSG", AS_DESCR_HANDLE("", 5485), Src_errnoh, AS_OS_WINDOWS },
  /*255*/ { (uint32_t)105, "ENOBUFS", AS_DESCR_HANDLE("没有可用的缓冲区空间", 5486), Src_errnoh, AS_OS_LINUX },
  /*256*/ { (uint32_t)105, "EOWNERDEAD", AS_DESCR_HANDLE("上一个所有者已终止", 5517), Src_errnoh, AS_OS_MAC },
  /*257*/ { (uint32_t)105, "ECANCELED", AS_DESCR_HANDLE("", 5545), Src_errnoh, AS_OS_WINDOWS },
  /*258*/ { (uint32_t)106, "EISCONN", AS_DESCR_HANDLE("传输端点已连接", 5546), Src_errnoh, AS_OS_LINUX },
  /*259*/ { (uint32_t)106, "EQFULL", AS_DESCR_HANDLE("接口输出队列已满", 5568), Src_errnoh, AS_OS_MAC },
  /*260*/ { (uint32_t)106, "ELAST", AS_DESCR_HANDLE("必须等于最大的 errno 值", 5593), Src_errnoh, AS_OS_MAC },
  /*261*/ { (uint32_t)106, "ECONNABORTED", AS_DESCR_HANDLE("", 5625), Src_errnoh, AS_OS_WINDOWS },
  /*262*/ { (uint32_t)107, "ENOTCONN", AS_DESCR_HANDLE("传输端点未连接", 5626), Src_errnoh, AS_OS_LINUX },
  /*263*/ { (uint32_t)107, "ECONNREFUSED", AS_DESCR_HANDLE("", 5648), Src_errnoh, AS_OS_WINDOWS },
  /*264*/ { (uint32_t)108, "ESHUTDOWN", AS_DESCR_HANDLE("传输端点关闭后无法发送", 5649), Src_errnoh, AS_OS_LINUX },
  /*265*/ { (uint32_t)108, "ECONNRESET", AS_DESCR_HANDLE("", 5683), Src_errnoh, AS_OS_WINDOWS },
  /*266*/ { (uint32_t)109, "ETOOMANYREFS", AS_DESCR_HANDLE("引用过多，无法拼接", 5684), Src_errnoh, AS_OS_LINUX },
  /*267*/ { (uint32_t)109, "EDESTADDRREQ", AS_DESCR_HANDLE("", 5712), Src_errnoh, AS_OS_WINDOWS },
  /*268*/ { (uint32_t)110, "ETIMEDOUT", AS_DESCR_HANDLE("连接超时", 5713), Src_errnoh, AS_OS_LINUX },
  /*269*/ { (uint32_t)110, "EHOSTUNREACH", AS_DESCR_HANDLE("", 5726), Src_errnoh, AS_OS_WINDOWS },
  /*270*/ { (uint32_t)111, "ECONNREFUSED", AS_DESCR_HANDLE("连接被拒绝", 5727), Src_errnoh, AS_OS_LINUX },
  /*271*/ { (uint32_t)111, "EIDRM", AS_DESCR_HANDLE("", 5743), Src_errnoh, AS_OS_WINDOWS },
  /*272*/ { (uint32_t)112, "EHOSTDOWN", AS_DESCR_HANDLE("主机已关闭", 5744), Src_errnoh, AS_OS_LINUX },
  /*273*/ { (uint32_t)112, "EINPROGRESS", AS_DESCR_HANDLE("", 5760), Src_errnoh, AS_OS_WINDOWS },
  /*274*/ { (uint32_t)113, "EHOSTUNREACH", AS_DESCR_HANDLE("没有到主机的路由", 5761), Src_errnoh, AS_OS_LINUX },
  /*275*/ { (uint32_t)113, "EISCONN", AS_DESCR_HANDLE("", 5786), Src_errnoh, AS_OS_WINDOWS },
  /*276*/ { (uint32_t)114, "EALREADY", AS_DESCR_HANDLE("操作已在进行", 5787), Src_errnoh, AS_OS_LINUX },
  /*277*/ { (uint32_t)114, "ELOOP", AS_DESCR_HANDLE("", 5806), Src_errnoh, AS_OS_WINDOWS },
  /*278*/ { (uint32_t)115, "EINPROGRESS", AS_DESCR_HANDLE("操作正在进行", 5807), Src_errnoh, AS_OS_LINUX },
  /*279*/ { (uint32_t)115, "EMSGSIZE", AS_DESCR_HANDLE("", 5826), Src_errnoh, AS_OS_WINDOWS },
  /*280*/ { (uint32_t)116, "ESTALE", AS_DESCR_HANDLE("NFS 文件句柄已失效", 5827), Src_errnoh, AS_OS_LINUX },
  /*281*/ { (uint32_t)116, "ENETDOWN", AS_DESCR_HANDLE("", 5853), Src_errnoh, AS_OS_WINDOWS },
  /*282*/ { (uint32_t)117, "EUCLEAN", AS_DESCR_HANDLE("结构需要清理", 5854), Src_errnoh, AS_OS_LINUX },
  /*283*/ { (uint32_t)117, "ENETRESET", AS_DESCR_HANDLE("", 5873), Src_errnoh, AS_OS_WINDOWS },
  /*284*/ { (uint32_t)118, "ENOTNAM", AS_DESCR_HANDLE("不是 XENIX 命名类型文件", 5874), Src_errnoh, AS_OS_LINUX },
  /*285*/ { (uint32_t)118, "ENETUNREACH", AS_DESCR_HANDLE("", 5906), Src_errnoh, AS_OS_WINDOWS },
  /*286*/ { (uint32_t)119, "ENAVAIL", AS_DESCR_HANDLE("没有可用的 XENIX 信号量", 5907), Src_errnoh, AS_OS_LINUX },
  /*287*/ { (uint32_t)119, "ENOBUFS", AS_DESCR_HANDLE("", 5939), Src_errnoh, AS_OS_WINDOWS },
  /*288*/ { (uint32_t)120, "EISNAM", AS_DESCR_HANDLE("是命名类型文件", 5940), Src_errnoh, AS_OS_LINUX },
  /*289*/ { (uint32_t)120, "EPROTONOSUPPORT", AS_DESCR_HANDLE("不支持该协议", 5962), Src_errnoh, AS_OS_SOLARIS },
  /*290*/ { (uint32_t)120, "ENODATA", AS_DESCR_HANDLE("", 5981), Src_errnoh, AS_OS_WINDOWS },
  /*291*/ { (uint32_t)121, "EREMOTEIO", AS_DESCR_HANDLE("远程 I/O 错误", 5982), Src_errnoh, AS_OS_LINUX },
  /*292*/ { (uint32_t)121, "ESOCKTNOSUPPORT", AS_DESCR_HANDLE("不支持该套接字类型", 6000), Src_errnoh, AS_OS_SOLARIS },
  /*293*/ { (uint32_t)121, "ENOLINK", AS_DESCR_HANDLE("", 6028), Src_errnoh, AS_OS_WINDOWS },
  /*294*/ { (uint32_t)122, "EOPNOTSUPP", AS_DESCR_HANDLE("套接字不支持此操作", 6029), Src_errnoh, AS_OS_SOLARIS },
  /*295*/ { (uint32_t)122, "ENOMSG", AS_DESCR_HANDLE("", 6057), Src_errnoh, AS_OS_WINDOWS },
  /*296*/ { (uint32_t)123, "EPFNOSUPPORT", AS_DESCR_HANDLE("不支持该协议族", 6058), Src_errnoh, AS_OS_SOLARIS },
  /*297*/ { (uint32_t)123, "ENOPROTOOPT", AS_DESCR_HANDLE("", 6080), Src_errnoh, AS_OS_WINDOWS },
  /*298*/ { (uint32_t)124, "EAFNOSUPPORT", AS_DESCR_HANDLE("不支持该地址族", 6081), Src_errnoh, AS_OS_SOLARIS },
  /*299*/ { (uint32_t)124, "ENOSR", AS_DESCR_HANDLE("", 6103), Src_errnoh, AS_OS_WINDOWS },
  /*300*/ { (uint32_t)125, "EADDRINUSE", AS_DESCR_HANDLE("地址已被占用", 6104), Src_errnoh, AS_OS_SOLARIS },
  /*301*/ { (uint32_t)125, "ENOSTR", AS_DESCR_HANDLE("", 6123), Src_errnoh, AS_OS_WINDOWS },
  /*302*/ { (uint32_t)126, "EADDRNOTAVAIL", AS_DESCR_HANDLE("无法分配请求的地址", 6124), Src_errnoh, AS_OS_SOLARIS },
  /*303*/ { (uint32_t)126, "ENOTCONN", AS_DESCR_HANDLE("", 6152), Src_errnoh, AS_OS_WINDOWS },
  /*304*/ { (uint32_t)127, "ENETDOWN", AS_DESCR_HANDLE("网络已断开", 6153), Src_errnoh, AS_OS_SOLARIS },
  /*305*/ { (uint32_t)127, "ENOTRECOVERABLE", AS_DESCR_HANDLE("", 6169), Src_errnoh, AS_OS_WINDOWS },
  /*306*/ { (uint32_t)128, "ENETUNREACH", AS_DESCR_HANDLE("网络不可达", 6170), Src_errnoh, AS_OS_SOLARIS },
  /*307*/ { (uint32_t)128, "ENOTSOCK", AS_DESCR_HANDLE("", 6186), Src_errnoh, AS_OS_WINDOWS },
  /*308*/ { (uint32_t)129, "ENETRESET", AS_DESCR_HANDLE("网络连接已断开", 6187), Src_errnoh, AS_OS_SOLARIS },
  /*309*/ { (uint32_t)129, "ENOTSUP", AS_DESCR_HANDLE("", 6209), Src_errnoh, AS_OS_WINDOWS },
  /*310*/ { (uint32_t)130, "ECONNABORTED", AS_DESCR_HANDLE("软件导致连接中止", 6210), Src_errnoh, AS_OS_SOLARIS },
  /*311*/ { (uint32_t)130, "EOPNOTSUPP", AS_DESCR_HANDLE("", 6235), Src_errnoh, AS_OS_WINDOWS },
  /*312*/ { (uint32_t)131, "ECONNRESET", AS_DESCR_HANDLE("连接被对端重置", 6236), Src_errnoh, AS_OS_SOLARIS },
  /*313*/ { (uint32_t)131, "EOTHER", AS_DESCR_HANDLE("", 6258), Src_errnoh, AS_OS_WINDOWS },
  /*314*/ { (uint32_t)132, "ENOBUFS", AS_DESCR_HANDLE("没有可用的缓冲区空间", 6259), Src_errnoh, AS_OS_SOLARIS },
  /*315*/ { (uint32_t)132, "EOVERFLOW", AS_DESCR_HANDLE("", 6290), Src_errnoh, AS_OS_WINDOWS },
  /*316*/ { (uint32_t)133, "EISCONN", AS_DESCR_HANDLE("套接字已连接", 6291), Src_errnoh, AS_OS_SOLARIS },
  /*317*/ { (uint32_t)133, "EOWNERDEAD", AS_DESCR_HANDLE("", 6310), Src_errnoh, AS_OS_WINDOWS },
  /*318*/ { (uint32_t)134, "ENOTCONN", AS_DESCR_HANDLE("套接字未连接", 6311), Src_errnoh, AS_OS_SOLARIS },
  /*319*/ { (uint32_t)134, "EPROTO", AS_DESCR_HANDLE("", 6330), Src_errnoh, AS_OS_WINDOWS },
  /*320*/ { (uint32_t)135, "EPROTONOSUPPORT", AS_DESCR_HANDLE("", 6331), Src_errnoh, AS_OS_WINDOWS },
  /*321*/ { (uint32_t)136, "EPROTOTYPE", AS_DESCR_HANDLE("", 6332), Src_errnoh, AS_OS_WINDOWS },
  /*322*/ { (uint32_t)137, "ETIME", AS_DESCR_HANDLE("", 6333), Src_errnoh, AS_OS_WINDOWS },
  /*323*/ { (uint32_t)138, "ETIMEDOUT", AS_DESCR_HANDLE("", 6334), Src_errnoh, AS_OS_WINDOWS },
  /*324*/ { (uint32_t)139, "ETXTBSY", AS_DESCR_HANDLE("", 6335), Src_errnoh, AS_OS_WINDOWS },
  /*325*/ { (uint32_t)140, "EWOULDBLOCK", AS_DESCR_HANDLE("", 6336), Src_errnoh, AS_OS_WINDOWS },
  /*326*/ { (uint32_t)143, "ESHUTDOWN", AS_DESCR_HANDLE("套接字关闭后无法发送", 6337), Src_errnoh, AS_OS_SOLARIS },
  /*327*/ { (uint32_t)144, "ETOOMANYREFS", AS_DESCR_HANDLE("引用过多，无法拼接", 6368), Src_errnoh, AS_OS_SOLARIS },
  /*328*/ { (uint32_t)145, "ETIMEDOUT", AS_DESCR_HANDLE("连接超时", 6396), Src_errnoh, AS_OS_SOLARIS },
  /*329*/ { (uint32_t)146, "ECONNREFUSED", AS_DESCR_HANDLE("连接被拒绝", 6409), Src_errnoh, AS_OS_SOLARIS },
  /*330*/ { (uint32_t)147, "EHOSTDOWN", AS_DESCR_HANDLE("主机已关闭", 6425), Src_errnoh, AS_OS_SOLARIS },
  /*331*/ { (uint32_t)148, "EHOSTUNREACH", AS_DESCR_HANDLE("没有到主机的路由", 6441), Src_errnoh, AS_OS_SOLARIS },
  /*332*/ { (uint32_t)149, "EALREADY", AS_DESCR_HANDLE("操作已在进行", 6466), Src_errnoh, AS_OS_SOLARIS },
  /*333*/ { (uint32_t)150, "EINPROGRESS", AS_DESCR_HANDLE("操作正在进行", 6485), Src_errnoh, AS_OS_SOLARIS },
  /*334*/ { (uint32_t)151, "ESTALE", AS_DESCR_HANDLE("NFS 文件句柄已失效", 6504), Src_errnoh, AS_OS_SOLARIS },
  /*335*/ { (uint32_t)256, "ECVCERORR", AS_DESCR_HANDLE("", 6530), Src_errnoh, AS_OS_MAC },
  /*336*/ { (uint32_t)512, "ERESTARTSYS", AS_DESCR_HANDLE("", 6531), Src_errnoh, AS_OS_LINUX },
  /*337*/ { (uint32_t)512, "ECVPERORR", AS_DESCR_HANDLE("", 6532), Src_errnoh, AS_OS_MAC },
  /*338*/ { (uint32_t)513, "ERESTARTNOINTR", AS_DESCR_HANDLE("", 6533), Src_errnoh, AS_OS_LINUX },
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


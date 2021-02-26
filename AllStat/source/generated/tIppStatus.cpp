#include "../AllStatDefs.h"

using namespace AllStat;

#ifndef __clang__
#pragma optimize("", off)
#endif

static const char* Src_ippdefsh = "ippdefs.h";

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
static int DescrBlockSize = 12472;
static const uint8_t CompressedDescr[] =
{
  // Uncompressed size: 12472, Compressed size: 3901, Rate: 3.2
  0x1f, 0x8b, 0x08, 0x00, 0x8f, 0x1f, 0x39, 0x60, 0x02, 0xff, 0xd5, 0x5a, 0xdd, 0x73, 0xdb, 0x36, 
  0x12, 0xf7, 0x9f, 0x82, 0xb7, 0x26, 0x1d, 0x5b, 0x8d, 0xd3, 0x5e, 0xa7, 0x97, 0xe9, 0x3d, 0xd8, 
  0x72, 0x9c, 0xfa, 0x6a, 0xc7, 0xaa, 0xe5, 0x26, 0x73, 0xed, 0xf4, 0x01, 0x22, 0x21, 0x09, 0x17, 
  0x10, 0x60, 0x01, 0xd2, 0xb2, 0xf2, 0xd7, 0xdf, 0xee, 0xe2, 0x83, 0x20, 0x45, 0xc9, 0x49, 0x9b, 
  0x97, 0x9b, 0xc9, 0x8c, 0x23, 0x62, 0xb1, 0x00, 0xf6, 0xf3, 0xb7, 0x0b, 0xdc, 0xaf, 0x05, 0xb3, 
  0xe2, 0xcf, 0x56, 0xb8, 0x46, 0x94, 0xac, 0x32, 0xa5, 0x60, 0xd2, 0xb1, 0xa2, 0xb5, 0x56, 0xe8, 
  0x46, 0x6d, 0x99, 0x36, 0x0d, 0x73, 0x6d, 0x5d, 0x1b, 0x0b, 0xe3, 0x93, 0xa3, 0x7b, 0x20, 0x6f, 
  0xb8, 0x5d, 0x89, 0x86, 0x4d, 0x67, 0xbf, 0x22, 0xe9, 0x08, 0x81, 0xd4, 0xb5, 0xe2, 0x85, 0x60, 
  0xa6, 0x16, 0x96, 0x37, 0xd2, 0xe8, 0x27, 0x59, 0x6e, 0xb8, 0xad, 0x59, 0x63, 0xb9, 0x76, 0x4b, 
  0x63, 0x2b, 0x56, 0x4a, 0x2b, 0x8a, 0x38, 0x51, 0x2a, 0x25, 0x56, 0x5c, 0x11, 0xdd, 0x52, 0xaa, 
  0x46, 0x58, 0xd6, 0x6c, 0x6b, 0xda, 0xa6, 0xd4, 0x85, 0xb1, 0x48, 0xca, 0x8c, 0xed, 0xb3, 0x25, 
  0x6a, 0x8d, 0xbc, 0x0e, 0x93, 0x9d, 0xa9, 0x95, 0xb1, 0xb2, 0x59, 0x57, 0x89, 0xe7, 0xc8, 0xee, 
  0xcc, 0x72, 0xe9, 0xe0, 0xc0, 0x61, 0x90, 0x2b, 0xb9, 0xd2, 0x20, 0xab, 0x0d, 0x4c, 0x63, 0x5c, 
  0x33, 0xa1, 0x44, 0x05, 0x07, 0x9b, 0x1c, 0xcd, 0x7f, 0xb9, 0xbb, 0xcf, 0xce, 0x0c, 0xff, 0xfe, 
  0x6c, 0x79, 0x89, 0xbf, 0x0a, 0x98, 0xa8, 0x4f, 0xac, 0x70, 0xb2, 0x6c, 0x05, 0x7b, 0xe0, 0xaa, 
  0x15, 0x93, 0xa3, 0x2b, 0x7f, 0x2e, 0xff, 0x93, 0xc1, 0xb9, 0xd9, 0xc2, 0xd8, 0x32, 0x9c, 0x6e, 
  0x72, 0x74, 0x01, 0xec, 0x85, 0x95, 0x7a, 0xb5, 0x6f, 0x67, 0xe7, 0xed, 0x72, 0x09, 0xd4, 0x38, 
  0xb1, 0xc1, 0x4d, 0xb6, 0x4d, 0xdd, 0x36, 0x6c, 0x21, 0x1b, 0xd7, 0x58, 0xc1, 0xe9, 0xe0, 0xcb, 
  0x56, 0xa9, 0xc9, 0xd1, 0x99, 0x66, 0x7c, 0xb9, 0x94, 0x5a, 0x36, 0x5b, 0x06, 0xe7, 0x68, 0x90, 
  0x67, 0x69, 0x84, 0x67, 0x48, 0x92, 0x71, 0xb5, 0xd1, 0x25, 0x6b, 0x0c, 0x31, 0xda, 0xa1, 0x6d, 
  0xd6, 0xbc, 0x01, 0x0d, 0x39, 0xfc, 0xc0, 0x16, 0x5b, 0xb6, 0x9c, 0xc8, 0xba, 0x9e, 0x8b, 0xe6, 
  0x2c, 0x10, 0x3e, 0x7b, 0x3e, 0x39, 0x7a, 0x6d, 0x2d, 0xec, 0x63, 0xb3, 0x16, 0x9a, 0x29, 0xc3, 
  0x4b, 0x3f, 0x4d, 0xb0, 0x72, 0xab, 0x79, 0x05, 0xc7, 0x57, 0x72, 0x61, 0xb9, 0xdd, 0x4e, 0x8e, 
  0x66, 0x46, 0x6a, 0x10, 0x21, 0x08, 0x53, 0x87, 0x55, 0x60, 0x9b, 0xa5, 0x68, 0x40, 0x39, 0x78, 
  0xa6, 0x2b, 0x0d, 0xea, 0xd5, 0x24, 0x3f, 0x10, 0xf3, 0x47, 0x2f, 0xc8, 0x67, 0xf2, 0xf4, 0x07, 
  0xfd, 0x7c, 0x44, 0x02, 0x37, 0xc2, 0x39, 0xbe, 0x12, 0xac, 0xe0, 0x0d, 0x57, 0x66, 0x05, 0x7f, 
  0x35, 0x52, 0x2c, 0xc8, 0xf2, 0x40, 0x45, 0xc7, 0x24, 0x9c, 0xca, 0x58, 0x34, 0x49, 0x34, 0x2c, 
  0xcf, 0xaf, 0x75, 0x82, 0x09, 0x6b, 0xb5, 0x41, 0x15, 0x5d, 0x4b, 0xdd, 0x3e, 0x7e, 0xcd, 0x6e, 
  0xe7, 0xa0, 0xca, 0x92, 0xbd, 0x11, 0xcd, 0x35, 0x77, 0x8d, 0x3f, 0x0d, 0x8c, 0xbe, 0x97, 0xba, 
  0x34, 0x1b, 0x87, 0xe3, 0x87, 0x96, 0x2b, 0x94, 0x71, 0x5f, 0x7c, 0xb9, 0x5f, 0xf5, 0x07, 0x6d, 
  0x36, 0x9a, 0xb9, 0x86, 0x37, 0x2d, 0xf8, 0x0f, 0xb8, 0x26, 0x0a, 0x28, 0x9a, 0x72, 0x67, 0x36, 
  0x85, 0xdd, 0xd6, 0xa0, 0xbb, 0xdb, 0xcb, 0x73, 0xb6, 0x50, 0xa6, 0xf8, 0xc0, 0x9c, 0xfc, 0x08, 
  0xa4, 0xd7, 0xbf, 0xdd, 0x32, 0xc7, 0x97, 0xa0, 0x04, 0x51, 0x98, 0xaa, 0x06, 0x2d, 0x3b, 0xdc, 
  0xce, 0xb2, 0xd5, 0xde, 0xb5, 0xc2, 0xf6, 0x71, 0x14, 0x9c, 0x9e, 0xa8, 0xc9, 0x70, 0x26, 0x47, 
  0x77, 0xa6, 0xd5, 0xa4, 0xc2, 0x18, 0x0e, 0x06, 0x72, 0xbf, 0xb4, 0x3c, 0x78, 0xa7, 0x66, 0x17, 
  0xa2, 0x90, 0x70, 0xd0, 0x31, 0xb2, 0xb1, 0xbd, 0x6e, 0x84, 0x5c, 0xad, 0xc1, 0x57, 0xa6, 0x7e, 
  0xf1, 0x82, 0xab, 0xa2, 0x55, 0x38, 0x1d, 0xad, 0x05, 0xdc, 0x45, 0x91, 0x49, 0xe8, 0x52, 0x3c, 
  0x12, 0x39, 0xb8, 0x17, 0x70, 0x5f, 0x91, 0xe3, 0xab, 0xe4, 0x73, 0x20, 0x0b, 0x0d, 0x52, 0x41, 
  0x9f, 0xbb, 0x03, 0x53, 0x54, 0x28, 0x6f, 0x56, 0x73, 0xe7, 0x16, 0x28, 0x54, 0x9c, 0x37, 0x5d, 
  0x8b, 0xc5, 0xd6, 0xad, 0xc5, 0xc3, 0x29, 0x9c, 0xcf, 0x81, 0xbf, 0xe2, 0xf6, 0x14, 0x48, 0x00, 
  0x8d, 0x59, 0xb3, 0x8f, 0xc2, 0x9a, 0x63, 0x26, 0x70, 0x3d, 0xb4, 0x7a, 0xff, 0x13, 0xa6, 0xad, 
  0xe0, 0xfc, 0x14, 0x5f, 0x90, 0xe8, 0xe5, 0x3f, 0x61, 0x9b, 0x6d, 0x03, 0xce, 0xcf, 0x96, 0x14, 
  0x21, 0x75, 0xb1, 0x85, 0x50, 0x10, 0x63, 0xd0, 0xe7, 0x33, 0x7c, 0x31, 0xf9, 0xc7, 0xe4, 0xe8, 
  0x96, 0x5c, 0x1c, 0xd8, 0xe0, 0x81, 0x2f, 0xaf, 0xee, 0x22, 0x3b, 0xdc, 0xf5, 0xd8, 0x56, 0x4f, 
  0x07, 0x53, 0xae, 0x3e, 0x61, 0xca, 0xee, 0xd2, 0xa7, 0x2f, 0x7d, 0x24, 0xe3, 0x29, 0xdc, 0x65, 
  0x01, 0x40, 0x3f, 0x08, 0x08, 0xe8, 0x9e, 0x00, 0x4d, 0xc7, 0xc5, 0xb5, 0x9c, 0x69, 0x2d, 0x84, 
  0x71, 0x50, 0xaf, 0x95, 0x05, 0x7c, 0xe6, 0x60, 0xd9, 0xad, 0x76, 0xad, 0x6c, 0xf8, 0x42, 0xc1, 
  0x84, 0x29, 0xd8, 0x49, 0x54, 0x6e, 0xbe, 0x03, 0x5a, 0xbf, 0x27, 0x0c, 0xb4, 0x29, 0x39, 0x5f, 
  0xcb, 0x65, 0x46, 0xae, 0x21, 0xfa, 0x35, 0xf2, 0x41, 0xc4, 0xa0, 0x5c, 0xca, 0x07, 0xe9, 0x24, 
  0x30, 0xc6, 0x18, 0xd3, 0x84, 0xbd, 0xc4, 0xad, 0x94, 0xe0, 0x73, 0x21, 0x30, 0xde, 0xea, 0xf4, 
  0x35, 0xc4, 0x3c, 0x6f, 0x22, 0xa5, 0x84, 0x30, 0x8c, 0x26, 0xee, 0x06, 0xe2, 0x60, 0xb5, 0x7c, 
  0x14, 0x2a, 0x9c, 0xcf, 0x1f, 0x69, 0xe1, 0x63, 0x27, 0x9c, 0xbd, 0xe1, 0x12, 0x26, 0xe0, 0xa9, 
  0x82, 0xdd, 0xd2, 0x52, 0x93, 0xa3, 0x9f, 0x80, 0xe2, 0x15, 0xbb, 0xe1, 0x8f, 0xc0, 0x49, 0xaf, 
  0xc0, 0xea, 0x60, 0x49, 0xfc, 0x56, 0x01, 0xc7, 0x22, 0xb8, 0x05, 0xb9, 0x3a, 0xad, 0x81, 0x9b, 
  0x11, 0x8f, 0x35, 0x45, 0x31, 0x70, 0x64, 0x11, 0xe7, 0x5f, 0x69, 0x38, 0xae, 0x2c, 0x69, 0xc6, 
  0xb5, 0xd0, 0xf7, 0x5e, 0x6e, 0xfd, 0x31, 0x34, 0xae, 0x30, 0x30, 0x25, 0x4f, 0x7e, 0x45, 0x81, 
  0xb6, 0xad, 0x71, 0x49, 0xdc, 0xa1, 0x78, 0x4c, 0xb9, 0x07, 0x1d, 0x59, 0x41, 0xb4, 0x84, 0x60, 
  0x84, 0x4a, 0x79, 0xc4, 0xef, 0x0e, 0x3c, 0x15, 0x7c, 0xc8, 0x62, 0x70, 0x75, 0xb2, 0x21, 0x01, 
  0xa0, 0x7c, 0x78, 0xed, 0x35, 0x86, 0xf3, 0xc0, 0x3f, 0xb8, 0x2b, 0x84, 0xf7, 0x6a, 0xca, 0x32, 
  0xa4, 0x23, 0x1a, 0x0e, 0x6a, 0xa0, 0x0f, 0x56, 0xd4, 0xa2, 0x91, 0xf8, 0x33, 0x77, 0x5f, 0xc8, 
  0x29, 0x31, 0x07, 0xc6, 0xdc, 0x95, 0xc6, 0x40, 0xcb, 0xba, 0x89, 0x91, 0xba, 0xe6, 0x96, 0x57, 
  0x02, 0xad, 0x6e, 0x90, 0xe3, 0xde, 0x5d, 0x4f, 0x91, 0xfd, 0x25, 0xfc, 0xc9, 0xe2, 0x3d, 0x2b, 
  0x5b, 0x4a, 0x70, 0x21, 0x61, 0x51, 0x24, 0x82, 0xdf, 0x60, 0x2c, 0x62, 0xf5, 0xfa, 0xb1, 0x7e, 
  0xc5, 0x6e, 0x6b, 0x7f, 0x9c, 0x98, 0xe3, 0x6a, 0xde, 0x60, 0x7e, 0xa0, 0x7d, 0xa7, 0xa4, 0xde, 
  0x91, 0x93, 0x82, 0x1b, 0xdb, 0x16, 0x4d, 0x0b, 0x04, 0xb5, 0xff, 0x3c, 0x6f, 0x30, 0xbc, 0x24, 
  0x4d, 0x77, 0x58, 0xc0, 0xeb, 0x39, 0x9f, 0x0b, 0x86, 0x5e, 0xac, 0x21, 0x57, 0x55, 0x92, 0x04, 
  0x2e, 0x1e, 0xd7, 0xbc, 0x75, 0x14, 0xca, 0x22, 0xd5, 0xf0, 0xdc, 0x4b, 0x29, 0xec, 0xd8, 0xe8, 
  0xca, 0x9a, 0xb6, 0xee, 0x1d, 0x25, 0x93, 0x26, 0x87, 0x10, 0x6d, 0x05, 0xd8, 0x1f, 0x44, 0x14, 
  0x31, 0x46, 0x51, 0xac, 0x39, 0x46, 0x58, 0x34, 0x50, 0x05, 0x51, 0x6d, 0x8c, 0x04, 0xa4, 0xcc, 
  0x13, 0x19, 0x40, 0x0f, 0x30, 0x86, 0x52, 0x64, 0xbe, 0x05, 0x3a, 0xaf, 0xc9, 0x1a, 0x3e, 0xdf, 
  0xbf, 0x0e, 0xa4, 0x98, 0xe9, 0xfd, 0x5d, 0x2f, 0xc5, 0x4c, 0xc1, 0xac, 0xfd, 0xef, 0xa4, 0xf9, 
  0xce, 0xe6, 0x40, 0x57, 0xb0, 0x45, 0x91, 0x70, 0x85, 0x23, 0x45, 0x24, 0xfd, 0xe4, 0x26, 0xdc, 
  0xdb, 0x6e, 0x29, 0x08, 0x19, 0x00, 0xc1, 0xeb, 0xe9, 0xb4, 0x73, 0x13, 0x51, 0xaf, 0x01, 0x67, 
  0x59, 0x30, 0xa6, 0x0f, 0x62, 0x3b, 0x18, 0xab, 0x42, 0x66, 0x2e, 0xe5, 0x0a, 0x70, 0xec, 0x60, 
  0xd0, 0xad, 0x71, 0x47, 0xbb, 0x93, 0xea, 0x76, 0xa1, 0x00, 0x9a, 0x8c, 0x0c, 0x58, 0xf9, 0x80, 
  0x5b, 0xed, 0x46, 0x3c, 0x6a, 0x81, 0x68, 0x83, 0xe2, 0x7a, 0x3d, 0x1d, 0xd0, 0x5f, 0x2a, 0xbe, 
  0x8a, 0x08, 0x08, 0x1c, 0x0d, 0x6c, 0x42, 0x95, 0x29, 0x86, 0x5e, 0xd5, 0xf5, 0xcd, 0xec, 0xdb, 
  0x4b, 0x94, 0xce, 0x4f, 0x82, 0x63, 0x20, 0xcf, 0x24, 0x70, 0x70, 0xce, 0x1c, 0x34, 0x7a, 0x05, 
  0x38, 0x22, 0x9f, 0x30, 0x6f, 0x44, 0x4d, 0x0a, 0x39, 0x27, 0xa9, 0xf7, 0xe2, 0xdc, 0x0f, 0xd9, 
  0xf0, 0xcd, 0xf9, 0x20, 0x06, 0x7e, 0x0f, 0x30, 0xf0, 0x2c, 0xdb, 0xb3, 0x6e, 0xab, 0x85, 0x4f, 
  0x2a, 0x01, 0xbe, 0x7a, 0x27, 0x83, 0xd0, 0x05, 0xc7, 0x37, 0x2b, 0x8b, 0x30, 0xa0, 0x37, 0xc1, 
  0x05, 0x40, 0x8e, 0x91, 0x6c, 0x61, 0xcc, 0x87, 0xe1, 0x30, 0x64, 0x72, 0xb1, 0x04, 0x6b, 0x34, 
  0xc9, 0xf7, 0x7b, 0xe3, 0x21, 0x4c, 0x08, 0x0c, 0x85, 0x02, 0x70, 0x63, 0x21, 0x85, 0x6e, 0x46, 
  0x29, 0xf3, 0x71, 0x02, 0x02, 0x83, 0x71, 0x00, 0x32, 0xa5, 0xa4, 0xe8, 0xf1, 0x24, 0x65, 0xab, 
  0x5c, 0xb0, 0x6c, 0xb0, 0x45, 0x2b, 0x17, 0x6d, 0x23, 0x5c, 0xa0, 0x79, 0x03, 0xc1, 0x80, 0x82, 
  0x82, 0x35, 0x6a, 0x04, 0xba, 0xec, 0x91, 0x55, 0x10, 0x82, 0xdb, 0x4b, 0x70, 0xff, 0x76, 0x1e, 
  0xb2, 0xf3, 0x90, 0xa6, 0xcb, 0x22, 0x48, 0x63, 0xc5, 0x0a, 0xf8, 0x0c, 0x48, 0x4c, 0xcc, 0xf3, 
  0x1d, 0x97, 0x01, 0x05, 0x04, 0x62, 0xac, 0x22, 0x8c, 0x6a, 0x49, 0x17, 0xa8, 0xb1, 0x8e, 0x36, 
  0x97, 0x87, 0xdb, 0x2f, 0x54, 0x77, 0x70, 0x85, 0xae, 0xf2, 0xda, 0x4b, 0x82, 0x03, 0x60, 0x23, 
  0x30, 0xd6, 0xa9, 0x8e, 0x50, 0xbb, 0x42, 0x98, 0x6b, 0x86, 0xe4, 0xa1, 0xee, 0xcb, 0x93, 0x08, 
  0x88, 0x3e, 0x95, 0x29, 0x03, 0xea, 0xb3, 0x8b, 0xfb, 0x39, 0x73, 0x5b, 0x5d, 0x6c, 0x40, 0x1a, 
  0x43, 0x1b, 0xe3, 0x98, 0xfc, 0x98, 0x25, 0xb4, 0x39, 0xa2, 0xef, 0x0d, 0xa1, 0xe7, 0x28, 0xe9, 
  0x67, 0xa4, 0xd2, 0x35, 0x28, 0x14, 0x03, 0xa0, 0x32, 0x7a, 0xf5, 0x7c, 0xaf, 0xda, 0x28, 0x5c, 
  0x7b, 0x0f, 0x88, 0xdb, 0xed, 0x31, 0x1b, 0x5f, 0xc8, 0x79, 0x50, 0x88, 0x3b, 0xd2, 0xab, 0x5d, 
  0x33, 0xae, 0x2a, 0x90, 0x62, 0x20, 0x5d, 0x52, 0x88, 0xe8, 0x9f, 0x06, 0x64, 0x26, 0x0c, 0xe4, 
  0x1c, 0x37, 0xf4, 0x25, 0x88, 0xeb, 0x5a, 0x0b, 0x15, 0xf6, 0x37, 0x18, 0x04, 0xa6, 0xe6, 0x24, 
  0xcc, 0x1d, 0xe1, 0xda, 0xac, 0xc1, 0x98, 0xe7, 0x7e, 0xf8, 0x9a, 0x6f, 0x11, 0x25, 0xee, 0x21, 
  0xba, 0x01, 0x46, 0xfb, 0x49, 0xd0, 0x9f, 0x11, 0x93, 0x30, 0xb3, 0xf8, 0x2f, 0xa6, 0x82, 0x11, 
  0x12, 0xde, 0x96, 0xd2, 0xc4, 0x71, 0x9f, 0x3a, 0x46, 0xa5, 0xb4, 0xe6, 0x3b, 0x43, 0xb3, 0xe9, 
  0x4d, 0xc2, 0x6e, 0x68, 0x3b, 0x4a, 0xf0, 0x07, 0x04, 0x02, 0x30, 0x43, 0x42, 0x75, 0x85, 0x36, 
  0x04, 0x88, 0xa1, 0xa3, 0x5f, 0xfb, 0xc8, 0x09, 0xf9, 0x1b, 0xb3, 0x5c, 0x40, 0x9f, 0x44, 0x41, 
  0xc0, 0x89, 0xf9, 0x62, 0x6b, 0xc4, 0x8f, 0x89, 0xe6, 0x75, 0xe1, 0x4e, 0x3a, 0xe0, 0xbb, 0x8f, 
  0xc8, 0x15, 0x27, 0x84, 0xeb, 0x82, 0xf9, 0xe4, 0x6b, 0xa5, 0xf5, 0x5d, 0x8e, 0x3a, 0x68, 0xda, 
  0x74, 0xdf, 0x94, 0x11, 0xda, 0x78, 0x1a, 0x19, 0xdd, 0x25, 0x3f, 0x48, 0x37, 0x88, 0x52, 0xf1, 
  0xd8, 0xa4, 0x37, 0x00, 0x02, 0x3c, 0x81, 0x4d, 0xb2, 0x6c, 0x93, 0x93, 0xa3, 0xb7, 0x46, 0x3a, 
  0x91, 0xe5, 0xe9, 0xf7, 0xe0, 0xe1, 0xb0, 0xd1, 0xcb, 0x54, 0xa2, 0x84, 0x9c, 0x15, 0x2c, 0x34, 
  0xe5, 0x1b, 0x0a, 0x8a, 0x50, 0xe4, 0x01, 0x91, 0x6d, 0x21, 0x0e, 0x5d, 0x44, 0x44, 0x56, 0xf3, 
  0x92, 0x30, 0xa2, 0x08, 0x94, 0xa4, 0x0f, 0xe1, 0x3c, 0xfa, 0x32, 0xce, 0xe3, 0x07, 0x9a, 0x8d, 
  0x67, 0x6b, 0x09, 0x9f, 0x1d, 0x86, 0x0c, 0x83, 0xaa, 0x34, 0x05, 0xe7, 0xb0, 0x90, 0x2b, 0x30, 
  0xad, 0x83, 0x7d, 0x10, 0xb6, 0xb5, 0xa6, 0x82, 0x03, 0x95, 0x98, 0x7a, 0xa1, 0x36, 0x84, 0xca, 
  0x19, 0xe0, 0x6d, 0xeb, 0x6a, 0x4e, 0xb8, 0x3e, 0xa6, 0xc7, 0xae, 0x5d, 0xe5, 0xd7, 0x80, 0x6c, 
  0x55, 0xaf, 0x21, 0x93, 0xa7, 0xd6, 0xcb, 0xf8, 0x86, 0x20, 0xde, 0xe0, 0x82, 0x51, 0x74, 0xe7, 
  0x9c, 0xda, 0x5d, 0xad, 0xc2, 0xda, 0x1a, 0x97, 0x02, 0x8b, 0x66, 0x4b, 0x2e, 0x55, 0x4b, 0xe0, 
  0xd2, 0x8f, 0xe1, 0xff, 0xa0, 0x3a, 0x72, 0xc4, 0x34, 0xd4, 0xac, 0x02, 0x59, 0x62, 0x0c, 0x52, 
  0x52, 0x0b, 0x6e, 0x63, 0x42, 0xca, 0x49, 0xf0, 0x28, 0x90, 0x6c, 0x10, 0xe5, 0xa9, 0x94, 0x37, 
  0xf3, 0xe0, 0x3c, 0xd8, 0x9f, 0x0f, 0x3d, 0xd7, 0x9e, 0xdf, 0x1c, 0xcb, 0x08, 0xc4, 0x39, 0x33, 
  0x2e, 0x2d, 0xaa, 0x98, 0x59, 0x63, 0x1a, 0x8f, 0xab, 0x96, 0x58, 0x99, 0x13, 0x31, 0x96, 0x57, 
  0x7e, 0xcd, 0x19, 0x40, 0xc4, 0x18, 0xcb, 0xc4, 0x63, 0x21, 0x04, 0x00, 0x09, 0xae, 0x94, 0xd9, 
  0xc0, 0x89, 0x16, 0x48, 0xcf, 0xad, 0x84, 0x15, 0x7e, 0x7f, 0x71, 0xac, 0x6f, 0x97, 0x48, 0x2c, 
  0xdc, 0xc9, 0xe9, 0x1f, 0x39, 0x78, 0xf3, 0x85, 0xa4, 0x07, 0xdf, 0x1d, 0x52, 0x2e, 0x39, 0x96, 
  0x55, 0xb1, 0x1e, 0x8a, 0x48, 0x7e, 0x58, 0x03, 0x25, 0x2c, 0xdf, 0xac, 0x21, 0x88, 0xae, 0xd6, 
  0x6c, 0x7a, 0x3e, 0xfb, 0x4f, 0x44, 0xf4, 0xa0, 0xcf, 0x02, 0xdb, 0x0e, 0x08, 0x84, 0x3f, 0x99, 
  0xc1, 0x0d, 0x70, 0x98, 0xfa, 0x9c, 0xf2, 0x65, 0xf8, 0x58, 0x3e, 0xc6, 0x87, 0xb0, 0x52, 0x1f, 
  0x30, 0x63, 0x99, 0xc8, 0xaa, 0x56, 0x35, 0xb2, 0x46, 0xbf, 0x7c, 0x9b, 0xf2, 0x83, 0x12, 0x0f, 
  0x42, 0x79, 0x25, 0x41, 0xe8, 0x24, 0x8b, 0xab, 0xfa, 0x00, 0xeb, 0xe5, 0x1e, 0xf2, 0xeb, 0x5f, 
  0xef, 0x77, 0x08, 0xff, 0x4e, 0x61, 0xd5, 0x9b, 0xed, 0x31, 0xa0, 0xcf, 0x84, 0xc3, 0xcf, 0x01, 
  0xcb, 0x3f, 0x25, 0xac, 0x50, 0x81, 0xdd, 0xbc, 0xfb, 0x4b, 0xa2, 0x0e, 0xb3, 0xb1, 0xba, 0x3b, 
  0x30, 0x7d, 0xdf, 0xb4, 0x8b, 0xf1, 0x59, 0xe9, 0x20, 0x4b, 0x9a, 0xb8, 0x23, 0x98, 0x50, 0xbb, 
  0x53, 0x1b, 0x16, 0x91, 0x2b, 0xcb, 0x07, 0x1b, 0x51, 0x41, 0x58, 0x87, 0x45, 0x4b, 0xb9, 0x4c, 
  0x15, 0x56, 0x37, 0x1c, 0x4b, 0x1e, 0x1e, 0xa4, 0x84, 0xfd, 0x3a, 0x5e, 0x58, 0x43, 0xbf, 0x20, 
  0x08, 0x29, 0xc5, 0xce, 0xcf, 0xce, 0xa3, 0x53, 0xa2, 0xc7, 0x0d, 0xda, 0x18, 0x1d, 0xab, 0xce, 
  0xed, 0x3b, 0xd0, 0x94, 0x8f, 0x77, 0xe8, 0x02, 0xb1, 0x0e, 0x83, 0xd8, 0x14, 0xfb, 0x10, 0x99, 
  0xf3, 0x43, 0xbe, 0x30, 0x14, 0x2d, 0x00, 0x78, 0xc3, 0x49, 0xaa, 0x41, 0x8f, 0x0f, 0x24, 0x14, 
  0x82, 0xcc, 0x70, 0x64, 0xd6, 0xad, 0x7e, 0x93, 0x49, 0xc9, 0x57, 0xc0, 0xb9, 0x61, 0xf7, 0xea, 
  0x83, 0x43, 0xc3, 0x58, 0x22, 0x50, 0x8b, 0x1d, 0x2d, 0x0d, 0x92, 0x77, 0x89, 0x19, 0x6d, 0x64, 
  0xbe, 0x1f, 0x5f, 0x53, 0x1f, 0xef, 0xc9, 0xae, 0x0f, 0x54, 0xad, 0xd8, 0x92, 0xa3, 0x83, 0xa7, 
  0x20, 0x35, 0x5a, 0xb5, 0x8c, 0xec, 0x88, 0x72, 0x8e, 0xe2, 0x3a, 0xec, 0x66, 0x72, 0xf4, 0x4b, 
  0x28, 0x22, 0xec, 0x27, 0xf5, 0x9c, 0x76, 0xbb, 0x60, 0xdf, 0x9e, 0xfe, 0x5f, 0x7a, 0xc4, 0x6f, 
  0x72, 0xf5, 0x91, 0xaf, 0xc8, 0x4c, 0xa0, 0xc0, 0x4a, 0x68, 0x23, 0xef, 0x3f, 0x7d, 0xff, 0xdd, 
  0x78, 0xce, 0x6b, 0xba, 0x3b, 0x93, 0x05, 0xd7, 0x1f, 0xb2, 0x46, 0xe6, 0x68, 0x44, 0xd9, 0x3f, 
  0x31, 0x23, 0xbf, 0xcc, 0x3e, 0xcb, 0xec, 0x12, 0xa1, 0xc0, 0xbb, 0x1d, 0xac, 0xdc, 0x25, 0xb6, 
  0xee, 0x11, 0x58, 0xdd, 0x16, 0x45, 0x5b, 0xf3, 0x90, 0xfe, 0xb0, 0x55, 0x98, 0x75, 0xfd, 0xf6, 
  0x2f, 0x1b, 0x2b, 0x4c, 0xc2, 0x9c, 0xf9, 0xc2, 0xf3, 0x77, 0x17, 0x87, 0x1b, 0x98, 0xff, 0x9e, 
  0xbd, 0x7e, 0x93, 0x54, 0x93, 0x60, 0x58, 0x09, 0x58, 0xc1, 0x9a, 0x2d, 0x6e, 0x88, 0x08, 0x2e, 
  0xa6, 0xf7, 0xfd, 0xd2, 0x71, 0x88, 0x92, 0xce, 0x1a, 0x8c, 0x22, 0x0d, 0xda, 0x11, 0x2f, 0x50, 
  0x0b, 0x71, 0x1c, 0x77, 0x17, 0xa2, 0x0f, 0x35, 0x89, 0x20, 0x91, 0xcf, 0xb7, 0xe0, 0x4f, 0x55, 
  0x82, 0x4b, 0xbe, 0x97, 0x62, 0xf9, 0x86, 0x51, 0xd7, 0x6e, 0x14, 0x91, 0x98, 0xbc, 0x9d, 0x8b, 
  0x9b, 0x93, 0x3a, 0xc8, 0xc8, 0xe3, 0x7e, 0xe7, 0xe3, 0x50, 0x88, 0x41, 0x81, 0x0e, 0xcb, 0x84, 
  0xb1, 0x78, 0x74, 0xef, 0xdb, 0xe6, 0x25, 0x6e, 0x5d, 0x85, 0x4c, 0xa6, 0x49, 0x22, 0x8f, 0x8c, 
  0xb2, 0xfa, 0x0a, 0x01, 0x21, 0x41, 0x38, 0x80, 0x9d, 0x86, 0x01, 0x06, 0x22, 0xca, 0x63, 0x0a, 
  0x2c, 0xe4, 0x22, 0x35, 0x36, 0x37, 0x8e, 0xe6, 0x59, 0x33, 0x08, 0xb7, 0xe9, 0xf9, 0xf9, 0x3a, 
  0xf5, 0x80, 0xa3, 0x9d, 0xee, 0xc1, 0x32, 0xe9, 0x2e, 0x8f, 0x3f, 0x8d, 0x7e, 0x68, 0x82, 0x26, 
  0x24, 0x8b, 0x15, 0x9e, 0x6c, 0xda, 0xd2, 0x7f, 0x2b, 0xe3, 0x15, 0x58, 0x9e, 0x5c, 0xd3, 0xc7, 
  0x98, 0x66, 0x77, 0xf4, 0xd7, 0xd1, 0x46, 0x89, 0xf6, 0xd0, 0xf8, 0xf1, 0xce, 0x2d, 0x20, 0x60, 
  0xa1, 0xdb, 0xab, 0x5d, 0x3e, 0x17, 0xd8, 0x30, 0x33, 0x14, 0xaf, 0x06, 0x81, 0x25, 0xdd, 0xa1, 
  0xc0, 0x10, 0x5f, 0xc4, 0xeb, 0x8e, 0xe0, 0xdc, 0x74, 0x5d, 0x07, 0x5c, 0x7c, 0x57, 0x9a, 0x82, 
  0x3b, 0x76, 0xb6, 0xb0, 0xf1, 0xda, 0x99, 0xc3, 0x1b, 0x5e, 0x55, 0xdc, 0x2f, 0xe4, 0x41, 0x9a, 
  0x7b, 0x32, 0x96, 0xce, 0xdb, 0x2a, 0x2a, 0xc8, 0x9b, 0xbc, 0x1b, 0x4a, 0x16, 0xb0, 0x8b, 0xa3, 
  0xfb, 0xa8, 0x03, 0xca, 0x8a, 0x11, 0x68, 0x50, 0x63, 0xde, 0x63, 0xe7, 0x07, 0x36, 0xac, 0xbd, 
  0xf4, 0x9f, 0xda, 0x0b, 0x91, 0x77, 0xc1, 0x24, 0xf3, 0xeb, 0x9d, 0xa8, 0xdb, 0x9f, 0x4e, 0x77, 
  0x20, 0x34, 0xbb, 0x5e, 0x73, 0x27, 0x3e, 0x63, 0xe6, 0xcb, 0xaf, 0x67, 0x57, 0x30, 0x35, 0xd8, 
  0xef, 0xe7, 0xec, 0x35, 0x4e, 0xf9, 0xeb, 0xfb, 0x8d, 0x1c, 0xfe, 0xe6, 0x9e, 0xb9, 0xdb, 0x56, 
  0x10, 0xcb, 0xec, 0xb6, 0x9f, 0xe7, 0x4e, 0x66, 0x57, 0x4f, 0xf0, 0x41, 0x2e, 0x3f, 0x73, 0x70, 
  0x10, 0x1b, 0xab, 0x6a, 0x60, 0xd0, 0x18, 0x03, 0xd0, 0x62, 0x85, 0x7d, 0xd4, 0x28, 0x8a, 0x9d, 
  0xbb, 0x95, 0xdd, 0xce, 0x70, 0x3f, 0xbd, 0x76, 0x5d, 0x29, 0xf2, 0x7b, 0xb3, 0x01, 0xef, 0x89, 
  0xd7, 0x32, 0xa2, 0x76, 0x52, 0x81, 0x85, 0x25, 0x00, 0x16, 0xba, 0x54, 0x19, 0x5e, 0xf5, 0x57, 
  0x7a, 0x1c, 0xdc, 0x10, 0xbe, 0xa4, 0x66, 0x91, 0x2e, 0xd6, 0x31, 0xac, 0x04, 0xa7, 0xf2, 0x75, 
  0x71, 0x08, 0x63, 0x1d, 0x2b, 0x0a, 0x6a, 0xbe, 0x2c, 0x1c, 0xdc, 0x0d, 0xf5, 0x6f, 0xd6, 0x60, 
  0x98, 0x02, 0x03, 0xb8, 0x50, 0x68, 0x31, 0x3e, 0xa5, 0xf3, 0x19, 0x29, 0x2a, 0xb1, 0xcb, 0xfd, 
  0xfa, 0x15, 0x7b, 0xc1, 0x7e, 0xfc, 0x57, 0x50, 0xe5, 0x8f, 0x81, 0x21, 0x08, 0xf1, 0x8e, 0x6e, 
  0xe3, 0xdc, 0x67, 0x2e, 0x34, 0x9c, 0xf6, 0xb9, 0x16, 0x42, 0x8d, 0xf1, 0xfe, 0x9a, 0xd8, 0xee, 
  0x57, 0x5e, 0x05, 0x9d, 0xc5, 0x8e, 0x1e, 0x65, 0x72, 0x74, 0x9d, 0xf4, 0xc7, 0xf3, 0xcb, 0xc4, 
  0xa7, 0x76, 0x9d, 0x6e, 0x14, 0x41, 0xc0, 0x57, 0xbd, 0x69, 0x18, 0x17, 0x49, 0x39, 0x9d, 0x96, 
  0xfa, 0xd9, 0xb9, 0x84, 0xbd, 0x6d, 0x29, 0x79, 0xc4, 0x7e, 0x5c, 0x28, 0x40, 0xee, 0x04, 0x81, 
  0x6b, 0x7f, 0x86, 0x67, 0xee, 0xf9, 0x93, 0x9b, 0xe8, 0xb5, 0x43, 0x6a, 0xa3, 0x7c, 0xa6, 0x88, 
  0x40, 0x37, 0xdc, 0x8d, 0x29, 0x59, 0x87, 0x4f, 0x37, 0xa6, 0x4a, 0x2d, 0x63, 0x76, 0xf3, 0xec, 
  0xc5, 0xf1, 0x8b, 0xe7, 0xd1, 0x0b, 0x5c, 0x05, 0xf5, 0x2e, 0x32, 0xc6, 0xda, 0x55, 0xea, 0x56, 
  0xa4, 0x7b, 0x65, 0xdf, 0xac, 0x4d, 0x26, 0xed, 0x27, 0x07, 0x6b, 0xa7, 0xf4, 0x11, 0x73, 0x36, 
  0x14, 0x8d, 0xc2, 0xad, 0x8d, 0x2a, 0xfb, 0x39, 0x3b, 0xf6, 0xcb, 0xe2, 0xa0, 0x0f, 0xd5, 0x58, 
  0x3b, 0xfb, 0x6b, 0xb9, 0xee, 0xc2, 0x2b, 0xc1, 0x11, 0x7f, 0x89, 0x44, 0xb7, 0x93, 0xbb, 0x9c, 
  0xfa, 0xb2, 0xbc, 0xbc, 0xbc, 0xdf, 0x01, 0x39, 0xfb, 0x29, 0x3d, 0x6e, 0xc8, 0xf1, 0xd0, 0x4e, 
  0x05, 0x1b, 0x34, 0x37, 0xc7, 0x66, 0x7c, 0x4c, 0x2b, 0x08, 0x1a, 0x06, 0x79, 0x2d, 0xde, 0xf5, 
  0x1c, 0x7e, 0x1b, 0x03, 0x9e, 0x6c, 0x57, 0x6d, 0x35, 0x02, 0x91, 0x3a, 0xd8, 0x30, 0xf4, 0x6f, 
  0xca, 0x79, 0xfe, 0xc5, 0x49, 0x07, 0xa2, 0xf0, 0xe2, 0xa9, 0xa4, 0x5b, 0xa7, 0xe0, 0x33, 0x02, 
  0x80, 0xeb, 0x96, 0x7a, 0x14, 0xd8, 0x5c, 0x2a, 0xbb, 0x27, 0x2c, 0xf9, 0x7b, 0x21, 0x6a, 0xb5, 
  0x68, 0xac, 0xe4, 0x31, 0xa3, 0x83, 0x7e, 0x69, 0x41, 0xec, 0x71, 0xf8, 0x26, 0xf3, 0x28, 0xec, 
  0xf0, 0x67, 0x7e, 0xe5, 0xf5, 0x6b, 0x36, 0x22, 0x7c, 0x41, 0x7e, 0xbd, 0x4a, 0x00, 0xc7, 0xe1, 
  0x9c, 0x71, 0x7c, 0x1c, 0x92, 0x50, 0x9b, 0x2b, 0x76, 0xad, 0xe2, 0x30, 0xb7, 0xab, 0x6f, 0x48, 
  0x07, 0xd1, 0x8c, 0x22, 0x16, 0xc0, 0x4e, 0x4d, 0xdc, 0x31, 0xab, 0xfc, 0x11, 0x77, 0x0e, 0x96, 
  0x5e, 0x75, 0x7c, 0xd3, 0x6a, 0x57, 0x8b, 0x02, 0x2f, 0x10, 0x4b, 0x7f, 0xa2, 0x63, 0x76, 0xf2, 
  0xed, 0xe1, 0xe1, 0x97, 0x87, 0x87, 0x4f, 0xa9, 0x57, 0x44, 0xbf, 0x1c, 0xfd, 0xb7, 0x13, 0x27, 
  0x04, 0x25, 0x80, 0x05, 0x42, 0x33, 0xf1, 0x28, 0x8a, 0xd6, 0xbf, 0x9d, 0x91, 0x2e, 0x3e, 0x64, 
  0x8a, 0x82, 0x05, 0x57, 0xc8, 0x34, 0xa0, 0xd9, 0x66, 0x2d, 0xc1, 0x92, 0x65, 0x93, 0x60, 0x45, 
  0x98, 0x30, 0x74, 0x28, 0x74, 0xf6, 0x78, 0x52, 0x9e, 0x4c, 0xc6, 0x0b, 0x79, 0xfe, 0xa7, 0x6d, 
  0x32, 0x11, 0x5d, 0xbd, 0xbd, 0x04, 0x4c, 0xe9, 0x5a, 0xd5, 0x4c, 0xd8, 0x6f, 0x60, 0x0c, 0x41, 
  0xda, 0xf8, 0xb8, 0xa8, 0xf2, 0x8f, 0x8b, 0xc0, 0xfe, 0xef, 0xc9, 0xdd, 0xfc, 0x5b, 0x0f, 0xb4, 
  0x18, 0xef, 0xa9, 0x50, 0x4c, 0x3e, 0xc0, 0x09, 0xf2, 0x4b, 0xcb, 0x1b, 0xa8, 0x81, 0x41, 0x99, 
  0xa1, 0x20, 0xa1, 0x6c, 0x82, 0x9c, 0xac, 0xa0, 0xe7, 0x67, 0xe1, 0xb5, 0x08, 0xc9, 0xbf, 0x0c, 
  0xb7, 0xf2, 0xdd, 0x9a, 0xf9, 0xa6, 0xcb, 0x08, 0xf4, 0xfc, 0x9e, 0x01, 0xf7, 0x65, 0x5b, 0x1e, 
  0x9f, 0x32, 0x3c, 0xe7, 0xb5, 0xce, 0x0d, 0xe1, 0x93, 0xc5, 0xd3, 0x9b, 0x96, 0xdc, 0xad, 0xe7, 
  0xd3, 0x3c, 0x61, 0x34, 0xaa, 0x5e, 0x2a, 0x6e, 0x3f, 0x88, 0xb4, 0xd5, 0xfc, 0x1a, 0x05, 0x5c, 
  0xc4, 0x8b, 0x36, 0x6f, 0x5f, 0x2c, 0x95, 0x81, 0x22, 0x11, 0x6b, 0x31, 0x00, 0x8c, 0xf0, 0x63, 
  0x13, 0x67, 0x66, 0x26, 0xf9, 0x4b, 0xba, 0x9b, 0xbb, 0x9e, 0xe1, 0xdd, 0x0b, 0x0c, 0x3b, 0x7c, 
  0x3c, 0xe6, 0xc5, 0xea, 0xa0, 0x90, 0x92, 0xf4, 0x2c, 0xa7, 0x58, 0x0b, 0x7f, 0xe7, 0xc8, 0x6b, 
  0xc8, 0x57, 0xd8, 0x2f, 0x6d, 0xa2, 0xa3, 0xc5, 0x46, 0x23, 0x3d, 0x90, 0xf9, 0xfd, 0xc5, 0x71, 
  0x2d, 0xff, 0xf8, 0xfb, 0x7c, 0xd7, 0x12, 0x3c, 0xe9, 0x4b, 0x33, 0x5e, 0x98, 0x66, 0x9d, 0xb7, 
  0x45, 0x33, 0xb6, 0xa4, 0x69, 0x33, 0xa8, 0x59, 0xd1, 0xe7, 0xca, 0xbd, 0xa2, 0x9b, 0x87, 0xb7, 
  0x17, 0xfe, 0xd5, 0xd2, 0x70, 0x74, 0x24, 0x7e, 0xe6, 0x11, 0x03, 0x72, 0x46, 0xc5, 0xa5, 0xde, 
  0xf7, 0xa8, 0xf2, 0x8d, 0xd0, 0x2d, 0xa6, 0x59, 0xec, 0x84, 0xaa, 0xd4, 0x5a, 0x46, 0xec, 0x45, 
  0x42, 0xf7, 0x2f, 0xea, 0x92, 0x65, 0xad, 0x24, 0x7a, 0x07, 0x4c, 0x87, 0x65, 0xf1, 0xb4, 0x05, 
  0x0f, 0x4b, 0x74, 0x55, 0x32, 0xb6, 0x75, 0x3d, 0x37, 0x76, 0x35, 0x9b, 0xe5, 0x0f, 0xc1, 0x14, 
  0x16, 0x9d, 0x17, 0xd2, 0xd5, 0x98, 0xbb, 0xf0, 0x26, 0xd1, 0xaf, 0xb5, 0x94, 0xf8, 0x2a, 0x10, 
  0x1f, 0x52, 0x8a, 0x0d, 0xd4, 0xa9, 0x2c, 0xd6, 0x1c, 0xf1, 0x9a, 0x3a, 0xb1, 0x2a, 0x55, 0x78, 
  0x5e, 0x93, 0x1d, 0xcd, 0xaf, 0xbb, 0xf6, 0xd7, 0x3a, 0xbd, 0xc7, 0x80, 0x03, 0x36, 0xe9, 0x6d, 
  0xe0, 0x1b, 0x5f, 0xaa, 0x66, 0x43, 0xb5, 0x95, 0x95, 0xf8, 0x06, 0x2f, 0x03, 0xb0, 0x31, 0x4f, 
  0x7d, 0x12, 0x81, 0x19, 0x45, 0x6a, 0xd7, 0xa6, 0xfa, 0x5d, 0xe0, 0x25, 0x6e, 0x9d, 0xe4, 0x0f, 
  0x19, 0x0a, 0xe4, 0x0a, 0x72, 0x42, 0x7d, 0x6b, 0xbc, 0x67, 0x93, 0x15, 0x35, 0xf9, 0xb1, 0xd9, 
  0xea, 0xef, 0x00, 0x7a, 0xe5, 0x64, 0x56, 0x80, 0xfb, 0x51, 0xd7, 0x6f, 0xad, 0xc4, 0x67, 0x3d, 
  0x39, 0xd8, 0x32, 0xdd, 0x13, 0xa4, 0xcf, 0x98, 0xff, 0x1d, 0x4c, 0x86, 0xb3, 0x37, 0x58, 0x9a, 
  0xf7, 0x17, 0xc6, 0x0a, 0x3e, 0xe5, 0xbc, 0x88, 0x92, 0x0a, 0x88, 0xba, 0x80, 0x79, 0xec, 0x57, 
  0xce, 0xc7, 0xae, 0x3b, 0xa8, 0x51, 0x31, 0x90, 0x6b, 0xe3, 0x21, 0x53, 0xbc, 0x91, 0x4f, 0x51, 
  0x2e, 0xbc, 0x6d, 0xf2, 0xaf, 0xc2, 0x12, 0x6f, 0x98, 0x36, 0x61, 0x79, 0x36, 0x20, 0xff, 0x89, 
  0x0d, 0x83, 0x2f, 0xc3, 0x30, 0x36, 0x0f, 0x0a, 0xca, 0xb1, 0x65, 0xd7, 0xc2, 0xd9, 0x29, 0x38, 
  0x8a, 0x72, 0xf1, 0x81, 0xa8, 0x63, 0x24, 0x04, 0xbb, 0x9b, 0xbe, 0x62, 0x79, 0xf7, 0xa1, 0xff, 
  0x44, 0x6b, 0x87, 0x43, 0xff, 0x99, 0xd5, 0x70, 0x72, 0xbe, 0xd1, 0x4f, 0xe7, 0x80, 0xa6, 0x2b, 
  0x74, 0x49, 0x57, 0xfc, 0xbd, 0xfe, 0x1b, 0xaa, 0xed, 0x3d, 0xb5, 0x42, 0xb1, 0xf5, 0xef, 0x7b, 
  0x9e, 0xa9, 0xb4, 0x47, 0xaf, 0x2e, 0xc3, 0x13, 0xe1, 0xfd, 0x8f, 0xa1, 0xc3, 0x48, 0xfa, 0x7a, 
  0x0c, 0xfb, 0x6a, 0x76, 0xde, 0xdf, 0x14, 0xf8, 0x54, 0x06, 0xe9, 0x5a, 0x9f, 0xe1, 0xfd, 0xdc, 
  0x9f, 0x85, 0xc5, 0x22, 0x3d, 0x32, 0xf6, 0xd5, 0xa3, 0x2c, 0x42, 0x2a, 0xdc, 0xa4, 0xfd, 0x20, 
  0x87, 0xf7, 0xf4, 0x0b, 0x4e, 0xd5, 0xcf, 0x8a, 0xf2, 0x60, 0x3e, 0x7c, 0xf7, 0xd7, 0x6c, 0xea, 
  0xc1, 0x28, 0x50, 0xde, 0xd0, 0x0a, 0xe2, 0xfb, 0xd8, 0x69, 0x78, 0x1f, 0x4b, 0xe8, 0x92, 0x20, 
  0xe9, 0x31, 0x7b, 0x0d, 0xd6, 0x26, 0xdd, 0x3a, 0xbd, 0xd4, 0xb1, 0xa2, 0x69, 0x2d, 0x61, 0x89, 
  0x4b, 0xef, 0xd9, 0x60, 0xf0, 0x4b, 0x81, 0xc8, 0x99, 0x33, 0x84, 0x85, 0xd4, 0x41, 0x8c, 0xd4, 
  0x07, 0xa6, 0xb3, 0xcb, 0x2f, 0xf9, 0xe4, 0x36, 0xc4, 0x58, 0x7c, 0xc1, 0x4c, 0xb7, 0x8c, 0x12, 
  0x52, 0x67, 0x8c, 0x4f, 0xc7, 0x80, 0x2d, 0x40, 0x42, 0x4b, 0x2c, 0x35, 0x50, 0x4f, 0x64, 0x1b, 
  0x87, 0x27, 0xd4, 0x56, 0x3c, 0x48, 0x03, 0xa1, 0x67, 0xf0, 0x0c, 0xba, 0x9b, 0x7f, 0x5b, 0x0b, 
  0x7d, 0x33, 0xfb, 0x9a, 0x5d, 0x43, 0x76, 0xb9, 0xa6, 0x7a, 0x24, 0x3e, 0xaa, 0xa6, 0xce, 0x25, 
  0x60, 0xb4, 0x85, 0x8a, 0x86, 0x44, 0x8f, 0x71, 0x53, 0x3c, 0x0f, 0xf6, 0xc4, 0x30, 0x13, 0x82, 
  0xb4, 0xb8, 0x6f, 0x15, 0x47, 0x63, 0x0e, 0x6a, 0x23, 0x04, 0x1b, 0x8a, 0xa4, 0xfc, 0x69, 0x5f, 
  0x7c, 0xe9, 0xd9, 0xb1, 0xa3, 0x0b, 0x43, 0x54, 0x02, 0xa8, 0x93, 0x9e, 0xe0, 0xe3, 0xd3, 0xf1, 
  0x5c, 0xb9, 0xd3, 0xf0, 0x2e, 0x02, 0xcd, 0x19, 0x67, 0xe9, 0xaf, 0xb2, 0x3d, 0x60, 0x53, 0x1a, 
  0x84, 0xca, 0x4e, 0x33, 0x37, 0x24, 0x51, 0x2c, 0x21, 0x1e, 0xb4, 0x96, 0x5e, 0xdd, 0x44, 0x9a, 
  0x7e, 0xec, 0xec, 0x51, 0xf5, 0xec, 0xff, 0xbd, 0x35, 0x74, 0x1b, 0x59, 0x2d, 0xa2, 0xd5, 0xe1, 
  0xdb, 0xdb, 0xc4, 0xef, 0x7f, 0x7c, 0x7d, 0x69, 0xf3, 0xb8, 0x30, 0x00, 0x00, 
};
#endif  // #if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
static constexpr uint64_t _GENERATOR_ = AS_GENERATOR::AS_IPP_STATUS;
#endif

static const STATUS_ITEM Status[] =
{
  /*0*/ { (uint32_t)-9999, "ippStsNotSupportedModeErr", AS_DESCR_HANDLE("The requested mode is currently not supported.", 0), Src_ippdefsh, AS_OS_ANY },
  /*1*/ { (uint32_t)-9998, "ippStsCpuNotSupportedErr", AS_DESCR_HANDLE("The target CPU is not supported.", 47), Src_ippdefsh, AS_OS_ANY },
  /*2*/ { (uint32_t)-9997, "ippStsInplaceModeNotSupportedErr", AS_DESCR_HANDLE("The inplace operation is currently not supported.", 80), Src_ippdefsh, AS_OS_ANY },
  /*3*/ { (uint32_t)-231, "ippStsWarpDirectionErr", AS_DESCR_HANDLE("The warp transform direction is illegal", 130), Src_ippdefsh, AS_OS_ANY },
  /*4*/ { (uint32_t)-230, "ippStsFilterTypeErr", AS_DESCR_HANDLE("The filter type is incorrect or not supported", 170), Src_ippdefsh, AS_OS_ANY },
  /*5*/ { (uint32_t)-229, "ippStsNormErr", AS_DESCR_HANDLE("The norm is incorrect or not supported", 216), Src_ippdefsh, AS_OS_ANY },
  /*6*/ { (uint32_t)-228, "ippStsAlgTypeErr", AS_DESCR_HANDLE("Algorithm type is not supported.", 255), Src_ippdefsh, AS_OS_ANY },
  /*7*/ { (uint32_t)-227, "ippStsMisalignedOffsetErr", AS_DESCR_HANDLE("The offset is not aligned with an element.", 288), Src_ippdefsh, AS_OS_ANY },
  /*8*/ { (uint32_t)-226, "ippStsQuadraticNonResidueErr", AS_DESCR_HANDLE("SQRT operation on quadratic non-residue value.", 331), Src_ippdefsh, AS_OS_ANY },
  /*9*/ { (uint32_t)-225, "ippStsBorderErr", AS_DESCR_HANDLE("Illegal value for border type.", 378), Src_ippdefsh, AS_OS_ANY },
  /*10*/ { (uint32_t)-224, "ippStsDitherTypeErr", AS_DESCR_HANDLE("Dithering type is not supported.", 409), Src_ippdefsh, AS_OS_ANY },
  /*11*/ { (uint32_t)-223, "ippStsH264BufferFullErr", AS_DESCR_HANDLE("Buffer for the output bitstream is full.", 442), Src_ippdefsh, AS_OS_ANY },
  /*12*/ { (uint32_t)-222, "ippStsWrongAffinitySettingErr", AS_DESCR_HANDLE("An affinity setting does not correspond to the affinity setting that was set by f.ippSetAffinity().", 483), Src_ippdefsh, AS_OS_ANY },
  /*13*/ { (uint32_t)-221, "ippStsLoadDynErr", AS_DESCR_HANDLE("Error when loading the dynamic library.", 583), Src_ippdefsh, AS_OS_ANY },
  /*14*/ { (uint32_t)-220, "ippStsPointAtInfinity", AS_DESCR_HANDLE("Point at infinity is detected.", 623), Src_ippdefsh, AS_OS_ANY },
  /*15*/ { (uint32_t)-219, "ippStsI18nUnsupportedErr", AS_DESCR_HANDLE("Internationalization (i18n) is not supported.", 654), Src_ippdefsh, AS_OS_ANY },
  /*16*/ { (uint32_t)-218, "ippStsI18nMsgCatalogOpenErr", AS_DESCR_HANDLE("Message catalog cannot be opened, for more information use errno on Linux* OS and GetLastError on Windows* OS.", 700), Src_ippdefsh, AS_OS_ANY },
  /*17*/ { (uint32_t)-217, "ippStsI18nMsgCatalogCloseErr", AS_DESCR_HANDLE("Message catalog cannot be closed, for more information use errno on Linux* OS and GetLastError on Windows* OS.", 811), Src_ippdefsh, AS_OS_ANY },
  /*18*/ { (uint32_t)-216, "ippStsUnknownStatusCodeErr", AS_DESCR_HANDLE("Unknown status code.", 922), Src_ippdefsh, AS_OS_ANY },
  /*19*/ { (uint32_t)-215, "ippStsOFBSizeErr", AS_DESCR_HANDLE("Incorrect value for crypto OFB block size.", 943), Src_ippdefsh, AS_OS_ANY },
  /*20*/ { (uint32_t)-214, "ippStsLzoBrokenStreamErr", AS_DESCR_HANDLE("LZO safe decompression function cannot decode LZO stream.", 986), Src_ippdefsh, AS_OS_ANY },
  /*21*/ { (uint32_t)-213, "ippStsRoundModeNotSupportedErr", AS_DESCR_HANDLE("Rounding mode is not supported.", 1044), Src_ippdefsh, AS_OS_ANY },
  /*22*/ { (uint32_t)-212, "ippStsDecimateFractionErr", AS_DESCR_HANDLE("Fraction in Decimate is not supported.", 1076), Src_ippdefsh, AS_OS_ANY },
  /*23*/ { (uint32_t)-211, "ippStsWeightErr", AS_DESCR_HANDLE("Incorrect value for weight.", 1115), Src_ippdefsh, AS_OS_ANY },
  /*24*/ { (uint32_t)-210, "ippStsQualityIndexErr", AS_DESCR_HANDLE("Cannot calculate the quality index for an image filled with a constant.", 1143), Src_ippdefsh, AS_OS_ANY },
  /*25*/ { (uint32_t)-209, "ippStsIIRPassbandRippleErr", AS_DESCR_HANDLE("Ripple in passband for Chebyshev1 design is less than zero, equal to zero, or greater than 29.", 1215), Src_ippdefsh, AS_OS_ANY },
  /*26*/ { (uint32_t)-208, "ippStsFilterFrequencyErr", AS_DESCR_HANDLE("Cutoff frequency of filter is less than zero, equal to zero, or greater than 0.5.", 1310), Src_ippdefsh, AS_OS_ANY },
  /*27*/ { (uint32_t)-207, "ippStsFIRGenOrderErr", AS_DESCR_HANDLE("Order of the FIR filter for design is less than 1.", 1392), Src_ippdefsh, AS_OS_ANY },
  /*28*/ { (uint32_t)-206, "ippStsIIRGenOrderErr", AS_DESCR_HANDLE("Order of the IIR filter for design is less than 1, or greater than 12.", 1443), Src_ippdefsh, AS_OS_ANY },
  /*29*/ { (uint32_t)-205, "ippStsConvergeErr", AS_DESCR_HANDLE("The algorithm does not converge.", 1514), Src_ippdefsh, AS_OS_ANY },
  /*30*/ { (uint32_t)-204, "ippStsSizeMatchMatrixErr", AS_DESCR_HANDLE("The sizes of the source matrices are unsuitable.", 1547), Src_ippdefsh, AS_OS_ANY },
  /*31*/ { (uint32_t)-203, "ippStsCountMatrixErr", AS_DESCR_HANDLE("Count value is less than, or equal to zero.", 1596), Src_ippdefsh, AS_OS_ANY },
  /*32*/ { (uint32_t)-202, "ippStsRoiShiftMatrixErr", AS_DESCR_HANDLE("RoiShift value is negative or not divisible by the size of the data type.", 1640), Src_ippdefsh, AS_OS_ANY },
  /*33*/ { (uint32_t)-201, "ippStsResizeNoOperationErr", AS_DESCR_HANDLE("One of the output image dimensions is less than 1 pixel.", 1714), Src_ippdefsh, AS_OS_ANY },
  /*34*/ { (uint32_t)-200, "ippStsSrcDataErr", AS_DESCR_HANDLE("The source buffer contains unsupported data.", 1771), Src_ippdefsh, AS_OS_ANY },
  /*35*/ { (uint32_t)-199, "ippStsMaxLenHuffCodeErr", AS_DESCR_HANDLE("Huff: Max length of Huffman code is more than the expected one.", 1816), Src_ippdefsh, AS_OS_ANY },
  /*36*/ { (uint32_t)-198, "ippStsCodeLenTableErr", AS_DESCR_HANDLE("Huff: Invalid codeLenTable.", 1880), Src_ippdefsh, AS_OS_ANY },
  /*37*/ { (uint32_t)-197, "ippStsFreqTableErr", AS_DESCR_HANDLE("Huff: Invalid freqTable.", 1908), Src_ippdefsh, AS_OS_ANY },
  /*38*/ { (uint32_t)-196, "ippStsIncompleteContextErr", AS_DESCR_HANDLE("Crypto: set up of context is not complete.", 1933), Src_ippdefsh, AS_OS_ANY },
  /*39*/ { (uint32_t)-195, "ippStsSingularErr", AS_DESCR_HANDLE("Matrix is singular.", 1976), Src_ippdefsh, AS_OS_ANY },
  /*40*/ { (uint32_t)-194, "ippStsSparseErr", AS_DESCR_HANDLE("Positions of taps are not in ascending order, or are negative, or repetitive.", 1996), Src_ippdefsh, AS_OS_ANY },
  /*41*/ { (uint32_t)-193, "ippStsBitOffsetErr", AS_DESCR_HANDLE("Incorrect bit offset value.", 2074), Src_ippdefsh, AS_OS_ANY },
  /*42*/ { (uint32_t)-192, "ippStsQPErr", AS_DESCR_HANDLE("Incorrect quantization parameter value.", 2102), Src_ippdefsh, AS_OS_ANY },
  /*43*/ { (uint32_t)-191, "ippStsVLCErr", AS_DESCR_HANDLE("Illegal VLC or FLC is detected during stream decoding.", 2142), Src_ippdefsh, AS_OS_ANY },
  /*44*/ { (uint32_t)-190, "ippStsRegExpOptionsErr", AS_DESCR_HANDLE("RegExp: Options for the pattern are incorrect.", 2197), Src_ippdefsh, AS_OS_ANY },
  /*45*/ { (uint32_t)-189, "ippStsRegExpErr", AS_DESCR_HANDLE("RegExp: The structure pRegExpState contains incorrect data.", 2244), Src_ippdefsh, AS_OS_ANY },
  /*46*/ { (uint32_t)-188, "ippStsRegExpMatchLimitErr", AS_DESCR_HANDLE("RegExp: The match limit is exhausted.", 2304), Src_ippdefsh, AS_OS_ANY },
  /*47*/ { (uint32_t)-187, "ippStsRegExpQuantifierErr", AS_DESCR_HANDLE("RegExp: Incorrect quantifier.", 2342), Src_ippdefsh, AS_OS_ANY },
  /*48*/ { (uint32_t)-186, "ippStsRegExpGroupingErr", AS_DESCR_HANDLE("RegExp: Incorrect grouping.", 2372), Src_ippdefsh, AS_OS_ANY },
  /*49*/ { (uint32_t)-185, "ippStsRegExpBackRefErr", AS_DESCR_HANDLE("RegExp: Incorrect back reference.", 2400), Src_ippdefsh, AS_OS_ANY },
  /*50*/ { (uint32_t)-184, "ippStsRegExpChClassErr", AS_DESCR_HANDLE("RegExp: Incorrect character class.", 2434), Src_ippdefsh, AS_OS_ANY },
  /*51*/ { (uint32_t)-183, "ippStsRegExpMetaChErr", AS_DESCR_HANDLE("RegExp: Incorrect metacharacter.", 2469), Src_ippdefsh, AS_OS_ANY },
  /*52*/ { (uint32_t)-182, "ippStsStrideMatrixErr", AS_DESCR_HANDLE("Stride value is not positive or not divisible by the size of the data type.", 2502), Src_ippdefsh, AS_OS_ANY },
  /*53*/ { (uint32_t)-181, "ippStsCTRSizeErr", AS_DESCR_HANDLE("Incorrect value for crypto CTR block size.", 2578), Src_ippdefsh, AS_OS_ANY },
  /*54*/ { (uint32_t)-180, "ippStsJPEG2KCodeBlockIsNotAttached", AS_DESCR_HANDLE("Codeblock parameters are not attached to the state structure.", 2621), Src_ippdefsh, AS_OS_ANY },
  /*55*/ { (uint32_t)-179, "ippStsNotPosDefErr", AS_DESCR_HANDLE("Matrix is not positive definite.", 2683), Src_ippdefsh, AS_OS_ANY },
  /*56*/ { (uint32_t)-178, "ippStsEphemeralKeyErr", AS_DESCR_HANDLE("ECC: Invalid ephemeral key.", 2716), Src_ippdefsh, AS_OS_ANY },
  /*57*/ { (uint32_t)-177, "ippStsMessageErr", AS_DESCR_HANDLE("ECC: Invalid message digest.", 2744), Src_ippdefsh, AS_OS_ANY },
  /*58*/ { (uint32_t)-176, "ippStsShareKeyErr", AS_DESCR_HANDLE("ECC: Invalid share key.", 2773), Src_ippdefsh, AS_OS_ANY },
  /*59*/ { (uint32_t)-175, "ippStsIvalidPublicKey", AS_DESCR_HANDLE("ECC: Invalid public key.", 2797), Src_ippdefsh, AS_OS_ANY },
  /*60*/ { (uint32_t)-174, "ippStsIvalidPrivateKey", AS_DESCR_HANDLE("ECC: Invalid private key.", 2822), Src_ippdefsh, AS_OS_ANY },
  /*61*/ { (uint32_t)-173, "ippStsOutOfECErr", AS_DESCR_HANDLE("ECC: Point out of EC.", 2848), Src_ippdefsh, AS_OS_ANY },
  /*62*/ { (uint32_t)-172, "ippStsECCInvalidFlagErr", AS_DESCR_HANDLE("ECC: Invalid Flag.", 2870), Src_ippdefsh, AS_OS_ANY },
  /*63*/ { (uint32_t)-171, "ippStsMP3FrameHeaderErr", AS_DESCR_HANDLE("Error in fields of the IppMP3FrameHeader structure.", 2889), Src_ippdefsh, AS_OS_ANY },
  /*64*/ { (uint32_t)-170, "ippStsMP3SideInfoErr", AS_DESCR_HANDLE("Error in fields of the IppMP3SideInfo structure.", 2941), Src_ippdefsh, AS_OS_ANY },
  /*65*/ { (uint32_t)-169, "ippStsBlockStepErr", AS_DESCR_HANDLE("Step for Block is less than 8.", 2990), Src_ippdefsh, AS_OS_ANY },
  /*66*/ { (uint32_t)-168, "ippStsMBStepErr", AS_DESCR_HANDLE("Step for MB is less than 16.", 3021), Src_ippdefsh, AS_OS_ANY },
  /*67*/ { (uint32_t)-167, "ippStsAacPrgNumErr", AS_DESCR_HANDLE("AAC: Invalid number of elements for one program.", 3050), Src_ippdefsh, AS_OS_ANY },
  /*68*/ { (uint32_t)-166, "ippStsAacSectCbErr", AS_DESCR_HANDLE("AAC: Invalid section codebook.", 3099), Src_ippdefsh, AS_OS_ANY },
  /*69*/ { (uint32_t)-164, "ippStsAacSfValErr", AS_DESCR_HANDLE("AAC: Invalid scalefactor value.", 3130), Src_ippdefsh, AS_OS_ANY },
  /*70*/ { (uint32_t)-163, "ippStsAacCoefValErr", AS_DESCR_HANDLE("AAC: Invalid quantized coefficient value.", 3162), Src_ippdefsh, AS_OS_ANY },
  /*71*/ { (uint32_t)-162, "ippStsAacMaxSfbErr", AS_DESCR_HANDLE("AAC: Invalid coefficient index.", 3204), Src_ippdefsh, AS_OS_ANY },
  /*72*/ { (uint32_t)-161, "ippStsAacPredSfbErr", AS_DESCR_HANDLE("AAC: Invalid predicted coefficient index.", 3236), Src_ippdefsh, AS_OS_ANY },
  /*73*/ { (uint32_t)-160, "ippStsAacPlsDataErr", AS_DESCR_HANDLE("AAC: Invalid pulse data attributes.", 3278), Src_ippdefsh, AS_OS_ANY },
  /*74*/ { (uint32_t)-159, "ippStsAacGainCtrErr", AS_DESCR_HANDLE("AAC: Gain control is not supported.", 3314), Src_ippdefsh, AS_OS_ANY },
  /*75*/ { (uint32_t)-158, "ippStsAacSectErr", AS_DESCR_HANDLE("AAC: Invalid number of sections.", 3350), Src_ippdefsh, AS_OS_ANY },
  /*76*/ { (uint32_t)-157, "ippStsAacTnsNumFiltErr", AS_DESCR_HANDLE("AAC: Invalid number of TNS filters.", 3383), Src_ippdefsh, AS_OS_ANY },
  /*77*/ { (uint32_t)-156, "ippStsAacTnsLenErr", AS_DESCR_HANDLE("AAC: Invalid length of TNS region.", 3419), Src_ippdefsh, AS_OS_ANY },
  /*78*/ { (uint32_t)-155, "ippStsAacTnsOrderErr", AS_DESCR_HANDLE("AAC: Invalid order of TNS filter.", 3454), Src_ippdefsh, AS_OS_ANY },
  /*79*/ { (uint32_t)-154, "ippStsAacTnsCoefResErr", AS_DESCR_HANDLE("AAC: Invalid bit-resolution for TNS filter coefficients.", 3488), Src_ippdefsh, AS_OS_ANY },
  /*80*/ { (uint32_t)-153, "ippStsAacTnsCoefErr", AS_DESCR_HANDLE("AAC: Invalid coefficients of TNS filter.", 3545), Src_ippdefsh, AS_OS_ANY },
  /*81*/ { (uint32_t)-152, "ippStsAacTnsDirectErr", AS_DESCR_HANDLE("AAC: Invalid direction TNS filter.", 3586), Src_ippdefsh, AS_OS_ANY },
  /*82*/ { (uint32_t)-151, "ippStsAacTnsProfileErr", AS_DESCR_HANDLE("AAC: Invalid TNS profile.", 3621), Src_ippdefsh, AS_OS_ANY },
  /*83*/ { (uint32_t)-150, "ippStsAacErr", AS_DESCR_HANDLE("AAC: Internal error.", 3647), Src_ippdefsh, AS_OS_ANY },
  /*84*/ { (uint32_t)-149, "ippStsAacBitOffsetErr", AS_DESCR_HANDLE("AAC: Invalid current bit offset in bitstream.", 3668), Src_ippdefsh, AS_OS_ANY },
  /*85*/ { (uint32_t)-148, "ippStsAacAdtsSyncWordErr", AS_DESCR_HANDLE("AAC: Invalid ADTS syncword.", 3714), Src_ippdefsh, AS_OS_ANY },
  /*86*/ { (uint32_t)-147, "ippStsAacSmplRateIdxErr", AS_DESCR_HANDLE("AAC: Invalid sample rate index.", 3742), Src_ippdefsh, AS_OS_ANY },
  /*87*/ { (uint32_t)-146, "ippStsAacWinLenErr", AS_DESCR_HANDLE("AAC: Invalid window length (not short or long).", 3774), Src_ippdefsh, AS_OS_ANY },
  /*88*/ { (uint32_t)-145, "ippStsAacWinGrpErr", AS_DESCR_HANDLE("AAC: Invalid number of groups for current window length.", 3822), Src_ippdefsh, AS_OS_ANY },
  /*89*/ { (uint32_t)-144, "ippStsAacWinSeqErr", AS_DESCR_HANDLE("AAC: Invalid window sequence range.", 3879), Src_ippdefsh, AS_OS_ANY },
  /*90*/ { (uint32_t)-143, "ippStsAacComWinErr", AS_DESCR_HANDLE("AAC: Invalid common window flag.", 3915), Src_ippdefsh, AS_OS_ANY },
  /*91*/ { (uint32_t)-142, "ippStsAacStereoMaskErr", AS_DESCR_HANDLE("AAC: Invalid stereo mask.", 3948), Src_ippdefsh, AS_OS_ANY },
  /*92*/ { (uint32_t)-141, "ippStsAacChanErr", AS_DESCR_HANDLE("AAC: Invalid channel number.", 3974), Src_ippdefsh, AS_OS_ANY },
  /*93*/ { (uint32_t)-140, "ippStsAacMonoStereoErr", AS_DESCR_HANDLE("AAC: Invalid mono-stereo flag.", 4003), Src_ippdefsh, AS_OS_ANY },
  /*94*/ { (uint32_t)-139, "ippStsAacStereoLayerErr", AS_DESCR_HANDLE("AAC: Invalid this Stereo Layer flag.", 4034), Src_ippdefsh, AS_OS_ANY },
  /*95*/ { (uint32_t)-138, "ippStsAacMonoLayerErr", AS_DESCR_HANDLE("AAC: Invalid this Mono Layer flag.", 4071), Src_ippdefsh, AS_OS_ANY },
  /*96*/ { (uint32_t)-137, "ippStsAacScalableErr", AS_DESCR_HANDLE("AAC: Invalid scalable object flag.", 4106), Src_ippdefsh, AS_OS_ANY },
  /*97*/ { (uint32_t)-136, "ippStsAacObjTypeErr", AS_DESCR_HANDLE("AAC: Invalid audio object type.", 4141), Src_ippdefsh, AS_OS_ANY },
  /*98*/ { (uint32_t)-135, "ippStsAacWinShapeErr", AS_DESCR_HANDLE("AAC: Invalid window shape.", 4173), Src_ippdefsh, AS_OS_ANY },
  /*99*/ { (uint32_t)-134, "ippStsAacPcmModeErr", AS_DESCR_HANDLE("AAC: Invalid PCM output interleaving indicator.", 4200), Src_ippdefsh, AS_OS_ANY },
  /*100*/ { (uint32_t)-133, "ippStsVLCUsrTblHeaderErr", AS_DESCR_HANDLE("VLC: Invalid header inside table.", 4248), Src_ippdefsh, AS_OS_ANY },
  /*101*/ { (uint32_t)-132, "ippStsVLCUsrTblUnsupportedFmtErr", AS_DESCR_HANDLE("VLC: Table format is not supported.", 4282), Src_ippdefsh, AS_OS_ANY },
  /*102*/ { (uint32_t)-131, "ippStsVLCUsrTblEscAlgTypeErr", AS_DESCR_HANDLE("VLC: Ecs-algorithm is not supported.", 4318), Src_ippdefsh, AS_OS_ANY },
  /*103*/ { (uint32_t)-130, "ippStsVLCUsrTblEscCodeLengthErr", AS_DESCR_HANDLE("VLC: Esc-code length inside table header is incorrect.", 4355), Src_ippdefsh, AS_OS_ANY },
  /*104*/ { (uint32_t)-129, "ippStsVLCUsrTblCodeLengthErr", AS_DESCR_HANDLE("VLC: Code length inside table is incorrect.", 4410), Src_ippdefsh, AS_OS_ANY },
  /*105*/ { (uint32_t)-128, "ippStsVLCInternalTblErr", AS_DESCR_HANDLE("VLC: Invalid internal table.", 4454), Src_ippdefsh, AS_OS_ANY },
  /*106*/ { (uint32_t)-127, "ippStsVLCInputDataErr", AS_DESCR_HANDLE("VLC: Invalid input data.", 4483), Src_ippdefsh, AS_OS_ANY },
  /*107*/ { (uint32_t)-126, "ippStsVLCAACEscCodeLengthErr", AS_DESCR_HANDLE("VLC: Invalid AAC-Esc code length.", 4508), Src_ippdefsh, AS_OS_ANY },
  /*108*/ { (uint32_t)-125, "ippStsNoiseRangeErr", AS_DESCR_HANDLE("Noise value for Wiener Filter is out of range.", 4542), Src_ippdefsh, AS_OS_ANY },
  /*109*/ { (uint32_t)-124, "ippStsUnderRunErr", AS_DESCR_HANDLE("Error in data under run.", 4589), Src_ippdefsh, AS_OS_ANY },
  /*110*/ { (uint32_t)-123, "ippStsPaddingErr", AS_DESCR_HANDLE("Detected padding error indicates the possible data corruption.", 4614), Src_ippdefsh, AS_OS_ANY },
  /*111*/ { (uint32_t)-122, "ippStsCFBSizeErr", AS_DESCR_HANDLE("Incorrect value for crypto CFB block size.", 4677), Src_ippdefsh, AS_OS_ANY },
  /*112*/ { (uint32_t)-121, "ippStsPaddingSchemeErr", AS_DESCR_HANDLE("Invalid padding scheme.", 4720), Src_ippdefsh, AS_OS_ANY },
  /*113*/ { (uint32_t)-120, "ippStsInvalidCryptoKeyErr", AS_DESCR_HANDLE("A compromised key causes suspansion of the requested cryptographic operation.", 4744), Src_ippdefsh, AS_OS_ANY },
  /*114*/ { (uint32_t)-119, "ippStsLengthErr", AS_DESCR_HANDLE("Incorrect value for string length.", 4822), Src_ippdefsh, AS_OS_ANY },
  /*115*/ { (uint32_t)-118, "ippStsBadModulusErr", AS_DESCR_HANDLE("Bad modulus caused a failure in module inversion.", 4857), Src_ippdefsh, AS_OS_ANY },
  /*116*/ { (uint32_t)-117, "ippStsLPCCalcErr", AS_DESCR_HANDLE("Cannot evaluate linear prediction.", 4907), Src_ippdefsh, AS_OS_ANY },
  /*117*/ { (uint32_t)-116, "ippStsRCCalcErr", AS_DESCR_HANDLE("Cannot compute reflection coefficients.", 4942), Src_ippdefsh, AS_OS_ANY },
  /*118*/ { (uint32_t)-115, "ippStsIncorrectLSPErr", AS_DESCR_HANDLE("Incorrect values for Linear Spectral Pair.", 4982), Src_ippdefsh, AS_OS_ANY },
  /*119*/ { (uint32_t)-114, "ippStsNoRootFoundErr", AS_DESCR_HANDLE("No roots are found for equation.", 5025), Src_ippdefsh, AS_OS_ANY },
  /*120*/ { (uint32_t)-113, "ippStsJPEG2KBadPassNumber", AS_DESCR_HANDLE("Pass number exceeds allowed boundaries [0,nOfPasses-1].", 5058), Src_ippdefsh, AS_OS_ANY },
  /*121*/ { (uint32_t)-112, "ippStsJPEG2KDamagedCodeBlock", AS_DESCR_HANDLE("Codeblock for decoding contains damaged data.", 5114), Src_ippdefsh, AS_OS_ANY },
  /*122*/ { (uint32_t)-111, "ippStsH263CBPYCodeErr", AS_DESCR_HANDLE("Illegal Huffman code is detected through CBPY stream processing.", 5160), Src_ippdefsh, AS_OS_ANY },
  /*123*/ { (uint32_t)-110, "ippStsH263MCBPCInterCodeErr", AS_DESCR_HANDLE("Illegal Huffman code is detected through MCBPC Inter stream processing.", 5225), Src_ippdefsh, AS_OS_ANY },
  /*124*/ { (uint32_t)-109, "ippStsH263MCBPCIntraCodeErr", AS_DESCR_HANDLE("Illegal Huffman code is detected through MCBPC Intra stream processing.", 5297), Src_ippdefsh, AS_OS_ANY },
  /*125*/ { (uint32_t)-108, "ippStsNotEvenStepErr", AS_DESCR_HANDLE("Step value is not pixel multiple.", 5369), Src_ippdefsh, AS_OS_ANY },
  /*126*/ { (uint32_t)-107, "ippStsHistoNofLevelsErr", AS_DESCR_HANDLE("Number of levels for histogram is less than 2.", 5403), Src_ippdefsh, AS_OS_ANY },
  /*127*/ { (uint32_t)-106, "ippStsLUTNofLevelsErr", AS_DESCR_HANDLE("Number of levels for LUT is less than 2.", 5450), Src_ippdefsh, AS_OS_ANY },
  /*128*/ { (uint32_t)-105, "ippStsMP4BitOffsetErr", AS_DESCR_HANDLE("Incorrect bit offset value.", 5491), Src_ippdefsh, AS_OS_ANY },
  /*129*/ { (uint32_t)-104, "ippStsMP4QPErr", AS_DESCR_HANDLE("Incorrect quantization parameter.", 5519), Src_ippdefsh, AS_OS_ANY },
  /*130*/ { (uint32_t)-103, "ippStsMP4BlockIdxErr", AS_DESCR_HANDLE("Incorrect block index.", 5553), Src_ippdefsh, AS_OS_ANY },
  /*131*/ { (uint32_t)-102, "ippStsMP4BlockTypeErr", AS_DESCR_HANDLE("Incorrect block type.", 5576), Src_ippdefsh, AS_OS_ANY },
  /*132*/ { (uint32_t)-101, "ippStsMP4MVCodeErr", AS_DESCR_HANDLE("Illegal Huffman code is detected during MV stream processing.", 5598), Src_ippdefsh, AS_OS_ANY },
  /*133*/ { (uint32_t)-100, "ippStsMP4VLCCodeErr", AS_DESCR_HANDLE("Illegal Huffman code is detected during VLC stream processing.", 5660), Src_ippdefsh, AS_OS_ANY },
  /*134*/ { (uint32_t)-99, "ippStsMP4DCCodeErr", AS_DESCR_HANDLE("Illegal code is detected during DC stream processing.", 5723), Src_ippdefsh, AS_OS_ANY },
  /*135*/ { (uint32_t)-98, "ippStsMP4FcodeErr", AS_DESCR_HANDLE("Incorrect fcode value.", 5777), Src_ippdefsh, AS_OS_ANY },
  /*136*/ { (uint32_t)-97, "ippStsMP4AlignErr", AS_DESCR_HANDLE("Incorrect buffer alignment .", 5800), Src_ippdefsh, AS_OS_ANY },
  /*137*/ { (uint32_t)-96, "ippStsMP4TempDiffErr", AS_DESCR_HANDLE("Incorrect temporal difference.", 5829), Src_ippdefsh, AS_OS_ANY },
  /*138*/ { (uint32_t)-95, "ippStsMP4BlockSizeErr", AS_DESCR_HANDLE("Incorrect size of a block or macroblock.", 5860), Src_ippdefsh, AS_OS_ANY },
  /*139*/ { (uint32_t)-94, "ippStsMP4ZeroBABErr", AS_DESCR_HANDLE("All BAB values are equal to zero.", 5901), Src_ippdefsh, AS_OS_ANY },
  /*140*/ { (uint32_t)-93, "ippStsMP4PredDirErr", AS_DESCR_HANDLE("Incorrect prediction direction.", 5935), Src_ippdefsh, AS_OS_ANY },
  /*141*/ { (uint32_t)-92, "ippStsMP4BitsPerPixelErr", AS_DESCR_HANDLE("Incorrect number of bits per pixel.", 5967), Src_ippdefsh, AS_OS_ANY },
  /*142*/ { (uint32_t)-91, "ippStsMP4VideoCompModeErr", AS_DESCR_HANDLE("Incorrect video component mode.", 6003), Src_ippdefsh, AS_OS_ANY },
  /*143*/ { (uint32_t)-90, "ippStsMP4LinearModeErr", AS_DESCR_HANDLE("Incorrect DC linear mode.", 6035), Src_ippdefsh, AS_OS_ANY },
  /*144*/ { (uint32_t)-83, "ippStsH263PredModeErr", AS_DESCR_HANDLE("Incorrect Prediction Mode value.", 6061), Src_ippdefsh, AS_OS_ANY },
  /*145*/ { (uint32_t)-82, "ippStsH263BlockStepErr", AS_DESCR_HANDLE("The step value is less than 8.", 6094), Src_ippdefsh, AS_OS_ANY },
  /*146*/ { (uint32_t)-81, "ippStsH263MBStepErr", AS_DESCR_HANDLE("The step value is less than 16.", 6125), Src_ippdefsh, AS_OS_ANY },
  /*147*/ { (uint32_t)-80, "ippStsH263FrameWidthErr", AS_DESCR_HANDLE("The frame width is less than 8.", 6157), Src_ippdefsh, AS_OS_ANY },
  /*148*/ { (uint32_t)-79, "ippStsH263FrameHeightErr", AS_DESCR_HANDLE("The frame height is less than, or equal to zero.", 6189), Src_ippdefsh, AS_OS_ANY },
  /*149*/ { (uint32_t)-78, "ippStsH263ExpandPelsErr", AS_DESCR_HANDLE("Expand pixels number is less than 8.", 6238), Src_ippdefsh, AS_OS_ANY },
  /*150*/ { (uint32_t)-77, "ippStsH263PlaneStepErr", AS_DESCR_HANDLE("Step value is less than the plane width.", 6275), Src_ippdefsh, AS_OS_ANY },
  /*151*/ { (uint32_t)-76, "ippStsH263QuantErr", AS_DESCR_HANDLE("Quantizer value is less than, or equal to zero, or greater than 31.", 6316), Src_ippdefsh, AS_OS_ANY },
  /*152*/ { (uint32_t)-75, "ippStsH263MVCodeErr", AS_DESCR_HANDLE("Illegal Huffman code is detected during MV stream processing.", 6384), Src_ippdefsh, AS_OS_ANY },
  /*153*/ { (uint32_t)-74, "ippStsH263VLCCodeErr", AS_DESCR_HANDLE("Illegal Huffman code is detected during VLC stream processing.", 6446), Src_ippdefsh, AS_OS_ANY },
  /*154*/ { (uint32_t)-73, "ippStsH263DCCodeErr", AS_DESCR_HANDLE("Illegal code is detected during DC stream processing.", 6509), Src_ippdefsh, AS_OS_ANY },
  /*155*/ { (uint32_t)-72, "ippStsH263ZigzagLenErr", AS_DESCR_HANDLE("Zigzag compact length is more than 64.", 6563), Src_ippdefsh, AS_OS_ANY },
  /*156*/ { (uint32_t)-71, "ippStsFBankFreqErr", AS_DESCR_HANDLE("Incorrect value for the filter bank frequency parameter.", 6602), Src_ippdefsh, AS_OS_ANY },
  /*157*/ { (uint32_t)-70, "ippStsFBankFlagErr", AS_DESCR_HANDLE("Incorrect value for the filter bank parameter.", 6659), Src_ippdefsh, AS_OS_ANY },
  /*158*/ { (uint32_t)-69, "ippStsFBankErr", AS_DESCR_HANDLE("Filter bank is not correctly initialized.", 6706), Src_ippdefsh, AS_OS_ANY },
  /*159*/ { (uint32_t)-67, "ippStsNegOccErr", AS_DESCR_HANDLE("Occupation count is negative.", 6748), Src_ippdefsh, AS_OS_ANY },
  /*160*/ { (uint32_t)-66, "ippStsCdbkFlagErr", AS_DESCR_HANDLE("Incorrect value for the codebook flag parameter.", 6778), Src_ippdefsh, AS_OS_ANY },
  /*161*/ { (uint32_t)-65, "ippStsSVDCnvgErr", AS_DESCR_HANDLE("SVD algorithm does not converge.", 6827), Src_ippdefsh, AS_OS_ANY },
  /*162*/ { (uint32_t)-64, "ippStsJPEGHuffTableErr", AS_DESCR_HANDLE("JPEG Huffman table is destroyed.", 6860), Src_ippdefsh, AS_OS_ANY },
  /*163*/ { (uint32_t)-63, "ippStsJPEGDCTRangeErr", AS_DESCR_HANDLE("JPEG DCT coefficient is out of range.", 6893), Src_ippdefsh, AS_OS_ANY },
  /*164*/ { (uint32_t)-62, "ippStsJPEGOutOfBufErr", AS_DESCR_HANDLE("Attempt to access out of the buffer limits.", 6931), Src_ippdefsh, AS_OS_ANY },
  /*165*/ { (uint32_t)-61, "ippStsDrawTextErr", AS_DESCR_HANDLE("System error in the draw text operation.", 6975), Src_ippdefsh, AS_OS_ANY },
  /*166*/ { (uint32_t)-60, "ippStsChannelOrderErr", AS_DESCR_HANDLE("Incorrect order of the destination channels.", 7016), Src_ippdefsh, AS_OS_ANY },
  /*167*/ { (uint32_t)-59, "ippStsZeroMaskValuesErr", AS_DESCR_HANDLE("All values of the mask are equal to zero.", 7061), Src_ippdefsh, AS_OS_ANY },
  /*168*/ { (uint32_t)-58, "ippStsQuadErr", AS_DESCR_HANDLE("The quadrangle is nonconvex or degenerates into triangle, line, or point", 7103), Src_ippdefsh, AS_OS_ANY },
  /*169*/ { (uint32_t)-57, "ippStsRectErr", AS_DESCR_HANDLE("Size of the rectangle region is less than, or equal to 1.", 7176), Src_ippdefsh, AS_OS_ANY },
  /*170*/ { (uint32_t)-56, "ippStsCoeffErr", AS_DESCR_HANDLE("Incorrect values for transformation coefficients.", 7234), Src_ippdefsh, AS_OS_ANY },
  /*171*/ { (uint32_t)-55, "ippStsNoiseValErr", AS_DESCR_HANDLE("Incorrect value for noise amplitude for dithering.", 7284), Src_ippdefsh, AS_OS_ANY },
  /*172*/ { (uint32_t)-54, "ippStsDitherLevelsErr", AS_DESCR_HANDLE("Number of dithering levels is out of range.", 7335), Src_ippdefsh, AS_OS_ANY },
  /*173*/ { (uint32_t)-53, "ippStsNumChannelsErr", AS_DESCR_HANDLE("Number of channels is incorrect, or not supported.", 7379), Src_ippdefsh, AS_OS_ANY },
  /*174*/ { (uint32_t)-52, "ippStsCOIErr", AS_DESCR_HANDLE("COI is out of range.", 7430), Src_ippdefsh, AS_OS_ANY },
  /*175*/ { (uint32_t)-51, "ippStsDivisorErr", AS_DESCR_HANDLE("Divisor is equal to zero, function is aborted.", 7451), Src_ippdefsh, AS_OS_ANY },
  /*176*/ { (uint32_t)-50, "ippStsAlphaTypeErr", AS_DESCR_HANDLE("Illegal type of image compositing operation.", 7498), Src_ippdefsh, AS_OS_ANY },
  /*177*/ { (uint32_t)-49, "ippStsGammaRangeErr", AS_DESCR_HANDLE("Gamma range bounds is less than, or equal to zero.", 7543), Src_ippdefsh, AS_OS_ANY },
  /*178*/ { (uint32_t)-48, "ippStsGrayCoefSumErr", AS_DESCR_HANDLE("Sum of the conversion coefficients must be less than, or equal to 1.", 7594), Src_ippdefsh, AS_OS_ANY },
  /*179*/ { (uint32_t)-47, "ippStsChannelErr", AS_DESCR_HANDLE("Illegal channel number.", 7663), Src_ippdefsh, AS_OS_ANY },
  /*180*/ { (uint32_t)-46, "ippStsToneMagnErr", AS_DESCR_HANDLE("Tone magnitude is less than, or equal to zero.", 7687), Src_ippdefsh, AS_OS_ANY },
  /*181*/ { (uint32_t)-45, "ippStsToneFreqErr", AS_DESCR_HANDLE("Tone frequency is negative, or greater than, or equal to 0.5.", 7734), Src_ippdefsh, AS_OS_ANY },
  /*182*/ { (uint32_t)-44, "ippStsTonePhaseErr", AS_DESCR_HANDLE("Tone phase is negative, or greater than, or equal to 2*PI.", 7796), Src_ippdefsh, AS_OS_ANY },
  /*183*/ { (uint32_t)-43, "ippStsTrnglMagnErr", AS_DESCR_HANDLE("Triangle magnitude is less than, or equal to zero.", 7855), Src_ippdefsh, AS_OS_ANY },
  /*184*/ { (uint32_t)-42, "ippStsTrnglFreqErr", AS_DESCR_HANDLE("Triangle frequency is negative, or greater than, or equal to 0.5.", 7906), Src_ippdefsh, AS_OS_ANY },
  /*185*/ { (uint32_t)-41, "ippStsTrnglPhaseErr", AS_DESCR_HANDLE("Triangle phase is negative, or greater than, or equal to 2*PI.", 7972), Src_ippdefsh, AS_OS_ANY },
  /*186*/ { (uint32_t)-40, "ippStsTrnglAsymErr", AS_DESCR_HANDLE("Triangle asymmetry is less than -PI, or greater than, or equal to PI.", 8035), Src_ippdefsh, AS_OS_ANY },
  /*187*/ { (uint32_t)-39, "ippStsHugeWinErr", AS_DESCR_HANDLE("Kaiser window is too big.", 8105), Src_ippdefsh, AS_OS_ANY },
  /*188*/ { (uint32_t)-38, "ippStsJaehneErr", AS_DESCR_HANDLE("Magnitude value is negative.", 8131), Src_ippdefsh, AS_OS_ANY },
  /*189*/ { (uint32_t)-37, "ippStsStrideErr", AS_DESCR_HANDLE("Stride value is less than the length of the row.", 8160), Src_ippdefsh, AS_OS_ANY },
  /*190*/ { (uint32_t)-36, "ippStsEpsValErr", AS_DESCR_HANDLE("Negative epsilon value.", 8209), Src_ippdefsh, AS_OS_ANY },
  /*191*/ { (uint32_t)-35, "ippStsWtOffsetErr", AS_DESCR_HANDLE("Invalid offset value for wavelet filter.", 8233), Src_ippdefsh, AS_OS_ANY },
  /*192*/ { (uint32_t)-34, "ippStsAnchorErr", AS_DESCR_HANDLE("Anchor point is outside the mask.", 8274), Src_ippdefsh, AS_OS_ANY },
  /*193*/ { (uint32_t)-33, "ippStsMaskSizeErr", AS_DESCR_HANDLE("Invalid mask size.", 8308), Src_ippdefsh, AS_OS_ANY },
  /*194*/ { (uint32_t)-32, "ippStsShiftErr", AS_DESCR_HANDLE("Shift value is less than zero.", 8327), Src_ippdefsh, AS_OS_ANY },
  /*195*/ { (uint32_t)-31, "ippStsSampleFactorErr", AS_DESCR_HANDLE("Sampling factor is less than, or equal to zero.", 8358), Src_ippdefsh, AS_OS_ANY },
  /*196*/ { (uint32_t)-30, "ippStsSamplePhaseErr", AS_DESCR_HANDLE("Phase value is out of range: 0 <= phase < factor.", 8406), Src_ippdefsh, AS_OS_ANY },
  /*197*/ { (uint32_t)-29, "ippStsFIRMRFactorErr", AS_DESCR_HANDLE("MR FIR sampling factor is less than, or equal to zero.", 8456), Src_ippdefsh, AS_OS_ANY },
  /*198*/ { (uint32_t)-28, "ippStsFIRMRPhaseErr", AS_DESCR_HANDLE("MR FIR sampling phase is negative, or greater than, or equal to the sampling factor.", 8511), Src_ippdefsh, AS_OS_ANY },
  /*199*/ { (uint32_t)-27, "ippStsRelFreqErr", AS_DESCR_HANDLE("Relative frequency value is out of range.", 8596), Src_ippdefsh, AS_OS_ANY },
  /*200*/ { (uint32_t)-26, "ippStsFIRLenErr", AS_DESCR_HANDLE("Length of a FIR filter is less than, or equal to zero.", 8638), Src_ippdefsh, AS_OS_ANY },
  /*201*/ { (uint32_t)-25, "ippStsIIROrderErr", AS_DESCR_HANDLE("Order of an IIR filter is not valid.", 8693), Src_ippdefsh, AS_OS_ANY },
  /*202*/ { (uint32_t)-24, "ippStsDlyLineIndexErr", AS_DESCR_HANDLE("Invalid value for the delay line sample index.", 8730), Src_ippdefsh, AS_OS_ANY },
  /*203*/ { (uint32_t)-23, "ippStsResizeFactorErr", AS_DESCR_HANDLE("Resize factor(s) is less than, or equal to zero.", 8777), Src_ippdefsh, AS_OS_ANY },
  /*204*/ { (uint32_t)-22, "ippStsInterpolationErr", AS_DESCR_HANDLE("Invalid interpolation mode.", 8826), Src_ippdefsh, AS_OS_ANY },
  /*205*/ { (uint32_t)-21, "ippStsMirrorFlipErr", AS_DESCR_HANDLE("Invalid flip mode.", 8854), Src_ippdefsh, AS_OS_ANY },
  /*206*/ { (uint32_t)-20, "ippStsMoment00ZeroErr", AS_DESCR_HANDLE("Moment value M(0,0) is too small to continue calculations.", 8873), Src_ippdefsh, AS_OS_ANY },
  /*207*/ { (uint32_t)-19, "ippStsThreshNegLevelErr", AS_DESCR_HANDLE("Negative value of the level in the threshold operation.", 8932), Src_ippdefsh, AS_OS_ANY },
  /*208*/ { (uint32_t)-18, "ippStsThresholdErr", AS_DESCR_HANDLE("Invalid threshold bounds.", 8988), Src_ippdefsh, AS_OS_ANY },
  /*209*/ { (uint32_t)-17, "ippStsContextMatchErr", AS_DESCR_HANDLE("Context parameter does not match the operation.", 9014), Src_ippdefsh, AS_OS_ANY },
  /*210*/ { (uint32_t)-16, "ippStsFftFlagErr", AS_DESCR_HANDLE("Invalid value for the FFT flag parameter.", 9062), Src_ippdefsh, AS_OS_ANY },
  /*211*/ { (uint32_t)-15, "ippStsFftOrderErr", AS_DESCR_HANDLE("Invalid value for the FFT order parameter.", 9104), Src_ippdefsh, AS_OS_ANY },
  /*212*/ { (uint32_t)-14, "ippStsStepErr", AS_DESCR_HANDLE("Step value is not valid.", 9147), Src_ippdefsh, AS_OS_ANY },
  /*213*/ { (uint32_t)-13, "ippStsScaleRangeErr", AS_DESCR_HANDLE("Scale bounds are out of range.", 9172), Src_ippdefsh, AS_OS_ANY },
  /*214*/ { (uint32_t)-12, "ippStsDataTypeErr", AS_DESCR_HANDLE("Data type is incorrect or not supported.", 9203), Src_ippdefsh, AS_OS_ANY },
  /*215*/ { (uint32_t)-11, "ippStsOutOfRangeErr", AS_DESCR_HANDLE("Argument is out of range, or point is outside the image.", 9244), Src_ippdefsh, AS_OS_ANY },
  /*216*/ { (uint32_t)-10, "ippStsDivByZeroErr", AS_DESCR_HANDLE("An attempt to divide by zero.", 9301), Src_ippdefsh, AS_OS_ANY },
  /*217*/ { (uint32_t)-9, "ippStsMemAllocErr", AS_DESCR_HANDLE("Memory allocated for the operation is not enough.", 9331), Src_ippdefsh, AS_OS_ANY },
  /*218*/ { (uint32_t)-8, "ippStsNullPtrErr", AS_DESCR_HANDLE("Null pointer error.", 9381), Src_ippdefsh, AS_OS_ANY },
  /*219*/ { (uint32_t)-7, "ippStsRangeErr", AS_DESCR_HANDLE("Incorrect values for bounds: the lower bound is greater than the upper bound.", 9401), Src_ippdefsh, AS_OS_ANY },
  /*220*/ { (uint32_t)-6, "ippStsSizeErr", AS_DESCR_HANDLE("Incorrect value for data size.", 9479), Src_ippdefsh, AS_OS_ANY },
  /*221*/ { (uint32_t)-5, "ippStsBadArgErr", AS_DESCR_HANDLE("Incorrect arg/param of the function.", 9510), Src_ippdefsh, AS_OS_ANY },
  /*222*/ { (uint32_t)-4, "ippStsNoMemErr", AS_DESCR_HANDLE("Not enough memory for the operation.", 9547), Src_ippdefsh, AS_OS_ANY },
  /*223*/ { (uint32_t)-3, "ippStsSAReservedErr3", AS_DESCR_HANDLE("Unknown/unspecified error, -3.", 9584), Src_ippdefsh, AS_OS_ANY },
  /*224*/ { (uint32_t)-2, "ippStsErr", AS_DESCR_HANDLE("Unknown/unspecified error, -2.", 9615), Src_ippdefsh, AS_OS_ANY },
  /*225*/ { (uint32_t)-1, "ippStsSAReservedErr1", AS_DESCR_HANDLE("Unknown/unspecified error, -1.", 9646), Src_ippdefsh, AS_OS_ANY },
  /*226*/ { (uint32_t)0, "ippStsNoErr", AS_DESCR_HANDLE("No errors.", 9677), Src_ippdefsh, AS_OS_ANY },
  /*227*/ { (uint32_t)1, "ippStsNoOperation", AS_DESCR_HANDLE("No operation has been executed.", 9688), Src_ippdefsh, AS_OS_ANY },
  /*228*/ { (uint32_t)2, "ippStsMisalignedBuf", AS_DESCR_HANDLE("Misaligned pointer in operation in which it must be aligned.", 9720), Src_ippdefsh, AS_OS_ANY },
  /*229*/ { (uint32_t)3, "ippStsSqrtNegArg", AS_DESCR_HANDLE("Negative value(s) for the argument in the Sqrt function.", 9781), Src_ippdefsh, AS_OS_ANY },
  /*230*/ { (uint32_t)4, "ippStsInvZero", AS_DESCR_HANDLE("INF result. Zero value was met by InvThresh with zero level.", 9838), Src_ippdefsh, AS_OS_ANY },
  /*231*/ { (uint32_t)5, "ippStsEvenMedianMaskSize", AS_DESCR_HANDLE("Even size of the Median Filter mask was replaced with the odd one.", 9899), Src_ippdefsh, AS_OS_ANY },
  /*232*/ { (uint32_t)6, "ippStsDivByZero", AS_DESCR_HANDLE("Zero value(s) for the divisor in the Div function.", 9966), Src_ippdefsh, AS_OS_ANY },
  /*233*/ { (uint32_t)7, "ippStsLnZeroArg", AS_DESCR_HANDLE("Zero value(s) for the argument in the Ln function.", 10017), Src_ippdefsh, AS_OS_ANY },
  /*234*/ { (uint32_t)8, "ippStsLnNegArg", AS_DESCR_HANDLE("Negative value(s) for the argument in the Ln function.", 10068), Src_ippdefsh, AS_OS_ANY },
  /*235*/ { (uint32_t)9, "ippStsNanArg", AS_DESCR_HANDLE("Argument value is not a number.", 10123), Src_ippdefsh, AS_OS_ANY },
  /*236*/ { (uint32_t)10, "ippStsJPEGMarker", AS_DESCR_HANDLE("JPEG marker in the bitstream.", 10155), Src_ippdefsh, AS_OS_ANY },
  /*237*/ { (uint32_t)11, "ippStsResFloor", AS_DESCR_HANDLE("All result values are floored.", 10185), Src_ippdefsh, AS_OS_ANY },
  /*238*/ { (uint32_t)12, "ippStsOverflow", AS_DESCR_HANDLE("Overflow in the operation.", 10216), Src_ippdefsh, AS_OS_ANY },
  /*239*/ { (uint32_t)13, "ippStsLSFLow", AS_DESCR_HANDLE("Quantized LP synthesis filter stability check is applied at the low boundary of [0,pi].", 10243), Src_ippdefsh, AS_OS_ANY },
  /*240*/ { (uint32_t)14, "ippStsLSFHigh", AS_DESCR_HANDLE("Quantized LP synthesis filter stability check is applied at the high boundary of [0,pi].", 10331), Src_ippdefsh, AS_OS_ANY },
  /*241*/ { (uint32_t)15, "ippStsLSFLowAndHigh", AS_DESCR_HANDLE("Quantized LP synthesis filter stability check is applied at both boundaries of [0,pi].", 10420), Src_ippdefsh, AS_OS_ANY },
  /*242*/ { (uint32_t)16, "ippStsZeroOcc", AS_DESCR_HANDLE("Zero occupation count.", 10507), Src_ippdefsh, AS_OS_ANY },
  /*243*/ { (uint32_t)17, "ippStsUnderflow", AS_DESCR_HANDLE("Underflow in the operation.", 10530), Src_ippdefsh, AS_OS_ANY },
  /*244*/ { (uint32_t)18, "ippStsSingularity", AS_DESCR_HANDLE("Singularity in the operation.", 10558), Src_ippdefsh, AS_OS_ANY },
  /*245*/ { (uint32_t)19, "ippStsDomain", AS_DESCR_HANDLE("Argument is out of the function domain.", 10588), Src_ippdefsh, AS_OS_ANY },
  /*246*/ { (uint32_t)20, "ippStsNonIntelCpu", AS_DESCR_HANDLE("The target CPU is not Genuine Intel.", 10628), Src_ippdefsh, AS_OS_ANY },
  /*247*/ { (uint32_t)21, "ippStsCpuMismatch", AS_DESCR_HANDLE("Cannot set the library for the given CPU.", 10665), Src_ippdefsh, AS_OS_ANY },
  /*248*/ { (uint32_t)22, "ippStsNoIppFunctionFound", AS_DESCR_HANDLE("Application does not contain Intel IPP function calls.", 10707), Src_ippdefsh, AS_OS_ANY },
  /*249*/ { (uint32_t)23, "ippStsDllNotFoundBestUsed", AS_DESCR_HANDLE("Dispatcher cannot find the newest version of the Intel IPP dll.", 10762), Src_ippdefsh, AS_OS_ANY },
  /*250*/ { (uint32_t)24, "ippStsNoOperationInDll", AS_DESCR_HANDLE("The function does nothing in the dynamic version of the library.", 10826), Src_ippdefsh, AS_OS_ANY },
  /*251*/ { (uint32_t)25, "ippStsInsufficientEntropy", AS_DESCR_HANDLE("Generation of the prime/key failed due to insufficient entropy in the random seed and stimulus bit string.", 10891), Src_ippdefsh, AS_OS_ANY },
  /*252*/ { (uint32_t)26, "ippStsOvermuchStrings", AS_DESCR_HANDLE("Number of destination strings is more than expected.", 10998), Src_ippdefsh, AS_OS_ANY },
  /*253*/ { (uint32_t)27, "ippStsOverlongString", AS_DESCR_HANDLE("Length of one of the destination strings is more than expected.", 11051), Src_ippdefsh, AS_OS_ANY },
  /*254*/ { (uint32_t)28, "ippStsAffineQuadChanged", AS_DESCR_HANDLE("4th vertex of destination quad is not equal to customer's one.", 11115), Src_ippdefsh, AS_OS_ANY },
  /*255*/ { (uint32_t)29, "ippStsWrongIntersectROI", AS_DESCR_HANDLE("ROI has no intersection with the source or destination ROI. No operation.", 11178), Src_ippdefsh, AS_OS_ANY },
  /*256*/ { (uint32_t)30, "ippStsWrongIntersectQuad", AS_DESCR_HANDLE("Quadrangle has no intersection with the source or destination ROI. No operation.", 11252), Src_ippdefsh, AS_OS_ANY },
  /*257*/ { (uint32_t)31, "ippStsSmallerCodebook", AS_DESCR_HANDLE("Size of created codebook is less than the cdbkSize argument.", 11333), Src_ippdefsh, AS_OS_ANY },
  /*258*/ { (uint32_t)32, "ippStsSrcSizeLessExpected", AS_DESCR_HANDLE("DC: Size of the source buffer is less than the expected one.", 11394), Src_ippdefsh, AS_OS_ANY },
  /*259*/ { (uint32_t)33, "ippStsDstSizeLessExpected", AS_DESCR_HANDLE("DC: Size of the destination buffer is less than the expected one.", 11455), Src_ippdefsh, AS_OS_ANY },
  /*260*/ { (uint32_t)34, "ippStsStreamEnd", AS_DESCR_HANDLE("DC: The end of stream processed.", 11521), Src_ippdefsh, AS_OS_ANY },
  /*261*/ { (uint32_t)35, "ippStsDoubleSize", AS_DESCR_HANDLE("Width or height of image is odd.", 11554), Src_ippdefsh, AS_OS_ANY },
  /*262*/ { (uint32_t)36, "ippStsNotSupportedCpu", AS_DESCR_HANDLE("The CPU is not supported.", 11587), Src_ippdefsh, AS_OS_ANY },
  /*263*/ { (uint32_t)37, "ippStsUnknownCacheSize", AS_DESCR_HANDLE("The CPU is supported, but the size of the cache is unknown.", 11613), Src_ippdefsh, AS_OS_ANY },
  /*264*/ { (uint32_t)38, "ippStsSymKernelExpected", AS_DESCR_HANDLE("The Kernel is not symmetric.", 11673), Src_ippdefsh, AS_OS_ANY },
  /*265*/ { (uint32_t)39, "ippStsEvenMedianWeight", AS_DESCR_HANDLE("Even weight of the Weighted Median Filter is replaced with the odd one.", 11702), Src_ippdefsh, AS_OS_ANY },
  /*266*/ { (uint32_t)40, "ippStsWrongIntersectVOI", AS_DESCR_HANDLE("VOI has no intersection with the source or destination volume. No operation.", 11774), Src_ippdefsh, AS_OS_ANY },
  /*267*/ { (uint32_t)41, "ippStsI18nMsgCatalogInvalid", AS_DESCR_HANDLE("Message Catalog is invalid, English message returned.", 11851), Src_ippdefsh, AS_OS_ANY },
  /*268*/ { (uint32_t)42, "ippStsI18nGetMessageFail", AS_DESCR_HANDLE("Failed to fetch a localized message, English message returned. For more information use errno on Linux* OS and GetLastError on Windows* OS.", 11905), Src_ippdefsh, AS_OS_ANY },
  /*269*/ { (uint32_t)43, "ippStsWaterfall", AS_DESCR_HANDLE("Cannot load required library, waterfall is used.", 12045), Src_ippdefsh, AS_OS_ANY },
  /*270*/ { (uint32_t)44, "ippStsPrevLibraryUsed", AS_DESCR_HANDLE("Cannot load required library, previous dynamic library is used.", 12094), Src_ippdefsh, AS_OS_ANY },
  /*271*/ { (uint32_t)45, "ippStsLLADisabled", AS_DESCR_HANDLE("OpenMP* Low Level Affinity is disabled.", 12158), Src_ippdefsh, AS_OS_ANY },
  /*272*/ { (uint32_t)46, "ippStsNoAntialiasing", AS_DESCR_HANDLE("The mode does not support antialiasing.", 12198), Src_ippdefsh, AS_OS_ANY },
  /*273*/ { (uint32_t)47, "ippStsRepetitiveSrcData", AS_DESCR_HANDLE("DC: The source data is too repetitive.", 12238), Src_ippdefsh, AS_OS_ANY },
  /*274*/ { (uint32_t)48, "ippStsSizeWrn", AS_DESCR_HANDLE("The size does not allow to perform full operation.", 12277), Src_ippdefsh, AS_OS_ANY },
  /*275*/ { (uint32_t)49, "ippStsFeatureNotSupported", AS_DESCR_HANDLE("Current CPU doesn't support at least 1 of the desired features.", 12328), Src_ippdefsh, AS_OS_ANY },
  /*276*/ { (uint32_t)50, "ippStsUnknownFeature", AS_DESCR_HANDLE("At least one of the desired features is unknown.", 12392), Src_ippdefsh, AS_OS_ANY },
  /*277*/ { (uint32_t)51, "ippStsFeaturesCombination", AS_DESCR_HANDLE("Wrong combination of features.", 12441), Src_ippdefsh, AS_OS_ANY },
  { (uint32_t)0, nullptr }
};

// 
// Item count: 278
// Constant names: 5459 bytes
// Description text: 12194 bytes
// Duplicated names: 0 
// Duplicated constants: 0 
// Constant duplication count: 0
// 

static int Name2CodeHash0List[9] = {23, 55, 57, 125, 146, 200, 201, 211, -1};
static int Name2CodeHash1List[4] = {13, 54, 127, -1};
static int Name2CodeHash2List[3] = {78, 115, -1};
static int Name2CodeHash3List[6] = {93, 132, 163, 172, 247, -1};
static int Name2CodeHash4List[7] = {39, 45, 203, 240, 268, 269, -1};
static int Name2CodeHash5List[6] = {119, 120, 156, 173, 262, -1};
static int Name2CodeHash6List[9] = {10, 46, 53, 61, 63, 140, 219, 254, -1};
static int Name2CodeHash7List[5] = {166, 176, 212, 235, -1};
static int Name2CodeHash8List[4] = {88, 148, 277, -1};
static int Name2CodeHash9List[7] = {64, 95, 107, 129, 232, 248, -1};
static int Name2CodeHash10List[4] = {82, 228, 261, -1};
static int Name2CodeHash11List[8] = {25, 72, 87, 144, 205, 209, 244, -1};
static int Name2CodeHash12List[5] = {133, 188, 225, 259, -1};
static int Name2CodeHash13List[5] = {42, 106, 226, 270, -1};
static int Name2CodeHash14List[3] = {99, 223, -1};
static int Name2CodeHash15List[5] = {11, 91, 190, 220, -1};
static int Name2CodeHash16List[4] = {186, 245, 251, -1};
static int Name2CodeHash17List[5] = {74, 90, 165, 252, -1};
static int Name2CodeHash18List[6] = {2, 48, 124, 171, 272, -1};
static int Name2CodeHash19List[3] = {101, 131, -1};
static int Name2CodeHash20List[2] = {238, -1};
static int Name2CodeHash21List[3] = {31, 50, -1};
static int Name2CodeHash22List[4] = {68, 213, 214, -1};
static int Name2CodeHash23List[9] = {65, 105, 160, 181, 184, 222, 237, 253, -1};
static int Name2CodeHash24List[6] = {12, 32, 117, 231, 264, -1};
static int Name2CodeHash25List[5] = {41, 157, 257, 267, -1};
static int Name2CodeHash26List[5] = {4, 94, 224, 260, -1};
static int Name2CodeHash27List[5] = {36, 104, 118, 234, -1};
static int Name2CodeHash28List[4] = {20, 275, 276, -1};
static int Name2CodeHash29List[8] = {3, 73, 142, 202, 206, 207, 227, -1};
static int Name2CodeHash30List[6] = {113, 141, 145, 153, 239, -1};
static int Name2CodeHash31List[4] = {89, 249, 266, -1};
static int Name2CodeHash32List[3] = {28, 210, -1};
static int Name2CodeHash33List[5] = {80, 92, 151, 158, -1};
static int Name2CodeHash34List[5] = {16, 111, 135, 191, -1};
static int Name2CodeHash35List[9] = {58, 71, 134, 154, 162, 170, 197, 204, -1};
static int Name2CodeHash36List[5] = {76, 130, 229, 265, -1};
static int Name2CodeHash37List[3] = {35, 149, -1};
static int Name2CodeHash38List[7] = {18, 22, 26, 114, 121, 138, -1};
static int Name2CodeHash39List[4] = {6, 236, 256, -1};
static int Name2CodeHash40List[6] = {0, 27, 77, 152, 274, -1};
static int Name2CodeHash41List[4] = {15, 169, 208, -1};
static int Name2CodeHash42List[7] = {30, 67, 75, 128, 187, 216, -1};
static int Name2CodeHash43List[8] = {37, 59, 183, 199, 243, 246, 263, -1};
static int Name2CodeHash44List[6] = {96, 147, 177, 189, 250, -1};
static int Name2CodeHash45List[4] = {97, 182, 193, -1};
static int Name2CodeHash46List[9] = {1, 86, 136, 150, 168, 175, 180, 255, -1};
static int Name2CodeHash47List[3] = {44, 49, -1};
static int Name2CodeHash48List[8] = {52, 66, 137, 159, 178, 221, 242, -1};
static int Name2CodeHash49List[8] = {19, 40, 56, 81, 103, 122, 241, -1};
static int Name2CodeHash50List[5] = {21, 116, 155, 198, -1};
static int Name2CodeHash51List[4] = {14, 85, 258, -1};
static int Name2CodeHash52List[4] = {70, 83, 139, -1};
static int Name2CodeHash53List[4] = {9, 17, 143, -1};
static int Name2CodeHash54List[5] = {7, 33, 110, 123, -1};
static int Name2CodeHash55List[7] = {8, 47, 126, 164, 167, 271, -1};
static int Name2CodeHash56List[5] = {38, 69, 98, 102, -1};
static int Name2CodeHash57List[3] = {112, 273, -1};
static int Name2CodeHash58List[5] = {60, 194, 196, 215, -1};
static int Name2CodeHash59List[4] = {84, 185, 218, -1};
static int Name2CodeHash60List[8] = {24, 34, 51, 79, 100, 174, 230, -1};
static int Name2CodeHash61List[5] = {29, 43, 109, 217, -1};
static int Name2CodeHash62List[8] = {5, 62, 108, 161, 179, 192, 233, -1};
static int Name2CodeHash63List[2] = {195, -1};

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

static int Code2NameHash0List[4] = {12, 168, 181, -1};
static int Code2NameHash1List[5] = {13, 169, 182, 194, -1};
static int Code2NameHash2List[7] = {0, 14, 26, 170, 183, 195, -1};
static int Code2NameHash3List[7] = {1, 15, 27, 171, 184, 196, -1};
static int Code2NameHash4List[8] = {2, 3, 16, 28, 185, 197, 210, -1};
static int Code2NameHash5List[7] = {17, 29, 42, 186, 198, 211, -1};
static int Code2NameHash6List[7] = {18, 30, 43, 187, 199, 212, -1};
static int Code2NameHash7List[8] = {19, 31, 44, 144, 157, 200, 213, -1};
static int Code2NameHash8List[7] = {32, 45, 145, 158, 201, 214, -1};
static int Code2NameHash9List[7] = {33, 46, 58, 146, 202, 215, -1};
static int Code2NameHash10List[7] = {34, 47, 59, 159, 203, 216, -1};
static int Code2NameHash11List[7] = {35, 48, 60, 160, 172, 217, -1};
static int Code2NameHash12List[8] = {4, 49, 61, 73, 161, 173, 218, -1};
static int Code2NameHash13List[8] = {5, 50, 62, 74, 174, 219, 226, -1};
static int Code2NameHash14List[8] = {6, 51, 63, 75, 175, 188, 227, -1};
static int Code2NameHash15List[8] = {7, 20, 64, 76, 176, 189, 228, -1};
static int Code2NameHash16List[10] = {8, 21, 65, 77, 89, 177, 190, 229, 242, -1};
static int Code2NameHash17List[9] = {9, 22, 66, 78, 90, 191, 230, 243, -1};
static int Code2NameHash18List[9] = {23, 67, 79, 91, 192, 204, 231, 244, -1};
static int Code2NameHash19List[10] = {24, 36, 80, 92, 105, 193, 205, 232, 245, -1};
static int Code2NameHash20List[10] = {25, 37, 81, 93, 106, 206, 233, 246, 258, -1};
static int Code2NameHash21List[10] = {38, 82, 94, 107, 207, 220, 234, 247, 259, -1};
static int Code2NameHash22List[10] = {39, 52, 95, 108, 208, 221, 235, 248, 260, -1};
static int Code2NameHash23List[11] = {40, 53, 96, 109, 121, 209, 222, 249, 261, 274, -1};
static int Code2NameHash24List[10] = {41, 54, 97, 110, 122, 223, 250, 262, 275, -1};
static int Code2NameHash25List[9] = {55, 98, 111, 123, 224, 251, 263, 276, -1};
static int Code2NameHash26List[8] = {56, 68, 112, 124, 225, 264, 277, -1};
static int Code2NameHash27List[5] = {57, 113, 125, 265, -1};
static int Code2NameHash28List[5] = {69, 114, 126, 266, -1};
static int Code2NameHash29List[5] = {70, 83, 127, 267, -1};
static int Code2NameHash30List[5] = {71, 84, 128, 236, -1};
static int Code2NameHash31List[5] = {72, 85, 129, 237, -1};
static int Code2NameHash32List[4] = {86, 130, 238, -1};
static int Code2NameHash33List[5] = {87, 99, 239, 252, -1};
static int Code2NameHash34List[5] = {88, 100, 240, 253, -1};
static int Code2NameHash35List[4] = {101, 241, 254, -1};
static int Code2NameHash36List[4] = {102, 115, 255, -1};
static int Code2NameHash37List[5] = {103, 116, 256, 268, -1};
static int Code2NameHash38List[5] = {104, 117, 257, 269, -1};
static int Code2NameHash39List[3] = {118, 270, -1};
static int Code2NameHash40List[4] = {119, 131, 271, -1};
static int Code2NameHash41List[4] = {120, 132, 272, -1};
static int Code2NameHash42List[3] = {133, 273, -1};
static int Code2NameHash43List[2] = {134, -1};
static int Code2NameHash44List[2] = {135, -1};
static int Code2NameHash45List[2] = {136, -1};
static int Code2NameHash46List[1] = {-1};
static int Code2NameHash47List[1] = {-1};
static int Code2NameHash48List[1] = {-1};
static int Code2NameHash49List[1] = {-1};
static int Code2NameHash50List[1] = {-1};
static int Code2NameHash51List[2] = {137, -1};
static int Code2NameHash52List[2] = {138, -1};
static int Code2NameHash53List[2] = {139, -1};
static int Code2NameHash54List[3] = {140, 147, -1};
static int Code2NameHash55List[3] = {141, 148, -1};
static int Code2NameHash56List[3] = {142, 149, -1};
static int Code2NameHash57List[3] = {143, 150, -1};
static int Code2NameHash58List[3] = {151, 162, -1};
static int Code2NameHash59List[3] = {152, 163, -1};
static int Code2NameHash60List[3] = {153, 164, -1};
static int Code2NameHash61List[4] = {154, 165, 178, -1};
static int Code2NameHash62List[5] = {10, 155, 166, 179, -1};
static int Code2NameHash63List[5] = {11, 156, 167, 180, -1};

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


void IPP_STATUSGetTables(TABLES& t)
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

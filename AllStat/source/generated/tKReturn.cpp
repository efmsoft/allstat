#include "../AllStatDefs.h"

using namespace AllStat;

#pragma optimize("", off)

static const char* Src_kern_returnh = "kern_return.h";

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
static int DescrBlockSize = 4101;
static const uint8_t CompressedDescr[] =
{
  // Uncompressed size: 4101, Compressed size: 1647, Rate: 2.5
  0x1f, 0x8b, 0x08, 0x00, 0x52, 0xaa, 0x38, 0x60, 0x02, 0xff, 0x95, 0x57, 0xdb, 0x6e, 0xdc, 0x36, 
  0x10, 0xdd, 0x4f, 0x21, 0xf2, 0x12, 0xbb, 0x70, 0xb6, 0x1f, 0xd0, 0x27, 0xc7, 0xcd, 0x43, 0x8a, 
  0x24, 0x0e, 0x6c, 0xa3, 0x45, 0x80, 0x00, 0x0b, 0xae, 0xc4, 0x5d, 0x31, 0xa6, 0x48, 0x95, 0xa4, 
  0xd6, 0x51, 0xbe, 0xbe, 0x67, 0x66, 0xc8, 0x95, 0xd6, 0x37, 0xa0, 0x4f, 0xf6, 0x4a, 0x73, 0x9f, 
  0x33, 0x67, 0x46, 0xab, 0xdb, 0xc1, 0x34, 0x76, 0x67, 0x4d, 0xab, 0x74, 0xdb, 0x46, 0x93, 0x92, 
  0xb2, 0x49, 0xf9, 0x90, 0x55, 0x33, 0xc6, 0x68, 0x7c, 0x76, 0x93, 0x3a, 0x68, 0x67, 0xdb, 0xf5, 
  0x6a, 0x96, 0xec, 0x4d, 0x1f, 0xe2, 0x44, 0x82, 0xfc, 0xea, 0x42, 0x6d, 0xc7, 0xac, 0xda, 0x60, 
  0x44, 0x71, 0x30, 0xb1, 0xb7, 0x59, 0xe5, 0xce, 0xa8, 0x68, 0xfe, 0x1d, 0x6d, 0x84, 0xc6, 0x2e, 
  0xc4, 0x3e, 0xa9, 0xb0, 0x53, 0xba, 0x69, 0xe0, 0x63, 0xbd, 0xba, 0xc3, 0xdb, 0xea, 0x30, 0x6a, 
  0xbf, 0x37, 0x2a, 0x1d, 0xcd, 0xc3, 0xae, 0x76, 0xd1, 0xe8, 0x16, 0x2e, 0xbc, 0x1a, 0x93, 0xb9, 
  0x50, 0x21, 0xc2, 0xf4, 0x23, 0x05, 0x58, 0x23, 0x1f, 0xc9, 0xfe, 0x5a, 0x2a, 0x37, 0x61, 0x74, 
  0xad, 0xda, 0x1a, 0xb8, 0x1c, 0x7d, 0x2b, 0x8e, 0x76, 0xa3, 0x6f, 0xb2, 0x0d, 0x9e, 0xe3, 0x31, 
  0x29, 0x43, 0xec, 0x41, 0x4b, 0xb0, 0x7a, 0x18, 0x9c, 0x6d, 0xf4, 0xd6, 0x19, 0x95, 0x03, 0xec, 
  0xc1, 0x77, 0x9e, 0x06, 0x36, 0xae, 0xe3, 0x7e, 0xec, 0x51, 0x01, 0xf6, 0xae, 0xfd, 0xf1, 0x37, 
  0xc5, 0x67, 0x3d, 0x67, 0x7e, 0x6a, 0x5d, 0x5c, 0x93, 0x55, 0xb8, 0x47, 0x15, 0x28, 0x69, 0xd3, 
  0xae, 0x95, 0xba, 0x54, 0x8d, 0xce, 0x4d, 0xf7, 0x4e, 0x3b, 0xb7, 0x5e, 0x5d, 0xaa, 0x34, 0x21, 
  0x84, 0x1e, 0xc1, 0xa4, 0x30, 0xc6, 0xc6, 0x9c, 0xea, 0x41, 0x26, 0x40, 0x1a, 0x21, 0x22, 0x9e, 
  0xdd, 0xe8, 0x76, 0xd6, 0x39, 0x89, 0xab, 0x04, 0x0f, 0x7b, 0x77, 0xf4, 0x73, 0xa7, 0xad, 0x1b, 
  0xa3, 0x51, 0xbd, 0x9e, 0x16, 0x3e, 0x7b, 0xed, 0x11, 0xa2, 0xa4, 0x9d, 0x75, 0xba, 0xa7, 0x0a, 
  0xb2, 0x1a, 0x05, 0x78, 0x6c, 0x51, 0x17, 0xe0, 0x30, 0x9a, 0xc6, 0xd8, 0x03, 0x9a, 0x64, 0xf7, 
  0x5d, 0x4e, 0xd4, 0x22, 0xae, 0xe7, 0x10, 0x62, 0x3e, 0xe6, 0xba, 0x5e, 0xbd, 0x0f, 0xfb, 0x31, 
  0x95, 0xb6, 0x51, 0xc8, 0x39, 0x5a, 0xce, 0x76, 0xbd, 0xfa, 0x73, 0x8c, 0xd6, 0xef, 0x95, 0x56, 
  0x83, 0x46, 0x37, 0x76, 0x7a, 0x74, 0x28, 0x55, 0x66, 0xbf, 0x71, 0x6f, 0xf2, 0xdc, 0x2d, 0xb3, 
  0x33, 0x31, 0x51, 0x3a, 0xba, 0x22, 0x27, 0x6c, 0x7f, 0x98, 0x86, 0x20, 0xa2, 0x11, 0x0b, 0x3a, 
  0xb1, 0x35, 0x06, 0xd1, 0x91, 0xf1, 0x30, 0x71, 0xc5, 0x4e, 0x32, 0xc4, 0xbf, 0x8b, 0xcc, 0x5e, 
  0x74, 0x7b, 0x6a, 0xdb, 0xfa, 0xd6, 0x96, 0x3a, 0x92, 0x17, 0x12, 0x68, 0x75, 0xd6, 0xa7, 0xc5, 
  0x8e, 0x26, 0x8f, 0xd1, 0x3f, 0xf5, 0x48, 0x35, 0xc5, 0x6b, 0x74, 0x09, 0xd5, 0xd0, 0x71, 0xfa, 
  0x03, 0x9d, 0xc8, 0xf4, 0x42, 0x67, 0x7a, 0x96, 0x25, 0x1b, 0xa9, 0x09, 0xf7, 0x26, 0xe9, 0xbe, 
  0xd8, 0x27, 0xd5, 0x34, 0xe2, 0x95, 0xc1, 0x5c, 0x20, 0xb5, 0xd6, 0xec, 0x2c, 0x3c, 0xa8, 0xed, 
  0xf4, 0x34, 0x48, 0x69, 0xd3, 0x49, 0x1f, 0x96, 0xe0, 0xe7, 0x72, 0x6d, 0x4d, 0xac, 0x48, 0xa7, 
  0xce, 0x24, 0xf3, 0x92, 0x16, 0xa3, 0x79, 0xa1, 0xa1, 0xa5, 0x93, 0x47, 0x05, 0x4f, 0x21, 0x56, 
  0xd3, 0xad, 0x81, 0x38, 0xc0, 0xa0, 0xab, 0xbe, 0x2f, 0x9d, 0x4b, 0xf7, 0x22, 0x1d, 0x50, 0x71, 
  0xcd, 0xa0, 0xa1, 0x49, 0xd1, 0x5b, 0x98, 0xe2, 0x32, 0x7d, 0x1c, 0x1a, 0x94, 0xb0, 0x35, 0xea, 
  0x81, 0x70, 0xc9, 0xb0, 0x96, 0x0a, 0x68, 0x4f, 0x88, 0xda, 0x39, 0xae, 0x7d, 0xa6, 0xcc, 0x29, 
  0x98, 0x94, 0xa8, 0x49, 0x26, 0xc6, 0x10, 0x17, 0x51, 0x10, 0x0e, 0xfd, 0xdb, 0x5c, 0xa2, 0x78, 
  0x21, 0x08, 0x01, 0x91, 0x60, 0x98, 0xa5, 0x69, 0x04, 0x01, 0xbd, 0xc3, 0x32, 0x4c, 0x31, 0x77, 
  0x9a, 0x8c, 0xd0, 0x11, 0x97, 0xc3, 0xd3, 0x7c, 0xc7, 0x30, 0x44, 0x0b, 0x24, 0xc8, 0x5b, 0x1a, 
  0xc0, 0xad, 0x43, 0xa7, 0x30, 0xc8, 0xc2, 0x23, 0x25, 0xba, 0xeb, 0x39, 0x63, 0x86, 0x48, 0x38, 
  0x60, 0x82, 0x5d, 0x78, 0x50, 0xce, 0x12, 0x9d, 0x05, 0x66, 0xa2, 0xf8, 0x8e, 0xd1, 0x6c, 0x3c, 
  0x5a, 0x2f, 0x11, 0xa4, 0x91, 0x18, 0x04, 0x0d, 0x3e, 0xa3, 0x72, 0x9f, 0xa3, 0x24, 0x83, 0xde, 
  0x5a, 0x67, 0x33, 0xf3, 0xa3, 0xed, 0xc9, 0xbd, 0x89, 0x8b, 0x81, 0xac, 0x2d, 0x20, 0xdc, 0x27, 
  0x83, 0xaa, 0x61, 0xee, 0x5e, 0x1b, 0x45, 0xb0, 0x98, 0x21, 0xfe, 0x09, 0x78, 0x12, 0x39, 0xe1, 
  0x63, 0x71, 0xba, 0x90, 0x72, 0x2d, 0x4e, 0x93, 0x47, 0x50, 0x07, 0x81, 0x86, 0x9e, 0x22, 0x4b, 
  0x5f, 0xc1, 0xca, 0x1d, 0xec, 0x75, 0xcb, 0x0c, 0xc7, 0xe1, 0x4e, 0xea, 0xfb, 0x9b, 0x01, 0x3e, 
  0x6d, 0x18, 0xd3, 0xf7, 0x37, 0x82, 0x5b, 0xf2, 0x59, 0xc0, 0xc9, 0x03, 0xb3, 0xc0, 0x21, 0x44, 
  0x13, 0xf3, 0x9e, 0x7f, 0x3c, 0xc1, 0x54, 0x4c, 0x1e, 0x43, 0x72, 0x31, 0x93, 0x2b, 0xa3, 0xaf, 
  0x08, 0x62, 0x6c, 0x21, 0x10, 0xd5, 0xc1, 0xd6, 0x47, 0x1b, 0xd1, 0xdd, 0x90, 0xdb, 0x4d, 0x51, 
  0x62, 0xf7, 0x68, 0x57, 0x19, 0xde, 0x31, 0xc9, 0x88, 0x7f, 0xfe, 0xf0, 0xf9, 0xfa, 0xe6, 0xdb, 
  0xe6, 0xfa, 0xfd, 0x5f, 0x1f, 0xae, 0xee, 0x36, 0x57, 0xd7, 0x5f, 0xbf, 0x6d, 0xae, 0x2e, 0x3f, 
  0x7d, 0x52, 0x20, 0x0a, 0x34, 0x74, 0x3f, 0x5d, 0x00, 0x86, 0xb9, 0xe3, 0x5a, 0xfd, 0xfd, 0x79, 
  0xf3, 0xf5, 0xe6, 0xfa, 0x6e, 0xf3, 0xcf, 0xe5, 0x97, 0xbb, 0x5b, 0x16, 0x55, 0x3b, 0xa7, 0xf7, 
  0x18, 0x63, 0x32, 0x85, 0xd6, 0x31, 0xa1, 0xca, 0x9e, 0x98, 0x66, 0x4e, 0xe0, 0xe8, 0xc1, 0x3c, 
  0xbc, 0xa5, 0xac, 0x94, 0x9e, 0x48, 0x62, 0x98, 0xea, 0xd4, 0x49, 0x48, 0x17, 0x0c, 0xf0, 0xc5, 
  0x04, 0xd7, 0xbc, 0x3a, 0x9e, 0xf1, 0x0c, 0x11, 0xd3, 0xce, 0x16, 0xa9, 0x1e, 0xc3, 0x98, 0x3a, 
  0x32, 0xea, 0x99, 0xf9, 0x9e, 0x9a, 0x54, 0x0f, 0x9d, 0xa5, 0xb5, 0x83, 0x07, 0xf7, 0x06, 0x2c, 
  0xe4, 0x58, 0xeb, 0x41, 0xbb, 0x7b, 0x8a, 0x98, 0x57, 0x5b, 0xa7, 0x5b, 0x00, 0xb0, 0xe9, 0x34, 
  0x4a, 0xbf, 0x8b, 0xa1, 0xe7, 0xa7, 0x6c, 0x89, 0x97, 0x55, 0xb5, 0xb4, 0x16, 0xf6, 0x62, 0x20, 
  0xcb, 0x74, 0x5a, 0x0a, 0xca, 0x01, 0x52, 0x94, 0xd6, 0x0b, 0xa5, 0x17, 0x71, 0x4a, 0x0b, 0xd2, 
  0x1d, 0xfe, 0xba, 0x99, 0xa6, 0x4a, 0x40, 0x67, 0x96, 0x3b, 0x03, 0xb0, 0x2f, 0x9f, 0xc2, 0x37, 
  0x2d, 0x02, 0x1d, 0xa5, 0x84, 0x4c, 0xc1, 0xe7, 0x6b, 0xf5, 0x31, 0x0b, 0x29, 0x14, 0x6e, 0x4d, 
  0xc4, 0xe9, 0x30, 0x47, 0x53, 0x93, 0x78, 0xed, 0x49, 0xd3, 0x6c, 0x23, 0x19, 0x30, 0xaf, 0x08, 
  0x42, 0x0b, 0x64, 0xe6, 0xf6, 0x0f, 0x34, 0x85, 0x9d, 0x05, 0xb7, 0x68, 0x6c, 0x2f, 0xdb, 0xc0, 
  0xb1, 0x28, 0x31, 0xcf, 0x3d, 0x60, 0x30, 0x52, 0xb2, 0xd8, 0xd9, 0x94, 0x38, 0x0a, 0x02, 0xe0, 
  0x43, 0x20, 0x75, 0x3c, 0xb7, 0xe0, 0xf4, 0x38, 0xcd, 0x85, 0x12, 0x28, 0x1d, 0xfa, 0x9a, 0x3a, 
  0x3d, 0xdc, 0xb0, 0x4d, 0x37, 0x3d, 0x5b, 0x37, 0x8e, 0x3b, 0x78, 0x0c, 0xc9, 0x49, 0x2d, 0x64, 
  0xa2, 0xea, 0x09, 0xa0, 0xcb, 0xd0, 0x53, 0x6b, 0x13, 0x12, 0xc4, 0xd5, 0x13, 0x03, 0xad, 0x03, 
  0x18, 0x02, 0xe3, 0xe2, 0x97, 0x3d, 0xa0, 0xb9, 0x05, 0x09, 0x42, 0xcd, 0xa7, 0x12, 0x4d, 0xf0, 
  0xd8, 0x76, 0x8e, 0x67, 0xbc, 0x30, 0xc9, 0xf1, 0x86, 0x49, 0x0d, 0x80, 0x33, 0x3a, 0x9e, 0x81, 
  0x8c, 0x85, 0x0b, 0x3e, 0x43, 0x07, 0xcc, 0x4f, 0x5a, 0x2a, 0x42, 0x91, 0x1d, 0x4d, 0xe6, 0xdb, 
  0x24, 0xdc, 0x94, 0x5e, 0xd1, 0x1f, 0x02, 0xce, 0x9b, 0xe9, 0xe9, 0x4d, 0x67, 0x3c, 0xdd, 0x3c, 
  0xed, 0x4c, 0x35, 0xcb, 0xe0, 0xc4, 0x9e, 0xf9, 0x99, 0x91, 0xb9, 0x76, 0x8f, 0x11, 0x4f, 0x4b, 
  0x52, 0x52, 0xb7, 0xde, 0x66, 0x8b, 0x3b, 0xe8, 0x97, 0x79, 0x6e, 0xb7, 0x5d, 0x96, 0x30, 0x99, 
  0x4a, 0xa4, 0xd1, 0x0c, 0xec, 0x80, 0x9a, 0xd8, 0xe3, 0xc4, 0x9b, 0x03, 0xd5, 0x93, 0x7e, 0x48, 
  0xc3, 0x89, 0xe5, 0xcc, 0xe9, 0x16, 0x24, 0x71, 0x19, 0x09, 0x7a, 0xf2, 0x22, 0xb5, 0x95, 0xfb, 
  0x41, 0x56, 0xbd, 0x61, 0x54, 0x3e, 0x4e, 0xeb, 0x05, 0xcd, 0x9d, 0xa1, 0x35, 0x46, 0xc1, 0xa0, 
  0xc4, 0x03, 0xef, 0x00, 0xa6, 0xde, 0x4a, 0x84, 0xb0, 0x22, 0x03, 0xce, 0xa7, 0x20, 0xf5, 0x7c, 
  0xcb, 0x47, 0x52, 0x4d, 0x50, 0x06, 0xb9, 0xf8, 0x2a, 0xc7, 0x49, 0x55, 0x99, 0x6d, 0x52, 0x45, 
  0x50, 0x38, 0x2a, 0x61, 0xa5, 0x4b, 0x66, 0x9d, 0xba, 0xad, 0xea, 0x26, 0x91, 0xea, 0x73, 0x00, 
  0x33, 0x78, 0x4a, 0x6d, 0x1b, 0xdd, 0x30, 0xb0, 0x97, 0xd8, 0x59, 0xe2, 0xf2, 0xb8, 0x8d, 0x66, 
  0x60, 0x26, 0x83, 0xae, 0xd3, 0x3a, 0x7a, 0x0e, 0x93, 0xbc, 0x41, 0x66, 0x09, 0xb6, 0x27, 0x49, 
  0x6d, 0x5a, 0x43, 0xbc, 0x9f, 0x36, 0x92, 0x2b, 0xa9, 0xf0, 0x9c, 0xb5, 0xb4, 0x09, 0x97, 0x99, 
  0xa3, 0x72, 0xd5, 0xde, 0x0c, 0xaf, 0xa2, 0x4c, 0xc9, 0x5c, 0xcb, 0x4c, 0x1f, 0xcf, 0xbc, 0x4c, 
  0x9f, 0x07, 0x9e, 0x2f, 0xb3, 0xc2, 0x3d, 0xb8, 0xec, 0x5d, 0xf0, 0x54, 0x17, 0x7d, 0x00, 0xb6, 
  0x08, 0x98, 0xab, 0x4f, 0xa1, 0xb9, 0xe7, 0x39, 0x79, 0x7a, 0x1e, 0xbe, 0xa2, 0x56, 0xd6, 0xac, 
  0xc4, 0x46, 0x47, 0x6e, 0x65, 0x52, 0x47, 0xe6, 0x16, 0x9e, 0xb7, 0x06, 0x88, 0xa3, 0x23, 0xca, 
  0x19, 0x9d, 0x96, 0x42, 0x6c, 0x80, 0xa5, 0x17, 0x10, 0x0c, 0x0f, 0xe5, 0x82, 0xab, 0x5b, 0x58, 
  0x3c, 0xbc, 0x2e, 0x9b, 0x0b, 0x33, 0xcd, 0xc8, 0x5d, 0xdd, 0x9a, 0x5e, 0x0f, 0x1d, 0x39, 0xfe, 
  0x9f, 0x59, 0xdd, 0xf0, 0x9d, 0x2a, 0x2b, 0xe0, 0xe6, 0xeb, 0x55, 0x3d, 0x6e, 0x6b, 0xe0, 0xe5, 
  0xe0, 0x46, 0xbb, 0x0f, 0x05, 0x5c, 0x4f, 0x53, 0xb5, 0x59, 0xce, 0xd2, 0x94, 0xf0, 0x51, 0x81, 
  0x0e, 0x45, 0xc3, 0x40, 0x59, 0xdd, 0x55, 0x49, 0xe6, 0xdf, 0x38, 0x60, 0x11, 0x50, 0x30, 0x74, 
  0x68, 0xe9, 0x82, 0x5a, 0x47, 0x57, 0xd0, 0xf3, 0x6f, 0x09, 0x67, 0x84, 0x46, 0xeb, 0x47, 0x22, 
  0x0c, 0x00, 0x89, 0x82, 0x5a, 0xaf, 0x3e, 0x60, 0xc4, 0xa6, 0xda, 0x88, 0x85, 0xf8, 0xd9, 0x97, 
  0x50, 0x9f, 0xa2, 0x30, 0xf7, 0x85, 0x46, 0xf2, 0x39, 0x32, 0xec, 0xe9, 0x14, 0xf4, 0x44, 0xc2, 
  0xd8, 0x79, 0xe4, 0x0c, 0x59, 0xca, 0x89, 0xcd, 0x4c, 0x4f, 0x0b, 0xc4, 0xee, 0xbd, 0x40, 0xb0, 
  0xa2, 0xaf, 0xe2, 0xb8, 0x1e, 0x3f, 0x85, 0x29, 0xd6, 0xea, 0xb7, 0xdf, 0x57, 0xb7, 0xa1, 0xaf, 
  0x50, 0x78, 0x17, 0xa2, 0x05, 0x2e, 0x09, 0xbb, 0xc7, 0x23, 0xef, 0x2c, 0xd5, 0x66, 0x6c, 0x48, 
  0xeb, 0x5c, 0x65, 0xdb, 0x93, 0xc0, 0x98, 0x9f, 0xff, 0xc2, 0xa8, 0xdf, 0x13, 0xe9, 0xd1, 0xed, 
  0x20, 0xa3, 0xfc, 0x43, 0x66, 0x9d, 0xaf, 0x5e, 0x00, 0x9f, 0xa8, 0x87, 0x8f, 0x20, 0x0e, 0x99, 
  0xbf, 0x1c, 0x30, 0xb7, 0xcd, 0x7d, 0x3d, 0xdd, 0xeb, 0xa1, 0x24, 0xc7, 0x61, 0xa6, 0xb9, 0xf6, 
  0x65, 0x6d, 0x62, 0xd9, 0xa3, 0xfb, 0x30, 0x95, 0xcb, 0xd7, 0xa8, 0xed, 0x0b, 0xac, 0x21, 0x7c, 
  0xb0, 0x2d, 0x13, 0xc6, 0x0e, 0x37, 0x28, 0x81, 0x05, 0x3e, 0xac, 0x4f, 0xf8, 0x69, 0x1b, 0xcb, 
  0xe3, 0x4f, 0x54, 0x5c, 0x29, 0x7d, 0x76, 0x43, 0xeb, 0x1e, 0x1f, 0x4e, 0xc6, 0x5b, 0x81, 0xe6, 
  0x62, 0xe0, 0x69, 0x3b, 0xac, 0xfe, 0x03, 0xf6, 0xed, 0x8d, 0x2d, 0x05, 0x10, 0x00, 0x00, 
};
#endif  // #if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)

static constexpr uint64_t _GENERATOR_ = AS_GENERATOR::AS_KRETURN;

static const STATUS_ITEM Status[] =
{
  /*0*/ { (uint32_t)0, "KERN_SUCCESS", AS_DESCR_HANDLE("", 0), Src_kern_returnh, AS_OS_MAC },
  /*1*/ { (uint32_t)1, "KERN_INVALID_ADDRESS", AS_DESCR_HANDLE("Specified address is not currently valid.", 1), Src_kern_returnh, AS_OS_MAC },
  /*2*/ { (uint32_t)2, "KERN_PROTECTION_FAILURE", AS_DESCR_HANDLE("Specified memory is valid, but does not permit the required forms of access.", 43), Src_kern_returnh, AS_OS_MAC },
  /*3*/ { (uint32_t)3, "KERN_NO_SPACE", AS_DESCR_HANDLE("The address range specified is already in use, or no address range of the size specified could be found.", 120), Src_kern_returnh, AS_OS_MAC },
  /*4*/ { (uint32_t)4, "KERN_INVALID_ARGUMENT", AS_DESCR_HANDLE("The function requested was not applicable to this type of argument, or an argument is invalid", 225), Src_kern_returnh, AS_OS_MAC },
  /*5*/ { (uint32_t)5, "KERN_FAILURE", AS_DESCR_HANDLE("The function could not be performed.  A catch-all.", 319), Src_kern_returnh, AS_OS_MAC },
  /*6*/ { (uint32_t)6, "KERN_RESOURCE_SHORTAGE", AS_DESCR_HANDLE("A system resource could not be allocated to fulfill this request.  This failure may not be permanent.", 370), Src_kern_returnh, AS_OS_MAC },
  /*7*/ { (uint32_t)7, "KERN_NOT_RECEIVER", AS_DESCR_HANDLE("The task in question does not hold receive rights for the port argument.", 472), Src_kern_returnh, AS_OS_MAC },
  /*8*/ { (uint32_t)8, "KERN_NO_ACCESS", AS_DESCR_HANDLE("Bogus access restriction.", 545), Src_kern_returnh, AS_OS_MAC },
  /*9*/ { (uint32_t)9, "KERN_MEMORY_FAILURE", AS_DESCR_HANDLE("During a page fault, the target address refers to a memory object that has been destroyed.  This failure is permanent.", 571), Src_kern_returnh, AS_OS_MAC },
  /*10*/ { (uint32_t)10, "KERN_MEMORY_ERROR", AS_DESCR_HANDLE("During a page fault, the memory object indicated that the data could not be returned.  This failure may be temporary; future attempts to access this same data may succeed, as defined by the memory object.", 690), Src_kern_returnh, AS_OS_MAC },
  /*11*/ { (uint32_t)11, "KERN_ALREADY_IN_SET", AS_DESCR_HANDLE("The receive right is already a member of the portset.", 895), Src_kern_returnh, AS_OS_MAC },
  /*12*/ { (uint32_t)12, "KERN_NOT_IN_SET", AS_DESCR_HANDLE("The receive right is not a member of a port set.", 949), Src_kern_returnh, AS_OS_MAC },
  /*13*/ { (uint32_t)13, "KERN_NAME_EXISTS", AS_DESCR_HANDLE("The name already denotes a right in the task.", 998), Src_kern_returnh, AS_OS_MAC },
  /*14*/ { (uint32_t)14, "KERN_ABORTED", AS_DESCR_HANDLE("The operation was aborted.  Ipc code will catch this and reflect it as a message error.", 1044), Src_kern_returnh, AS_OS_MAC },
  /*15*/ { (uint32_t)15, "KERN_INVALID_NAME", AS_DESCR_HANDLE("The name doesn't denote a right in the task.", 1132), Src_kern_returnh, AS_OS_MAC },
  /*16*/ { (uint32_t)16, "KERN_INVALID_TASK", AS_DESCR_HANDLE("Target task isn't an active task.", 1177), Src_kern_returnh, AS_OS_MAC },
  /*17*/ { (uint32_t)17, "KERN_INVALID_RIGHT", AS_DESCR_HANDLE("The name denotes a right, but not an appropriate right.", 1211), Src_kern_returnh, AS_OS_MAC },
  /*18*/ { (uint32_t)18, "KERN_INVALID_VALUE", AS_DESCR_HANDLE("A blatant range error.", 1267), Src_kern_returnh, AS_OS_MAC },
  /*19*/ { (uint32_t)19, "KERN_UREFS_OVERFLOW", AS_DESCR_HANDLE("Operation would overflow limit on user-references.", 1290), Src_kern_returnh, AS_OS_MAC },
  /*20*/ { (uint32_t)20, "KERN_INVALID_CAPABILITY", AS_DESCR_HANDLE("The supplied (port) capability is improper.", 1341), Src_kern_returnh, AS_OS_MAC },
  /*21*/ { (uint32_t)21, "KERN_RIGHT_EXISTS", AS_DESCR_HANDLE("The task already has send or receive rights for the port under another name.", 1385), Src_kern_returnh, AS_OS_MAC },
  /*22*/ { (uint32_t)22, "KERN_INVALID_HOST", AS_DESCR_HANDLE("Target host isn't actually a host.", 1462), Src_kern_returnh, AS_OS_MAC },
  /*23*/ { (uint32_t)23, "KERN_MEMORY_PRESENT", AS_DESCR_HANDLE("An attempt was made to supply \"precious\" data for memory that is already present in a memory object.", 1497), Src_kern_returnh, AS_OS_MAC },
  /*24*/ { (uint32_t)24, "KERN_MEMORY_DATA_MOVED", AS_DESCR_HANDLE("A page was requested of a memory manager via memory_object_data_request for an object using a MEMORY_OBJECT_COPY_CALL strategy, with the VM_PROT_WANTS_COPY flag being used to specify that the page desired is for a copy of the object, and the memory manager has detected the page was pushed into a copy of the object while the kernel was walking the shadow chain from the copy to the object. This error code is delivered via memory_object_data_error and is handled by the kernel (it forces the kernel to restart the fault). It will not be seen by users.", 1600), Src_kern_returnh, AS_OS_MAC },
  /*25*/ { (uint32_t)25, "KERN_MEMORY_RESTART_COPY", AS_DESCR_HANDLE("A strategic copy was attempted of an object upon which a quicker copy is now possible. The caller should retry the copy using vm_object_copy_quickly. This error code is seen only by the kernel.", 2153), Src_kern_returnh, AS_OS_MAC },
  /*26*/ { (uint32_t)26, "KERN_INVALID_PROCESSOR_SET", AS_DESCR_HANDLE("An argument applied to assert processor set privilege was not a processor set control port.", 2347), Src_kern_returnh, AS_OS_MAC },
  /*27*/ { (uint32_t)27, "KERN_POLICY_LIMIT", AS_DESCR_HANDLE("The specified scheduling attributes exceed the thread's limits.", 2439), Src_kern_returnh, AS_OS_MAC },
  /*28*/ { (uint32_t)28, "KERN_INVALID_POLICY", AS_DESCR_HANDLE("The specified scheduling policy is not currently enabled for the processor set.", 2503), Src_kern_returnh, AS_OS_MAC },
  /*29*/ { (uint32_t)29, "KERN_INVALID_OBJECT", AS_DESCR_HANDLE("The external memory manager failed to initialize the memory object.", 2583), Src_kern_returnh, AS_OS_MAC },
  /*30*/ { (uint32_t)30, "KERN_ALREADY_WAITING", AS_DESCR_HANDLE("A thread is attempting to wait for an event for which there is already a waiting thread.", 2651), Src_kern_returnh, AS_OS_MAC },
  /*31*/ { (uint32_t)31, "KERN_DEFAULT_SET", AS_DESCR_HANDLE("An attempt was made to destroy the default processor set.", 2740), Src_kern_returnh, AS_OS_MAC },
  /*32*/ { (uint32_t)32, "KERN_EXCEPTION_PROTECTED", AS_DESCR_HANDLE("An attempt was made to fetch an exception port that is protected, or to abort a thread while processing a protected exception.", 2798), Src_kern_returnh, AS_OS_MAC },
  /*33*/ { (uint32_t)33, "KERN_INVALID_LEDGER", AS_DESCR_HANDLE("A ledger was required but not supplied.", 2925), Src_kern_returnh, AS_OS_MAC },
  /*34*/ { (uint32_t)34, "KERN_INVALID_MEMORY_CONTROL", AS_DESCR_HANDLE("The port was not a memory cache control port.", 2965), Src_kern_returnh, AS_OS_MAC },
  /*35*/ { (uint32_t)35, "KERN_INVALID_SECURITY", AS_DESCR_HANDLE("An argument supplied to assert security privilege was not a host security port.", 3011), Src_kern_returnh, AS_OS_MAC },
  /*36*/ { (uint32_t)36, "KERN_NOT_DEPRESSED", AS_DESCR_HANDLE("thread_depress_abort was called on a thread which was not currently depressed.", 3091), Src_kern_returnh, AS_OS_MAC },
  /*37*/ { (uint32_t)37, "KERN_TERMINATED", AS_DESCR_HANDLE("Object has been terminated and is no longer available", 3170), Src_kern_returnh, AS_OS_MAC },
  /*38*/ { (uint32_t)38, "KERN_LOCK_SET_DESTROYED", AS_DESCR_HANDLE("Lock set has been destroyed and is no longer available.", 3224), Src_kern_returnh, AS_OS_MAC },
  /*39*/ { (uint32_t)39, "KERN_LOCK_UNSTABLE", AS_DESCR_HANDLE("The thread holding the lock terminated before releasing the lock", 3280), Src_kern_returnh, AS_OS_MAC },
  /*40*/ { (uint32_t)40, "KERN_LOCK_OWNED", AS_DESCR_HANDLE("The lock is already owned by another thread", 3345), Src_kern_returnh, AS_OS_MAC },
  /*41*/ { (uint32_t)41, "KERN_LOCK_OWNED_SELF", AS_DESCR_HANDLE("The lock is already owned by the calling thread", 3389), Src_kern_returnh, AS_OS_MAC },
  /*42*/ { (uint32_t)42, "KERN_SEMAPHORE_DESTROYED", AS_DESCR_HANDLE("Semaphore has been destroyed and is no longer available.", 3437), Src_kern_returnh, AS_OS_MAC },
  /*43*/ { (uint32_t)43, "KERN_RPC_SERVER_TERMINATED", AS_DESCR_HANDLE("Return from RPC indicating the target server was terminated before it successfully replied", 3494), Src_kern_returnh, AS_OS_MAC },
  /*44*/ { (uint32_t)44, "KERN_RPC_TERMINATE_ORPHAN", AS_DESCR_HANDLE("Terminate an orphaned activation.", 3585), Src_kern_returnh, AS_OS_MAC },
  /*45*/ { (uint32_t)45, "KERN_RPC_CONTINUE_ORPHAN", AS_DESCR_HANDLE("Allow an orphaned activation to continue executing.", 3619), Src_kern_returnh, AS_OS_MAC },
  /*46*/ { (uint32_t)46, "KERN_NOT_SUPPORTED", AS_DESCR_HANDLE("Empty thread activation (No thread linked to it)", 3671), Src_kern_returnh, AS_OS_MAC },
  /*47*/ { (uint32_t)47, "KERN_NODE_DOWN", AS_DESCR_HANDLE("Remote node down or inaccessible.", 3720), Src_kern_returnh, AS_OS_MAC },
  /*48*/ { (uint32_t)48, "KERN_NOT_WAITING", AS_DESCR_HANDLE("A signalled thread was not actually waiting. */", 3754), Src_kern_returnh, AS_OS_MAC },
  /*49*/ { (uint32_t)49, "KERN_OPERATION_TIMED_OUT", AS_DESCR_HANDLE("Some thread-oriented operation (semaphore_wait) timed out", 3802), Src_kern_returnh, AS_OS_MAC },
  /*50*/ { (uint32_t)50, "KERN_CODESIGN_ERROR", AS_DESCR_HANDLE("During a page fault, indicates that the page was rejected as a result of a signature check.", 3860), Src_kern_returnh, AS_OS_MAC },
  /*51*/ { (uint32_t)51, "KERN_POLICY_STATIC", AS_DESCR_HANDLE("The requested property cannot be changed at this time.", 3952), Src_kern_returnh, AS_OS_MAC },
  /*52*/ { (uint32_t)52, "KERN_INSUFFICIENT_BUFFER_SIZE", AS_DESCR_HANDLE("The provided buffer is of insufficient size for the requested data.", 4007), Src_kern_returnh, AS_OS_MAC },
  /*53*/ { (uint32_t)53, "KERN_DENIED", AS_DESCR_HANDLE("Denied by security policy", 4075), Src_kern_returnh, AS_OS_MAC },
  { (uint32_t)0, nullptr }
};

// 
// Item count: 54
// Constant names: 1028 bytes
// Description text: 4047 bytes
// Duplicated names: 0 
// Duplicated constants: 0 
// Constant duplication count: 0
// 

static int Name2CodeHash0List[4] = {1, 23, 48, -1};
static int Name2CodeHash1List[2] = {12, -1};
static int Name2CodeHash2List[2] = {9, -1};
static int Name2CodeHash3List[1] = {-1};
static int Name2CodeHash4List[1] = {-1};
static int Name2CodeHash5List[2] = {33, -1};
static int Name2CodeHash6List[4] = {10, 28, 35, -1};
static int Name2CodeHash7List[2] = {45, -1};
static int Name2CodeHash8List[1] = {-1};
static int Name2CodeHash9List[2] = {39, -1};
static int Name2CodeHash10List[1] = {-1};
static int Name2CodeHash11List[3] = {8, 17, -1};
static int Name2CodeHash12List[2] = {2, -1};
static int Name2CodeHash13List[2] = {50, -1};
static int Name2CodeHash14List[2] = {47, -1};
static int Name2CodeHash15List[1] = {-1};
static int Name2CodeHash16List[1] = {-1};
static int Name2CodeHash17List[2] = {32, -1};
static int Name2CodeHash18List[2] = {14, -1};
static int Name2CodeHash19List[2] = {11, -1};
static int Name2CodeHash20List[3] = {3, 20, -1};
static int Name2CodeHash21List[2] = {5, -1};
static int Name2CodeHash22List[1] = {-1};
static int Name2CodeHash23List[1] = {-1};
static int Name2CodeHash24List[1] = {-1};
static int Name2CodeHash25List[2] = {6, -1};
static int Name2CodeHash26List[1] = {-1};
static int Name2CodeHash27List[2] = {29, -1};
static int Name2CodeHash28List[1] = {-1};
static int Name2CodeHash29List[2] = {15, -1};
static int Name2CodeHash30List[2] = {0, -1};
static int Name2CodeHash31List[1] = {-1};
static int Name2CodeHash32List[2] = {7, -1};
static int Name2CodeHash33List[1] = {-1};
static int Name2CodeHash34List[1] = {-1};
static int Name2CodeHash35List[1] = {-1};
static int Name2CodeHash36List[1] = {-1};
static int Name2CodeHash37List[2] = {53, -1};
static int Name2CodeHash38List[1] = {-1};
static int Name2CodeHash39List[1] = {-1};
static int Name2CodeHash40List[2] = {18, -1};
static int Name2CodeHash41List[1] = {-1};
static int Name2CodeHash42List[3] = {26, 42, -1};
static int Name2CodeHash43List[1] = {-1};
static int Name2CodeHash44List[2] = {44, -1};
static int Name2CodeHash45List[4] = {21, 22, 30, -1};
static int Name2CodeHash46List[2] = {4, -1};
static int Name2CodeHash47List[2] = {19, -1};
static int Name2CodeHash48List[1] = {-1};
static int Name2CodeHash49List[4] = {25, 27, 43, -1};
static int Name2CodeHash50List[2] = {34, -1};
static int Name2CodeHash51List[3] = {13, 37, -1};
static int Name2CodeHash52List[3] = {40, 41, -1};
static int Name2CodeHash53List[1] = {-1};
static int Name2CodeHash54List[2] = {38, -1};
static int Name2CodeHash55List[2] = {36, -1};
static int Name2CodeHash56List[1] = {-1};
static int Name2CodeHash57List[2] = {49, -1};
static int Name2CodeHash58List[1] = {-1};
static int Name2CodeHash59List[3] = {16, 51, -1};
static int Name2CodeHash60List[4] = {24, 31, 52, -1};
static int Name2CodeHash61List[1] = {-1};
static int Name2CodeHash62List[2] = {46, -1};
static int Name2CodeHash63List[1] = {-1};

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
static int Code2NameHash13List[2] = {0, -1};
static int Code2NameHash14List[2] = {1, -1};
static int Code2NameHash15List[2] = {2, -1};
static int Code2NameHash16List[3] = {3, 16, -1};
static int Code2NameHash17List[3] = {4, 17, -1};
static int Code2NameHash18List[3] = {5, 18, -1};
static int Code2NameHash19List[3] = {6, 19, -1};
static int Code2NameHash20List[4] = {7, 20, 32, -1};
static int Code2NameHash21List[4] = {8, 21, 33, -1};
static int Code2NameHash22List[4] = {9, 22, 34, -1};
static int Code2NameHash23List[4] = {23, 35, 48, -1};
static int Code2NameHash24List[4] = {24, 36, 49, -1};
static int Code2NameHash25List[4] = {25, 37, 50, -1};
static int Code2NameHash26List[3] = {38, 51, -1};
static int Code2NameHash27List[3] = {39, 52, -1};
static int Code2NameHash28List[3] = {40, 53, -1};
static int Code2NameHash29List[2] = {41, -1};
static int Code2NameHash30List[2] = {10, -1};
static int Code2NameHash31List[2] = {11, -1};
static int Code2NameHash32List[2] = {12, -1};
static int Code2NameHash33List[3] = {13, 26, -1};
static int Code2NameHash34List[3] = {14, 27, -1};
static int Code2NameHash35List[3] = {15, 28, -1};
static int Code2NameHash36List[2] = {29, -1};
static int Code2NameHash37List[3] = {30, 42, -1};
static int Code2NameHash38List[3] = {31, 43, -1};
static int Code2NameHash39List[2] = {44, -1};
static int Code2NameHash40List[2] = {45, -1};
static int Code2NameHash41List[2] = {46, -1};
static int Code2NameHash42List[2] = {47, -1};
static int Code2NameHash43List[1] = {-1};
static int Code2NameHash44List[1] = {-1};
static int Code2NameHash45List[1] = {-1};
static int Code2NameHash46List[1] = {-1};
static int Code2NameHash47List[1] = {-1};
static int Code2NameHash48List[1] = {-1};
static int Code2NameHash49List[1] = {-1};
static int Code2NameHash50List[1] = {-1};
static int Code2NameHash51List[1] = {-1};
static int Code2NameHash52List[1] = {-1};
static int Code2NameHash53List[1] = {-1};
static int Code2NameHash54List[1] = {-1};
static int Code2NameHash55List[1] = {-1};
static int Code2NameHash56List[1] = {-1};
static int Code2NameHash57List[1] = {-1};
static int Code2NameHash58List[1] = {-1};
static int Code2NameHash59List[1] = {-1};
static int Code2NameHash60List[1] = {-1};
static int Code2NameHash61List[1] = {-1};
static int Code2NameHash62List[1] = {-1};
static int Code2NameHash63List[1] = {-1};

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


void KRETURNGetTables(TABLES& t)
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

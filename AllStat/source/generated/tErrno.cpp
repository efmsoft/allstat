#include "../AllStatDefs.h"

using namespace AllStat;

static const char* Src_errnoh = "errno.h";

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
static int DescrBlockSize = 7038;
static const uint8_t CompressedDescr[] =
{
  // Uncompressed size: 7038, Compressed size: 2158, Rate: 3.3
  0x1f, 0x8b, 0x08, 0x00, 0x6e, 0xc0, 0x2a, 0x60, 0x02, 0xff, 0x9d, 0x58, 0xdb, 0x8e, 0xe3, 0xb8, 
  0x11, 0xd5, 0xa7, 0xf0, 0x2d, 0x59, 0x60, 0xc7, 0x03, 0x24, 0x6f, 0x79, 0xeb, 0xed, 0x99, 0x46, 
  0x0c, 0xa4, 0x2f, 0x18, 0xf7, 0x04, 0xfb, 0x4a, 0x4b, 0x94, 0xc5, 0xb4, 0x44, 0x6a, 0x49, 0xca, 
  0x1e, 0xe7, 0xeb, 0x73, 0x8a, 0xa4, 0xae, 0x16, 0xe5, 0xd9, 0xf4, 0x8b, 0x5b, 0x12, 0x59, 0xac, 
  0xaa, 0x73, 0xea, 0xc6, 0xd7, 0x56, 0x18, 0xee, 0xa4, 0x56, 0x4c, 0x69, 0xc7, 0xf0, 0xd0, 0x48, 
  0xe7, 0x44, 0x91, 0xbd, 0x68, 0x66, 0xbb, 0xbc, 0x62, 0xa5, 0xac, 0x05, 0xd3, 0x86, 0x15, 0xd2, 
  0x88, 0xdc, 0x69, 0x73, 0x1d, 0xbe, 0xb4, 0x46, 0xe7, 0xc2, 0xda, 0x6c, 0xaf, 0x9c, 0x30, 0xa6, 
  0x6b, 0xb1, 0x8b, 0xd9, 0xab, 0x75, 0xa2, 0x61, 0x39, 0xaf, 0x6b, 0xbc, 0x6f, 0x3b, 0xf7, 0x59, 
  0x77, 0x0e, 0x3f, 0x0c, 0x2b, 0xb4, 0x19, 0xb6, 0x16, 0xe2, 0x2c, 0x73, 0x2f, 0x96, 0x17, 0x85, 
  0x21, 0x21, 0x0f, 0xe6, 0xd4, 0x35, 0x42, 0x39, 0x56, 0x4b, 0xeb, 0x98, 0xd3, 0x9a, 0xd5, 0x5a, 
  0x9d, 0xb2, 0xaf, 0x3f, 0x44, 0xce, 0x4a, 0x6d, 0x1a, 0xde, 0x8b, 0xf8, 0x8d, 0x17, 0x41, 0xa7, 
  0x42, 0xd8, 0xdc, 0xc8, 0xd6, 0x05, 0xb1, 0x79, 0x25, 0xeb, 0xa2, 0x57, 0x49, 0xd8, 0xec, 0x9b, 
  0xb0, 0xba, 0x33, 0x38, 0x03, 0xea, 0xb4, 0xda, 0x70, 0x23, 0xeb, 0x2b, 0xeb, 0x14, 0x3f, 0x73, 
  0x59, 0xf3, 0x63, 0x2d, 0xc6, 0x05, 0x85, 0xe0, 0x45, 0xad, 0xf3, 0x0f, 0xc6, 0xcf, 0x5a, 0x16, 
  0xb0, 0xfc, 0xee, 0xd6, 0xec, 0x91, 0x2b, 0x72, 0x16, 0x8c, 0xd4, 0x39, 0x77, 0x82, 0x35, 0xa2, 
  0x21, 0xc7, 0xbc, 0x91, 0xf3, 0xac, 0x25, 0x5f, 0x16, 0x42, 0x49, 0x88, 0x22, 0x65, 0x7b, 0x0b, 
  0x7f, 0xf3, 0x87, 0x44, 0xcb, 0x8d, 0xf8, 0xa3, 0x83, 0x43, 0x8b, 0x3f, 0xf5, 0xf6, 0xcb, 0xe0, 
  0x35, 0xd3, 0xab, 0x78, 0xec, 0xec, 0x35, 0x7b, 0x22, 0x77, 0x88, 0x1f, 0x70, 0x9c, 0xcd, 0x1e, 
  0x8d, 0xb6, 0xf6, 0x53, 0xdc, 0x59, 0x4b, 0xf5, 0x91, 0xbd, 0xce, 0x00, 0xb6, 0x5d, 0x0b, 0x9b, 
  0x08, 0xaa, 0xe3, 0x35, 0x1e, 0x00, 0xf7, 0xc1, 0x96, 0x09, 0xc0, 0x7b, 0x3b, 0x7f, 0x54, 0x67, 
  0x5e, 0x4b, 0x18, 0x12, 0x21, 0xca, 0xde, 0x81, 0x4e, 0xc3, 0xd5, 0x95, 0xe9, 0x56, 0x28, 0x0f, 
  0x86, 0x65, 0x52, 0x45, 0xec, 0xd7, 0xbe, 0x42, 0x04, 0x6f, 0x81, 0x4d, 0x6b, 0x24, 0xb9, 0x4b, 
  0xea, 0xdc, 0xd5, 0x84, 0x6a, 0xaf, 0xc0, 0xbb, 0xf8, 0xe1, 0x02, 0xa8, 0xde, 0x9e, 0xed, 0x47, 
  0x6f, 0xad, 0x27, 0x08, 0x14, 0x12, 0x9e, 0x52, 0x2d, 0x27, 0x63, 0x45, 0xe9, 0x98, 0x77, 0xbd, 
  0x97, 0xb9, 0xaf, 0x6b, 0x71, 0xe2, 0x35, 0xb3, 0x42, 0x7c, 0x00, 0x52, 0x5e, 0x7c, 0xd2, 0x0a, 
  0x38, 0x7a, 0x39, 0x4b, 0x4d, 0xc9, 0x4f, 0x00, 0xc8, 0xe8, 0x0f, 0x68, 0xdc, 0xca, 0x56, 0x64, 
  0xcf, 0xdc, 0x55, 0x83, 0xc1, 0x0c, 0x1c, 0x66, 0xba, 0x64, 0x85, 0x6e, 0x38, 0xec, 0xc4, 0x7f, 
  0x65, 0xa7, 0xf2, 0xb0, 0x06, 0x48, 0x74, 0xb5, 0xf3, 0xae, 0x35, 0xa2, 0xc5, 0x13, 0xd6, 0x27, 
  0xf8, 0x75, 0xd1, 0x1d, 0x28, 0xaa, 0xf3, 0xbc, 0x33, 0xf7, 0x39, 0x06, 0xb3, 0x1a, 0xb0, 0x86, 
  0x9f, 0x84, 0x3f, 0x59, 0x58, 0x62, 0x00, 0x73, 0x57, 0xe8, 0xe6, 0x1d, 0xa0, 0x78, 0x23, 0xc6, 
  0x30, 0x99, 0x62, 0x7c, 0x21, 0x2c, 0xe0, 0xec, 0x93, 0x67, 0xdd, 0x1e, 0x4c, 0x74, 0xb2, 0x94, 
  0x82, 0x48, 0xd3, 0xe8, 0x33, 0x68, 0x44, 0xb2, 0x81, 0xad, 0x36, 0x05, 0x23, 0xbd, 0x00, 0xf6, 
  0x70, 0xea, 0x28, 0x87, 0xd7, 0x06, 0x7a, 0x5f, 0x67, 0xb2, 0x1e, 0x2b, 0xf0, 0x5e, 0xd4, 0x4c, 
  0x75, 0xcd, 0x11, 0xf2, 0xa2, 0x57, 0x0c, 0x57, 0x80, 0xe1, 0x09, 0x1e, 0x19, 0x48, 0x26, 0x9b, 
  0xb6, 0x16, 0xe4, 0x39, 0x9c, 0x76, 0xc0, 0x11, 0xc2, 0x11, 0x19, 0xa2, 0x64, 0xbf, 0x46, 0x7d, 
  0xb2, 0xfe, 0x7d, 0xf6, 0x2f, 0x71, 0x86, 0xc4, 0xbf, 0x05, 0x6e, 0x5e, 0x55, 0x5e, 0x19, 0xad, 
  0xe4, 0x7f, 0x49, 0xcb, 0x2f, 0x3d, 0x01, 0xfd, 0x37, 0xb8, 0xc9, 0x5d, 0x11, 0x01, 0xd6, 0x49, 
  0x15, 0x35, 0x0c, 0x71, 0x35, 0x86, 0x47, 0x10, 0xf5, 0x77, 0x56, 0xf1, 0x9a, 0x0e, 0x1e, 0xe1, 
  0xb5, 0xd7, 0xe6, 0xa8, 0x6b, 0x99, 0x07, 0x9c, 0x99, 0x50, 0xb9, 0xee, 0x28, 0x67, 0x61, 0xd1, 
  0x73, 0xf4, 0xf1, 0xe0, 0xc9, 0x5e, 0x08, 0x21, 0xe9, 0xb2, 0x89, 0x43, 0x02, 0x7a, 0x47, 0xf2, 
  0x58, 0xf6, 0x66, 0xb4, 0xd3, 0xb9, 0xae, 0xd9, 0x05, 0xda, 0x9e, 0x3c, 0x2a, 0x9e, 0xce, 0xbd, 
  0x4d, 0x38, 0x66, 0xd5, 0x49, 0x5b, 0xa8, 0x0e, 0x32, 0x7d, 0x66, 0x19, 0x10, 0x19, 0x5e, 0x17, 
  0x46, 0x9e, 0x21, 0xcf, 0x7f, 0x75, 0x8e, 0xe7, 0x15, 0x99, 0xb8, 0x82, 0xee, 0x4c, 0xce, 0x10, 
  0xed, 0x74, 0xf2, 0xe3, 0x61, 0xcf, 0xac, 0x33, 0x5d, 0xee, 0x3a, 0x23, 0x26, 0x47, 0x6c, 0xc1, 
  0x1a, 0xd1, 0xf3, 0x16, 0xce, 0x05, 0xf6, 0xc0, 0x45, 0x6f, 0x27, 0x71, 0x4c, 0xa4, 0x1f, 0x40, 
  0x19, 0xc3, 0x22, 0xd7, 0xaa, 0x90, 0xb4, 0x60, 0xb7, 0x44, 0x70, 0x30, 0xa5, 0xe4, 0x0d, 0xc5, 
  0xc7, 0x8d, 0x45, 0xeb, 0x2c, 0xde, 0x2d, 0x40, 0x7c, 0x88, 0x44, 0x59, 0x93, 0x42, 0x59, 0xb0, 
  0x9d, 0x1f, 0x33, 0xd1, 0x38, 0xe7, 0x2a, 0x17, 0x35, 0x59, 0x97, 0x42, 0xb4, 0x97, 0x3d, 0x09, 
  0x97, 0xce, 0x8a, 0xa4, 0xd1, 0x9b, 0x68, 0xa2, 0xaa, 0xfc, 0x05, 0x8f, 0x28, 0x20, 0x27, 0xe5, 
  0x59, 0x0d, 0xb2, 0x8b, 0xb1, 0x7e, 0x7c, 0x91, 0x36, 0x67, 0x7f, 0x74, 0xda, 0x71, 0xe4, 0xfa, 
  0x5c, 0x88, 0x62, 0x1b, 0xd5, 0x17, 0xe1, 0x2e, 0xda, 0x7c, 0x30, 0x69, 0x91, 0xb7, 0x2e, 0x2a, 
  0x93, 0x31, 0x8b, 0x63, 0x6f, 0xe5, 0x55, 0x5f, 0x00, 0x38, 0x59, 0xdf, 0x29, 0x18, 0x83, 0x55, 
  0x24, 0xa6, 0xdf, 0x16, 0xf5, 0x99, 0x56, 0xdd, 0xfd, 0x52, 0x62, 0x2f, 0xa2, 0x40, 0xa6, 0x6f, 
  0xa1, 0x39, 0x90, 0x55, 0x22, 0xef, 0x83, 0x3e, 0x80, 0xd1, 0x2f, 0x46, 0x0a, 0xf5, 0x2d, 0x42, 
  0x52, 0xfa, 0x41, 0x97, 0xee, 0xc2, 0x61, 0x52, 0xce, 0xe1, 0xd1, 0x99, 0x30, 0x7e, 0x84, 0x37, 
  0x33, 0xa5, 0x19, 0x57, 0xba, 0x10, 0xe8, 0x11, 0xa6, 0x22, 0x1f, 0xc7, 0x75, 0xfe, 0x44, 0x8f, 
  0xb0, 0x10, 0xe6, 0xc6, 0x92, 0x9c, 0xf6, 0xbe, 0xf4, 0x42, 0xf0, 0xcf, 0xb1, 0x2b, 0x4b, 0x60, 
  0x12, 0xaa, 0xc9, 0xe8, 0xc8, 0x7e, 0x9f, 0xad, 0xb5, 0xbb, 0x51, 0xd8, 0x0b, 0x89, 0x41, 0x22, 
  0x47, 0x1a, 0x44, 0x65, 0xe1, 0x56, 0x5f, 0x6f, 0x88, 0xa0, 0x12, 0x89, 0x62, 0x28, 0x05, 0xa1, 
  0x95, 0xd9, 0x4f, 0x25, 0x8f, 0x42, 0x88, 0x14, 0xa3, 0x80, 0x23, 0xf5, 0x3b, 0x5a, 0xc5, 0x0a, 
  0x58, 0x36, 0x2e, 0xe4, 0xff, 0x84, 0xc8, 0xc0, 0x21, 0x14, 0x21, 0xf0, 0xa6, 0x74, 0xa2, 0x4f, 
  0x49, 0xcc, 0x56, 0x9d, 0xf3, 0x34, 0x88, 0x1d, 0x12, 0xca, 0x3b, 0x7c, 0x7a, 0x91, 0xa8, 0x60, 
  0xae, 0x0a, 0xd2, 0x42, 0x67, 0x35, 0x9e, 0xe4, 0x9b, 0xae, 0x31, 0x89, 0x1a, 0x01, 0xe7, 0x20, 
  0x75, 0x0a, 0xfb, 0x0f, 0x8a, 0x0b, 0x3a, 0xa5, 0xad, 0xa9, 0xd0, 0xfa, 0xd3, 0xa3, 0xda, 0x14, 
  0x90, 0xe0, 0xb5, 0xf7, 0x5b, 0xec, 0x56, 0x3c, 0xc5, 0x89, 0xa1, 0x82, 0x37, 0x93, 0xb8, 0x70, 
  0xb2, 0x81, 0x02, 0x88, 0xa5, 0xd5, 0x75, 0xc0, 0xb6, 0xe0, 0x20, 0xfa, 0x5f, 0x29, 0xab, 0xd2, 
  0x83, 0xa8, 0x39, 0x82, 0x4b, 0xff, 0x32, 0x87, 0xb7, 0x24, 0x66, 0x6c, 0x2c, 0x7e, 0xc7, 0x21, 
  0x06, 0xfc, 0x6c, 0x7d, 0x7d, 0x18, 0xcb, 0x3d, 0x31, 0xdf, 0x52, 0x10, 0xcf, 0x2b, 0x43, 0xe6, 
  0x66, 0xeb, 0x5f, 0x43, 0xa0, 0x07, 0x95, 0xec, 0xd0, 0x73, 0xd9, 0xb5, 0x02, 0xac, 0x53, 0x6b, 
  0x9f, 0x11, 0x48, 0x52, 0x89, 0xde, 0x41, 0x64, 0x39, 0xfc, 0xad, 0x42, 0xa4, 0x64, 0xff, 0xd4, 
  0xd6, 0x0d, 0x11, 0xba, 0xbd, 0xf4, 0x8d, 0xe7, 0x1f, 0x54, 0x37, 0x7c, 0x7d, 0x55, 0xd6, 0xa1, 
  0xf9, 0x8c, 0x49, 0x10, 0x67, 0x93, 0x26, 0xac, 0x82, 0xb0, 0xc4, 0xb2, 0xd7, 0xe3, 0x7f, 0xe0, 
  0x34, 0x92, 0x4c, 0x65, 0xc2, 0x89, 0xd5, 0xe2, 0xfa, 0x8e, 0xd3, 0xf4, 0x72, 0xa1, 0x67, 0x07, 
  0x65, 0xbf, 0x8a, 0x5b, 0x76, 0x14, 0xe8, 0x8f, 0x2c, 0xbc, 0x37, 0x73, 0xe7, 0xd8, 0x74, 0xa7, 
  0x17, 0x3f, 0x14, 0xf8, 0x75, 0xd2, 0x8a, 0xc8, 0xd3, 0x61, 0x33, 0x10, 0x34, 0x36, 0xe3, 0x8b, 
  0xcf, 0x07, 0xd3, 0x50, 0x89, 0x8e, 0x4f, 0x6b, 0x99, 0xcf, 0xce, 0x56, 0x3c, 0xea, 0xa6, 0xe9, 
  0x94, 0xcc, 0x03, 0xb7, 0xfc, 0x3b, 0xf2, 0x1f, 0xc5, 0x41, 0x76, 0x80, 0x0f, 0x04, 0x7b, 0x79, 
  0x3a, 0x04, 0x5e, 0x23, 0x55, 0x14, 0x54, 0xf4, 0x36, 0x76, 0x0c, 0x59, 0x7a, 0xa1, 0xeb, 0xc8, 
  0x9b, 0xe0, 0x1c, 0xdf, 0x1c, 0xa1, 0x09, 0x5c, 0x6e, 0x78, 0x46, 0x47, 0x28, 0x2b, 0xdd, 0x52, 
  0x6a, 0x27, 0xd7, 0xd2, 0x4c, 0xf1, 0xf6, 0x18, 0xb3, 0x34, 0xf9, 0x16, 0x31, 0xed, 0xc3, 0x46, 
  0x84, 0xda, 0xc5, 0x2e, 0x9c, 0x92, 0x6e, 0xc3, 0x29, 0x6b, 0x66, 0xdf, 0xa0, 0xa9, 0x6d, 0x45, 
  0x8e, 0xb2, 0x9e, 0x47, 0x81, 0xb4, 0x1b, 0x0e, 0xf2, 0x93, 0x85, 0x6f, 0x39, 0xb2, 0x27, 0x9e, 
  0xcb, 0x5a, 0xba, 0x6b, 0x4f, 0x16, 0x8e, 0x90, 0x38, 0x0f, 0x9d, 0x3c, 0x45, 0x43, 0xec, 0x33, 
  0xfc, 0x5e, 0xea, 0xe0, 0x76, 0x63, 0x63, 0x91, 0x35, 0xb7, 0x0a, 0xfe, 0x9b, 0xd7, 0xdd, 0xa4, 
  0xad, 0x8e, 0xdd, 0x79, 0x09, 0x3e, 0x16, 0x41, 0x5e, 0xdf, 0xa4, 0x9c, 0x0c, 0x6f, 0x16, 0xca, 
  0xbc, 0x50, 0x28, 0x90, 0x74, 0x38, 0x14, 0x69, 0xd1, 0x77, 0x78, 0x91, 0xb5, 0x94, 0x53, 0x3c, 
  0x3f, 0x0a, 0xaa, 0x4e, 0x24, 0xb4, 0x0d, 0x22, 0x42, 0x10, 0x8d, 0xf9, 0x9e, 0x7c, 0x49, 0xa9, 
  0x0e, 0x8c, 0x75, 0x3e, 0x1b, 0x2f, 0x5b, 0x53, 0x67, 0xae, 0x94, 0xef, 0x1c, 0x55, 0x7d, 0xac, 
  0xf3, 0x35, 0xaa, 0xa0, 0x2f, 0xa3, 0xa5, 0x01, 0x94, 0xbe, 0x2f, 0x0c, 0x45, 0xa1, 0x48, 0x77, 
  0xa6, 0x04, 0x5d, 0x08, 0x63, 0x38, 0x71, 0x88, 0x64, 0x64, 0xd0, 0xe8, 0x51, 0x9f, 0x27, 0x39, 
  0x4c, 0x21, 0xc2, 0x21, 0x83, 0x72, 0xea, 0xd5, 0x6a, 0x79, 0x44, 0xb7, 0x7e, 0x5d, 0x4c, 0x34, 
  0x9e, 0x59, 0xbe, 0x49, 0x82, 0x25, 0x31, 0x73, 0x9e, 0x17, 0x1e, 0x85, 0xe6, 0x47, 0x8c, 0x1e, 
  0xb0, 0x15, 0x62, 0x60, 0xed, 0xe8, 0xd5, 0x07, 0x7f, 0x14, 0x59, 0xc7, 0x91, 0xf8, 0x87, 0x51, 
  0x7a, 0x7e, 0xe0, 0x43, 0x87, 0xe8, 0x42, 0xb3, 0x37, 0x65, 0x6c, 0x76, 0x02, 0xe8, 0x0a, 0x7a, 
  0x13, 0xba, 0x73, 0x10, 0xb2, 0x1d, 0x36, 0x82, 0xce, 0xc1, 0x74, 0x1c, 0xc7, 0x77, 0x94, 0xa3, 
  0x06, 0xf1, 0x28, 0xd6, 0xd4, 0x5b, 0x8c, 0x42, 0x21, 0xad, 0xdc, 0x15, 0x3b, 0xd6, 0x97, 0x3b, 
  0xc2, 0xca, 0x55, 0xf0, 0xcc, 0xd0, 0xb9, 0x67, 0x0f, 0x81, 0x2d, 0x11, 0x06, 0x1f, 0xe8, 0x10, 
  0xec, 0x86, 0x36, 0x7b, 0xaa, 0xb0, 0x44, 0x3a, 0x88, 0x99, 0xbd, 0xd5, 0x17, 0x64, 0x55, 0x92, 
  0x54, 0x96, 0x29, 0x90, 0xe2, 0x44, 0x2d, 0x68, 0xdc, 0xe7, 0x0b, 0xd3, 0xe3, 0x28, 0x5a, 0x5f, 
  0x7b, 0x81, 0xde, 0xf6, 0x5f, 0x99, 0xd8, 0xc1, 0xec, 0x96, 0xb7, 0xa1, 0x27, 0xeb, 0xdb, 0xa7, 
  0x24, 0x6c, 0xbb, 0x61, 0x24, 0x3c, 0x5e, 0xa1, 0x81, 0xa5, 0x0a, 0x8e, 0x72, 0x76, 0xc3, 0xfc, 
  0xff, 0x1f, 0xa7, 0x5d, 0xea, 0x2a, 0x04, 0x6b, 0xc2, 0xf4, 0x40, 0xc3, 0x3c, 0x18, 0xee, 0x7b, 
  0x41, 0x0a, 0x0d, 0xb2, 0xb7, 0x0b, 0xf3, 0xe2, 0x1d, 0xbc, 0x76, 0xc8, 0x63, 0xa1, 0xb6, 0xd0, 
  0x7c, 0x3a, 0xb9, 0x0b, 0x79, 0x7c, 0xfb, 0x1e, 0x98, 0x87, 0x3d, 0x13, 0x71, 0x77, 0xb0, 0xc2, 
  0x61, 0x76, 0xb7, 0xcc, 0xc2, 0x87, 0xb9, 0xdb, 0xfb, 0x20, 0x6f, 0xa4, 0x05, 0x9f, 0xf3, 0x6a, 
  0x21, 0x73, 0x15, 0xab, 0xdd, 0xbd, 0x79, 0xef, 0x99, 0xd7, 0x14, 0x1f, 0xd8, 0x41, 0xe5, 0x4e, 
  0xfb, 0xc8, 0x59, 0x07, 0x66, 0xb7, 0x3d, 0xed, 0xad, 0x74, 0xe9, 0xdf, 0xd5, 0xd8, 0xd7, 0x4f, 
  0xe6, 0xfc, 0x09, 0x83, 0x6f, 0xc6, 0xbd, 0x95, 0x01, 0xea, 0x30, 0xed, 0x09, 0xb0, 0x4a, 0xb7, 
  0xf7, 0xe6, 0xbd, 0x8d, 0xa9, 0xee, 0x5b, 0x80, 0xdb, 0xe7, 0xa9, 0xe9, 0xdd, 0x58, 0x62, 0xda, 
  0x5b, 0x67, 0xa8, 0x2c, 0x3d, 0xe8, 0x9f, 0x9f, 0xf6, 0x4f, 0xaf, 0xbf, 0xa2, 0x57, 0xf0, 0xcd, 
  0x57, 0x2d, 0x44, 0xeb, 0x6f, 0x5d, 0x3c, 0x2d, 0x58, 0x85, 0x6c, 0x98, 0x9a, 0xfd, 0x80, 0x9b, 
  0x91, 0x47, 0xea, 0x12, 0xe8, 0x7d, 0x89, 0xba, 0x59, 0x64, 0xc5, 0x4a, 0x03, 0x90, 0x1e, 0xf6, 
  0x88, 0x68, 0x7d, 0x9a, 0x9d, 0x93, 0x26, 0x74, 0x5d, 0xdf, 0x9f, 0x0e, 0xbf, 0x24, 0x2f, 0x9a, 
  0xa8, 0x91, 0xc1, 0xb4, 0x64, 0xe9, 0x11, 0xc3, 0x77, 0xd1, 0x6a, 0xa9, 0x1c, 0x79, 0x46, 0x98, 
  0xf3, 0xfd, 0x0b, 0x82, 0xbb, 0x43, 0x60, 0xef, 0xfa, 0xc1, 0x8b, 0x24, 0xe0, 0xf0, 0xfe, 0xed, 
  0xeb, 0xc3, 0xf3, 0x36, 0x83, 0x7e, 0x76, 0x2e, 0x1c, 0x55, 0xbd, 0xa1, 0x4f, 0x62, 0xfc, 0x83, 
  0x56, 0x41, 0x81, 0x49, 0x23, 0x78, 0x87, 0x43, 0xfd, 0x95, 0x62, 0x6a, 0xfa, 0x0b, 0x95, 0x3d, 
  0x9a, 0x95, 0x60, 0xcf, 0x72, 0xe4, 0x5b, 0xb4, 0x25, 0xa9, 0x11, 0x2f, 0xaa, 0x1a, 0x6e, 0xe5, 
  0xa8, 0x05, 0xa6, 0x6c, 0xba, 0x35, 0xcc, 0x1d, 0x85, 0x9f, 0xc9, 0x42, 0x23, 0x44, 0x43, 0xdd, 
  0x06, 0xf2, 0xd1, 0xbc, 0xfb, 0xe3, 0xdc, 0x70, 0xab, 0x4c, 0xb1, 0x47, 0xe3, 0xc6, 0x49, 0xda, 
  0x70, 0x47, 0x93, 0x1e, 0xe9, 0x0e, 0xd4, 0x2c, 0xdc, 0x0c, 0x1e, 0x1b, 0xb3, 0xdc, 0x9b, 0x41, 
  0x05, 0xd1, 0x1d, 0x4a, 0xd1, 0x45, 0x09, 0xe3, 0x87, 0xa0, 0x2c, 0x7b, 0xbf, 0x21, 0xe7, 0xfa, 
  0x28, 0xe7, 0x93, 0x7b, 0x49, 0x02, 0xe3, 0x9d, 0x36, 0x30, 0xea, 0x7c, 0xf3, 0xe0, 0x07, 0xcf, 
  0xe7, 0x0e, 0xbd, 0x3c, 0x32, 0x3c, 0xa0, 0x43, 0x04, 0xfb, 0x5a, 0x62, 0x7d, 0x7f, 0xaa, 0x74, 
  0xea, 0x8c, 0xf9, 0xa4, 0xd7, 0x73, 0x60, 0x32, 0xbd, 0xdd, 0xc6, 0xcd, 0x38, 0xc9, 0x25, 0x47, 
  0x33, 0x2f, 0x23, 0xcc, 0x66, 0x53, 0xd7, 0x8d, 0x13, 0xd7, 0xda, 0x10, 0x35, 0x1f, 0x45, 0x6e, 
  0xe7, 0x8a, 0x3b, 0x57, 0x83, 0x1b, 0x37, 0x90, 0x89, 0x06, 0x9c, 0xea, 0x59, 0xbc, 0xb4, 0xa0, 
  0x52, 0x8d, 0x56, 0xa0, 0x16, 0x5c, 0xa1, 0xb6, 0x64, 0x91, 0xeb, 0xbf, 0x7f, 0x7d, 0xd9, 0xff, 
  0xee, 0xdb, 0x9a, 0x22, 0x46, 0x8b, 0x8c, 0xe0, 0x86, 0x2f, 0x56, 0xa0, 0x61, 0xae, 0x50, 0xa5, 
  0xa7, 0x5d, 0x62, 0xb8, 0xbb, 0x5e, 0x6e, 0x4a, 0xe4, 0xc5, 0xbe, 0x19, 0xd9, 0x7f, 0x7e, 0xed, 
  0xe7, 0x8e, 0x64, 0x06, 0xfc, 0x19, 0x8e, 0x6f, 0xa7, 0xaa, 0x7b, 0xf9, 0x26, 0x4b, 0x65, 0x93, 
  0x7b, 0x17, 0x43, 0x37, 0x71, 0x9f, 0x0a, 0xf4, 0x9f, 0x88, 0xe9, 0x9f, 0x08, 0xd4, 0x74, 0x38, 
  0x6e, 0x04, 0xde, 0xe6, 0x1d, 0x49, 0xf2, 0xee, 0x23, 0xfe, 0xdd, 0xbd, 0xd4, 0xb8, 0x7f, 0x49, 
  0xb1, 0x1a, 0x07, 0x2b, 0x61, 0x30, 0x8b, 0x82, 0x9b, 0x20, 0xd0, 0x9b, 0x31, 0xa0, 0x93, 0x21, 
  0x90, 0x88, 0x00, 0xfc, 0xfd, 0x0f, 0x6d, 0x1c, 0x40, 0x5d, 0x7e, 0x1b, 0x00, 0x00, 
};
#endif  // #if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)

static constexpr uint64_t _GENERATOR_ = AS_GENERATOR::AS_ERRNO;

static const STATUS_ITEM Status[] =
{
  /*0*/ { (uint32_t)1, "EPERM", AS_DESCR_HANDLE("Operation not permitted", 0), Src_errnoh, AS_OS_ANY },
  /*1*/ { (uint32_t)2, "ENOENT", AS_DESCR_HANDLE("No such file or directory", 24), Src_errnoh, AS_OS_ANY },
  /*2*/ { (uint32_t)3, "ESRCH", AS_DESCR_HANDLE("No such process", 50), Src_errnoh, AS_OS_ANY },
  /*3*/ { (uint32_t)4, "EINTR", AS_DESCR_HANDLE("Interrupted system call", 66), Src_errnoh, AS_OS_ANY },
  /*4*/ { (uint32_t)5, "EIO", AS_DESCR_HANDLE("Input/output error", 90), Src_errnoh, AS_OS_ANY },
  /*5*/ { (uint32_t)6, "ENXIO", AS_DESCR_HANDLE("No such device or address", 109), Src_errnoh, AS_OS_ANY },
  /*6*/ { (uint32_t)7, "E2BIG", AS_DESCR_HANDLE("Argument list too long", 135), Src_errnoh, AS_OS_ANY },
  /*7*/ { (uint32_t)8, "ENOEXEC", AS_DESCR_HANDLE("Exec format error", 158), Src_errnoh, AS_OS_ANY },
  /*8*/ { (uint32_t)9, "EBADF", AS_DESCR_HANDLE("Bad file descriptor", 176), Src_errnoh, AS_OS_ANY },
  /*9*/ { (uint32_t)10, "ECHILD", AS_DESCR_HANDLE("No child processes", 196), Src_errnoh, AS_OS_ANY },
  /*10*/ { (uint32_t)11, "EAGAIN", AS_DESCR_HANDLE("Resource temporarily unavailable", 215), Src_errnoh, AS_OS_LINUX },
  /*11*/ { (uint32_t)11, "EDEADLK", AS_DESCR_HANDLE("Resource deadlock avoided", 248), Src_errnoh, AS_OS_MAC },
  /*12*/ { (uint32_t)11, "EAGAIN", AS_DESCR_HANDLE("Resource temporarily unavailable", 274), Src_errnoh, AS_OS_SOLARIS },
  /*13*/ { (uint32_t)11, "EAGAIN", AS_DESCR_HANDLE("", 307), Src_errnoh, AS_OS_WINDOWS },
  /*14*/ { (uint32_t)12, "ENOMEM", AS_DESCR_HANDLE("Cannot allocate memory", 308), Src_errnoh, AS_OS_ANY },
  /*15*/ { (uint32_t)13, "EACCES", AS_DESCR_HANDLE("Permission denied", 331), Src_errnoh, AS_OS_ANY },
  /*16*/ { (uint32_t)14, "EFAULT", AS_DESCR_HANDLE("Bad address", 349), Src_errnoh, AS_OS_ANY },
  /*17*/ { (uint32_t)15, "ENOTBLK", AS_DESCR_HANDLE("Block device required", 361), Src_errnoh, AS_OS_LINUX },
  /*18*/ { (uint32_t)15, "ENOTBLK", AS_DESCR_HANDLE("Block device required", 383), Src_errnoh, AS_OS_MAC },
  /*19*/ { (uint32_t)15, "ENOTBLK", AS_DESCR_HANDLE("Block device required", 405), Src_errnoh, AS_OS_SOLARIS },
  /*20*/ { (uint32_t)16, "EBUSY", AS_DESCR_HANDLE("Device or resource busy", 427), Src_errnoh, AS_OS_ANY },
  /*21*/ { (uint32_t)17, "EEXIST", AS_DESCR_HANDLE("File exists", 451), Src_errnoh, AS_OS_ANY },
  /*22*/ { (uint32_t)18, "EXDEV", AS_DESCR_HANDLE("Cross-device link", 463), Src_errnoh, AS_OS_ANY },
  /*23*/ { (uint32_t)19, "ENODEV", AS_DESCR_HANDLE("Operation not supported by device", 481), Src_errnoh, AS_OS_ANY },
  /*24*/ { (uint32_t)20, "ENOTDIR", AS_DESCR_HANDLE("Not a directory", 515), Src_errnoh, AS_OS_ANY },
  /*25*/ { (uint32_t)21, "EISDIR", AS_DESCR_HANDLE("Is a directory", 531), Src_errnoh, AS_OS_ANY },
  /*26*/ { (uint32_t)22, "EINVAL", AS_DESCR_HANDLE("Invalid argument", 546), Src_errnoh, AS_OS_ANY },
  /*27*/ { (uint32_t)23, "ENFILE", AS_DESCR_HANDLE("Too many open files in system", 563), Src_errnoh, AS_OS_ANY },
  /*28*/ { (uint32_t)24, "EMFILE", AS_DESCR_HANDLE("Too many open files", 593), Src_errnoh, AS_OS_ANY },
  /*29*/ { (uint32_t)25, "ENOTTY", AS_DESCR_HANDLE("Inappropriate ioctl for device", 613), Src_errnoh, AS_OS_ANY },
  /*30*/ { (uint32_t)26, "ETXTBSY", AS_DESCR_HANDLE("Text file busy", 644), Src_errnoh, AS_OS_LINUX },
  /*31*/ { (uint32_t)26, "ETXTBSY", AS_DESCR_HANDLE("Text file busy", 659), Src_errnoh, AS_OS_MAC },
  /*32*/ { (uint32_t)26, "ETXTBSY", AS_DESCR_HANDLE("Text file busy", 674), Src_errnoh, AS_OS_SOLARIS },
  /*33*/ { (uint32_t)27, "EFBIG", AS_DESCR_HANDLE("File too large", 689), Src_errnoh, AS_OS_ANY },
  /*34*/ { (uint32_t)28, "ENOSPC", AS_DESCR_HANDLE("No space left on device", 704), Src_errnoh, AS_OS_ANY },
  /*35*/ { (uint32_t)29, "ESPIPE", AS_DESCR_HANDLE("Illegal seek", 728), Src_errnoh, AS_OS_ANY },
  /*36*/ { (uint32_t)30, "EROFS", AS_DESCR_HANDLE("Read-only file system", 741), Src_errnoh, AS_OS_ANY },
  /*37*/ { (uint32_t)31, "EMLINK", AS_DESCR_HANDLE("Too many links", 763), Src_errnoh, AS_OS_ANY },
  /*38*/ { (uint32_t)32, "EPIPE", AS_DESCR_HANDLE("Broken pipe", 778), Src_errnoh, AS_OS_ANY },
  /*39*/ { (uint32_t)33, "EDOM", AS_DESCR_HANDLE("Math argument out of domain of func", 790), Src_errnoh, AS_OS_ANY },
  /*40*/ { (uint32_t)34, "ERANGE", AS_DESCR_HANDLE("Math result not representable", 826), Src_errnoh, AS_OS_ANY },
  /*41*/ { (uint32_t)35, "EDEADLK", AS_DESCR_HANDLE("Resource deadlock would occur", 856), Src_errnoh, AS_OS_LINUX },
  /*42*/ { (uint32_t)35, "EAGAIN", AS_DESCR_HANDLE("Resource temporarily unavailable", 886), Src_errnoh, AS_OS_MAC },
  /*43*/ { (uint32_t)35, "ENOMSG", AS_DESCR_HANDLE("No message of desired type", 919), Src_errnoh, AS_OS_SOLARIS },
  /*44*/ { (uint32_t)36, "ENAMETOOLONG", AS_DESCR_HANDLE("File name too long", 946), Src_errnoh, AS_OS_LINUX },
  /*45*/ { (uint32_t)36, "EINPROGRESS", AS_DESCR_HANDLE("Operation now in progress", 965), Src_errnoh, AS_OS_MAC },
  /*46*/ { (uint32_t)36, "EIDRM", AS_DESCR_HANDLE("Identifier removed", 991), Src_errnoh, AS_OS_SOLARIS },
  /*47*/ { (uint32_t)36, "EDEADLK", AS_DESCR_HANDLE("", 1010), Src_errnoh, AS_OS_WINDOWS },
  /*48*/ { (uint32_t)37, "ENOLCK", AS_DESCR_HANDLE("No record locks available", 1011), Src_errnoh, AS_OS_LINUX },
  /*49*/ { (uint32_t)37, "EALREADY", AS_DESCR_HANDLE("Operation already in progress", 1037), Src_errnoh, AS_OS_MAC },
  /*50*/ { (uint32_t)37, "ECHRNG", AS_DESCR_HANDLE("Channel number out of range", 1067), Src_errnoh, AS_OS_SOLARIS },
  /*51*/ { (uint32_t)38, "ENOSYS", AS_DESCR_HANDLE("Function not implemented", 1095), Src_errnoh, AS_OS_LINUX },
  /*52*/ { (uint32_t)38, "ENOTSOCK", AS_DESCR_HANDLE("Socket operation on non-socket", 1120), Src_errnoh, AS_OS_MAC },
  /*53*/ { (uint32_t)38, "EL2NSYNC", AS_DESCR_HANDLE("Level 2 not synchronized", 1151), Src_errnoh, AS_OS_SOLARIS },
  /*54*/ { (uint32_t)38, "ENAMETOOLONG", AS_DESCR_HANDLE("", 1176), Src_errnoh, AS_OS_WINDOWS },
  /*55*/ { (uint32_t)39, "ENOTEMPTY", AS_DESCR_HANDLE("Directory not empty", 1177), Src_errnoh, AS_OS_LINUX },
  /*56*/ { (uint32_t)39, "EDESTADDRREQ", AS_DESCR_HANDLE("Destination address required", 1197), Src_errnoh, AS_OS_MAC },
  /*57*/ { (uint32_t)39, "EL3HLT", AS_DESCR_HANDLE("Level 3 halted", 1226), Src_errnoh, AS_OS_SOLARIS },
  /*58*/ { (uint32_t)39, "ENOLCK", AS_DESCR_HANDLE("", 1241), Src_errnoh, AS_OS_WINDOWS },
  /*59*/ { (uint32_t)40, "ELOOP", AS_DESCR_HANDLE("Too many symbolic links encountered", 1242), Src_errnoh, AS_OS_LINUX },
  /*60*/ { (uint32_t)40, "EMSGSIZE", AS_DESCR_HANDLE("Message too long", 1278), Src_errnoh, AS_OS_MAC },
  /*61*/ { (uint32_t)40, "EL3RST", AS_DESCR_HANDLE("Level 3 reset", 1295), Src_errnoh, AS_OS_SOLARIS },
  /*62*/ { (uint32_t)40, "ENOSYS", AS_DESCR_HANDLE("", 1309), Src_errnoh, AS_OS_WINDOWS },
  /*63*/ { (uint32_t)41, "EWOULDBLOCK", AS_DESCR_HANDLE("Operation would block", 1310), Src_errnoh, AS_OS_LINUX },
  /*64*/ { (uint32_t)41, "EPROTOTYPE", AS_DESCR_HANDLE("Protocol wrong type for socket", 1332), Src_errnoh, AS_OS_MAC },
  /*65*/ { (uint32_t)41, "ELNRNG", AS_DESCR_HANDLE("Link number out of range", 1363), Src_errnoh, AS_OS_SOLARIS },
  /*66*/ { (uint32_t)41, "ENOTEMPTY", AS_DESCR_HANDLE("", 1388), Src_errnoh, AS_OS_WINDOWS },
  /*67*/ { (uint32_t)42, "ENOMSG", AS_DESCR_HANDLE("No message of desired type", 1389), Src_errnoh, AS_OS_LINUX },
  /*68*/ { (uint32_t)42, "ENOPROTOOPT", AS_DESCR_HANDLE("Protocol not available", 1416), Src_errnoh, AS_OS_MAC },
  /*69*/ { (uint32_t)42, "EUNATCH", AS_DESCR_HANDLE("Protocol driver not attached", 1439), Src_errnoh, AS_OS_SOLARIS },
  /*70*/ { (uint32_t)42, "EILSEQ", AS_DESCR_HANDLE("", 1468), Src_errnoh, AS_OS_WINDOWS },
  /*71*/ { (uint32_t)43, "EIDRM", AS_DESCR_HANDLE("Identifier removed", 1469), Src_errnoh, AS_OS_LINUX },
  /*72*/ { (uint32_t)43, "EPROTONOSUPPORT", AS_DESCR_HANDLE("Protocol not supported", 1488), Src_errnoh, AS_OS_MAC },
  /*73*/ { (uint32_t)43, "ENOCSI", AS_DESCR_HANDLE("No CSI structure available", 1511), Src_errnoh, AS_OS_SOLARIS },
  /*74*/ { (uint32_t)44, "ECHRNG", AS_DESCR_HANDLE("Channel number out of range", 1538), Src_errnoh, AS_OS_LINUX },
  /*75*/ { (uint32_t)44, "ESOCKTNOSUPPORT", AS_DESCR_HANDLE("Socket type not supported", 1566), Src_errnoh, AS_OS_MAC },
  /*76*/ { (uint32_t)44, "EL2HLT", AS_DESCR_HANDLE("Level 2 halted", 1592), Src_errnoh, AS_OS_SOLARIS },
  /*77*/ { (uint32_t)45, "EL2NSYNC", AS_DESCR_HANDLE("Level 2 not synchronized", 1607), Src_errnoh, AS_OS_LINUX },
  /*78*/ { (uint32_t)45, "ENOTSUP", AS_DESCR_HANDLE("Operation not supported", 1632), Src_errnoh, AS_OS_MAC },
  /*79*/ { (uint32_t)45, "EDEADLK", AS_DESCR_HANDLE("Deadlock condition.", 1656), Src_errnoh, AS_OS_SOLARIS },
  /*80*/ { (uint32_t)46, "EL3HLT", AS_DESCR_HANDLE("Level 3 halted", 1676), Src_errnoh, AS_OS_LINUX },
  /*81*/ { (uint32_t)46, "EPFNOSUPPORT", AS_DESCR_HANDLE("Protocol family not supported", 1691), Src_errnoh, AS_OS_MAC },
  /*82*/ { (uint32_t)46, "ENOLCK", AS_DESCR_HANDLE("No record locks available.", 1721), Src_errnoh, AS_OS_SOLARIS },
  /*83*/ { (uint32_t)47, "EL3RST", AS_DESCR_HANDLE("Level 3 reset", 1748), Src_errnoh, AS_OS_LINUX },
  /*84*/ { (uint32_t)47, "EAFNOSUPPORT", AS_DESCR_HANDLE("Address family not supported by protocol family", 1762), Src_errnoh, AS_OS_MAC },
  /*85*/ { (uint32_t)47, "ECANCELED", AS_DESCR_HANDLE("Operation canceled", 1810), Src_errnoh, AS_OS_SOLARIS },
  /*86*/ { (uint32_t)48, "ELNRNG", AS_DESCR_HANDLE("Link number out of range", 1829), Src_errnoh, AS_OS_LINUX },
  /*87*/ { (uint32_t)48, "EADDRINUSE", AS_DESCR_HANDLE("Address already in use", 1854), Src_errnoh, AS_OS_MAC },
  /*88*/ { (uint32_t)48, "ENOTSUP", AS_DESCR_HANDLE("Operation not supported", 1877), Src_errnoh, AS_OS_SOLARIS },
  /*89*/ { (uint32_t)49, "EUNATCH", AS_DESCR_HANDLE("Protocol driver not attached", 1901), Src_errnoh, AS_OS_LINUX },
  /*90*/ { (uint32_t)49, "EADDRNOTAVAIL", AS_DESCR_HANDLE("Can't assign requested address", 1930), Src_errnoh, AS_OS_MAC },
  /*91*/ { (uint32_t)49, "EDQUOT", AS_DESCR_HANDLE("Disc quota exceeded", 1961), Src_errnoh, AS_OS_SOLARIS },
  /*92*/ { (uint32_t)50, "ENOCSI", AS_DESCR_HANDLE("No CSI structure available", 1981), Src_errnoh, AS_OS_LINUX },
  /*93*/ { (uint32_t)50, "ENETDOWN", AS_DESCR_HANDLE("Network is down", 2008), Src_errnoh, AS_OS_MAC },
  /*94*/ { (uint32_t)50, "EBADE", AS_DESCR_HANDLE("invalid exchange", 2024), Src_errnoh, AS_OS_SOLARIS },
  /*95*/ { (uint32_t)51, "EL2HLT", AS_DESCR_HANDLE("Level 2 halted", 2041), Src_errnoh, AS_OS_LINUX },
  /*96*/ { (uint32_t)51, "ENETUNREACH", AS_DESCR_HANDLE("Network is unreachable", 2056), Src_errnoh, AS_OS_MAC },
  /*97*/ { (uint32_t)51, "EBADR", AS_DESCR_HANDLE("invalid request descriptor", 2079), Src_errnoh, AS_OS_SOLARIS },
  /*98*/ { (uint32_t)52, "EBADE", AS_DESCR_HANDLE("Invalid exchange", 2106), Src_errnoh, AS_OS_LINUX },
  /*99*/ { (uint32_t)52, "ENETRESET", AS_DESCR_HANDLE("Network dropped connection on reset", 2123), Src_errnoh, AS_OS_MAC },
  /*100*/ { (uint32_t)52, "EXFULL", AS_DESCR_HANDLE("exchange full", 2159), Src_errnoh, AS_OS_SOLARIS },
  /*101*/ { (uint32_t)53, "EBADR", AS_DESCR_HANDLE("Invalid request descriptor", 2173), Src_errnoh, AS_OS_LINUX },
  /*102*/ { (uint32_t)53, "ECONNABORTED", AS_DESCR_HANDLE("Software caused connection abort", 2200), Src_errnoh, AS_OS_MAC },
  /*103*/ { (uint32_t)53, "ENOANO", AS_DESCR_HANDLE("no anode", 2233), Src_errnoh, AS_OS_SOLARIS },
  /*104*/ { (uint32_t)54, "EXFULL", AS_DESCR_HANDLE("Exchange full", 2242), Src_errnoh, AS_OS_LINUX },
  /*105*/ { (uint32_t)54, "ECONNRESET", AS_DESCR_HANDLE("Connection reset by peer", 2256), Src_errnoh, AS_OS_MAC },
  /*106*/ { (uint32_t)54, "EBADRQC", AS_DESCR_HANDLE("invalid request code", 2281), Src_errnoh, AS_OS_SOLARIS },
  /*107*/ { (uint32_t)55, "ENOANO", AS_DESCR_HANDLE("No anode", 2302), Src_errnoh, AS_OS_LINUX },
  /*108*/ { (uint32_t)55, "ENOBUFS", AS_DESCR_HANDLE("No buffer space available", 2311), Src_errnoh, AS_OS_MAC },
  /*109*/ { (uint32_t)55, "EBADSLT", AS_DESCR_HANDLE("invalid slot", 2337), Src_errnoh, AS_OS_SOLARIS },
  /*110*/ { (uint32_t)56, "EBADRQC", AS_DESCR_HANDLE("Invalid request code", 2350), Src_errnoh, AS_OS_LINUX },
  /*111*/ { (uint32_t)56, "EISCONN", AS_DESCR_HANDLE("Socket is already connected", 2371), Src_errnoh, AS_OS_MAC },
  /*112*/ { (uint32_t)56, "EDEADLOCK", AS_DESCR_HANDLE("file locking deadlock error", 2399), Src_errnoh, AS_OS_SOLARIS },
  /*113*/ { (uint32_t)57, "EBADSLT", AS_DESCR_HANDLE("Invalid slot", 2427), Src_errnoh, AS_OS_LINUX },
  /*114*/ { (uint32_t)57, "ENOTCONN", AS_DESCR_HANDLE("Socket is not connected", 2440), Src_errnoh, AS_OS_MAC },
  /*115*/ { (uint32_t)57, "EBFONT", AS_DESCR_HANDLE("bad font file fmt", 2464), Src_errnoh, AS_OS_SOLARIS },
  /*116*/ { (uint32_t)58, "EDEADLOCK", AS_DESCR_HANDLE("File locking deadlock error", 2482), Src_errnoh, AS_OS_LINUX },
  /*117*/ { (uint32_t)58, "ESHUTDOWN", AS_DESCR_HANDLE("Can't send after socket shutdown", 2510), Src_errnoh, AS_OS_MAC },
  /*118*/ { (uint32_t)58, "EOWNERDEAD", AS_DESCR_HANDLE("process died with the lock", 2543), Src_errnoh, AS_OS_SOLARIS },
  /*119*/ { (uint32_t)59, "EBFONT", AS_DESCR_HANDLE("Bad font file format", 2570), Src_errnoh, AS_OS_LINUX },
  /*120*/ { (uint32_t)59, "ETOOMANYREFS", AS_DESCR_HANDLE("Too many references: can't splice", 2591), Src_errnoh, AS_OS_MAC },
  /*121*/ { (uint32_t)59, "ENOTRECOVERABLE", AS_DESCR_HANDLE("lock is not recoverable", 2625), Src_errnoh, AS_OS_SOLARIS },
  /*122*/ { (uint32_t)60, "ENOSTR", AS_DESCR_HANDLE("Device not a stream", 2649), Src_errnoh, AS_OS_LINUX },
  /*123*/ { (uint32_t)60, "ETIMEDOUT", AS_DESCR_HANDLE("Operation timed out", 2669), Src_errnoh, AS_OS_MAC },
  /*124*/ { (uint32_t)60, "ENOSTR", AS_DESCR_HANDLE("Device not a stream", 2689), Src_errnoh, AS_OS_SOLARIS },
  /*125*/ { (uint32_t)61, "ENODATA", AS_DESCR_HANDLE("no data (for no delay io)", 2709), Src_errnoh, AS_OS_LINUX },
  /*126*/ { (uint32_t)61, "ECONNREFUSED", AS_DESCR_HANDLE("Connection refused", 2735), Src_errnoh, AS_OS_MAC },
  /*127*/ { (uint32_t)61, "ENODATA", AS_DESCR_HANDLE("no data (for no delay io)", 2754), Src_errnoh, AS_OS_SOLARIS },
  /*128*/ { (uint32_t)62, "ETIME", AS_DESCR_HANDLE("Timer expired", 2780), Src_errnoh, AS_OS_LINUX },
  /*129*/ { (uint32_t)62, "ELOOP", AS_DESCR_HANDLE("Too many levels of symbolic links", 2794), Src_errnoh, AS_OS_MAC },
  /*130*/ { (uint32_t)62, "ETIME", AS_DESCR_HANDLE("timer expired", 2828), Src_errnoh, AS_OS_SOLARIS },
  /*131*/ { (uint32_t)63, "ENOSR", AS_DESCR_HANDLE("Out of streams resources", 2842), Src_errnoh, AS_OS_LINUX },
  /*132*/ { (uint32_t)63, "ENAMETOOLONG", AS_DESCR_HANDLE("File name too long", 2867), Src_errnoh, AS_OS_MAC },
  /*133*/ { (uint32_t)63, "ENOSR", AS_DESCR_HANDLE("out of streams resources", 2886), Src_errnoh, AS_OS_SOLARIS },
  /*134*/ { (uint32_t)64, "ENONET", AS_DESCR_HANDLE("Machine is not on the network", 2911), Src_errnoh, AS_OS_LINUX },
  /*135*/ { (uint32_t)64, "EHOSTDOWN", AS_DESCR_HANDLE("Host is down", 2941), Src_errnoh, AS_OS_MAC },
  /*136*/ { (uint32_t)64, "ENONET", AS_DESCR_HANDLE("Machine is not on the network", 2954), Src_errnoh, AS_OS_SOLARIS },
  /*137*/ { (uint32_t)65, "ENOPKG", AS_DESCR_HANDLE("Package not installed", 2984), Src_errnoh, AS_OS_LINUX },
  /*138*/ { (uint32_t)65, "EHOSTUNREACH", AS_DESCR_HANDLE("No route to host", 3006), Src_errnoh, AS_OS_MAC },
  /*139*/ { (uint32_t)65, "ENOPKG", AS_DESCR_HANDLE("Package not installed", 3023), Src_errnoh, AS_OS_SOLARIS },
  /*140*/ { (uint32_t)66, "EREMOTE", AS_DESCR_HANDLE("Object is remote", 3045), Src_errnoh, AS_OS_LINUX },
  /*141*/ { (uint32_t)66, "ENOTEMPTY", AS_DESCR_HANDLE("Directory not empty", 3062), Src_errnoh, AS_OS_MAC },
  /*142*/ { (uint32_t)66, "EREMOTE", AS_DESCR_HANDLE("The object is remote", 3082), Src_errnoh, AS_OS_SOLARIS },
  /*143*/ { (uint32_t)67, "ENOLINK", AS_DESCR_HANDLE("the link has been severed", 3103), Src_errnoh, AS_OS_LINUX },
  /*144*/ { (uint32_t)67, "EPROCLIM", AS_DESCR_HANDLE("Too many processes", 3129), Src_errnoh, AS_OS_MAC },
  /*145*/ { (uint32_t)67, "ENOLINK", AS_DESCR_HANDLE("the link has been severed", 3148), Src_errnoh, AS_OS_SOLARIS },
  /*146*/ { (uint32_t)68, "EADV", AS_DESCR_HANDLE("Advertise error", 3174), Src_errnoh, AS_OS_LINUX },
  /*147*/ { (uint32_t)68, "EUSERS", AS_DESCR_HANDLE("Too many users", 3190), Src_errnoh, AS_OS_MAC },
  /*148*/ { (uint32_t)68, "EADV", AS_DESCR_HANDLE("advertise error", 3205), Src_errnoh, AS_OS_SOLARIS },
  /*149*/ { (uint32_t)69, "ESRMNT", AS_DESCR_HANDLE("Srmount error", 3221), Src_errnoh, AS_OS_LINUX },
  /*150*/ { (uint32_t)69, "EDQUOT", AS_DESCR_HANDLE("Disc quota exceeded", 3235), Src_errnoh, AS_OS_MAC },
  /*151*/ { (uint32_t)69, "ESRMNT", AS_DESCR_HANDLE("srmount error", 3255), Src_errnoh, AS_OS_SOLARIS },
  /*152*/ { (uint32_t)70, "ECOMM", AS_DESCR_HANDLE("Communication error on send", 3269), Src_errnoh, AS_OS_LINUX },
  /*153*/ { (uint32_t)70, "ESTALE", AS_DESCR_HANDLE("Stale NFS file handle", 3297), Src_errnoh, AS_OS_MAC },
  /*154*/ { (uint32_t)70, "ECOMM", AS_DESCR_HANDLE("Communication error on send", 3319), Src_errnoh, AS_OS_SOLARIS },
  /*155*/ { (uint32_t)71, "EPROTO", AS_DESCR_HANDLE("Protocol error", 3347), Src_errnoh, AS_OS_LINUX },
  /*156*/ { (uint32_t)71, "EREMOTE", AS_DESCR_HANDLE("Too many levels of remote in path", 3362), Src_errnoh, AS_OS_MAC },
  /*157*/ { (uint32_t)71, "EPROTO", AS_DESCR_HANDLE("Protocol error", 3396), Src_errnoh, AS_OS_SOLARIS },
  /*158*/ { (uint32_t)72, "EMULTIHOP", AS_DESCR_HANDLE("Multihop attempted", 3411), Src_errnoh, AS_OS_LINUX },
  /*159*/ { (uint32_t)72, "EBADRPC", AS_DESCR_HANDLE("RPC struct is bad", 3430), Src_errnoh, AS_OS_MAC },
  /*160*/ { (uint32_t)72, "ELOCKUNMAPPED", AS_DESCR_HANDLE("locked lock was unmapped", 3448), Src_errnoh, AS_OS_SOLARIS },
  /*161*/ { (uint32_t)73, "EDOTDOT", AS_DESCR_HANDLE("RFS specific error", 3473), Src_errnoh, AS_OS_LINUX },
  /*162*/ { (uint32_t)73, "ERPCMISMATCH", AS_DESCR_HANDLE("RPC version wrong", 3492), Src_errnoh, AS_OS_MAC },
  /*163*/ { (uint32_t)73, "ENOTACTIVE", AS_DESCR_HANDLE("Facility is not active", 3510), Src_errnoh, AS_OS_SOLARIS },
  /*164*/ { (uint32_t)74, "EBADMSG", AS_DESCR_HANDLE("Not a data message", 3533), Src_errnoh, AS_OS_LINUX },
  /*165*/ { (uint32_t)74, "EPROGUNAVAIL", AS_DESCR_HANDLE("RPC prog. not avail", 3552), Src_errnoh, AS_OS_MAC },
  /*166*/ { (uint32_t)74, "EMULTIHOP", AS_DESCR_HANDLE("multihop attempted", 3572), Src_errnoh, AS_OS_SOLARIS },
  /*167*/ { (uint32_t)75, "EOVERFLOW", AS_DESCR_HANDLE("Value too large for defined data type", 3591), Src_errnoh, AS_OS_LINUX },
  /*168*/ { (uint32_t)75, "EPROGMISMATCH", AS_DESCR_HANDLE("Program version wrong", 3629), Src_errnoh, AS_OS_MAC },
  /*169*/ { (uint32_t)76, "ENOTUNIQ", AS_DESCR_HANDLE("Name not unique on network", 3651), Src_errnoh, AS_OS_LINUX },
  /*170*/ { (uint32_t)76, "EPROCUNAVAIL", AS_DESCR_HANDLE("Bad procedure for program", 3678), Src_errnoh, AS_OS_MAC },
  /*171*/ { (uint32_t)77, "EBADFD", AS_DESCR_HANDLE("File descriptor in bad state", 3704), Src_errnoh, AS_OS_LINUX },
  /*172*/ { (uint32_t)77, "ENOLCK", AS_DESCR_HANDLE("No locks available", 3733), Src_errnoh, AS_OS_MAC },
  /*173*/ { (uint32_t)77, "EBADMSG", AS_DESCR_HANDLE("trying to read unreadable message", 3752), Src_errnoh, AS_OS_SOLARIS },
  /*174*/ { (uint32_t)78, "EREMCHG", AS_DESCR_HANDLE("Remote address changed", 3786), Src_errnoh, AS_OS_LINUX },
  /*175*/ { (uint32_t)78, "ENOSYS", AS_DESCR_HANDLE("Function not implemented", 3809), Src_errnoh, AS_OS_MAC },
  /*176*/ { (uint32_t)78, "ENAMETOOLONG", AS_DESCR_HANDLE("path name is too long", 3834), Src_errnoh, AS_OS_SOLARIS },
  /*177*/ { (uint32_t)79, "ELIBACC", AS_DESCR_HANDLE("Can not access a needed shared library", 3856), Src_errnoh, AS_OS_LINUX },
  /*178*/ { (uint32_t)79, "EFTYPE", AS_DESCR_HANDLE("Inappropriate file type or format", 3895), Src_errnoh, AS_OS_MAC },
  /*179*/ { (uint32_t)79, "EOVERFLOW", AS_DESCR_HANDLE("value too large to be stored in data type", 3929), Src_errnoh, AS_OS_SOLARIS },
  /*180*/ { (uint32_t)80, "ELIBBAD", AS_DESCR_HANDLE("Accessing a corrupted shared library", 3971), Src_errnoh, AS_OS_LINUX },
  /*181*/ { (uint32_t)80, "EAUTH", AS_DESCR_HANDLE("Authentication error", 4008), Src_errnoh, AS_OS_MAC },
  /*182*/ { (uint32_t)80, "ENOTUNIQ", AS_DESCR_HANDLE("given log. name not unique", 4029), Src_errnoh, AS_OS_SOLARIS },
  /*183*/ { (uint32_t)81, "ELIBSCN", AS_DESCR_HANDLE(".lib section in a.out corrupted", 4056), Src_errnoh, AS_OS_LINUX },
  /*184*/ { (uint32_t)81, "ENEEDAUTH", AS_DESCR_HANDLE("Need authenticator", 4088), Src_errnoh, AS_OS_MAC },
  /*185*/ { (uint32_t)81, "EBADFD", AS_DESCR_HANDLE("f.d. invalid for this operation", 4107), Src_errnoh, AS_OS_SOLARIS },
  /*186*/ { (uint32_t)82, "ELIBMAX", AS_DESCR_HANDLE("Attempting to link in too many shared libraries", 4139), Src_errnoh, AS_OS_LINUX },
  /*187*/ { (uint32_t)82, "EPWROFF", AS_DESCR_HANDLE("Device power is off", 4187), Src_errnoh, AS_OS_MAC },
  /*188*/ { (uint32_t)82, "EREMCHG", AS_DESCR_HANDLE("Remote address changed", 4207), Src_errnoh, AS_OS_SOLARIS },
  /*189*/ { (uint32_t)83, "ELIBEXEC", AS_DESCR_HANDLE("Cannot exec a shared library directly", 4230), Src_errnoh, AS_OS_LINUX },
  /*190*/ { (uint32_t)83, "EDEVERR", AS_DESCR_HANDLE("Device error, e.g. paper out", 4268), Src_errnoh, AS_OS_MAC },
  /*191*/ { (uint32_t)83, "ELIBACC", AS_DESCR_HANDLE("Can't access a needed shared lib.", 4297), Src_errnoh, AS_OS_SOLARIS },
  /*192*/ { (uint32_t)84, "EILSEQ", AS_DESCR_HANDLE("Illegal byte sequence", 4331), Src_errnoh, AS_OS_LINUX },
  /*193*/ { (uint32_t)84, "EOVERFLOW", AS_DESCR_HANDLE("Value too large to be stored in data type", 4353), Src_errnoh, AS_OS_MAC },
  /*194*/ { (uint32_t)84, "ELIBBAD", AS_DESCR_HANDLE("Accessing a corrupted shared lib.", 4395), Src_errnoh, AS_OS_SOLARIS },
  /*195*/ { (uint32_t)85, "ERESTART", AS_DESCR_HANDLE("Interrupted system call should be restarted", 4429), Src_errnoh, AS_OS_LINUX },
  /*196*/ { (uint32_t)85, "EBADEXEC", AS_DESCR_HANDLE("Bad executable", 4473), Src_errnoh, AS_OS_MAC },
  /*197*/ { (uint32_t)85, "ELIBSCN", AS_DESCR_HANDLE(".lib section in a.out corrupted.", 4488), Src_errnoh, AS_OS_SOLARIS },
  /*198*/ { (uint32_t)86, "ESTRPIPE", AS_DESCR_HANDLE("Streams pipe error", 4521), Src_errnoh, AS_OS_LINUX },
  /*199*/ { (uint32_t)86, "EBADARCH", AS_DESCR_HANDLE("Bad CPU type in executable", 4540), Src_errnoh, AS_OS_MAC },
  /*200*/ { (uint32_t)86, "ELIBMAX", AS_DESCR_HANDLE("Attempting to link in too many libs.", 4567), Src_errnoh, AS_OS_SOLARIS },
  /*201*/ { (uint32_t)87, "EUSERS", AS_DESCR_HANDLE("Too many users", 4604), Src_errnoh, AS_OS_LINUX },
  /*202*/ { (uint32_t)87, "ESHLIBVERS", AS_DESCR_HANDLE("Shared library version mismatch", 4619), Src_errnoh, AS_OS_MAC },
  /*203*/ { (uint32_t)87, "ELIBEXEC", AS_DESCR_HANDLE("Attempting to exec a shared library.", 4651), Src_errnoh, AS_OS_SOLARIS },
  /*204*/ { (uint32_t)88, "ENOTSOCK", AS_DESCR_HANDLE("Socket operation on non-socket", 4688), Src_errnoh, AS_OS_LINUX },
  /*205*/ { (uint32_t)88, "EBADMACHO", AS_DESCR_HANDLE("Malformed Macho file", 4719), Src_errnoh, AS_OS_MAC },
  /*206*/ { (uint32_t)88, "EILSEQ", AS_DESCR_HANDLE("Illegal byte sequence.", 4740), Src_errnoh, AS_OS_SOLARIS },
  /*207*/ { (uint32_t)89, "EDESTADDRREQ", AS_DESCR_HANDLE("Destination address required", 4763), Src_errnoh, AS_OS_LINUX },
  /*208*/ { (uint32_t)89, "ECANCELED", AS_DESCR_HANDLE("Operation canceled", 4792), Src_errnoh, AS_OS_MAC },
  /*209*/ { (uint32_t)89, "ENOSYS", AS_DESCR_HANDLE("Unsupported file system operation", 4811), Src_errnoh, AS_OS_SOLARIS },
  /*210*/ { (uint32_t)90, "EMSGSIZE", AS_DESCR_HANDLE("Message too long", 4845), Src_errnoh, AS_OS_LINUX },
  /*211*/ { (uint32_t)90, "EIDRM", AS_DESCR_HANDLE("Identifier removed", 4862), Src_errnoh, AS_OS_MAC },
  /*212*/ { (uint32_t)90, "ELOOP", AS_DESCR_HANDLE("Symbolic link loop", 4881), Src_errnoh, AS_OS_SOLARIS },
  /*213*/ { (uint32_t)91, "EPROTOTYPE", AS_DESCR_HANDLE("Protocol wrong type for socket", 4900), Src_errnoh, AS_OS_LINUX },
  /*214*/ { (uint32_t)91, "ENOMSG", AS_DESCR_HANDLE("No message of desired type", 4931), Src_errnoh, AS_OS_MAC },
  /*215*/ { (uint32_t)91, "ERESTART", AS_DESCR_HANDLE("Restartable system call", 4958), Src_errnoh, AS_OS_SOLARIS },
  /*216*/ { (uint32_t)92, "ENOPROTOOPT", AS_DESCR_HANDLE("Protocol not available", 4982), Src_errnoh, AS_OS_LINUX },
  /*217*/ { (uint32_t)92, "EILSEQ", AS_DESCR_HANDLE("Illegal byte sequence", 5005), Src_errnoh, AS_OS_MAC },
  /*218*/ { (uint32_t)92, "ESTRPIPE", AS_DESCR_HANDLE("if pipe/FIFO, don't sleep in stream head", 5027), Src_errnoh, AS_OS_SOLARIS },
  /*219*/ { (uint32_t)93, "EPROTONOSUPPORT", AS_DESCR_HANDLE("Protocol not supported", 5068), Src_errnoh, AS_OS_LINUX },
  /*220*/ { (uint32_t)93, "ENOATTR", AS_DESCR_HANDLE("Attribute not found", 5091), Src_errnoh, AS_OS_MAC },
  /*221*/ { (uint32_t)93, "ENOTEMPTY", AS_DESCR_HANDLE("directory not empty", 5111), Src_errnoh, AS_OS_SOLARIS },
  /*222*/ { (uint32_t)94, "ESOCKTNOSUPPORT", AS_DESCR_HANDLE("Socket type not supported", 5131), Src_errnoh, AS_OS_LINUX },
  /*223*/ { (uint32_t)94, "EBADMSG", AS_DESCR_HANDLE("Bad message", 5157), Src_errnoh, AS_OS_MAC },
  /*224*/ { (uint32_t)94, "EUSERS", AS_DESCR_HANDLE("Too many users (for UFS)", 5169), Src_errnoh, AS_OS_SOLARIS },
  /*225*/ { (uint32_t)95, "EOPNOTSUPP", AS_DESCR_HANDLE("Operation not supported on transport endpoint", 5194), Src_errnoh, AS_OS_LINUX },
  /*226*/ { (uint32_t)95, "EMULTIHOP", AS_DESCR_HANDLE("Reserved", 5240), Src_errnoh, AS_OS_MAC },
  /*227*/ { (uint32_t)95, "ENOTSOCK", AS_DESCR_HANDLE("Socket operation on non-socket", 5249), Src_errnoh, AS_OS_SOLARIS },
  /*228*/ { (uint32_t)96, "EPFNOSUPPORT", AS_DESCR_HANDLE("Protocol family not supported", 5280), Src_errnoh, AS_OS_LINUX },
  /*229*/ { (uint32_t)96, "ENODATA", AS_DESCR_HANDLE("No message available on STREAM", 5310), Src_errnoh, AS_OS_MAC },
  /*230*/ { (uint32_t)96, "EDESTADDRREQ", AS_DESCR_HANDLE("Destination address required", 5341), Src_errnoh, AS_OS_SOLARIS },
  /*231*/ { (uint32_t)97, "EAFNOSUPPORT", AS_DESCR_HANDLE("Address family not supported by protocol", 5370), Src_errnoh, AS_OS_LINUX },
  /*232*/ { (uint32_t)97, "ENOLINK", AS_DESCR_HANDLE("Reserved", 5411), Src_errnoh, AS_OS_MAC },
  /*233*/ { (uint32_t)97, "EMSGSIZE", AS_DESCR_HANDLE("Message too long", 5420), Src_errnoh, AS_OS_SOLARIS },
  /*234*/ { (uint32_t)98, "EADDRINUSE", AS_DESCR_HANDLE("Address already in use", 5437), Src_errnoh, AS_OS_LINUX },
  /*235*/ { (uint32_t)98, "ENOSR", AS_DESCR_HANDLE("No STREAM resources", 5460), Src_errnoh, AS_OS_MAC },
  /*236*/ { (uint32_t)98, "EPROTOTYPE", AS_DESCR_HANDLE("Protocol wrong type for socket", 5480), Src_errnoh, AS_OS_SOLARIS },
  /*237*/ { (uint32_t)99, "EADDRNOTAVAIL", AS_DESCR_HANDLE("Cannot assign requested address", 5511), Src_errnoh, AS_OS_LINUX },
  /*238*/ { (uint32_t)99, "ENOSTR", AS_DESCR_HANDLE("Not a STREAM", 5543), Src_errnoh, AS_OS_MAC },
  /*239*/ { (uint32_t)99, "ENOPROTOOPT", AS_DESCR_HANDLE("Protocol not available", 5556), Src_errnoh, AS_OS_SOLARIS },
  /*240*/ { (uint32_t)100, "ENETDOWN", AS_DESCR_HANDLE("Network is down", 5579), Src_errnoh, AS_OS_LINUX },
  /*241*/ { (uint32_t)100, "EPROTO", AS_DESCR_HANDLE("Protocol error", 5595), Src_errnoh, AS_OS_MAC },
  /*242*/ { (uint32_t)100, "EADDRINUSE", AS_DESCR_HANDLE("", 5610), Src_errnoh, AS_OS_WINDOWS },
  /*243*/ { (uint32_t)101, "ENETUNREACH", AS_DESCR_HANDLE("Network is unreachable", 5611), Src_errnoh, AS_OS_LINUX },
  /*244*/ { (uint32_t)101, "ETIME", AS_DESCR_HANDLE("STREAM ioctl timeout", 5634), Src_errnoh, AS_OS_MAC },
  /*245*/ { (uint32_t)101, "EADDRNOTAVAIL", AS_DESCR_HANDLE("", 5655), Src_errnoh, AS_OS_WINDOWS },
  /*246*/ { (uint32_t)102, "ENETRESET", AS_DESCR_HANDLE("Network dropped connection because of reset", 5656), Src_errnoh, AS_OS_LINUX },
  /*247*/ { (uint32_t)102, "EOPNOTSUPP", AS_DESCR_HANDLE("Operation not supported on socket", 5700), Src_errnoh, AS_OS_MAC },
  /*248*/ { (uint32_t)102, "EAFNOSUPPORT", AS_DESCR_HANDLE("", 5734), Src_errnoh, AS_OS_WINDOWS },
  /*249*/ { (uint32_t)103, "ECONNABORTED", AS_DESCR_HANDLE("Software caused connection abort", 5735), Src_errnoh, AS_OS_LINUX },
  /*250*/ { (uint32_t)103, "ENOPOLICY", AS_DESCR_HANDLE("No such policy registered", 5768), Src_errnoh, AS_OS_MAC },
  /*251*/ { (uint32_t)103, "EALREADY", AS_DESCR_HANDLE("", 5794), Src_errnoh, AS_OS_WINDOWS },
  /*252*/ { (uint32_t)104, "ECONNRESET", AS_DESCR_HANDLE("Connection reset by peer", 5795), Src_errnoh, AS_OS_LINUX },
  /*253*/ { (uint32_t)104, "ENOTRECOVERABLE", AS_DESCR_HANDLE("State not recoverable", 5820), Src_errnoh, AS_OS_MAC },
  /*254*/ { (uint32_t)104, "EBADMSG", AS_DESCR_HANDLE("", 5842), Src_errnoh, AS_OS_WINDOWS },
  /*255*/ { (uint32_t)105, "ENOBUFS", AS_DESCR_HANDLE("No buffer space available", 5843), Src_errnoh, AS_OS_LINUX },
  /*256*/ { (uint32_t)105, "EOWNERDEAD", AS_DESCR_HANDLE("Previous owner died", 5869), Src_errnoh, AS_OS_MAC },
  /*257*/ { (uint32_t)105, "ECANCELED", AS_DESCR_HANDLE("", 5889), Src_errnoh, AS_OS_WINDOWS },
  /*258*/ { (uint32_t)106, "EISCONN", AS_DESCR_HANDLE("Transport endpoint is already connected", 5890), Src_errnoh, AS_OS_LINUX },
  /*259*/ { (uint32_t)106, "EQFULL", AS_DESCR_HANDLE("Interface output queue is full", 5930), Src_errnoh, AS_OS_MAC },
  /*260*/ { (uint32_t)106, "ELAST", AS_DESCR_HANDLE("Must be equal largest errno", 5961), Src_errnoh, AS_OS_MAC },
  /*261*/ { (uint32_t)106, "ECONNABORTED", AS_DESCR_HANDLE("", 5989), Src_errnoh, AS_OS_WINDOWS },
  /*262*/ { (uint32_t)107, "ENOTCONN", AS_DESCR_HANDLE("Transport endpoint is not connected", 5990), Src_errnoh, AS_OS_LINUX },
  /*263*/ { (uint32_t)107, "ECONNREFUSED", AS_DESCR_HANDLE("", 6026), Src_errnoh, AS_OS_WINDOWS },
  /*264*/ { (uint32_t)108, "ESHUTDOWN", AS_DESCR_HANDLE("Cannot send after transport endpoint shutdown", 6027), Src_errnoh, AS_OS_LINUX },
  /*265*/ { (uint32_t)108, "ECONNRESET", AS_DESCR_HANDLE("", 6073), Src_errnoh, AS_OS_WINDOWS },
  /*266*/ { (uint32_t)109, "ETOOMANYREFS", AS_DESCR_HANDLE("Too many references: cannot splice", 6074), Src_errnoh, AS_OS_LINUX },
  /*267*/ { (uint32_t)109, "EDESTADDRREQ", AS_DESCR_HANDLE("", 6109), Src_errnoh, AS_OS_WINDOWS },
  /*268*/ { (uint32_t)110, "ETIMEDOUT", AS_DESCR_HANDLE("Connection timed out", 6110), Src_errnoh, AS_OS_LINUX },
  /*269*/ { (uint32_t)110, "EHOSTUNREACH", AS_DESCR_HANDLE("", 6131), Src_errnoh, AS_OS_WINDOWS },
  /*270*/ { (uint32_t)111, "ECONNREFUSED", AS_DESCR_HANDLE("Connection refused", 6132), Src_errnoh, AS_OS_LINUX },
  /*271*/ { (uint32_t)111, "EIDRM", AS_DESCR_HANDLE("", 6151), Src_errnoh, AS_OS_WINDOWS },
  /*272*/ { (uint32_t)112, "EHOSTDOWN", AS_DESCR_HANDLE("Host is down", 6152), Src_errnoh, AS_OS_LINUX },
  /*273*/ { (uint32_t)112, "EINPROGRESS", AS_DESCR_HANDLE("", 6165), Src_errnoh, AS_OS_WINDOWS },
  /*274*/ { (uint32_t)113, "EHOSTUNREACH", AS_DESCR_HANDLE("No route to host", 6166), Src_errnoh, AS_OS_LINUX },
  /*275*/ { (uint32_t)113, "EISCONN", AS_DESCR_HANDLE("", 6183), Src_errnoh, AS_OS_WINDOWS },
  /*276*/ { (uint32_t)114, "EALREADY", AS_DESCR_HANDLE("Operation already in progress", 6184), Src_errnoh, AS_OS_LINUX },
  /*277*/ { (uint32_t)114, "ELOOP", AS_DESCR_HANDLE("", 6214), Src_errnoh, AS_OS_WINDOWS },
  /*278*/ { (uint32_t)115, "EINPROGRESS", AS_DESCR_HANDLE("Operation now in progress", 6215), Src_errnoh, AS_OS_LINUX },
  /*279*/ { (uint32_t)115, "EMSGSIZE", AS_DESCR_HANDLE("", 6241), Src_errnoh, AS_OS_WINDOWS },
  /*280*/ { (uint32_t)116, "ESTALE", AS_DESCR_HANDLE("Stale NFS file handle", 6242), Src_errnoh, AS_OS_LINUX },
  /*281*/ { (uint32_t)116, "ENETDOWN", AS_DESCR_HANDLE("", 6264), Src_errnoh, AS_OS_WINDOWS },
  /*282*/ { (uint32_t)117, "EUCLEAN", AS_DESCR_HANDLE("Structure needs cleaning", 6265), Src_errnoh, AS_OS_LINUX },
  /*283*/ { (uint32_t)117, "ENETRESET", AS_DESCR_HANDLE("", 6290), Src_errnoh, AS_OS_WINDOWS },
  /*284*/ { (uint32_t)118, "ENOTNAM", AS_DESCR_HANDLE("Not a XENIX named type file", 6291), Src_errnoh, AS_OS_LINUX },
  /*285*/ { (uint32_t)118, "ENETUNREACH", AS_DESCR_HANDLE("", 6319), Src_errnoh, AS_OS_WINDOWS },
  /*286*/ { (uint32_t)119, "ENAVAIL", AS_DESCR_HANDLE("No XENIX semaphores available", 6320), Src_errnoh, AS_OS_LINUX },
  /*287*/ { (uint32_t)119, "ENOBUFS", AS_DESCR_HANDLE("", 6350), Src_errnoh, AS_OS_WINDOWS },
  /*288*/ { (uint32_t)120, "EISNAM", AS_DESCR_HANDLE("Is a named type file", 6351), Src_errnoh, AS_OS_LINUX },
  /*289*/ { (uint32_t)120, "EPROTONOSUPPORT", AS_DESCR_HANDLE("Protocol not supported", 6372), Src_errnoh, AS_OS_SOLARIS },
  /*290*/ { (uint32_t)120, "ENODATA", AS_DESCR_HANDLE("", 6395), Src_errnoh, AS_OS_WINDOWS },
  /*291*/ { (uint32_t)121, "EREMOTEIO", AS_DESCR_HANDLE("Remote I/O error", 6396), Src_errnoh, AS_OS_LINUX },
  /*292*/ { (uint32_t)121, "ESOCKTNOSUPPORT", AS_DESCR_HANDLE("Socket type not supported", 6413), Src_errnoh, AS_OS_SOLARIS },
  /*293*/ { (uint32_t)121, "ENOLINK", AS_DESCR_HANDLE("", 6439), Src_errnoh, AS_OS_WINDOWS },
  /*294*/ { (uint32_t)122, "EOPNOTSUPP", AS_DESCR_HANDLE("Operation not supported on socket", 6440), Src_errnoh, AS_OS_SOLARIS },
  /*295*/ { (uint32_t)122, "ENOMSG", AS_DESCR_HANDLE("", 6474), Src_errnoh, AS_OS_WINDOWS },
  /*296*/ { (uint32_t)123, "EPFNOSUPPORT", AS_DESCR_HANDLE("Protocol family not supported", 6475), Src_errnoh, AS_OS_SOLARIS },
  /*297*/ { (uint32_t)123, "ENOPROTOOPT", AS_DESCR_HANDLE("", 6505), Src_errnoh, AS_OS_WINDOWS },
  /*298*/ { (uint32_t)124, "EAFNOSUPPORT", AS_DESCR_HANDLE("Address family not supported by", 6506), Src_errnoh, AS_OS_SOLARIS },
  /*299*/ { (uint32_t)124, "ENOSR", AS_DESCR_HANDLE("", 6538), Src_errnoh, AS_OS_WINDOWS },
  /*300*/ { (uint32_t)125, "EADDRINUSE", AS_DESCR_HANDLE("Address already in use", 6539), Src_errnoh, AS_OS_SOLARIS },
  /*301*/ { (uint32_t)125, "ENOSTR", AS_DESCR_HANDLE("", 6562), Src_errnoh, AS_OS_WINDOWS },
  /*302*/ { (uint32_t)126, "EADDRNOTAVAIL", AS_DESCR_HANDLE("Can't assign requested address", 6563), Src_errnoh, AS_OS_SOLARIS },
  /*303*/ { (uint32_t)126, "ENOTCONN", AS_DESCR_HANDLE("", 6594), Src_errnoh, AS_OS_WINDOWS },
  /*304*/ { (uint32_t)127, "ENETDOWN", AS_DESCR_HANDLE("Network is down", 6595), Src_errnoh, AS_OS_SOLARIS },
  /*305*/ { (uint32_t)127, "ENOTRECOVERABLE", AS_DESCR_HANDLE("", 6611), Src_errnoh, AS_OS_WINDOWS },
  /*306*/ { (uint32_t)128, "ENETUNREACH", AS_DESCR_HANDLE("Network is unreachable", 6612), Src_errnoh, AS_OS_SOLARIS },
  /*307*/ { (uint32_t)128, "ENOTSOCK", AS_DESCR_HANDLE("", 6635), Src_errnoh, AS_OS_WINDOWS },
  /*308*/ { (uint32_t)129, "ENETRESET", AS_DESCR_HANDLE("Network dropped connection because", 6636), Src_errnoh, AS_OS_SOLARIS },
  /*309*/ { (uint32_t)129, "ENOTSUP", AS_DESCR_HANDLE("", 6671), Src_errnoh, AS_OS_WINDOWS },
  /*310*/ { (uint32_t)130, "ECONNABORTED", AS_DESCR_HANDLE("Software caused connection abort", 6672), Src_errnoh, AS_OS_SOLARIS },
  /*311*/ { (uint32_t)130, "EOPNOTSUPP", AS_DESCR_HANDLE("", 6705), Src_errnoh, AS_OS_WINDOWS },
  /*312*/ { (uint32_t)131, "ECONNRESET", AS_DESCR_HANDLE("Connection reset by peer", 6706), Src_errnoh, AS_OS_SOLARIS },
  /*313*/ { (uint32_t)131, "EOTHER", AS_DESCR_HANDLE("", 6731), Src_errnoh, AS_OS_WINDOWS },
  /*314*/ { (uint32_t)132, "ENOBUFS", AS_DESCR_HANDLE("No buffer space available", 6732), Src_errnoh, AS_OS_SOLARIS },
  /*315*/ { (uint32_t)132, "EOVERFLOW", AS_DESCR_HANDLE("", 6758), Src_errnoh, AS_OS_WINDOWS },
  /*316*/ { (uint32_t)133, "EISCONN", AS_DESCR_HANDLE("Socket is already connected", 6759), Src_errnoh, AS_OS_SOLARIS },
  /*317*/ { (uint32_t)133, "EOWNERDEAD", AS_DESCR_HANDLE("", 6787), Src_errnoh, AS_OS_WINDOWS },
  /*318*/ { (uint32_t)134, "ENOTCONN", AS_DESCR_HANDLE("Socket is not connected", 6788), Src_errnoh, AS_OS_SOLARIS },
  /*319*/ { (uint32_t)134, "EPROTO", AS_DESCR_HANDLE("", 6812), Src_errnoh, AS_OS_WINDOWS },
  /*320*/ { (uint32_t)135, "EPROTONOSUPPORT", AS_DESCR_HANDLE("", 6813), Src_errnoh, AS_OS_WINDOWS },
  /*321*/ { (uint32_t)136, "EPROTOTYPE", AS_DESCR_HANDLE("", 6814), Src_errnoh, AS_OS_WINDOWS },
  /*322*/ { (uint32_t)137, "ETIME", AS_DESCR_HANDLE("", 6815), Src_errnoh, AS_OS_WINDOWS },
  /*323*/ { (uint32_t)138, "ETIMEDOUT", AS_DESCR_HANDLE("", 6816), Src_errnoh, AS_OS_WINDOWS },
  /*324*/ { (uint32_t)139, "ETXTBSY", AS_DESCR_HANDLE("", 6817), Src_errnoh, AS_OS_WINDOWS },
  /*325*/ { (uint32_t)140, "EWOULDBLOCK", AS_DESCR_HANDLE("", 6818), Src_errnoh, AS_OS_WINDOWS },
  /*326*/ { (uint32_t)143, "ESHUTDOWN", AS_DESCR_HANDLE("Can't send after socket shutdown", 6819), Src_errnoh, AS_OS_SOLARIS },
  /*327*/ { (uint32_t)144, "ETOOMANYREFS", AS_DESCR_HANDLE("Too many references: can't splice", 6852), Src_errnoh, AS_OS_SOLARIS },
  /*328*/ { (uint32_t)145, "ETIMEDOUT", AS_DESCR_HANDLE("Connection timed out", 6886), Src_errnoh, AS_OS_SOLARIS },
  /*329*/ { (uint32_t)146, "ECONNREFUSED", AS_DESCR_HANDLE("Connection refused", 6907), Src_errnoh, AS_OS_SOLARIS },
  /*330*/ { (uint32_t)147, "EHOSTDOWN", AS_DESCR_HANDLE("Host is down", 6926), Src_errnoh, AS_OS_SOLARIS },
  /*331*/ { (uint32_t)148, "EHOSTUNREACH", AS_DESCR_HANDLE("No route to host", 6939), Src_errnoh, AS_OS_SOLARIS },
  /*332*/ { (uint32_t)149, "EALREADY", AS_DESCR_HANDLE("operation already in progress", 6956), Src_errnoh, AS_OS_SOLARIS },
  /*333*/ { (uint32_t)150, "EINPROGRESS", AS_DESCR_HANDLE("operation now in progress", 6986), Src_errnoh, AS_OS_SOLARIS },
  /*334*/ { (uint32_t)151, "ESTALE", AS_DESCR_HANDLE("Stale NFS file handle", 7012), Src_errnoh, AS_OS_SOLARIS },
  /*335*/ { (uint32_t)256, "ECVCERORR", AS_DESCR_HANDLE("", 7034), Src_errnoh, AS_OS_MAC },
  /*336*/ { (uint32_t)512, "ERESTARTSYS", AS_DESCR_HANDLE("", 7035), Src_errnoh, AS_OS_LINUX },
  /*337*/ { (uint32_t)512, "ECVPERORR", AS_DESCR_HANDLE("", 7036), Src_errnoh, AS_OS_MAC },
  /*338*/ { (uint32_t)513, "ERESTARTNOINTR", AS_DESCR_HANDLE("", 7037), Src_errnoh, AS_OS_LINUX },
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

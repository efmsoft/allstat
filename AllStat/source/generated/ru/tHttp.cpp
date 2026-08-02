#include "../../AllStatDefs.h"

#ifndef AS_BUILD_AS_HTTP
#ifdef AS_CUSTOM_BUILD
#define AS_BUILD_AS_HTTP  0
#else
#define AS_BUILD_AS_HTTP  1
#endif
#endif

#if AS_BUILD_AS_HTTP
using namespace AllStat;

#ifndef __clang__
#pragma optimize("", off)
#endif

static const char* Src_ = "";
static const char* Src_ApacheWebServer = "Apache Web Server";
static const char* Src_LaravelFramework = "Laravel Framework";
static const char* Src_SpringFramework = "Spring Framework";
static const char* Src_Twitter = "Twitter";
static const char* Src_Shopify = "Shopify";
static const char* Src_IIS = "IIS";
static const char* Src_nginx = "nginx";
static const char* Src_Microsoft = "Microsoft";
static const char* Src_Esri = "Esri";
static const char* Src_ApacheWebServercPanel = "Apache Web Server/cPanel";
static const char* Src_Cloudflare = "Cloudflare";
static const char* Src_CloudflareandCloudFoundry = "Cloudflare and Cloud Foundry";
static const char* Src_Qualys = "Qualys";
static const char* Src_Pantheon = "Pantheon";
static const char* Src_AWSElasticLoadBalancer = "AWS Elastic Load Balancer";
static const char* Src_SomeHTTPproxies = "Some HTTP proxies";

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
static int DescrBlockSize = 4426;
static const uint8_t CompressedDescr[] =
{
  // Uncompressed size: 4426, Compressed size: 1548, Rate: 2.9
  0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xad, 0x58, 0x4b, 0x6e, 0xdb, 0x56, 
  0x14, 0xf5, 0x52, 0xde, 0x06, 0x02, 0x48, 0x14, 0xa9, 0xcf, 0x0e, 0x1a, 0xa0, 0x05, 0x8a, 0x38, 
  0x45, 0xc7, 0x05, 0x0a, 0x14, 0x01, 0x8a, 0x74, 0x50, 0x14, 0x9d, 0x8a, 0x72, 0x1c, 0xdb, 0xb5, 
  0x11, 0x23, 0x46, 0x80, 0x1a, 0x41, 0x92, 0xd6, 0xed, 0xa0, 0xc3, 0x50, 0xb4, 0x65, 0x51, 0x12, 
  0x45, 0x6d, 0xe1, 0x71, 0x0b, 0x5d, 0x49, 0xcf, 0x3d, 0xf7, 0x51, 0x22, 0x29, 0x4a, 0x71, 0x80, 
  0x0e, 0x12, 0xd3, 0x7c, 0xf7, 0xf7, 0xce, 0x3d, 0xf7, 0x43, 0xb7, 0x5b, 0x2d, 0x63, 0xff, 0xc8, 
  0x87, 0x36, 0xb3, 0x77, 0xf8, 0xb7, 0xb0, 0xf7, 0x36, 0xb2, 0xb3, 0x7c, 0x64, 0x27, 0x07, 0xed, 
  0x56, 0x1b, 0x47, 0x76, 0x82, 0xc3, 0x89, 0x9d, 0xdb, 0x45, 0xfe, 0x2a, 0x3f, 0xc1, 0xd3, 0xd2, 
  0x26, 0x76, 0x62, 0xec, 0x4a, 0x74, 0x20, 0x97, 0xe1, 0x48, 0xf4, 0x32, 0x1b, 0x43, 0xc3, 0x33, 
  0xf6, 0x83, 0x1d, 0xe3, 0x28, 0xb2, 0x63, 0x1e, 0xcf, 0x6d, 0x64, 0xec, 0x14, 0xbf, 0xaa, 0x7c, 
  0x68, 0x23, 0x48, 0x75, 0xd4, 0xe5, 0x04, 0x2e, 0x63, 0x1b, 0xe1, 0x29, 0x11, 0x87, 0xf0, 0x70, 
  0x61, 0x97, 0xf9, 0x39, 0xad, 0x4b, 0x3c, 0x90, 0x86, 0x3a, 0xb4, 0xe7, 0x36, 0x39, 0xf0, 0x24, 
  0xd0, 0xbf, 0xf1, 0x6a, 0x85, 0x88, 0x4e, 0x11, 0x45, 0x86, 0x57, 0x08, 0xf0, 0x06, 0x92, 0x53, 
  0x18, 0x8a, 0xdc, 0x2b, 0x4f, 0x6d, 0x27, 0xb0, 0x74, 0x29, 0xe1, 0xe1, 0x15, 0xdc, 0x5d, 0xe3, 
  0xd7, 0x17, 0xf0, 0x3f, 0xb4, 0x29, 0x1c, 0xbe, 0x84, 0xc3, 0x4b, 0x75, 0xb2, 0xc8, 0x8f, 0xdc, 
  0xad, 0x10, 0xe7, 0x52, 0x5c, 0x23, 0x6a, 0x83, 0xf3, 0x30, 0x3f, 0x26, 0x26, 0xb0, 0x6a, 0x6f, 
  0x6d, 0x66, 0xe0, 0x59, 0x90, 0x88, 0xf9, 0x7f, 0x04, 0xab, 0xbe, 0xb1, 0xef, 0xf1, 0xcb, 0x48, 
  0x4e, 0x44, 0x50, 0xde, 0xdf, 0xc3, 0x6f, 0xaa, 0x0a, 0x90, 0x08, 0x24, 0xba, 0xb1, 0xbb, 0x37, 
  0xae, 0x98, 0x5f, 0x34, 0xc9, 0x4e, 0x20, 0xd9, 0x35, 0xf6, 0x1f, 0xc4, 0x15, 0x22, 0xe0, 0x04, 
  0xe1, 0x88, 0xcf, 0xc9, 0x2e, 0xd9, 0x9e, 0xb1, 0xef, 0x8a, 0xa8, 0xa8, 0x11, 0xc1, 0xf2, 0x11, 
  0x84, 0x05, 0xba, 0x19, 0xe3, 0x67, 0x94, 0x23, 0xc8, 0xf6, 0x01, 0x19, 0x94, 0x9d, 0xad, 0x0c, 
  0xc1, 0x9c, 0x01, 0xa8, 0x05, 0x15, 0x2f, 0x0e, 0xbc, 0x36, 0xce, 0xaf, 0xf0, 0xf8, 0xda, 0xd8, 
  0x98, 0x70, 0xe4, 0xc3, 0xfc, 0x12, 0x2e, 0xe7, 0xe2, 0xc8, 0x43, 0x50, 0xd7, 0xc4, 0x3b, 0x63, 
  0x66, 0xa6, 0x92, 0x62, 0x85, 0xd9, 0x3c, 0xfe, 0xea, 0xa0, 0x23, 0xf9, 0x10, 0x00, 0x42, 0x25, 
  0x00, 0x24, 0xf0, 0xd3, 0x14, 0x09, 0x15, 0x41, 0xb2, 0x23, 0x86, 0x64, 0x89, 0x47, 0x29, 0x7e, 
  0x9e, 0x11, 0xef, 0x4c, 0xf0, 0x8e, 0x6c, 0x2c, 0xc0, 0xe2, 0x2e, 0xc8, 0x20, 0x24, 0x3d, 0xb1, 
  0x09, 0x02, 0xca, 0xbd, 0x99, 0xd0, 0x8e, 0x64, 0xef, 0x46, 0x2e, 0x8f, 0x5b, 0x0e, 0xe5, 0x5a, 
  0x40, 0x11, 0xd4, 0x18, 0xe6, 0x47, 0x02, 0x00, 0x02, 0xed, 0xb8, 0x4c, 0x20, 0x69, 0x88, 0x31, 
  0xa5, 0x5e, 0xa1, 0x1b, 0x34, 0x5e, 0x41, 0x6d, 0x90, 0x90, 0x76, 0x2e, 0xa9, 0x79, 0x54, 0x4e, 
  0x2e, 0xd4, 0xba, 0xea, 0x92, 0x5c, 0xff, 0xa4, 0x70, 0x4f, 0x30, 0x74, 0x57, 0x83, 0x82, 0xe6, 
  0x8e, 0x2c, 0x1d, 0x2a, 0xaf, 0xa8, 0x8c, 0x8b, 0x02, 0x77, 0x57, 0x3d, 0xd0, 0xea, 0x0b, 0x24, 
  0x9a, 0xbf, 0x0c, 0x98, 0x3f, 0x50, 0xcf, 0x77, 0xa0, 0x0b, 0xd4, 0x80, 0x80, 0x85, 0x09, 0x0b, 
  0x2e, 0xf3, 0xa5, 0x32, 0x83, 0x24, 0x40, 0xff, 0x8b, 0x12, 0x63, 0x40, 0x25, 0xb8, 0x85, 0xc2, 
  0xf9, 0x08, 0x54, 0x91, 0x5a, 0x5b, 0x92, 0x6a, 0x2f, 0x60, 0x75, 0x5e, 0x14, 0x04, 0x74, 0xbc, 
  0x46, 0x9d, 0x0c, 0x51, 0x2d, 0x04, 0x36, 0xa4, 0xc8, 0x97, 0x7c, 0xbc, 0xd1, 0xc8, 0x21, 0xb3, 
  0xda, 0x78, 0x45, 0x5e, 0xf3, 0xd7, 0x76, 0x09, 0x89, 0x22, 0x1f, 0xcb, 0x4a, 0x26, 0x7d, 0xc9, 
  0xc6, 0x3b, 0xb1, 0x2a, 0xb4, 0xd6, 0x62, 0xe3, 0x05, 0xa7, 0x54, 0x3e, 0x75, 0xca, 0x5d, 0xbd, 
  0xe0, 0x8a, 0x24, 0x12, 0x50, 0xe5, 0xf6, 0x69, 0x9d, 0xda, 0xbe, 0xc0, 0xfe, 0x79, 0xd7, 0x33, 
  0x5a, 0xe3, 0xbb, 0x32, 0x49, 0x74, 0xfb, 0xeb, 0x5c, 0xea, 0xbd, 0xa5, 0xee, 0xb4, 0xb5, 0xd0, 
  0x40, 0xa5, 0x8f, 0x69, 0x93, 0x18, 0x69, 0x6f, 0xe4, 0xfd, 0x06, 0xc6, 0xbe, 0x85, 0x92, 0x74, 
  0x9a, 0x85, 0x78, 0x96, 0x38, 0xdb, 0x48, 0xd8, 0x9f, 0x52, 0x25, 0x08, 0x6c, 0x98, 0x87, 0x06, 
  0xc1, 0x8a, 0xc1, 0x85, 0xde, 0xb6, 0xdd, 0x98, 0x24, 0x3c, 0x6a, 0xdf, 0x73, 0x4c, 0xbd, 0xa3, 
  0xb9, 0x65, 0x7e, 0x04, 0x05, 0x6f, 0x4f, 0xeb, 0xd4, 0xae, 0x21, 0xad, 0x80, 0xed, 0x58, 0xfb, 
  0x34, 0x7b, 0x5a, 0x0c, 0xfc, 0x58, 0x04, 0xeb, 0xda, 0xf0, 0xdb, 0xac, 0x2b, 0x18, 0x46, 0x33, 
  0x95, 0x02, 0x4e, 0x8d, 0x74, 0x6c, 0x31, 0x84, 0x17, 0x19, 0xd1, 0x46, 0x50, 0xbf, 0x21, 0xce, 
  0xd4, 0x38, 0x0c, 0x40, 0xb3, 0xfc, 0x18, 0x9a, 0xbe, 0xf9, 0xe6, 0xc9, 0x63, 0x43, 0x37, 0x25, 
  0x6d, 0x17, 0xa5, 0x92, 0x11, 0x52, 0x81, 0x4b, 0x24, 0x9b, 0xd8, 0xa6, 0x8d, 0x49, 0x0b, 0x29, 
  0x12, 0x2a, 0x49, 0x12, 0x0a, 0x55, 0xcd, 0x83, 0x01, 0xbf, 0xaf, 0x81, 0x3e, 0xd5, 0xa2, 0xd2, 
  0xfc, 0xdf, 0xb1, 0xaf, 0xac, 0x88, 0x0d, 0x70, 0xe6, 0xe5, 0x64, 0x6c, 0x15, 0x64, 0x14, 0x59, 
  0x18, 0xe8, 0xc9, 0x10, 0x2a, 0xa5, 0x6e, 0x2f, 0x0c, 0x48, 0xf9, 0x47, 0xf3, 0xef, 0xf0, 0x8d, 
  0x41, 0xdf, 0x15, 0xba, 0x8a, 0xfc, 0x1c, 0xef, 0x91, 0xcc, 0x1b, 0xa5, 0x8a, 0x21, 0x85, 0x67, 
  0x4c, 0x76, 0x4c, 0x22, 0xd0, 0xdf, 0xd0, 0xf1, 0xe2, 0x65, 0x7e, 0xee, 0xa8, 0x00, 0xac, 0xa0, 
  0xe9, 0x21, 0xe3, 0x1f, 0x10, 0x77, 0x02, 0x3c, 0x39, 0xfd, 0xd2, 0x82, 0xf3, 0x52, 0x3e, 0x72, 
  0x7a, 0x43, 0x27, 0x53, 0x20, 0x3d, 0xd2, 0xb6, 0xb5, 0x74, 0x9c, 0x0d, 0x89, 0xcf, 0xd2, 0x5d, 
  0xe8, 0xa2, 0x4a, 0x38, 0x69, 0xa5, 0xbe, 0xd7, 0x2e, 0x83, 0x13, 0x9a, 0xed, 0x3e, 0xe1, 0x0a, 
  0x4b, 0x1c, 0xa6, 0xf9, 0x51, 0x65, 0x6c, 0x09, 0x81, 0x3c, 0x4f, 0xd3, 0x12, 0x73, 0x6c, 0xa6, 
  0xe4, 0x38, 0x7b, 0x71, 0x56, 0x19, 0xdb, 0xd1, 0xee, 0x69, 0xe5, 0x7b, 0x1d, 0x8d, 0x61, 0x4c, 
  0x9a, 0x61, 0x36, 0x13, 0x26, 0x37, 0x1a, 0x70, 0xec, 0xd7, 0xee, 0x3f, 0x65, 0x70, 0x09, 0x6f, 
  0x97, 0xba, 0x9e, 0x97, 0x40, 0x2e, 0xa8, 0x13, 0xd0, 0x41, 0x2a, 0x36, 0xba, 0x3b, 0x1a, 0xd1, 
  0x98, 0x2c, 0x8f, 0x2b, 0x6d, 0x79, 0xb3, 0x84, 0x40, 0xb1, 0xdf, 0xa8, 0xb8, 0xfa, 0x8c, 0x92, 
  0x81, 0x91, 0xc1, 0x56, 0x69, 0xa4, 0xeb, 0x3d, 0x60, 0x3b, 0x27, 0x9d, 0x16, 0x7b, 0x39, 0x0c, 
  0xba, 0x16, 0x71, 0x5b, 0x2c, 0x44, 0x0d, 0xdb, 0xcf, 0x56, 0xd9, 0xc4, 0x12, 0x0a, 0xfb, 0x14, 
  0x30, 0xe9, 0xb4, 0xff, 0x37, 0x53, 0x7e, 0x6b, 0x7f, 0x2f, 0x8b, 0xdd, 0x7e, 0xb3, 0xdd, 0xc7, 
  0x7c, 0x26, 0xd0, 0x75, 0x5a, 0x36, 0x5d, 0x76, 0xaf, 0x91, 0x16, 0x80, 0xc2, 0x0a, 0xa9, 0x81, 
  0x86, 0x1a, 0x73, 0x82, 0x0d, 0xd7, 0xfb, 0xcd, 0x66, 0x38, 0x4b, 0xb6, 0x13, 0x99, 0x68, 0x11, 
  0x13, 0xcb, 0x32, 0x70, 0x4f, 0x88, 0x2f, 0x68, 0xed, 0x61, 0x91, 0x54, 0x18, 0x33, 0xe6, 0x8a, 
  0x8e, 0x3a, 0xc6, 0x6d, 0xa9, 0xeb, 0xf4, 0xb9, 0xd5, 0x83, 0x59, 0x99, 0xb3, 0xf1, 0x8e, 0x28, 
  0x22, 0xe8, 0x7d, 0xfb, 0xec, 0xf9, 0xf7, 0x3f, 0xfd, 0xfa, 0x33, 0xfc, 0x94, 0x96, 0x8f, 0x1d, 
  0x43, 0x75, 0xe0, 0x6b, 0x28, 0x1b, 0xb0, 0x59, 0xf5, 0x0f, 0x04, 0x1b, 0xfa, 0x41, 0x95, 0xf1, 
  0x87, 0x87, 0x5f, 0xba, 0xd1, 0x52, 0x99, 0x42, 0x1c, 0x9f, 0x83, 0x46, 0x66, 0xef, 0xd2, 0x80, 
  0x7c, 0xcf, 0x7c, 0xf1, 0xf4, 0xe9, 0xd7, 0x8f, 0xca, 0xd1, 0xe8, 0x20, 0xdc, 0xaa, 0xfa, 0xa8, 
  0x58, 0xe1, 0x46, 0x54, 0x39, 0x84, 0x72, 0x5f, 0x8b, 0xbd, 0xda, 0xbf, 0xca, 0xab, 0xf6, 0xcc, 
  0xb8, 0xea, 0x61, 0xe7, 0x1c, 0x0c, 0x1a, 0xc7, 0x51, 0x4d, 0xe2, 0x2d, 0xef, 0xcd, 0x19, 0xab, 
  0x20, 0xcd, 0xe1, 0xf3, 0xdc, 0x2e, 0xb4, 0x5d, 0x4c, 0xd8, 0xa5, 0x97, 0x6b, 0x74, 0x03, 0x59, 
  0x59, 0xae, 0x64, 0x7a, 0xe9, 0x02, 0xc7, 0x6e, 0x7e, 0x49, 0x4a, 0x96, 0x20, 0xab, 0x6d, 0xd7, 
  0x81, 0x6c, 0x2f, 0xef, 0x75, 0x41, 0x98, 0x70, 0x63, 0x4d, 0xca, 0xfb, 0x27, 0xce, 0xbd, 0x2a, 
  0xe4, 0x78, 0xc4, 0xf7, 0x89, 0x44, 0x83, 0x33, 0x9d, 0x6c, 0xb8, 0xc1, 0x3d, 0x4e, 0xa3, 0xed, 
  0x29, 0xb1, 0xa4, 0x94, 0xbf, 0xb7, 0x3e, 0x36, 0x06, 0xeb, 0xf5, 0x11, 0xc8, 0x1e, 0x73, 0xc5, 
  0x5c, 0x85, 0x14, 0x15, 0xb0, 0xdd, 0x80, 0x69, 0x1c, 0x76, 0x0a, 0x23, 0xf4, 0xba, 0xa2, 0x57, 
  0xda, 0x8e, 0x05, 0x59, 0xa0, 0xc7, 0x05, 0xbd, 0x3c, 0x9b, 0xb0, 0x0f, 0xae, 0xbf, 0x2b, 0x6e, 
  0xb9, 0x79, 0x85, 0xeb, 0xbb, 0x2b, 0xa4, 0xbd, 0x22, 0xaf, 0xeb, 0x2f, 0x00, 0x3c, 0x9d, 0x68, 
  0x23, 0x4f, 0xb9, 0x6d, 0x8c, 0x24, 0xf0, 0xd8, 0xe4, 0xc7, 0xc5, 0x9c, 0x22, 0x7b, 0xcf, 0xa8, 
  0xdd, 0xe7, 0x47, 0x9a, 0xc0, 0xc0, 0x4a, 0xbd, 0x27, 0x81, 0x64, 0x49, 0x92, 0x1b, 0xe2, 0x7c, 
  0x50, 0xec, 0x18, 0x88, 0x49, 0x07, 0xb0, 0x61, 0x06, 0x52, 0x21, 0x4f, 0xb1, 0x41, 0xad, 0xd8, 
  0x35, 0xe7, 0xec, 0x8b, 0x33, 0xa3, 0x4b, 0x36, 0xe3, 0x1c, 0x17, 0x03, 0x0c, 0x55, 0x1e, 0xb4, 
  0x5b, 0x2e, 0x8f, 0xc7, 0xba, 0x78, 0x2b, 0x1e, 0xec, 0xf4, 0x10, 0x39, 0x65, 0xd5, 0x2b, 0x53, 
  0x66, 0xf5, 0xcf, 0xc4, 0x60, 0xc7, 0x72, 0x14, 0x72, 0x9c, 0x4e, 0x68, 0xef, 0x13, 0x0b, 0x6d, 
  0xe0, 0x91, 0x7b, 0x30, 0x50, 0x59, 0xf5, 0x8c, 0xe3, 0x19, 0x38, 0x09, 0xd6, 0x92, 0x1e, 0x42, 
  0xaf, 0xd8, 0x01, 0x27, 0x54, 0x7d, 0x55, 0xa2, 0x27, 0xc6, 0x66, 0x20, 0x73, 0xb7, 0xc9, 0x50, 
  0xd3, 0x02, 0x12, 0xc8, 0x8c, 0xdd, 0x47, 0xad, 0xad, 0x32, 0x11, 0xa9, 0x1a, 0xc9, 0x64, 0xc8, 
  0x5e, 0x6f, 0x3e, 0x42, 0xb5, 0x54, 0x1f, 0xe0, 0x7a, 0x3f, 0xab, 0xb7, 0xbc, 0xd4, 0x3a, 0x97, 
  0xe4, 0x94, 0x49, 0xd2, 0x29, 0xbb, 0x58, 0x87, 0xe7, 0x1a, 0xd4, 0x56, 0xdc, 0x30, 0xd1, 0xfd, 
  0x74, 0x8f, 0xd9, 0xd9, 0xde, 0x02, 0xaf, 0x57, 0x0d, 0xe0, 0xc9, 0x77, 0xcf, 0x7e, 0xfc, 0xe1, 
  0x97, 0xe7, 0x38, 0xe0, 0x0c, 0xe6, 0x9f, 0x22, 0x36, 0x1f, 0x45, 0xb7, 0x1b, 0xbe, 0x1e, 0x04, 
  0x9d, 0x56, 0x49, 0x62, 0xca, 0x11, 0x91, 0x91, 0x99, 0xee, 0xbc, 0xdb, 0xae, 0x7d, 0xa8, 0x34, 
  0x7e, 0x70, 0x04, 0x83, 0xfd, 0x3b, 0x7f, 0x7e, 0xa2, 0xec, 0x72, 0xf0, 0xd9, 0x69, 0x41, 0xc0, 
  0xa4, 0x0e, 0xe6, 0x7f, 0x59, 0xce, 0xe5, 0xc6, 0x4a, 0x11, 0x00, 0x00, 
};
#endif  // #if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
static constexpr uint64_t _GENERATOR_ = AS_GENERATOR::AS_HTTP;
#endif

static const STATUS_ITEM Status[] =
{
  /*0*/ { (uint32_t)100, "HTTP_STATUS_CONTINUE", AS_DESCR_HANDLE("100 Продолжайте", 0), Src_, AS_OS_ANY },
  /*1*/ { (uint32_t)101, "HTTP_STATUS_SWITCH_PROTOCOLS", AS_DESCR_HANDLE("101 Переключение протоколов", 27), Src_, AS_OS_ANY },
  /*2*/ { (uint32_t)102, "HTTP_STATUS_PROCESSING", AS_DESCR_HANDLE("102 Обработка запроса", 77), Src_, AS_OS_ANY },
  /*3*/ { (uint32_t)103, "HTTP_EARLY_HINTS", AS_DESCR_HANDLE("103 Предварительные подсказки", 115), Src_, AS_OS_ANY },
  /*4*/ { (uint32_t)200, "HTTP_STATUS_OK", AS_DESCR_HANDLE("200 Успешно", 169), Src_, AS_OS_ANY },
  /*5*/ { (uint32_t)201, "HTTP_STATUS_CREATED", AS_DESCR_HANDLE("201 Создано", 188), Src_, AS_OS_ANY },
  /*6*/ { (uint32_t)202, "HTTP_STATUS_ACCEPTED", AS_DESCR_HANDLE("202 Принято", 207), Src_, AS_OS_ANY },
  /*7*/ { (uint32_t)203, "HTTP_STATUS_NON_AUTH_INFORMATION", AS_DESCR_HANDLE("203 Информация получена не от исходного сервера", 226), Src_, AS_OS_ANY },
  /*8*/ { (uint32_t)204, "HTTP_STATUS_NO_CONTENT", AS_DESCR_HANDLE("204 Нет содержимого", 312), Src_, AS_OS_ANY },
  /*9*/ { (uint32_t)205, "HTTP_STATUS_RESET_CONTENT", AS_DESCR_HANDLE("205 Сбросить содержимое", 346), Src_, AS_OS_ANY },
  /*10*/ { (uint32_t)206, "HTTP_STATUS_PARTIAL_CONTENT", AS_DESCR_HANDLE("206 Частичное содержимое", 388), Src_, AS_OS_ANY },
  /*11*/ { (uint32_t)207, "HTTP_STATUS_MULTI", AS_DESCR_HANDLE("207 Многостатусный ответ", 432), Src_, AS_OS_ANY },
  /*12*/ { (uint32_t)208, "HTTP_STATUS_ALREADY_REPORTED", AS_DESCR_HANDLE("208 Уже сообщалось", 476), Src_, AS_OS_ANY },
  /*13*/ { (uint32_t)218, "HTTP_STATUS_FINE", AS_DESCR_HANDLE("218 Всё в порядке", 508), Src_ApacheWebServer, AS_OS_ANY },
  /*14*/ { (uint32_t)226, "HTTP_STATUS_IM_USED", AS_DESCR_HANDLE("226 Использовано IM", 537), Src_, AS_OS_ANY },
  /*15*/ { (uint32_t)300, "HTTP_STATUS_AMBIGUOUS", AS_DESCR_HANDLE("300 Несколько вариантов", 569), Src_, AS_OS_ANY },
  /*16*/ { (uint32_t)301, "HTTP_STATUS_MOVED", AS_DESCR_HANDLE("301 Перемещено навсегда", 611), Src_, AS_OS_ANY },
  /*17*/ { (uint32_t)302, "HTTP_STATUS_REDIRECT", AS_DESCR_HANDLE("302 Найдено", 653), Src_, AS_OS_ANY },
  /*18*/ { (uint32_t)303, "HTTP_STATUS_REDIRECT_METHOD", AS_DESCR_HANDLE("303 Смотреть другое", 672), Src_, AS_OS_ANY },
  /*19*/ { (uint32_t)304, "HTTP_STATUS_NOT_MODIFIED", AS_DESCR_HANDLE("304 Не изменено", 706), Src_, AS_OS_ANY },
  /*20*/ { (uint32_t)305, "HTTP_STATUS_USE_PROXY", AS_DESCR_HANDLE("305 Использовать прокси-сервер", 732), Src_, AS_OS_ANY },
  /*21*/ { (uint32_t)306, "HTTP_STATUS_SWITCH_PROXY", AS_DESCR_HANDLE("306 Сменить прокси-сервер", 787), Src_, AS_OS_ANY },
  /*22*/ { (uint32_t)307, "HTTP_STATUS_TEMPORARY_REDIRECT", AS_DESCR_HANDLE("307 Временное перенаправление", 832), Src_, AS_OS_ANY },
  /*23*/ { (uint32_t)308, "HTTP_STATUS_PERMANENT_REDIRECT", AS_DESCR_HANDLE("308 Постоянное перенаправление", 886), Src_, AS_OS_ANY },
  /*24*/ { (uint32_t)400, "HTTP_STATUS_BAD_REQUEST", AS_DESCR_HANDLE("400 Некорректный запрос", 942), Src_, AS_OS_ANY },
  /*25*/ { (uint32_t)401, "HTTP_STATUS_DENIED", AS_DESCR_HANDLE("401 Требуется аутентификация", 984), Src_, AS_OS_ANY },
  /*26*/ { (uint32_t)402, "HTTP_STATUS_PAYMENT_REQ", AS_DESCR_HANDLE("402 Требуется оплата", 1036), Src_, AS_OS_ANY },
  /*27*/ { (uint32_t)403, "HTTP_STATUS_FORBIDDEN", AS_DESCR_HANDLE("403 Доступ запрещён", 1072), Src_, AS_OS_ANY },
  /*28*/ { (uint32_t)404, "HTTP_STATUS_NOT_FOUND", AS_DESCR_HANDLE("404 Не найдено", 1106), Src_, AS_OS_ANY },
  /*29*/ { (uint32_t)405, "HTTP_STATUS_BAD_METHOD", AS_DESCR_HANDLE("405 Метод не разрешён", 1130), Src_, AS_OS_ANY },
  /*30*/ { (uint32_t)406, "HTTP_STATUS_NONE_ACCEPTABLE", AS_DESCR_HANDLE("406 Неприемлемый ответ", 1167), Src_, AS_OS_ANY },
  /*31*/ { (uint32_t)407, "HTTP_STATUS_PROXY_AUTH_REQ", AS_DESCR_HANDLE("407 Требуется аутентификация на прокси-сервере", 1207), Src_, AS_OS_ANY },
  /*32*/ { (uint32_t)408, "HTTP_STATUS_REQUEST_TIMEOUT", AS_DESCR_HANDLE("408 Время ожидания запроса истекло", 1292), Src_, AS_OS_ANY },
  /*33*/ { (uint32_t)409, "HTTP_STATUS_CONFLICT", AS_DESCR_HANDLE("409 Конфликт", 1354), Src_, AS_OS_ANY },
  /*34*/ { (uint32_t)410, "HTTP_STATUS_GONE", AS_DESCR_HANDLE("410 Ресурс удалён", 1375), Src_, AS_OS_ANY },
  /*35*/ { (uint32_t)411, "HTTP_STATUS_LENGTH_REQUIRED", AS_DESCR_HANDLE("411 Требуется указать длину", 1405), Src_, AS_OS_ANY },
  /*36*/ { (uint32_t)412, "HTTP_STATUS_PRECOND_FAILED", AS_DESCR_HANDLE("412 Предварительное условие не выполнено", 1454), Src_, AS_OS_ANY },
  /*37*/ { (uint32_t)413, "HTTP_STATUS_REQUEST_TOO_LARGE", AS_DESCR_HANDLE("413 Слишком большой объём данных", 1528), Src_, AS_OS_ANY },
  /*38*/ { (uint32_t)414, "HTTP_STATUS_URI_TOO_LONG", AS_DESCR_HANDLE("414 URI слишком длинный", 1586), Src_, AS_OS_ANY },
  /*39*/ { (uint32_t)415, "HTTP_STATUS_UNSUPPORTED_MEDIA", AS_DESCR_HANDLE("415 Неподдерживаемый тип данных", 1624), Src_, AS_OS_ANY },
  /*40*/ { (uint32_t)416, "HTTP_STATUS_RANGE_NOT_SATISFIABLE", AS_DESCR_HANDLE("416 Запрошенный диапазон недоступен", 1681), Src_, AS_OS_ANY },
  /*41*/ { (uint32_t)417, "HTTP_STATUS_EXPECTATION_FAILED", AS_DESCR_HANDLE("417 Ожидание не выполнено", 1746), Src_, AS_OS_ANY },
  /*42*/ { (uint32_t)418, "HTTP_STATUS_TEAPOT", AS_DESCR_HANDLE("418 Я — чайник", 1791), Src_, AS_OS_ANY },
  /*43*/ { (uint32_t)419, "HTTP_STATUS_PAGE_EXPIRED", AS_DESCR_HANDLE("419 Срок действия страницы истёк", 1815), Src_LaravelFramework, AS_OS_ANY },
  /*44*/ { (uint32_t)420, "HTTP_STATUS_METHOD_FAILURE", AS_DESCR_HANDLE("420 Ошибка метода", 1873), Src_SpringFramework, AS_OS_ANY },
  /*45*/ { (uint32_t)420, "HTTP_STATUS_ENHENCE_CALM", AS_DESCR_HANDLE("420 Снизьте интенсивность запросов", 1903), Src_Twitter, AS_OS_ANY },
  /*46*/ { (uint32_t)421, "HTTP_STATUS_MISDIRECTED_REQUEST", AS_DESCR_HANDLE("421 Запрос направлен не тому серверу", 1966), Src_, AS_OS_ANY },
  /*47*/ { (uint32_t)422, "HTTP_STATUS_UNPROCESSABLE_ENTITY", AS_DESCR_HANDLE("422 Невозможно обработать содержимое", 2031), Src_, AS_OS_ANY },
  /*48*/ { (uint32_t)423, "HTTP_STATUS_LOCKED", AS_DESCR_HANDLE("423 Заблокировано", 2098), Src_, AS_OS_ANY },
  /*49*/ { (uint32_t)424, "HTTP_STATUS_FAILED_DEPENDENCY", AS_DESCR_HANDLE("424 Ошибка зависимости", 2129), Src_, AS_OS_ANY },
  /*50*/ { (uint32_t)425, "HTTP_STATUS_TOO_EARLY", AS_DESCR_HANDLE("425 Слишком рано", 2169), Src_, AS_OS_ANY },
  /*51*/ { (uint32_t)426, "HTTP_STATUS_UPGRADE_REQUIRED", AS_DESCR_HANDLE("426 Требуется обновить протокол", 2197), Src_, AS_OS_ANY },
  /*52*/ { (uint32_t)428, "HTTP_STATUS_PRECONDITION_REQUIRED", AS_DESCR_HANDLE("428 Требуется предварительное условие", 2254), Src_, AS_OS_ANY },
  /*53*/ { (uint32_t)429, "HTTP_STATUS_TOO_MANY_REQUESTS", AS_DESCR_HANDLE("429 Слишком много запросов", 2323), Src_, AS_OS_ANY },
  /*54*/ { (uint32_t)430, "HTTP_STATUS_HEADER_FIELDS_TOO_LARGE_2", AS_DESCR_HANDLE("430 Поля заголовка запроса слишком велики", 2370), Src_Shopify, AS_OS_ANY },
  /*55*/ { (uint32_t)431, "HTTP_STATUS_HEADER_FIELDS_TOO_LARGE", AS_DESCR_HANDLE("431 Поля заголовка запроса слишком велики", 2445), Src_, AS_OS_ANY },
  /*56*/ { (uint32_t)440, "HTTP_STATUS_LOGIN_TIMEOUT", AS_DESCR_HANDLE("440 Время ожидания входа истекло", 2520), Src_IIS, AS_OS_ANY },
  /*57*/ { (uint32_t)444, "HTTP_STATUS_BO_RESPONSE", AS_DESCR_HANDLE("444 Ответ отсутствует", 2578), Src_nginx, AS_OS_ANY },
  /*58*/ { (uint32_t)449, "HTTP_STATUS_RETRY_WITH", AS_DESCR_HANDLE("449 Повторить с другими параметрами", 2616), Src_IIS, AS_OS_ANY },
  /*59*/ { (uint32_t)450, "HTTP_STATUS_BLOCKED", AS_DESCR_HANDLE("450 Заблокировано средствами родительского контроля Windows", 2680), Src_Microsoft, AS_OS_ANY },
  /*60*/ { (uint32_t)451, "HTTP_STATUS_IIS_REDIRECT", AS_DESCR_HANDLE("451 Перенаправление", 2784), Src_IIS, AS_OS_ANY },
  /*61*/ { (uint32_t)494, "HTTP_STATUS_REQUEST_HEADER_TOO_LARGE", AS_DESCR_HANDLE("494 Заголовок запроса слишком велик", 2819), Src_nginx, AS_OS_ANY },
  /*62*/ { (uint32_t)495, "HTTP_STATUS_CERTIFICATE_ERROR", AS_DESCR_HANDLE("495 Ошибка SSL-сертификата", 2883), Src_nginx, AS_OS_ANY },
  /*63*/ { (uint32_t)496, "HTTP_STATUS_CERTIFICATE_REQUIRED", AS_DESCR_HANDLE("496 Требуется SSL-сертификат", 2927), Src_nginx, AS_OS_ANY },
  /*64*/ { (uint32_t)497, "HTTP_STATUS_HTTP_TO_HTTPS_PORT", AS_DESCR_HANDLE("497 HTTP-запрос отправлен на порт HTTPS", 2975), Src_nginx, AS_OS_ANY },
  /*65*/ { (uint32_t)498, "HTTP_STATUS_INVALID_TOKEN", AS_DESCR_HANDLE("498 Недействительный токен", 3036), Src_Esri, AS_OS_ANY },
  /*66*/ { (uint32_t)499, "HTTP_STATUS_TOKEN_REQUIRED", AS_DESCR_HANDLE("499 Требуется токен", 3084), Src_Esri, AS_OS_ANY },
  /*67*/ { (uint32_t)499, "HTTP_STATUS_CLIENT_CLOSED_REQUEST", AS_DESCR_HANDLE("499 Клиент закрыл соединение", 3118), Src_nginx, AS_OS_ANY },
  /*68*/ { (uint32_t)500, "HTTP_STATUS_SERVER_ERROR", AS_DESCR_HANDLE("500 Внутренняя ошибка сервера", 3169), Src_, AS_OS_ANY },
  /*69*/ { (uint32_t)501, "HTTP_STATUS_NOT_SUPPORTED", AS_DESCR_HANDLE("501 Не реализовано", 3222), Src_, AS_OS_ANY },
  /*70*/ { (uint32_t)502, "HTTP_STATUS_BAD_GATEWAY", AS_DESCR_HANDLE("502 Ошибка шлюза", 3254), Src_, AS_OS_ANY },
  /*71*/ { (uint32_t)503, "HTTP_STATUS_SERVICE_UNAVAIL", AS_DESCR_HANDLE("503 Служба недоступна", 3282), Src_, AS_OS_ANY },
  /*72*/ { (uint32_t)504, "HTTP_STATUS_GATEWAY_TIMEOUT", AS_DESCR_HANDLE("504 Время ожидания шлюза истекло", 3320), Src_, AS_OS_ANY },
  /*73*/ { (uint32_t)505, "HTTP_STATUS_VERSION_NOT_SUPPORTED", AS_DESCR_HANDLE("505 Версия HTTP не поддерживается", 3378), Src_, AS_OS_ANY },
  /*74*/ { (uint32_t)506, "HTTP_STATUS_VARIANT_ALSO_NEGOTIATES", AS_DESCR_HANDLE("506 Вариант также выполняет согласование", 3434), Src_, AS_OS_ANY },
  /*75*/ { (uint32_t)507, "HTTP_STATUS_INSUFFICIENT_STORAGE", AS_DESCR_HANDLE("507 Недостаточно места в хранилище", 3508), Src_, AS_OS_ANY },
  /*76*/ { (uint32_t)508, "HTTP_STATUS_LOOP_DETECTED", AS_DESCR_HANDLE("508 Обнаружен цикл", 3570), Src_, AS_OS_ANY },
  /*77*/ { (uint32_t)509, "HTTP_STATUS_BANDWIDTH_LIMIT_EXCEEDED", AS_DESCR_HANDLE("509 Превышен лимит пропускной способности", 3602), Src_ApacheWebServercPanel, AS_OS_ANY },
  /*78*/ { (uint32_t)510, "HTTP_STATUS_NOT_EXTENDED", AS_DESCR_HANDLE("510 Не хватает расширений запроса", 3678), Src_, AS_OS_ANY },
  /*79*/ { (uint32_t)511, "HTTP_STATUS_AUTHENTICATION_REQUIRED", AS_DESCR_HANDLE("511 Требуется сетевая аутентификация", 3738), Src_, AS_OS_ANY },
  /*80*/ { (uint32_t)520, "HTTP_STATUS_UNKNOWN_ERROR", AS_DESCR_HANDLE("520 Веб-сервер вернул неизвестную ошибку", 3805), Src_Cloudflare, AS_OS_ANY },
  /*81*/ { (uint32_t)521, "HTTP_STATUS_SERVER_IS_DOWN", AS_DESCR_HANDLE("521 Веб-сервер недоступен", 3878), Src_Cloudflare, AS_OS_ANY },
  /*82*/ { (uint32_t)522, "HTTP_STATUS_CONNECTION_TIMED_OUT", AS_DESCR_HANDLE("522 Время ожидания соединения истекло", 3923), Src_Cloudflare, AS_OS_ANY },
  /*83*/ { (uint32_t)523, "HTTP_STATUS_ORIGIN_IS_UNREACHABLE", AS_DESCR_HANDLE("523 Исходный сервер недоступен", 3991), Src_Cloudflare, AS_OS_ANY },
  /*84*/ { (uint32_t)524, "HTTP_STATUS_TIMEOUT_OCCURED", AS_DESCR_HANDLE("524 Время ожидания истекло", 4046), Src_Cloudflare, AS_OS_ANY },
  /*85*/ { (uint32_t)525, "HTTP_STATUS_HANDSHAKE_FAILED", AS_DESCR_HANDLE("525 Ошибка установления SSL-соединения", 4093), Src_Cloudflare, AS_OS_ANY },
  /*86*/ { (uint32_t)526, "HTTP_STATUS_INVALID_CERTIFICATE", AS_DESCR_HANDLE("526 Недействительный SSL-сертификат", 4160), Src_CloudflareandCloudFoundry, AS_OS_ANY },
  /*87*/ { (uint32_t)527, "HTTP_STATUS_RAILGUN_ERROR", AS_DESCR_HANDLE("527 Ошибка Railgun", 4222), Src_Cloudflare, AS_OS_ANY },
  /*88*/ { (uint32_t)529, "HTTP_STATUS_SITE_OVERLOADED", AS_DESCR_HANDLE("529 Сайт перегружен", 4247), Src_Qualys, AS_OS_ANY },
  /*89*/ { (uint32_t)530, "HTTP_STATUS_SITE_FROZEN", AS_DESCR_HANDLE("530 Сайт заморожен", 4281), Src_Pantheon, AS_OS_ANY },
  /*90*/ { (uint32_t)561, "HTTP_STATUS_UNAUTHORIZED", AS_DESCR_HANDLE("561 Доступ не разрешён", 4313), Src_AWSElasticLoadBalancer, AS_OS_ANY },
  /*91*/ { (uint32_t)598, "HTTP_STATUS_NETWORK_READ_TIMEOUT", AS_DESCR_HANDLE("598 Время ожидания чтения из сети истекло", 4352), Src_SomeHTTPproxies, AS_OS_ANY },
  { (uint32_t)0, nullptr }
};

// 
// Item count: 92
// Constant names: 2369 bytes
// Description text: 1870 bytes
// Duplicated names: 0 
// Duplicated constants: 2 HTTP_STATUS_METHOD_FAILURE HTTP_STATUS_TOKEN_REQUIRED
// Constant duplication count: 4
// 

static int Name2CodeHash0List[1] = {-1};
static int Name2CodeHash1List[4] = {19, 76, 84, -1};
static int Name2CodeHash2List[2] = {32, -1};
static int Name2CodeHash3List[2] = {70, -1};
static int Name2CodeHash4List[1] = {-1};
static int Name2CodeHash5List[2] = {46, -1};
static int Name2CodeHash6List[3] = {44, 65, -1};
static int Name2CodeHash7List[1] = {-1};
static int Name2CodeHash8List[2] = {86, -1};
static int Name2CodeHash9List[2] = {81, -1};
static int Name2CodeHash10List[2] = {49, -1};
static int Name2CodeHash11List[2] = {51, -1};
static int Name2CodeHash12List[2] = {27, -1};
static int Name2CodeHash13List[3] = {5, 61, -1};
static int Name2CodeHash14List[4] = {6, 36, 40, -1};
static int Name2CodeHash15List[2] = {63, -1};
static int Name2CodeHash16List[4] = {9, 21, 43, -1};
static int Name2CodeHash17List[3] = {80, 82, -1};
static int Name2CodeHash18List[2] = {78, -1};
static int Name2CodeHash19List[2] = {22, -1};
static int Name2CodeHash20List[1] = {-1};
static int Name2CodeHash21List[4] = {18, 62, 68, -1};
static int Name2CodeHash22List[2] = {87, -1};
static int Name2CodeHash23List[3] = {29, 72, -1};
static int Name2CodeHash24List[3] = {45, 57, -1};
static int Name2CodeHash25List[2] = {20, -1};
static int Name2CodeHash26List[3] = {31, 79, -1};
static int Name2CodeHash27List[1] = {-1};
static int Name2CodeHash28List[3] = {12, 30, -1};
static int Name2CodeHash29List[3] = {47, 77, -1};
static int Name2CodeHash30List[4] = {4, 17, 28, -1};
static int Name2CodeHash31List[2] = {0, -1};
static int Name2CodeHash32List[2] = {85, -1};
static int Name2CodeHash33List[1] = {-1};
static int Name2CodeHash34List[1] = {-1};
static int Name2CodeHash35List[4] = {50, 58, 67, -1};
static int Name2CodeHash36List[1] = {-1};
static int Name2CodeHash37List[3] = {15, 39, -1};
static int Name2CodeHash38List[3] = {42, 69, -1};
static int Name2CodeHash39List[1] = {-1};
static int Name2CodeHash40List[5] = {8, 10, 59, 91, -1};
static int Name2CodeHash41List[3] = {11, 64, -1};
static int Name2CodeHash42List[4] = {2, 16, 26, -1};
static int Name2CodeHash43List[2] = {66, -1};
static int Name2CodeHash44List[1] = {-1};
static int Name2CodeHash45List[3] = {23, 73, -1};
static int Name2CodeHash46List[4] = {3, 83, 89, -1};
static int Name2CodeHash47List[2] = {34, -1};
static int Name2CodeHash48List[2] = {71, -1};
static int Name2CodeHash49List[3] = {14, 25, -1};
static int Name2CodeHash50List[1] = {-1};
static int Name2CodeHash51List[1] = {-1};
static int Name2CodeHash52List[2] = {55, -1};
static int Name2CodeHash53List[3] = {13, 35, -1};
static int Name2CodeHash54List[1] = {-1};
static int Name2CodeHash55List[6] = {24, 48, 52, 60, 90, -1};
static int Name2CodeHash56List[2] = {74, -1};
static int Name2CodeHash57List[2] = {1, -1};
static int Name2CodeHash58List[2] = {75, -1};
static int Name2CodeHash59List[3] = {37, 54, -1};
static int Name2CodeHash60List[3] = {41, 88, -1};
static int Name2CodeHash61List[2] = {56, -1};
static int Name2CodeHash62List[4] = {7, 33, 38, -1};
static int Name2CodeHash63List[2] = {53, -1};

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

static int Code2NameHash0List[2] = {30, -1};
static int Code2NameHash1List[2] = {31, -1};
static int Code2NameHash2List[2] = {32, -1};
static int Code2NameHash3List[2] = {33, -1};
static int Code2NameHash4List[1] = {-1};
static int Code2NameHash5List[1] = {-1};
static int Code2NameHash6List[1] = {-1};
static int Code2NameHash7List[1] = {-1};
static int Code2NameHash8List[1] = {-1};
static int Code2NameHash9List[1] = {-1};
static int Code2NameHash10List[1] = {-1};
static int Code2NameHash11List[2] = {34, -1};
static int Code2NameHash12List[2] = {35, -1};
static int Code2NameHash13List[2] = {36, -1};
static int Code2NameHash14List[2] = {37, -1};
static int Code2NameHash15List[2] = {38, -1};
static int Code2NameHash16List[2] = {39, -1};
static int Code2NameHash17List[1] = {-1};
static int Code2NameHash18List[1] = {-1};
static int Code2NameHash19List[2] = {12, -1};
static int Code2NameHash20List[1] = {-1};
static int Code2NameHash21List[1] = {-1};
static int Code2NameHash22List[2] = {40, -1};
static int Code2NameHash23List[3] = {4, 41, -1};
static int Code2NameHash24List[4] = {5, 14, 42, -1};
static int Code2NameHash25List[2] = {43, -1};
static int Code2NameHash26List[3] = {44, 45, -1};
static int Code2NameHash27List[2] = {46, -1};
static int Code2NameHash28List[2] = {47, -1};
static int Code2NameHash29List[2] = {48, -1};
static int Code2NameHash30List[3] = {49, 58, -1};
static int Code2NameHash31List[3] = {50, 59, -1};
static int Code2NameHash32List[3] = {6, 60, -1};
static int Code2NameHash33List[2] = {7, -1};
static int Code2NameHash34List[3] = {8, 56, -1};
static int Code2NameHash35List[2] = {9, -1};
static int Code2NameHash36List[3] = {10, 13, -1};
static int Code2NameHash37List[3] = {11, 19, -1};
static int Code2NameHash38List[3] = {0, 20, -1};
static int Code2NameHash39List[4] = {1, 21, 51, -1};
static int Code2NameHash40List[4] = {2, 22, 63, -1};
static int Code2NameHash41List[5] = {3, 23, 52, 64, -1};
static int Code2NameHash42List[4] = {53, 65, 88, -1};
static int Code2NameHash43List[5] = {54, 66, 67, 89, -1};
static int Code2NameHash44List[3] = {55, 68, -1};
static int Code2NameHash45List[4] = {57, 69, 80, -1};
static int Code2NameHash46List[3] = {70, 81, -1};
static int Code2NameHash47List[2] = {71, -1};
static int Code2NameHash48List[2] = {72, -1};
static int Code2NameHash49List[3] = {73, 90, -1};
static int Code2NameHash50List[1] = {-1};
static int Code2NameHash51List[1] = {-1};
static int Code2NameHash52List[1] = {-1};
static int Code2NameHash53List[2] = {15, -1};
static int Code2NameHash54List[3] = {16, 82, -1};
static int Code2NameHash55List[3] = {17, 83, -1};
static int Code2NameHash56List[3] = {18, 84, -1};
static int Code2NameHash57List[4] = {61, 74, 85, -1};
static int Code2NameHash58List[5] = {24, 62, 75, 86, -1};
static int Code2NameHash59List[4] = {25, 76, 87, -1};
static int Code2NameHash60List[3] = {26, 77, -1};
static int Code2NameHash61List[4] = {27, 78, 91, -1};
static int Code2NameHash62List[3] = {28, 79, -1};
static int Code2NameHash63List[2] = {29, -1};

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


void HTTPGetTables(TABLES& t)
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
void HTTPRefModule() {}
#endif  // #if AS_BUILD_AS_HTTP


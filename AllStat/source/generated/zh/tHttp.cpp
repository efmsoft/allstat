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
static int DescrBlockSize = 1827;
static const uint8_t CompressedDescr[] =
{
  // Uncompressed size: 1827, Compressed size: 1094, Rate: 1.7
  0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x7d, 0x55, 0x4d, 0x53, 0xe2, 0x58, 
  0x14, 0xe5, 0xa7, 0xbc, 0x3f, 0x30, 0x55, 0x24, 0x24, 0x08, 0xeb, 0xd9, 0x4c, 0x57, 0xf5, 0x54, 
  0x4d, 0xb5, 0x3d, 0xd5, 0xeb, 0x99, 0x1a, 0xab, 0xa7, 0xab, 0xba, 0xe8, 0xc5, 0x38, 0x35, 0x5b, 
  0xa2, 0x02, 0x01, 0xe5, 0x6b, 0x04, 0x11, 0x45, 0x11, 0x44, 0x45, 0x69, 0x12, 0x6d, 0x15, 0x81, 
  0x54, 0xe4, 0xcf, 0xe4, 0xbe, 0x97, 0xfc, 0x8b, 0x39, 0x21, 0x09, 0xad, 0x9b, 0xd9, 0xe5, 0x9e, 
  0xfb, 0xde, 0x7d, 0xe7, 0x9e, 0xfb, 0x11, 0x29, 0x1e, 0x67, 0xc2, 0xba, 0x12, 0xd6, 0x38, 0x26, 
  0xc5, 0x25, 0x46, 0x7a, 0x81, 0x97, 0xfb, 0x54, 0xae, 0xba, 0x86, 0x01, 0x40, 0x66, 0x34, 0xd8, 
  0x11, 0xb5, 0xbc, 0x33, 0xf5, 0xdd, 0x09, 0xc6, 0x5b, 0xd7, 0xbc, 0xd3, 0xe5, 0xd5, 0x9a, 0x18, 
  0xcc, 0x63, 0x32, 0xae, 0x72, 0xbd, 0x46, 0xa5, 0x2e, 0x3e, 0x71, 0xf5, 0xe9, 0x1b, 0xe9, 0xc7, 
  0x64, 0xf9, 0x0e, 0xd9, 0xb7, 0x78, 0xe5, 0x82, 0xaa, 0x2d, 0x58, 0x09, 0xe6, 0x9d, 0x9c, 0xf2, 
  0x93, 0x6d, 0x1a, 0x6a, 0xce, 0xa2, 0xc7, 0x35, 0x13, 0x98, 0x82, 0x58, 0x67, 0x94, 0xcf, 0x91, 
  0x31, 0x83, 0xa5, 0x32, 0xaf, 0x50, 0x16, 0xb6, 0xb1, 0x02, 0x92, 0xcc, 0xdb, 0x1e, 0x92, 0x9e, 
  0x5f, 0x01, 0x6b, 0x60, 0x72, 0x24, 0x4a, 0x13, 0x9e, 0xd5, 0x60, 0xa5, 0x96, 0xf1, 0x4b, 0x17, 
  0x54, 0x2f, 0xc5, 0x64, 0x29, 0xc5, 0x9c, 0x69, 0xd6, 0x67, 0x3e, 0x3e, 0xa7, 0xe9, 0x34, 0x26, 
  0xcb, 0x49, 0xdf, 0xed, 0xd8, 0x0b, 0xd1, 0x18, 0xb2, 0x37, 0x3f, 0xc7, 0x12, 0x20, 0xea, 0xdf, 
  0xbe, 0x2a, 0x7b, 0xd9, 0x22, 0xdf, 0xbd, 0x06, 0x20, 0x31, 0x7e, 0x3b, 0x75, 0x66, 0x39, 0x71, 
  0x65, 0x51, 0x69, 0x08, 0x20, 0x60, 0x5c, 0x7c, 0x26, 0xfd, 0x16, 0x16, 0x32, 0xed, 0x5e, 0x88, 
  0xce, 0x2e, 0xe5, 0x26, 0x8e, 0x75, 0xe0, 0xd8, 0x3e, 0x37, 0xc0, 0x20, 0xdd, 0xb9, 0x71, 0x16, 
  0x06, 0x6f, 0xcc, 0x60, 0xa9, 0x2c, 0x78, 0xc2, 0xb1, 0xce, 0x21, 0x11, 0x80, 0x64, 0x28, 0xdf, 
  0x0a, 0x58, 0x03, 0xb1, 0x07, 0xde, 0x9a, 0x20, 0x39, 0x32, 0x8e, 0xa8, 0x56, 0x07, 0x96, 0x0a, 
  0x5f, 0xfe, 0x8e, 0x29, 0xa0, 0xe7, 0x35, 0xda, 0xae, 0x69, 0xba, 0xe6, 0x13, 0xbf, 0xdb, 0x02, 
  0x20, 0xf9, 0x0f, 0xf1, 0x8a, 0x0e, 0xd1, 0x60, 0xc9, 0xcc, 0xeb, 0x64, 0xdd, 0x4b, 0xcd, 0xb1, 
  0x0e, 0xf9, 0xd7, 0x67, 0x00, 0x09, 0x26, 0x2e, 0x35, 0x3e, 0xee, 0xbb, 0xc6, 0xc2, 0x6b, 0x19, 
  0x00, 0x96, 0xc4, 0x42, 0xf6, 0x0a, 0x88, 0xf1, 0x83, 0x19, 0xbf, 0x6f, 0x3a, 0xd3, 0x32, 0xe5, 
  0x34, 0xd7, 0x98, 0x02, 0x4b, 0x32, 0xdf, 0xaa, 0x9a, 0x61, 0x51, 0x14, 0x70, 0x8b, 0x82, 0xfa, 
  0x64, 0xdd, 0xf9, 0xc8, 0xb1, 0x6c, 0xef, 0x66, 0xcf, 0x35, 0x35, 0x38, 0x53, 0x2c, 0xa0, 0xe2, 
  0x4e, 0x72, 0xa0, 0x0f, 0x20, 0xcd, 0x28, 0xff, 0x4d, 0xdc, 0xc0, 0x27, 0xc5, 0x99, 0xfb, 0xb8, 
  0xc3, 0xe7, 0x35, 0xe8, 0x05, 0xf5, 0xbc, 0xf6, 0x00, 0x98, 0x14, 0x06, 0x63, 0x3f, 0x7e, 0xc9, 
  0x6c, 0x6e, 0x64, 0x36, 0x7f, 0x78, 0xbb, 0x91, 0xf9, 0xb8, 0xf9, 0x27, 0x3c, 0xd0, 0xb5, 0xe8, 
  0xab, 0xc7, 0x4f, 0x7a, 0x8e, 0x35, 0xa1, 0xc1, 0x9d, 0xfb, 0x70, 0x01, 0x38, 0xc1, 0x82, 0xca, 
  0xba, 0x8b, 0x02, 0x0d, 0xae, 0x00, 0x28, 0xec, 0xd7, 0x77, 0x6f, 0x18, 0x4c, 0xaf, 0xb9, 0x80, 
  0xa9, 0xfa, 0x74, 0x79, 0xc3, 0xe4, 0x7b, 0x9a, 0x38, 0xda, 0xa1, 0x9b, 0x7f, 0x1d, 0x7b, 0x5f, 
  0xdc, 0x59, 0x74, 0xba, 0x0b, 0x67, 0x92, 0xb9, 0x7b, 0xdb, 0x74, 0x0c, 0x65, 0xcf, 0x90, 0x25, 
  0xb7, 0x7a, 0xee, 0xe4, 0x1e, 0x30, 0x32, 0xea, 0xef, 0xa0, 0x3d, 0x57, 0x8f, 0x40, 0x6a, 0xbd, 
  0xce, 0x0f, 0x4d, 0x77, 0x6f, 0x42, 0xe7, 0xc8, 0x42, 0x4a, 0x33, 0xaf, 0xf7, 0xe8, 0x9d, 0xf4, 
  0x41, 0x1d, 0x2f, 0xe1, 0x68, 0x4c, 0x91, 0xe3, 0xa1, 0x58, 0xd1, 0x2d, 0x00, 0xc8, 0xdd, 0x6b, 
  0x97, 0x1d, 0xbb, 0x12, 0x88, 0xe0, 0xf5, 0xeb, 0xa2, 0x52, 0x80, 0x47, 0x8a, 0x54, 0xe9, 0x8f, 
  0x82, 0x7a, 0x45, 0x05, 0x94, 0x65, 0x16, 0x70, 0x09, 0xa6, 0xc5, 0x67, 0x6c, 0x9c, 0x82, 0x31, 
  0x3c, 0x09, 0xbf, 0xaf, 0xbc, 0x86, 0x86, 0xa3, 0xb0, 0x14, 0xe6, 0x3c, 0x9f, 0xb8, 0x8f, 0x07, 
  0xab, 0xc7, 0xd4, 0x28, 0x24, 0xe8, 0xb4, 0xae, 0x01, 0x24, 0x43, 0x25, 0xa9, 0x5c, 0x10, 0x73, 
  0x08, 0x23, 0xa7, 0x22, 0xe0, 0x85, 0x8c, 0x80, 0xd3, 0xdf, 0x2f, 0xa2, 0xb5, 0x63, 0x4a, 0x22, 
  0x1e, 0x02, 0xfc, 0x0c, 0xc0, 0x03, 0x8d, 0x5b, 0xdc, 0x78, 0x8c, 0xd4, 0x4d, 0x48, 0xff, 0xe3, 
  0x54, 0xb0, 0x00, 0xda, 0x16, 0xd9, 0xcd, 0xa8, 0xd8, 0x4a, 0x30, 0x9b, 0xfb, 0x65, 0x9a, 0x37, 
  0x60, 0xa5, 0xc3, 0x36, 0x0f, 0x66, 0x21, 0x20, 0x80, 0xe6, 0x75, 0xcd, 0x66, 0x4c, 0x51, 0xf1, 
  0x6a, 0x7f, 0xc4, 0x3e, 0x7c, 0xca, 0xfc, 0xf1, 0xe5, 0x9f, 0xbf, 0x18, 0x19, 0x13, 0x94, 0x8f, 
  0x57, 0xae, 0x48, 0x9f, 0x78, 0x87, 0x16, 0x3a, 0x14, 0x47, 0x24, 0xf6, 0xa2, 0xd5, 0xd3, 0xca, 
  0x2b, 0x26, 0x11, 0x87, 0xb4, 0xca, 0xd6, 0xd7, 0xdf, 0xc2, 0xa5, 0x39, 0xb3, 0xcb, 0x40, 0x5b, 
  0x80, 0x91, 0x16, 0x2f, 0x7c, 0x40, 0xd7, 0xd8, 0x4f, 0xef, 0xdf, 0xff, 0x12, 0x86, 0xa1, 0x6a, 
  0xdd, 0xcb, 0x6a, 0x68, 0x7b, 0x67, 0x9e, 0x5f, 0xe2, 0xeb, 0x4c, 0x8c, 0x4c, 0xaa, 0x9e, 0xe3, 
  0x60, 0x6a, 0x59, 0x94, 0xa6, 0xee, 0x58, 0x03, 0x51, 0xdc, 0x03, 0x90, 0x5e, 0xb5, 0xfc, 0x0a, 
  0x20, 0xa3, 0xcf, 0xf5, 0x27, 0xff, 0x4a, 0xee, 0xde, 0x6b, 0x8d, 0x11, 0x25, 0x9c, 0x41, 0xd5, 
  0xdf, 0x19, 0xf9, 0x1c, 0xb6, 0x10, 0xef, 0x94, 0xa9, 0xd4, 0xa3, 0xf6, 0x30, 0xe4, 0xa5, 0x06, 
  0xd3, 0x89, 0x0a, 0x8b, 0xca, 0x2d, 0x2c, 0x39, 0x1c, 0x5e, 0x61, 0xd7, 0x11, 0x04, 0x00, 0x96, 
  0xc7, 0xf2, 0x4a, 0x30, 0x70, 0x50, 0x0e, 0x98, 0xc2, 0x02, 0x77, 0xa8, 0xb1, 0x1a, 0x7f, 0xdd, 
  0xe0, 0x41, 0x4a, 0xa2, 0xa8, 0xf3, 0xce, 0x57, 0x38, 0xb1, 0x48, 0xaa, 0x87, 0xe8, 0x1f, 0x67, 
  0xd6, 0xa5, 0xea, 0x96, 0x33, 0xad, 0x60, 0x21, 0x53, 0x33, 0x0f, 0x0f, 0xd6, 0xe0, 0xf8, 0x90, 
  0xb6, 0x86, 0xe2, 0x7a, 0xee, 0xb5, 0x1e, 0x10, 0xc2, 0x6f, 0x7d, 0xd5, 0x5f, 0x2a, 0xe7, 0x59, 
  0xfe, 0xb8, 0x0b, 0x21, 0xe8, 0xf9, 0x46, 0x54, 0x7c, 0x96, 0xe8, 0x90, 0x49, 0x8e, 0x0a, 0x73, 
  0x9a, 0x5e, 0x92, 0x61, 0x7b, 0xed, 0x1a, 0x8a, 0x12, 0x53, 0x31, 0xbe, 0xcb, 0x55, 0x71, 0x4d, 
  0x77, 0x4d, 0x58, 0xd1, 0xe0, 0x82, 0x9d, 0xb0, 0x3a, 0xaf, 0xb6, 0x80, 0x8a, 0x49, 0xf8, 0xb0, 
  0xf1, 0x3b, 0x5b, 0xe5, 0xef, 0x2e, 0x1a, 0x74, 0x7c, 0x8a, 0xdb, 0xa2, 0x7b, 0x11, 0x69, 0x81, 
  0x99, 0x78, 0x75, 0xc6, 0xff, 0x09, 0x68, 0x1d, 0xde, 0x99, 0xc3, 0x25, 0x63, 0x9c, 0x4f, 0xb1, 
  0x6f, 0xa2, 0x9c, 0xe5, 0x44, 0x38, 0x25, 0xc1, 0xda, 0xc2, 0x0a, 0x11, 0xa3, 0x36, 0x60, 0x05, 
  0xd9, 0xd6, 0x45, 0xa3, 0xbb, 0x3a, 0x17, 0x34, 0x03, 0xaf, 0xf6, 0x78, 0x71, 0x37, 0x9c, 0x14, 
  0x15, 0x83, 0x11, 0x54, 0xd3, 0x57, 0xeb, 0x45, 0x3f, 0xa8, 0xf2, 0x1a, 0x7b, 0xf7, 0xdb, 0xa7, 
  0xcf, 0x1f, 0xff, 0xce, 0xb0, 0x15, 0xa9, 0xb4, 0xaf, 0x36, 0x82, 0xa3, 0xbd, 0x5c, 0xdb, 0x8e, 
  0xa9, 0x18, 0x8e, 0x10, 0xe8, 0x8f, 0x28, 0x6f, 0x09, 0x6b, 0x3f, 0xa6, 0x26, 0x5f, 0xee, 0x58, 
  0x15, 0xcd, 0x12, 0x4a, 0x60, 0x5a, 0x54, 0x3d, 0x08, 0xa8, 0x84, 0xf1, 0xfe, 0x03, 0xef, 0xc0, 
  0xe1, 0x72, 0x23, 0x07, 0x00, 0x00, 
};
#endif  // #if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
static constexpr uint64_t _GENERATOR_ = AS_GENERATOR::AS_HTTP;
#endif

static const STATUS_ITEM Status[] =
{
  /*0*/ { (uint32_t)100, "HTTP_STATUS_CONTINUE", AS_DESCR_HANDLE("100 继续", 0), Src_, AS_OS_ANY },
  /*1*/ { (uint32_t)101, "HTTP_STATUS_SWITCH_PROTOCOLS", AS_DESCR_HANDLE("101 切换协议", 11), Src_, AS_OS_ANY },
  /*2*/ { (uint32_t)102, "HTTP_STATUS_PROCESSING", AS_DESCR_HANDLE("102 处理中", 28), Src_, AS_OS_ANY },
  /*3*/ { (uint32_t)103, "HTTP_EARLY_HINTS", AS_DESCR_HANDLE("103 早期提示", 42), Src_, AS_OS_ANY },
  /*4*/ { (uint32_t)200, "HTTP_STATUS_OK", AS_DESCR_HANDLE("200 成功", 59), Src_, AS_OS_ANY },
  /*5*/ { (uint32_t)201, "HTTP_STATUS_CREATED", AS_DESCR_HANDLE("201 已创建", 70), Src_, AS_OS_ANY },
  /*6*/ { (uint32_t)202, "HTTP_STATUS_ACCEPTED", AS_DESCR_HANDLE("202 已接受", 84), Src_, AS_OS_ANY },
  /*7*/ { (uint32_t)203, "HTTP_STATUS_NON_AUTH_INFORMATION", AS_DESCR_HANDLE("203 非权威信息", 98), Src_, AS_OS_ANY },
  /*8*/ { (uint32_t)204, "HTTP_STATUS_NO_CONTENT", AS_DESCR_HANDLE("204 无内容", 118), Src_, AS_OS_ANY },
  /*9*/ { (uint32_t)205, "HTTP_STATUS_RESET_CONTENT", AS_DESCR_HANDLE("205 重置内容", 132), Src_, AS_OS_ANY },
  /*10*/ { (uint32_t)206, "HTTP_STATUS_PARTIAL_CONTENT", AS_DESCR_HANDLE("206 部分内容", 149), Src_, AS_OS_ANY },
  /*11*/ { (uint32_t)207, "HTTP_STATUS_MULTI", AS_DESCR_HANDLE("207 多状态", 166), Src_, AS_OS_ANY },
  /*12*/ { (uint32_t)208, "HTTP_STATUS_ALREADY_REPORTED", AS_DESCR_HANDLE("208 已报告", 180), Src_, AS_OS_ANY },
  /*13*/ { (uint32_t)218, "HTTP_STATUS_FINE", AS_DESCR_HANDLE("218 一切正常", 194), Src_ApacheWebServer, AS_OS_ANY },
  /*14*/ { (uint32_t)226, "HTTP_STATUS_IM_USED", AS_DESCR_HANDLE("226 已使用 IM", 211), Src_, AS_OS_ANY },
  /*15*/ { (uint32_t)300, "HTTP_STATUS_AMBIGUOUS", AS_DESCR_HANDLE("300 多种选择", 228), Src_, AS_OS_ANY },
  /*16*/ { (uint32_t)301, "HTTP_STATUS_MOVED", AS_DESCR_HANDLE("301 永久移动", 245), Src_, AS_OS_ANY },
  /*17*/ { (uint32_t)302, "HTTP_STATUS_REDIRECT", AS_DESCR_HANDLE("302 已找到", 262), Src_, AS_OS_ANY },
  /*18*/ { (uint32_t)303, "HTTP_STATUS_REDIRECT_METHOD", AS_DESCR_HANDLE("303 查看其他位置", 276), Src_, AS_OS_ANY },
  /*19*/ { (uint32_t)304, "HTTP_STATUS_NOT_MODIFIED", AS_DESCR_HANDLE("304 未修改", 299), Src_, AS_OS_ANY },
  /*20*/ { (uint32_t)305, "HTTP_STATUS_USE_PROXY", AS_DESCR_HANDLE("305 使用代理", 313), Src_, AS_OS_ANY },
  /*21*/ { (uint32_t)306, "HTTP_STATUS_SWITCH_PROXY", AS_DESCR_HANDLE("306 切换代理", 330), Src_, AS_OS_ANY },
  /*22*/ { (uint32_t)307, "HTTP_STATUS_TEMPORARY_REDIRECT", AS_DESCR_HANDLE("307 临时重定向", 347), Src_, AS_OS_ANY },
  /*23*/ { (uint32_t)308, "HTTP_STATUS_PERMANENT_REDIRECT", AS_DESCR_HANDLE("308 永久重定向", 367), Src_, AS_OS_ANY },
  /*24*/ { (uint32_t)400, "HTTP_STATUS_BAD_REQUEST", AS_DESCR_HANDLE("400 错误请求", 387), Src_, AS_OS_ANY },
  /*25*/ { (uint32_t)401, "HTTP_STATUS_DENIED", AS_DESCR_HANDLE("401 未授权", 404), Src_, AS_OS_ANY },
  /*26*/ { (uint32_t)402, "HTTP_STATUS_PAYMENT_REQ", AS_DESCR_HANDLE("402 需要付款", 418), Src_, AS_OS_ANY },
  /*27*/ { (uint32_t)403, "HTTP_STATUS_FORBIDDEN", AS_DESCR_HANDLE("403 禁止访问", 435), Src_, AS_OS_ANY },
  /*28*/ { (uint32_t)404, "HTTP_STATUS_NOT_FOUND", AS_DESCR_HANDLE("404 未找到", 452), Src_, AS_OS_ANY },
  /*29*/ { (uint32_t)405, "HTTP_STATUS_BAD_METHOD", AS_DESCR_HANDLE("405 方法不允许", 466), Src_, AS_OS_ANY },
  /*30*/ { (uint32_t)406, "HTTP_STATUS_NONE_ACCEPTABLE", AS_DESCR_HANDLE("406 不可接受", 486), Src_, AS_OS_ANY },
  /*31*/ { (uint32_t)407, "HTTP_STATUS_PROXY_AUTH_REQ", AS_DESCR_HANDLE("407 需要代理身份验证", 503), Src_, AS_OS_ANY },
  /*32*/ { (uint32_t)408, "HTTP_STATUS_REQUEST_TIMEOUT", AS_DESCR_HANDLE("408 请求超时", 532), Src_, AS_OS_ANY },
  /*33*/ { (uint32_t)409, "HTTP_STATUS_CONFLICT", AS_DESCR_HANDLE("409 冲突", 549), Src_, AS_OS_ANY },
  /*34*/ { (uint32_t)410, "HTTP_STATUS_GONE", AS_DESCR_HANDLE("410 资源已移除", 560), Src_, AS_OS_ANY },
  /*35*/ { (uint32_t)411, "HTTP_STATUS_LENGTH_REQUIRED", AS_DESCR_HANDLE("411 需要 Content-Length", 580), Src_, AS_OS_ANY },
  /*36*/ { (uint32_t)412, "HTTP_STATUS_PRECOND_FAILED", AS_DESCR_HANDLE("412 前置条件失败", 606), Src_, AS_OS_ANY },
  /*37*/ { (uint32_t)413, "HTTP_STATUS_REQUEST_TOO_LARGE", AS_DESCR_HANDLE("413 内容过大", 629), Src_, AS_OS_ANY },
  /*38*/ { (uint32_t)414, "HTTP_STATUS_URI_TOO_LONG", AS_DESCR_HANDLE("414 URI 过长", 646), Src_, AS_OS_ANY },
  /*39*/ { (uint32_t)415, "HTTP_STATUS_UNSUPPORTED_MEDIA", AS_DESCR_HANDLE("415 不支持的媒体类型", 661), Src_, AS_OS_ANY },
  /*40*/ { (uint32_t)416, "HTTP_STATUS_RANGE_NOT_SATISFIABLE", AS_DESCR_HANDLE("416 范围无法满足", 690), Src_, AS_OS_ANY },
  /*41*/ { (uint32_t)417, "HTTP_STATUS_EXPECTATION_FAILED", AS_DESCR_HANDLE("417 预期失败", 713), Src_, AS_OS_ANY },
  /*42*/ { (uint32_t)418, "HTTP_STATUS_TEAPOT", AS_DESCR_HANDLE("418 我是茶壶", 730), Src_, AS_OS_ANY },
  /*43*/ { (uint32_t)419, "HTTP_STATUS_PAGE_EXPIRED", AS_DESCR_HANDLE("419 页面已过期", 747), Src_LaravelFramework, AS_OS_ANY },
  /*44*/ { (uint32_t)420, "HTTP_STATUS_METHOD_FAILURE", AS_DESCR_HANDLE("420 方法失败", 767), Src_SpringFramework, AS_OS_ANY },
  /*45*/ { (uint32_t)420, "HTTP_STATUS_ENHENCE_CALM", AS_DESCR_HANDLE("420 请降低请求频率", 784), Src_Twitter, AS_OS_ANY },
  /*46*/ { (uint32_t)421, "HTTP_STATUS_MISDIRECTED_REQUEST", AS_DESCR_HANDLE("421 请求被错误定向", 810), Src_, AS_OS_ANY },
  /*47*/ { (uint32_t)422, "HTTP_STATUS_UNPROCESSABLE_ENTITY", AS_DESCR_HANDLE("422 无法处理的实体", 836), Src_, AS_OS_ANY },
  /*48*/ { (uint32_t)423, "HTTP_STATUS_LOCKED", AS_DESCR_HANDLE("423 已锁定", 862), Src_, AS_OS_ANY },
  /*49*/ { (uint32_t)424, "HTTP_STATUS_FAILED_DEPENDENCY", AS_DESCR_HANDLE("424 依赖失败", 876), Src_, AS_OS_ANY },
  /*50*/ { (uint32_t)425, "HTTP_STATUS_TOO_EARLY", AS_DESCR_HANDLE("425 请求过早", 893), Src_, AS_OS_ANY },
  /*51*/ { (uint32_t)426, "HTTP_STATUS_UPGRADE_REQUIRED", AS_DESCR_HANDLE("426 需要升级", 910), Src_, AS_OS_ANY },
  /*52*/ { (uint32_t)428, "HTTP_STATUS_PRECONDITION_REQUIRED", AS_DESCR_HANDLE("428 需要前置条件", 927), Src_, AS_OS_ANY },
  /*53*/ { (uint32_t)429, "HTTP_STATUS_TOO_MANY_REQUESTS", AS_DESCR_HANDLE("429 请求过多", 950), Src_, AS_OS_ANY },
  /*54*/ { (uint32_t)430, "HTTP_STATUS_HEADER_FIELDS_TOO_LARGE_2", AS_DESCR_HANDLE("430 请求标头字段过大", 967), Src_Shopify, AS_OS_ANY },
  /*55*/ { (uint32_t)431, "HTTP_STATUS_HEADER_FIELDS_TOO_LARGE", AS_DESCR_HANDLE("431 请求标头字段过大", 996), Src_, AS_OS_ANY },
  /*56*/ { (uint32_t)440, "HTTP_STATUS_LOGIN_TIMEOUT", AS_DESCR_HANDLE("440 登录超时", 1025), Src_IIS, AS_OS_ANY },
  /*57*/ { (uint32_t)444, "HTTP_STATUS_BO_RESPONSE", AS_DESCR_HANDLE("444 无响应", 1042), Src_nginx, AS_OS_ANY },
  /*58*/ { (uint32_t)449, "HTTP_STATUS_RETRY_WITH", AS_DESCR_HANDLE("449 使用其他条件重试", 1056), Src_IIS, AS_OS_ANY },
  /*59*/ { (uint32_t)450, "HTTP_STATUS_BLOCKED", AS_DESCR_HANDLE("450 被 Windows 家长控制阻止", 1085), Src_Microsoft, AS_OS_ANY },
  /*60*/ { (uint32_t)451, "HTTP_STATUS_IIS_REDIRECT", AS_DESCR_HANDLE("451 重定向", 1120), Src_IIS, AS_OS_ANY },
  /*61*/ { (uint32_t)494, "HTTP_STATUS_REQUEST_HEADER_TOO_LARGE", AS_DESCR_HANDLE("494 请求标头过大", 1134), Src_nginx, AS_OS_ANY },
  /*62*/ { (uint32_t)495, "HTTP_STATUS_CERTIFICATE_ERROR", AS_DESCR_HANDLE("495 SSL 证书错误", 1157), Src_nginx, AS_OS_ANY },
  /*63*/ { (uint32_t)496, "HTTP_STATUS_CERTIFICATE_REQUIRED", AS_DESCR_HANDLE("496 需要 SSL 证书", 1178), Src_nginx, AS_OS_ANY },
  /*64*/ { (uint32_t)497, "HTTP_STATUS_HTTP_TO_HTTPS_PORT", AS_DESCR_HANDLE("497 HTTP 请求发送到了 HTTPS 端口", 1200), Src_nginx, AS_OS_ANY },
  /*65*/ { (uint32_t)498, "HTTP_STATUS_INVALID_TOKEN", AS_DESCR_HANDLE("498 无效令牌", 1241), Src_Esri, AS_OS_ANY },
  /*66*/ { (uint32_t)499, "HTTP_STATUS_TOKEN_REQUIRED", AS_DESCR_HANDLE("499 需要令牌", 1258), Src_Esri, AS_OS_ANY },
  /*67*/ { (uint32_t)499, "HTTP_STATUS_CLIENT_CLOSED_REQUEST", AS_DESCR_HANDLE("499 客户端关闭了请求", 1275), Src_nginx, AS_OS_ANY },
  /*68*/ { (uint32_t)500, "HTTP_STATUS_SERVER_ERROR", AS_DESCR_HANDLE("500 内部服务器错误", 1304), Src_, AS_OS_ANY },
  /*69*/ { (uint32_t)501, "HTTP_STATUS_NOT_SUPPORTED", AS_DESCR_HANDLE("501 未实现", 1330), Src_, AS_OS_ANY },
  /*70*/ { (uint32_t)502, "HTTP_STATUS_BAD_GATEWAY", AS_DESCR_HANDLE("502 错误网关", 1344), Src_, AS_OS_ANY },
  /*71*/ { (uint32_t)503, "HTTP_STATUS_SERVICE_UNAVAIL", AS_DESCR_HANDLE("503 服务不可用", 1361), Src_, AS_OS_ANY },
  /*72*/ { (uint32_t)504, "HTTP_STATUS_GATEWAY_TIMEOUT", AS_DESCR_HANDLE("504 网关超时", 1381), Src_, AS_OS_ANY },
  /*73*/ { (uint32_t)505, "HTTP_STATUS_VERSION_NOT_SUPPORTED", AS_DESCR_HANDLE("505 不支持的 HTTP 版本", 1398), Src_, AS_OS_ANY },
  /*74*/ { (uint32_t)506, "HTTP_STATUS_VARIANT_ALSO_NEGOTIATES", AS_DESCR_HANDLE("506 变体也参与协商", 1427), Src_, AS_OS_ANY },
  /*75*/ { (uint32_t)507, "HTTP_STATUS_INSUFFICIENT_STORAGE", AS_DESCR_HANDLE("507 存储空间不足", 1453), Src_, AS_OS_ANY },
  /*76*/ { (uint32_t)508, "HTTP_STATUS_LOOP_DETECTED", AS_DESCR_HANDLE("508 检测到循环", 1476), Src_, AS_OS_ANY },
  /*77*/ { (uint32_t)509, "HTTP_STATUS_BANDWIDTH_LIMIT_EXCEEDED", AS_DESCR_HANDLE("509 超出带宽限制", 1496), Src_ApacheWebServercPanel, AS_OS_ANY },
  /*78*/ { (uint32_t)510, "HTTP_STATUS_NOT_EXTENDED", AS_DESCR_HANDLE("510 未扩展", 1519), Src_, AS_OS_ANY },
  /*79*/ { (uint32_t)511, "HTTP_STATUS_AUTHENTICATION_REQUIRED", AS_DESCR_HANDLE("511 需要网络身份验证", 1533), Src_, AS_OS_ANY },
  /*80*/ { (uint32_t)520, "HTTP_STATUS_UNKNOWN_ERROR", AS_DESCR_HANDLE("520 Web 服务器返回未知错误", 1562), Src_Cloudflare, AS_OS_ANY },
  /*81*/ { (uint32_t)521, "HTTP_STATUS_SERVER_IS_DOWN", AS_DESCR_HANDLE("521 Web 服务器已停机", 1598), Src_Cloudflare, AS_OS_ANY },
  /*82*/ { (uint32_t)522, "HTTP_STATUS_CONNECTION_TIMED_OUT", AS_DESCR_HANDLE("522 连接超时", 1625), Src_Cloudflare, AS_OS_ANY },
  /*83*/ { (uint32_t)523, "HTTP_STATUS_ORIGIN_IS_UNREACHABLE", AS_DESCR_HANDLE("523 无法访问源站", 1642), Src_Cloudflare, AS_OS_ANY },
  /*84*/ { (uint32_t)524, "HTTP_STATUS_TIMEOUT_OCCURED", AS_DESCR_HANDLE("524 发生超时", 1665), Src_Cloudflare, AS_OS_ANY },
  /*85*/ { (uint32_t)525, "HTTP_STATUS_HANDSHAKE_FAILED", AS_DESCR_HANDLE("525 SSL 握手失败", 1682), Src_Cloudflare, AS_OS_ANY },
  /*86*/ { (uint32_t)526, "HTTP_STATUS_INVALID_CERTIFICATE", AS_DESCR_HANDLE("526 无效的 SSL 证书", 1703), Src_CloudflareandCloudFoundry, AS_OS_ANY },
  /*87*/ { (uint32_t)527, "HTTP_STATUS_RAILGUN_ERROR", AS_DESCR_HANDLE("527 Railgun 错误", 1728), Src_Cloudflare, AS_OS_ANY },
  /*88*/ { (uint32_t)529, "HTTP_STATUS_SITE_OVERLOADED", AS_DESCR_HANDLE("529 网站过载", 1747), Src_Qualys, AS_OS_ANY },
  /*89*/ { (uint32_t)530, "HTTP_STATUS_SITE_FROZEN", AS_DESCR_HANDLE("530 网站被冻结", 1764), Src_Pantheon, AS_OS_ANY },
  /*90*/ { (uint32_t)561, "HTTP_STATUS_UNAUTHORIZED", AS_DESCR_HANDLE("561 未授权", 1784), Src_AWSElasticLoadBalancer, AS_OS_ANY },
  /*91*/ { (uint32_t)598, "HTTP_STATUS_NETWORK_READ_TIMEOUT", AS_DESCR_HANDLE("598 网络读取超时错误", 1798), Src_SomeHTTPproxies, AS_OS_ANY },
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


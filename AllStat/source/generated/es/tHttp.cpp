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
static int DescrBlockSize = 2501;
static const uint8_t CompressedDescr[] =
{
  // Uncompressed size: 2501, Compressed size: 1153, Rate: 2.2
  0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x9d, 0x56, 0x4d, 0x6f, 0xe3, 0x36, 
  0x10, 0xf5, 0x4f, 0x99, 0x9f, 0x60, 0xc9, 0x92, 0x1d, 0x1f, 0xb3, 0x5b, 0x17, 0x0d, 0x90, 0x14, 
  0x41, 0x9c, 0x6d, 0xd1, 0x23, 0x4d, 0xd1, 0x5a, 0xa2, 0x14, 0xa9, 0x92, 0x94, 0xd7, 0xe9, 0xbf, 
  0xc9, 0x71, 0x0f, 0x7b, 0xda, 0x5b, 0xaf, 0xfe, 0x63, 0x7d, 0x43, 0x3a, 0xb6, 0xec, 0xa6, 0x40, 
  0xd1, 0x43, 0x82, 0x68, 0x86, 0x9c, 0xaf, 0xf7, 0xe6, 0x31, 0xc5, 0x74, 0x4a, 0x1f, 0x9d, 0x8d, 
  0xda, 0x0e, 0xc2, 0x4f, 0x8a, 0x69, 0x41, 0x1f, 0x45, 0xb7, 0xd1, 0x8e, 0x1a, 0x45, 0xbd, 0x77, 
  0xd1, 0x49, 0x67, 0x5c, 0x80, 0xa3, 0xa4, 0x47, 0xef, 0xa4, 0x0a, 0xc2, 0x36, 0x0e, 0x9f, 0x33, 
  0xba, 0xb3, 0x8d, 0x96, 0x42, 0x6a, 0x67, 0x55, 0xc0, 0x51, 0x65, 0x74, 0xa7, 0xad, 0xf0, 0x2a, 
  0x4c, 0xca, 0x14, 0xd3, 0x7b, 0x25, 0xa3, 0xc3, 0x07, 0x42, 0x7a, 0x25, 0x1a, 0xfe, 0xb3, 0xa4, 
  0x5b, 0xa9, 0xfa, 0x98, 0x3f, 0x38, 0xc4, 0xd6, 0xf9, 0x0e, 0x31, 0x0e, 0xdf, 0x2d, 0x59, 0x47, 
  0x62, 0x88, 0xce, 0xeb, 0x28, 0xa2, 0xde, 0x09, 0x1c, 0xa8, 0x68, 0xad, 0x2d, 0x49, 0x54, 0xa7, 
  0xac, 0x4e, 0x57, 0x6a, 0x7a, 0x52, 0x21, 0x8a, 0x8d, 0x51, 0x52, 0xf9, 0x0b, 0xcf, 0x3c, 0x75, 
  0x91, 0xbe, 0xa8, 0x17, 0x5e, 0x6a, 0x61, 0x60, 0x5d, 0xd0, 0x2a, 0x70, 0x36, 0xea, 0x0e, 0x7f, 
  0x99, 0xa8, 0x7b, 0xa3, 0x60, 0xbc, 0xa1, 0xdf, 0x04, 0xe9, 0x9c, 0x9a, 0xef, 0x16, 0x37, 0xf4, 
  0xec, 0x70, 0x06, 0x91, 0x0f, 0xaf, 0xb4, 0xd1, 0xca, 0x4e, 0xca, 0x72, 0x4e, 0x77, 0x0f, 0x34, 
  0x44, 0x6d, 0xf4, 0x9f, 0x7c, 0x68, 0x86, 0x96, 0x1e, 0xde, 0x62, 0x04, 0x72, 0x7d, 0xee, 0x1b, 
  0xf6, 0x82, 0x1e, 0xdc, 0x2e, 0x65, 0x55, 0x88, 0x67, 0x15, 0x8a, 0xe8, 0xf8, 0x17, 0x5c, 0x25, 
  0xad, 0x2c, 0xd7, 0xe8, 0x73, 0x84, 0x19, 0xfd, 0x82, 0xa2, 0x5d, 0xf4, 0xfc, 0x51, 0xd1, 0xcf, 
  0xa8, 0xca, 0x35, 0x7a, 0x8b, 0x21, 0x26, 0x77, 0x4d, 0x9f, 0x82, 0xf0, 0x3c, 0xf4, 0xfd, 0x0b, 
  0x3e, 0xe7, 0x19, 0x88, 0x91, 0x65, 0x81, 0xe6, 0x1b, 0x8d, 0xa9, 0xe6, 0x79, 0x21, 0x4f, 0xef, 
  0x3c, 0xda, 0x9c, 0xa1, 0xa3, 0x0b, 0xcf, 0xb9, 0x92, 0x49, 0x85, 0xba, 0xd7, 0xce, 0x68, 0xa9, 
  0xe3, 0xd0, 0xa0, 0x69, 0x99, 0x61, 0x11, 0x70, 0x14, 0x5c, 0x41, 0x9e, 0x78, 0x6a, 0xb1, 0x62, 
  0x88, 0x45, 0xeb, 0xc8, 0xab, 0x3f, 0x06, 0xe5, 0x75, 0x32, 0xcd, 0x18, 0xf5, 0xcf, 0x7a, 0x93, 
  0xbf, 0x52, 0xd1, 0xea, 0xdc, 0x53, 0x85, 0xa2, 0x1f, 0x0e, 0x5f, 0x23, 0x4f, 0xcf, 0xe6, 0x09, 
  0xe8, 0x98, 0x8f, 0xce, 0x53, 0xf4, 0x04, 0x36, 0xd0, 0x82, 0x61, 0x41, 0xb7, 0x03, 0xf0, 0x89, 
  0x89, 0x33, 0x5c, 0x65, 0x26, 0xd8, 0xfe, 0xe5, 0x94, 0x8f, 0x8b, 0x02, 0x14, 0x9a, 0xfb, 0x62, 
  0xaf, 0x0a, 0x08, 0x28, 0xf8, 0x2f, 0x23, 0x28, 0x9c, 0x9a, 0x40, 0x89, 0x31, 0x27, 0x5f, 0x32, 
  0xe6, 0x5b, 0xd8, 0x41, 0xb3, 0xaa, 0x98, 0x62, 0x08, 0x72, 0xf0, 0x01, 0x15, 0x66, 0x2a, 0xf2, 
  0x99, 0xa2, 0xa0, 0x7b, 0x67, 0xdb, 0x74, 0x71, 0x94, 0xa7, 0x60, 0x36, 0x2b, 0xf4, 0x01, 0x0a, 
  0xa7, 0x62, 0xb6, 0xc2, 0x98, 0xec, 0x99, 0x8d, 0x88, 0xd4, 0xa8, 0x4e, 0x04, 0xcd, 0xfc, 0x69, 
  0x3d, 0x78, 0x8f, 0x36, 0x8a, 0x8a, 0x3e, 0x3d, 0xdd, 0x8d, 0x1c, 0x46, 0xf8, 0x96, 0xf3, 0xd4, 
  0x28, 0x3c, 0x97, 0xdd, 0x01, 0x8a, 0x34, 0x0e, 0xe9, 0xba, 0x1e, 0x54, 0x4e, 0xed, 0x17, 0x73, 
  0x7a, 0x12, 0xb6, 0x4d, 0xf6, 0x00, 0x63, 0xd8, 0x62, 0x0a, 0xd9, 0x03, 0x8e, 0xee, 0x7b, 0xc6, 
  0x84, 0x59, 0x3f, 0x2a, 0xe4, 0x06, 0xc0, 0xbd, 0xd0, 0x60, 0x05, 0x90, 0x8e, 0x18, 0x04, 0x4c, 
  0x4b, 0x7a, 0x3c, 0xbc, 0xb6, 0x68, 0x8d, 0xc0, 0x99, 0x01, 0x3f, 0x30, 0x96, 0x53, 0xfa, 0x11, 
  0x77, 0x38, 0xb5, 0x01, 0xcd, 0x13, 0x18, 0xc9, 0x0a, 0x4a, 0x0c, 0x12, 0x53, 0x34, 0x84, 0x95, 
  0xea, 0x5c, 0x9e, 0x63, 0x38, 0x0f, 0x12, 0xec, 0xad, 0xca, 0x62, 0xc4, 0x8e, 0x4e, 0x18, 0x02, 
  0x8b, 0x74, 0x9b, 0xf2, 0x97, 0xcc, 0x5e, 0x80, 0x29, 0x9a, 0x04, 0x6d, 0xde, 0xfd, 0x54, 0x71, 
  0x39, 0xa3, 0x0f, 0xc6, 0x61, 0x96, 0x69, 0xc2, 0x65, 0x45, 0x3f, 0xa8, 0x5e, 0x61, 0x3a, 0x16, 
  0x4b, 0x77, 0xae, 0xbf, 0xac, 0x61, 0x7f, 0x9b, 0x12, 0xae, 0x5b, 0x06, 0x09, 0x6b, 0x75, 0x2b, 
  0xe3, 0x20, 0x78, 0xab, 0xf2, 0xe0, 0x47, 0xa0, 0x94, 0x37, 0x57, 0xa0, 0x8c, 0x7d, 0xcb, 0x53, 
  0xb4, 0xeb, 0x1e, 0x66, 0x53, 0xde, 0x94, 0xde, 0x85, 0xc4, 0x19, 0x2b, 0xc5, 0x46, 0x31, 0x9f, 
  0xf9, 0xeb, 0x4c, 0x9a, 0x6b, 0x24, 0xf9, 0x5e, 0xf1, 0xff, 0xee, 0x55, 0xd3, 0x77, 0x39, 0xaa, 
  0x2d, 0xae, 0xe4, 0xdb, 0x2a, 0xa4, 0xf2, 0x4f, 0x44, 0xad, 0xb2, 0x90, 0x41, 0x1a, 0xfb, 0x81, 
  0xe5, 0x0b, 0x96, 0x25, 0xe0, 0xd1, 0x4c, 0xb3, 0x28, 0x92, 0x8e, 0x4d, 0xaa, 0x7a, 0x7a, 0x9e, 
  0x2a, 0x61, 0xb1, 0x19, 0xb8, 0xb4, 0x68, 0xce, 0xb0, 0xa0, 0xf1, 0x49, 0xc3, 0xd1, 0x7f, 0xd5, 
  0x10, 0xe0, 0x2f, 0xa8, 0xa3, 0x2e, 0x2e, 0xb6, 0x7e, 0x52, 0x2d, 0x2b, 0xd6, 0x9b, 0xff, 0xd4, 
  0x06, 0x0e, 0xd7, 0xb4, 0xf2, 0x1e, 0x69, 0x70, 0x0e, 0x5a, 0x1a, 0x8f, 0x3a, 0x44, 0xeb, 0xf5, 
  0x3d, 0x9c, 0x10, 0x9f, 0x4b, 0xdb, 0x58, 0x14, 0x96, 0x8b, 0x11, 0x69, 0x7e, 0x7a, 0x7e, 0x7e, 
  0xc4, 0xf4, 0x76, 0x0c, 0x0c, 0x09, 0xd0, 0x95, 0xd0, 0xa3, 0x8f, 0x2e, 0x39, 0xd6, 0x38, 0xcc, 
  0xe2, 0xfa, 0xbb, 0x4a, 0xf2, 0xbe, 0x3b, 0xbc, 0x9a, 0x1c, 0x61, 0x79, 0x34, 0x8e, 0xa3, 0x2e, 
  0x69, 0x85, 0x8e, 0x8d, 0x66, 0xdd, 0xe2, 0x92, 0xfc, 0xe1, 0xfb, 0xc5, 0xe2, 0x4f, 0x6a, 0x68, 
  0x59, 0xae, 0x99, 0x27, 0xe7, 0x6d, 0xa6, 0x7c, 0x50, 0x9e, 0xe5, 0xd7, 0xc3, 0x9d, 0x14, 0x4d, 
  0x77, 0x50, 0x68, 0x56, 0x60, 0x1e, 0x7d, 0xcd, 0x9a, 0xc6, 0xf5, 0x88, 0x0c, 0xb2, 0x81, 0x22, 
  0x8d, 0x55, 0xb0, 0x86, 0xc0, 0xad, 0x39, 0x80, 0xcc, 0x2b, 0xdb, 0xe8, 0xd0, 0x3b, 0x9b, 0x16, 
  0xb3, 0x86, 0xda, 0xfd, 0x8b, 0x16, 0xf5, 0xd7, 0x11, 0xdf, 0x90, 0xae, 0xa1, 0x87, 0xd0, 0xf8, 
  0x0c, 0x7f, 0x9a, 0xcc, 0xa5, 0x0c, 0xd4, 0x90, 0xc5, 0x7b, 0x41, 0x3b, 0xe1, 0xb5, 0xe0, 0x2e, 
  0x23, 0x2b, 0xfc, 0xe1, 0x2b, 0x86, 0xa3, 0x5a, 0x87, 0xed, 0xc1, 0x01, 0xc8, 0xa4, 0xc1, 0x8b, 
  0xa8, 0xac, 0xe8, 0x78, 0x12, 0xe8, 0xc7, 0x86, 0x01, 0x38, 0xa4, 0xb1, 0xc0, 0x7f, 0x43, 0x1f, 
  0x06, 0x69, 0x14, 0x92, 0x47, 0xee, 0x20, 0x25, 0x5d, 0xd2, 0xfd, 0xe1, 0x1b, 0x94, 0x97, 0xad, 
  0x24, 0xac, 0xfc, 0x9c, 0x4a, 0xde, 0x00, 0x68, 0x41, 0x6a, 0x2f, 0x41, 0x12, 0x3e, 0x06, 0x81, 
  0x64, 0xf5, 0xde, 0x83, 0x74, 0x47, 0x43, 0xf1, 0x8e, 0x24, 0x7b, 0x35, 0x16, 0xca, 0x1a, 0x3a, 
  0xb2, 0x3a, 0xcf, 0x98, 0xbe, 0xa8, 0x0d, 0x0e, 0xed, 0x9c, 0xd9, 0xe1, 0x3c, 0x83, 0xad, 0x8e, 
  0x1c, 0x0a, 0xa0, 0x2a, 0x3a, 0xe0, 0xb0, 0xd0, 0x94, 0xeb, 0x2b, 0xf9, 0x65, 0x95, 0xe2, 0xf0, 
  0x2d, 0x1d, 0x28, 0xdf, 0x1d, 0x2c, 0x22, 0xa8, 0xfd, 0xc5, 0xe2, 0xd4, 0x50, 0x1a, 0x94, 0x1c, 
  0x14, 0x4f, 0x9c, 0x5b, 0x93, 0xe8, 0x05, 0x4f, 0xa8, 0x18, 0x85, 0x87, 0x19, 0x0f, 0x58, 0x8b, 
  0x37, 0xbb, 0x86, 0x12, 0xad, 0x33, 0x16, 0xa8, 0x0d, 0xcc, 0x88, 0x57, 0x49, 0x70, 0xa2, 0x4e, 
  0x5a, 0x99, 0xdd, 0xa7, 0xff, 0x6e, 0x46, 0x40, 0x32, 0xfb, 0xeb, 0xf2, 0x9f, 0xec, 0x1f, 0x91, 
  0xb7, 0x2e, 0x17, 0xe7, 0xcd, 0x79, 0x12, 0xda, 0xb4, 0x03, 0xe7, 0x4e, 0xec, 0x0d, 0x78, 0xfd, 
  0xde, 0xfe, 0x8f, 0x08, 0x6e, 0x03, 0x8e, 0xe1, 0x75, 0x48, 0x9d, 0xcc, 0xa6, 0xd7, 0x7e, 0xb4, 
  0xdb, 0x2a, 0x93, 0x9c, 0xf3, 0xeb, 0xa7, 0xb8, 0xc6, 0xd6, 0x9c, 0x72, 0x5c, 0xb7, 0xc1, 0xed, 
  0x1b, 0xa5, 0xfc, 0x91, 0x8c, 0x00, 0x6c, 0xf2, 0x37, 0x34, 0x03, 0x13, 0x71, 0xc5, 0x09, 0x00, 
  0x00, 
};
#endif  // #if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)

#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)
static constexpr uint64_t _GENERATOR_ = AS_GENERATOR::AS_HTTP;
#endif

static const STATUS_ITEM Status[] =
{
  /*0*/ { (uint32_t)100, "HTTP_STATUS_CONTINUE", AS_DESCR_HANDLE("100 Continuar", 0), Src_, AS_OS_ANY },
  /*1*/ { (uint32_t)101, "HTTP_STATUS_SWITCH_PROTOCOLS", AS_DESCR_HANDLE("101 Cambio de protocolos", 14), Src_, AS_OS_ANY },
  /*2*/ { (uint32_t)102, "HTTP_STATUS_PROCESSING", AS_DESCR_HANDLE("102 Procesando", 39), Src_, AS_OS_ANY },
  /*3*/ { (uint32_t)103, "HTTP_EARLY_HINTS", AS_DESCR_HANDLE("103 Indicaciones preliminares", 54), Src_, AS_OS_ANY },
  /*4*/ { (uint32_t)200, "HTTP_STATUS_OK", AS_DESCR_HANDLE("200 Correcto", 84), Src_, AS_OS_ANY },
  /*5*/ { (uint32_t)201, "HTTP_STATUS_CREATED", AS_DESCR_HANDLE("201 Creado", 97), Src_, AS_OS_ANY },
  /*6*/ { (uint32_t)202, "HTTP_STATUS_ACCEPTED", AS_DESCR_HANDLE("202 Aceptado", 108), Src_, AS_OS_ANY },
  /*7*/ { (uint32_t)203, "HTTP_STATUS_NON_AUTH_INFORMATION", AS_DESCR_HANDLE("203 Información no autoritativa", 121), Src_, AS_OS_ANY },
  /*8*/ { (uint32_t)204, "HTTP_STATUS_NO_CONTENT", AS_DESCR_HANDLE("204 Sin contenido", 154), Src_, AS_OS_ANY },
  /*9*/ { (uint32_t)205, "HTTP_STATUS_RESET_CONTENT", AS_DESCR_HANDLE("205 Restablecer contenido", 172), Src_, AS_OS_ANY },
  /*10*/ { (uint32_t)206, "HTTP_STATUS_PARTIAL_CONTENT", AS_DESCR_HANDLE("206 Contenido parcial", 198), Src_, AS_OS_ANY },
  /*11*/ { (uint32_t)207, "HTTP_STATUS_MULTI", AS_DESCR_HANDLE("207 Estado múltiple", 220), Src_, AS_OS_ANY },
  /*12*/ { (uint32_t)208, "HTTP_STATUS_ALREADY_REPORTED", AS_DESCR_HANDLE("208 Ya informado", 241), Src_, AS_OS_ANY },
  /*13*/ { (uint32_t)218, "HTTP_STATUS_FINE", AS_DESCR_HANDLE("218 Todo está bien", 258), Src_ApacheWebServer, AS_OS_ANY },
  /*14*/ { (uint32_t)226, "HTTP_STATUS_IM_USED", AS_DESCR_HANDLE("226 IM utilizado", 278), Src_, AS_OS_ANY },
  /*15*/ { (uint32_t)300, "HTTP_STATUS_AMBIGUOUS", AS_DESCR_HANDLE("300 Múltiples opciones", 295), Src_, AS_OS_ANY },
  /*16*/ { (uint32_t)301, "HTTP_STATUS_MOVED", AS_DESCR_HANDLE("301 Movido permanentemente", 319), Src_, AS_OS_ANY },
  /*17*/ { (uint32_t)302, "HTTP_STATUS_REDIRECT", AS_DESCR_HANDLE("302 Encontrado", 346), Src_, AS_OS_ANY },
  /*18*/ { (uint32_t)303, "HTTP_STATUS_REDIRECT_METHOD", AS_DESCR_HANDLE("303 Ver otro", 361), Src_, AS_OS_ANY },
  /*19*/ { (uint32_t)304, "HTTP_STATUS_NOT_MODIFIED", AS_DESCR_HANDLE("304 No modificado", 374), Src_, AS_OS_ANY },
  /*20*/ { (uint32_t)305, "HTTP_STATUS_USE_PROXY", AS_DESCR_HANDLE("305 Usar proxy", 392), Src_, AS_OS_ANY },
  /*21*/ { (uint32_t)306, "HTTP_STATUS_SWITCH_PROXY", AS_DESCR_HANDLE("306 Cambiar proxy", 407), Src_, AS_OS_ANY },
  /*22*/ { (uint32_t)307, "HTTP_STATUS_TEMPORARY_REDIRECT", AS_DESCR_HANDLE("307 Redirección temporal", 425), Src_, AS_OS_ANY },
  /*23*/ { (uint32_t)308, "HTTP_STATUS_PERMANENT_REDIRECT", AS_DESCR_HANDLE("308 Redirección permanente", 451), Src_, AS_OS_ANY },
  /*24*/ { (uint32_t)400, "HTTP_STATUS_BAD_REQUEST", AS_DESCR_HANDLE("400 Solicitud incorrecta", 479), Src_, AS_OS_ANY },
  /*25*/ { (uint32_t)401, "HTTP_STATUS_DENIED", AS_DESCR_HANDLE("401 No autorizado", 504), Src_, AS_OS_ANY },
  /*26*/ { (uint32_t)402, "HTTP_STATUS_PAYMENT_REQ", AS_DESCR_HANDLE("402 Pago requerido", 522), Src_, AS_OS_ANY },
  /*27*/ { (uint32_t)403, "HTTP_STATUS_FORBIDDEN", AS_DESCR_HANDLE("403 Prohibido", 541), Src_, AS_OS_ANY },
  /*28*/ { (uint32_t)404, "HTTP_STATUS_NOT_FOUND", AS_DESCR_HANDLE("404 No encontrado", 555), Src_, AS_OS_ANY },
  /*29*/ { (uint32_t)405, "HTTP_STATUS_BAD_METHOD", AS_DESCR_HANDLE("405 Método no permitido", 573), Src_, AS_OS_ANY },
  /*30*/ { (uint32_t)406, "HTTP_STATUS_NONE_ACCEPTABLE", AS_DESCR_HANDLE("406 No aceptable", 598), Src_, AS_OS_ANY },
  /*31*/ { (uint32_t)407, "HTTP_STATUS_PROXY_AUTH_REQ", AS_DESCR_HANDLE("407 Autenticación de proxy requerida", 615), Src_, AS_OS_ANY },
  /*32*/ { (uint32_t)408, "HTTP_STATUS_REQUEST_TIMEOUT", AS_DESCR_HANDLE("408 Tiempo de espera de la solicitud agotado", 653), Src_, AS_OS_ANY },
  /*33*/ { (uint32_t)409, "HTTP_STATUS_CONFLICT", AS_DESCR_HANDLE("409 Conflicto", 698), Src_, AS_OS_ANY },
  /*34*/ { (uint32_t)410, "HTTP_STATUS_GONE", AS_DESCR_HANDLE("410 Recurso eliminado", 712), Src_, AS_OS_ANY },
  /*35*/ { (uint32_t)411, "HTTP_STATUS_LENGTH_REQUIRED", AS_DESCR_HANDLE("411 Longitud requerida", 734), Src_, AS_OS_ANY },
  /*36*/ { (uint32_t)412, "HTTP_STATUS_PRECOND_FAILED", AS_DESCR_HANDLE("412 Precondición fallida", 757), Src_, AS_OS_ANY },
  /*37*/ { (uint32_t)413, "HTTP_STATUS_REQUEST_TOO_LARGE", AS_DESCR_HANDLE("413 Contenido demasiado grande", 783), Src_, AS_OS_ANY },
  /*38*/ { (uint32_t)414, "HTTP_STATUS_URI_TOO_LONG", AS_DESCR_HANDLE("414 URI demasiado largo", 814), Src_, AS_OS_ANY },
  /*39*/ { (uint32_t)415, "HTTP_STATUS_UNSUPPORTED_MEDIA", AS_DESCR_HANDLE("415 Tipo de medio no compatible", 838), Src_, AS_OS_ANY },
  /*40*/ { (uint32_t)416, "HTTP_STATUS_RANGE_NOT_SATISFIABLE", AS_DESCR_HANDLE("416 Rango no satisfacible", 870), Src_, AS_OS_ANY },
  /*41*/ { (uint32_t)417, "HTTP_STATUS_EXPECTATION_FAILED", AS_DESCR_HANDLE("417 Expectativa fallida", 896), Src_, AS_OS_ANY },
  /*42*/ { (uint32_t)418, "HTTP_STATUS_TEAPOT", AS_DESCR_HANDLE("418 Soy una tetera", 920), Src_, AS_OS_ANY },
  /*43*/ { (uint32_t)419, "HTTP_STATUS_PAGE_EXPIRED", AS_DESCR_HANDLE("419 Página caducada", 939), Src_LaravelFramework, AS_OS_ANY },
  /*44*/ { (uint32_t)420, "HTTP_STATUS_METHOD_FAILURE", AS_DESCR_HANDLE("420 Fallo del método", 960), Src_SpringFramework, AS_OS_ANY },
  /*45*/ { (uint32_t)420, "HTTP_STATUS_ENHENCE_CALM", AS_DESCR_HANDLE("420 Reduce el ritmo de las solicitudes", 982), Src_Twitter, AS_OS_ANY },
  /*46*/ { (uint32_t)421, "HTTP_STATUS_MISDIRECTED_REQUEST", AS_DESCR_HANDLE("421 Solicitud mal dirigida", 1021), Src_, AS_OS_ANY },
  /*47*/ { (uint32_t)422, "HTTP_STATUS_UNPROCESSABLE_ENTITY", AS_DESCR_HANDLE("422 Entidad no procesable", 1048), Src_, AS_OS_ANY },
  /*48*/ { (uint32_t)423, "HTTP_STATUS_LOCKED", AS_DESCR_HANDLE("423 Bloqueado", 1074), Src_, AS_OS_ANY },
  /*49*/ { (uint32_t)424, "HTTP_STATUS_FAILED_DEPENDENCY", AS_DESCR_HANDLE("424 Dependencia fallida", 1088), Src_, AS_OS_ANY },
  /*50*/ { (uint32_t)425, "HTTP_STATUS_TOO_EARLY", AS_DESCR_HANDLE("425 Demasiado pronto", 1112), Src_, AS_OS_ANY },
  /*51*/ { (uint32_t)426, "HTTP_STATUS_UPGRADE_REQUIRED", AS_DESCR_HANDLE("426 Actualización requerida", 1133), Src_, AS_OS_ANY },
  /*52*/ { (uint32_t)428, "HTTP_STATUS_PRECONDITION_REQUIRED", AS_DESCR_HANDLE("428 Precondición requerida", 1162), Src_, AS_OS_ANY },
  /*53*/ { (uint32_t)429, "HTTP_STATUS_TOO_MANY_REQUESTS", AS_DESCR_HANDLE("429 Demasiadas solicitudes", 1190), Src_, AS_OS_ANY },
  /*54*/ { (uint32_t)430, "HTTP_STATUS_HEADER_FIELDS_TOO_LARGE_2", AS_DESCR_HANDLE("430 Campos de encabezado de solicitud demasiado grandes", 1217), Src_Shopify, AS_OS_ANY },
  /*55*/ { (uint32_t)431, "HTTP_STATUS_HEADER_FIELDS_TOO_LARGE", AS_DESCR_HANDLE("431 Campos de encabezado de solicitud demasiado grandes", 1273), Src_, AS_OS_ANY },
  /*56*/ { (uint32_t)440, "HTTP_STATUS_LOGIN_TIMEOUT", AS_DESCR_HANDLE("440 Tiempo de espera de inicio de sesión agotado", 1329), Src_IIS, AS_OS_ANY },
  /*57*/ { (uint32_t)444, "HTTP_STATUS_BO_RESPONSE", AS_DESCR_HANDLE("444 Sin respuesta", 1379), Src_nginx, AS_OS_ANY },
  /*58*/ { (uint32_t)449, "HTTP_STATUS_RETRY_WITH", AS_DESCR_HANDLE("449 Reintentar con", 1397), Src_IIS, AS_OS_ANY },
  /*59*/ { (uint32_t)450, "HTTP_STATUS_BLOCKED", AS_DESCR_HANDLE("450 Bloqueado por el control parental de Windows", 1416), Src_Microsoft, AS_OS_ANY },
  /*60*/ { (uint32_t)451, "HTTP_STATUS_IIS_REDIRECT", AS_DESCR_HANDLE("451 Redirección", 1465), Src_IIS, AS_OS_ANY },
  /*61*/ { (uint32_t)494, "HTTP_STATUS_REQUEST_HEADER_TOO_LARGE", AS_DESCR_HANDLE("494 Encabezado de solicitud demasiado grande", 1482), Src_nginx, AS_OS_ANY },
  /*62*/ { (uint32_t)495, "HTTP_STATUS_CERTIFICATE_ERROR", AS_DESCR_HANDLE("495 Error de certificado SSL", 1527), Src_nginx, AS_OS_ANY },
  /*63*/ { (uint32_t)496, "HTTP_STATUS_CERTIFICATE_REQUIRED", AS_DESCR_HANDLE("496 Certificado SSL requerido", 1556), Src_nginx, AS_OS_ANY },
  /*64*/ { (uint32_t)497, "HTTP_STATUS_HTTP_TO_HTTPS_PORT", AS_DESCR_HANDLE("497 Solicitud HTTP enviada a un puerto HTTPS", 1586), Src_nginx, AS_OS_ANY },
  /*65*/ { (uint32_t)498, "HTTP_STATUS_INVALID_TOKEN", AS_DESCR_HANDLE("498 Token no válido", 1631), Src_Esri, AS_OS_ANY },
  /*66*/ { (uint32_t)499, "HTTP_STATUS_TOKEN_REQUIRED", AS_DESCR_HANDLE("499 Token requerido", 1652), Src_Esri, AS_OS_ANY },
  /*67*/ { (uint32_t)499, "HTTP_STATUS_CLIENT_CLOSED_REQUEST", AS_DESCR_HANDLE("499 El cliente cerró la solicitud", 1672), Src_nginx, AS_OS_ANY },
  /*68*/ { (uint32_t)500, "HTTP_STATUS_SERVER_ERROR", AS_DESCR_HANDLE("500 Error interno del servidor", 1707), Src_, AS_OS_ANY },
  /*69*/ { (uint32_t)501, "HTTP_STATUS_NOT_SUPPORTED", AS_DESCR_HANDLE("501 No implementado", 1738), Src_, AS_OS_ANY },
  /*70*/ { (uint32_t)502, "HTTP_STATUS_BAD_GATEWAY", AS_DESCR_HANDLE("502 Puerta de enlace incorrecta", 1758), Src_, AS_OS_ANY },
  /*71*/ { (uint32_t)503, "HTTP_STATUS_SERVICE_UNAVAIL", AS_DESCR_HANDLE("503 Servicio no disponible", 1790), Src_, AS_OS_ANY },
  /*72*/ { (uint32_t)504, "HTTP_STATUS_GATEWAY_TIMEOUT", AS_DESCR_HANDLE("504 Tiempo de espera de la puerta de enlace agotado", 1817), Src_, AS_OS_ANY },
  /*73*/ { (uint32_t)505, "HTTP_STATUS_VERSION_NOT_SUPPORTED", AS_DESCR_HANDLE("505 Versión HTTP no compatible", 1869), Src_, AS_OS_ANY },
  /*74*/ { (uint32_t)506, "HTTP_STATUS_VARIANT_ALSO_NEGOTIATES", AS_DESCR_HANDLE("506 La variante también negocia", 1901), Src_, AS_OS_ANY },
  /*75*/ { (uint32_t)507, "HTTP_STATUS_INSUFFICIENT_STORAGE", AS_DESCR_HANDLE("507 Almacenamiento insuficiente", 1934), Src_, AS_OS_ANY },
  /*76*/ { (uint32_t)508, "HTTP_STATUS_LOOP_DETECTED", AS_DESCR_HANDLE("508 Bucle detectado", 1966), Src_, AS_OS_ANY },
  /*77*/ { (uint32_t)509, "HTTP_STATUS_BANDWIDTH_LIMIT_EXCEEDED", AS_DESCR_HANDLE("509 Límite de ancho de banda excedido", 1986), Src_ApacheWebServercPanel, AS_OS_ANY },
  /*78*/ { (uint32_t)510, "HTTP_STATUS_NOT_EXTENDED", AS_DESCR_HANDLE("510 No extendido", 2025), Src_, AS_OS_ANY },
  /*79*/ { (uint32_t)511, "HTTP_STATUS_AUTHENTICATION_REQUIRED", AS_DESCR_HANDLE("511 Autenticación de red requerida", 2042), Src_, AS_OS_ANY },
  /*80*/ { (uint32_t)520, "HTTP_STATUS_UNKNOWN_ERROR", AS_DESCR_HANDLE("520 El servidor web devolvió un error desconocido", 2078), Src_Cloudflare, AS_OS_ANY },
  /*81*/ { (uint32_t)521, "HTTP_STATUS_SERVER_IS_DOWN", AS_DESCR_HANDLE("521 El servidor web está caído", 2129), Src_Cloudflare, AS_OS_ANY },
  /*82*/ { (uint32_t)522, "HTTP_STATUS_CONNECTION_TIMED_OUT", AS_DESCR_HANDLE("522 Tiempo de espera de conexión agotado", 2162), Src_Cloudflare, AS_OS_ANY },
  /*83*/ { (uint32_t)523, "HTTP_STATUS_ORIGIN_IS_UNREACHABLE", AS_DESCR_HANDLE("523 No se puede acceder al servidor de origen", 2204), Src_Cloudflare, AS_OS_ANY },
  /*84*/ { (uint32_t)524, "HTTP_STATUS_TIMEOUT_OCCURED", AS_DESCR_HANDLE("524 Se agotó el tiempo de espera", 2250), Src_Cloudflare, AS_OS_ANY },
  /*85*/ { (uint32_t)525, "HTTP_STATUS_HANDSHAKE_FAILED", AS_DESCR_HANDLE("525 Falló el protocolo de enlace SSL", 2284), Src_Cloudflare, AS_OS_ANY },
  /*86*/ { (uint32_t)526, "HTTP_STATUS_INVALID_CERTIFICATE", AS_DESCR_HANDLE("526 Certificado SSL no válido", 2322), Src_CloudflareandCloudFoundry, AS_OS_ANY },
  /*87*/ { (uint32_t)527, "HTTP_STATUS_RAILGUN_ERROR", AS_DESCR_HANDLE("527 Error de Railgun", 2353), Src_Cloudflare, AS_OS_ANY },
  /*88*/ { (uint32_t)529, "HTTP_STATUS_SITE_OVERLOADED", AS_DESCR_HANDLE("529 El sitio está sobrecargado", 2374), Src_Qualys, AS_OS_ANY },
  /*89*/ { (uint32_t)530, "HTTP_STATUS_SITE_FROZEN", AS_DESCR_HANDLE("530 El sitio está congelado", 2406), Src_Pantheon, AS_OS_ANY },
  /*90*/ { (uint32_t)561, "HTTP_STATUS_UNAUTHORIZED", AS_DESCR_HANDLE("561 No autorizado", 2435), Src_AWSElasticLoadBalancer, AS_OS_ANY },
  /*91*/ { (uint32_t)598, "HTTP_STATUS_NETWORK_READ_TIMEOUT", AS_DESCR_HANDLE("598 Error de tiempo de espera al leer de la red", 2453), Src_SomeHTTPproxies, AS_OS_ANY },
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


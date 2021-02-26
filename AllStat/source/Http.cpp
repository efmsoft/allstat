#include <AllStat/AllStat.h>
#include "AllStatDefs.h"

#include <cassert>
#include <string.h>

using namespace AllStat;

#pragma warning(disable : 4996 26812)

// DO NOT REMOVE!!! Used by generator script to produce tHtpp.cpp
#if 0
static const STATUS_ITEM Http[] =
{
  {100, "HTTP_STATUS_CONTINUE", "100 Continue", ""},
  {101, "HTTP_STATUS_SWITCH_PROTOCOLS", "101 Switching Protocols", ""},
  {102, "HTTP_STATUS_PROCESSING", "102 Processing", ""},
  {103, "HTTP_EARLY_HINTS", "103 Early Hints", ""},

  {200, "HTTP_STATUS_OK", "200 OK", ""},
  {201, "HTTP_STATUS_CREATED", "201 Created", ""},
  {202, "HTTP_STATUS_ACCEPTED", "202 Accepted", ""},
  {203, "HTTP_STATUS_NON_AUTH_INFORMATION", "203 Non-Authoritative Information", ""},
  {204, "HTTP_STATUS_NO_CONTENT", "204 No Content", ""},
  {205, "HTTP_STATUS_RESET_CONTENT", "205 Reset Content", ""},
  {206, "HTTP_STATUS_PARTIAL_CONTENT", "206 Partial Content", ""},
  {207, "HTTP_STATUS_MULTI", "207 Multi-Status", ""},
  {208, "HTTP_STATUS_ALREADY_REPORTED", "208 Already Reported", ""},
  {218, "HTTP_STATUS_FINE", "218 This is fine", "Apache Web Server"},
  {226, "HTTP_STATUS_IM_USED", "226 IM Used", ""},

  {300, "HTTP_STATUS_AMBIGUOUS", "300 Multiple Choices", ""},
  {301, "HTTP_STATUS_MOVED", "301 Moved Permanently", ""},
  {302, "HTTP_STATUS_REDIRECT", "302 Found", ""},
  {303, "HTTP_STATUS_REDIRECT_METHOD", "303 See Other", ""},
  {304, "HTTP_STATUS_NOT_MODIFIED", "304 Not Modified", ""},
  {305, "HTTP_STATUS_USE_PROXY", "305 Use Proxy", ""},
  {306, "HTTP_STATUS_SWITCH_PROXY", "306 Switch Proxy", ""},
  {307, "HTTP_STATUS_TEMPORARY_REDIRECT", "307 Temporary Redirect", ""},
  {308, "HTTP_STATUS_PERMANENT_REDIRECT", "308 Permanent Redirect", ""},

  {400, "HTTP_STATUS_BAD_REQUEST", "400 Bad Request", ""},
  {401, "HTTP_STATUS_DENIED", "401 Unauthorized", ""},
  {402, "HTTP_STATUS_PAYMENT_REQ", "402 Payment Required", ""},
  {403, "HTTP_STATUS_FORBIDDEN", "403 Forbidden", ""},
  {404, "HTTP_STATUS_NOT_FOUND", "404 Not Found", ""},
  {405, "HTTP_STATUS_BAD_METHOD", "405 Method Not Allowed", ""},
  {406, "HTTP_STATUS_NONE_ACCEPTABLE", "406 Not Acceptable", ""},
  {407, "HTTP_STATUS_PROXY_AUTH_REQ", "407 Proxy Authentication Required", ""},
  {408, "HTTP_STATUS_REQUEST_TIMEOUT", "408 Request Timeout", ""},
  {409, "HTTP_STATUS_CONFLICT", "409 Conflict", ""},
  {410, "HTTP_STATUS_GONE", "410 Gone", ""},
  {411, "HTTP_STATUS_LENGTH_REQUIRED", "411 Length Required", ""},
  {412, "HTTP_STATUS_PRECOND_FAILED", "412 Precondition Failed", ""},
  {413, "HTTP_STATUS_REQUEST_TOO_LARGE", "413 Payload Too Large", ""},
  {414, "HTTP_STATUS_URI_TOO_LONG", "414 URI Too Long", ""},
  {415, "HTTP_STATUS_UNSUPPORTED_MEDIA", "415 Unsupported Media Type", ""},
  {416, "HTTP_STATUS_RANGE_NOT_SATISFIABLE", "416 Range Not Satisfiable", ""},
  {417, "HTTP_STATUS_EXPECTATION_FAILED", "417 Expectation Failed", ""},
  {418, "HTTP_STATUS_TEAPOT", "418 I'm a teapot", ""},
  {419, "HTTP_STATUS_PAGE_EXPIRED", "419 Page Expired", "Laravel Framework"},
  {420, "HTTP_STATUS_METHOD_FAILURE", "420 Method Failure", "Spring Framework"},
  {420, "HTTP_STATUS_ENHENCE_CALM", "420 Enhance Your Calm", "Twitter"},
  {421, "HTTP_STATUS_MISDIRECTED_REQUEST", "421 Misdirected Request", ""},
  {422, "HTTP_STATUS_UNPROCESSABLE_ENTITY", "422 Unprocessable Entity", ""},
  {423, "HTTP_STATUS_LOCKED", "423 Locked", ""},
  {424, "HTTP_STATUS_FAILED_DEPENDENCY", "424 Failed Dependency", ""},
  {425, "HTTP_STATUS_TOO_EARLY", "425 Too Early", ""},
  {426, "HTTP_STATUS_UPGRADE_REQUIRED", "426 Upgrade Required", ""},
  {428, "HTTP_STATUS_PRECONDITION_REQUIRED", "428 Precondition Required", ""},
  {429, "HTTP_STATUS_TOO_MANY_REQUESTS", "429 Too Many Requests", ""},
  {430, "HTTP_STATUS_HEADER_FIELDS_TOO_LARGE_2", "430 Request Header Fields Too Large", "Shopify"},
  {431, "HTTP_STATUS_HEADER_FIELDS_TOO_LARGE", "431 Request Header Fields Too Large", ""},
  {440, "HTTP_STATUS_LOGIN_TIMEOUT", "440 Login Time-out", "IIS"},
  {444, "HTTP_STATUS_BO_RESPONSE", "444 No Response", "nginx"},
  {449, "HTTP_STATUS_RETRY_WITH", "449 Retry With", "IIS"},
  {450, "HTTP_STATUS_BLOCKED", "450 Blocked by Windows Parental Controls", "Microsoft"},
  {451, "HTTP_STATUS_UNAVAILABLE_FOR_LEGAL_REASONS", "451 Unavailable For Legal Reasons"},
  {451, "HTTP_STATUS_IIS_REDIRECT", "451 Redirect", "IIS"},
  {494, "HTTP_STATUS_REQUEST_HEADER_TOO_LARGE", "494 Request header too large", "nginx"},
  {495, "HTTP_STATUS_CERTIFICATE_ERROR", "495 SSL Certificate Error", "nginx"},
  {496, "HTTP_STATUS_CERTIFICATE_REQUIRED", "496 SSL Certificate Required", "nginx"},
  {497, "HTTP_STATUS_HTTP_TO_HTTPS_PORT", "497 HTTP Request Sent to HTTPS Port", "nginx"},
  {498, "HTTP_STATUS_INVALID_TOKEN", "498 Invalid Token", "Esri"},
  {499, "HTTP_STATUS_TOKEN_REQUIRED", "499 Token Required", "Esri"},
  {499, "HTTP_STATUS_CLIENT_CLOSED_REQUEST", "499 Client Closed Request", "nginx"},

  {500, "HTTP_STATUS_SERVER_ERROR", "500 Internal Server Error", ""},
  {501, "HTTP_STATUS_NOT_SUPPORTED", "501 Not Implemented", ""},
  {502, "HTTP_STATUS_BAD_GATEWAY", "502 Bad Gateway", ""},
  {503, "HTTP_STATUS_SERVICE_UNAVAIL", "503 Service Unavailable", ""},
  {504, "HTTP_STATUS_GATEWAY_TIMEOUT", "504 Gateway Timeout", ""},
  {505, "HTTP_STATUS_VERSION_NOT_SUPPORTED", "505 HTTP Version Not Supported", ""},
  {506, "HTTP_STATUS_VARIANT_ALSO_NEGOTIATES", "506 Variant Also Negotiates", ""},
  {507, "HTTP_STATUS_INSUFFICIENT_STORAGE", "507 Insufficient Storage", ""},
  {508, "HTTP_STATUS_LOOP_DETECTED", "508 Loop Detected", ""},
  {509, "HTTP_STATUS_BANDWIDTH_LIMIT_EXCEEDED", "509 Bandwidth Limit Exceeded", "Apache Web Server/cPanel"},
  {510, "HTTP_STATUS_NOT_EXTENDED", "510 Not Extended", ""},
  {511, "HTTP_STATUS_AUTHENTICATION_REQUIRED", "511 Network Authentication Required", ""},
  {520, "HTTP_STATUS_UNKNOWN_ERROR", "520 Web Server Returned an Unknown Error", "Cloudflare"},
  {521, "HTTP_STATUS_SERVER_IS_DOWN", "521 Web Server Is Down", "Cloudflare"},
  {522, "HTTP_STATUS_CONNECTION_TIMED_OUT", "522 Connection Timed Out", "Cloudflare"},
  {523, "HTTP_STATUS_ORIGIN_IS_UNREACHABLE", "523 Origin Is Unreachable", "Cloudflare"},
  {524, "HTTP_STATUS_TIMEOUT_OCCURED", "524 A Timeout Occurred", "Cloudflare"},
  {525, "HTTP_STATUS_HANDSHAKE_FAILED", "525 SSL Handshake Failed", "Cloudflare"},
  {526, "HTTP_STATUS_INVALID_CERTIFICATE", "526 Invalid SSL Certificate", "Cloudflare and Cloud Foundry"},
  {527, "HTTP_STATUS_RAILGUN_ERROR", "527 Railgun Error", "Cloudflare"},
  {529, "HTTP_STATUS_SITE_OVERLOADED", "529 Site is overloaded", "Qualys"},
  {530, "HTTP_STATUS_SITE_FROZEN", "530 Site is frozen", "Pantheon"},
  {561, "HTTP_STATUS_UNAUTHORIZED", "561 Unauthorized", "AWS Elastic Load Balancer"},
  {598, "HTTP_STATUS_NETWORK_READ_TIMEOUT", "598 Network read timeout error", "Some HTTP proxies"},
};
#endif

void HTTPGetTables(TABLES& t);

std::string AllStat::HttpCode2Str(uint32_t code)
{
  TABLES t;
  HTTPGetTables(t);

  const STATUS_ITEM* p = EntryByCode(code, t.Items, t.Code2name);
  return FormatName(code, p, "%i");
}

const char* HttpCode2StrC(uint32_t value)
{
  std::string str = HttpCode2Str(value);
  return strdup(str.c_str());
}

ItemArray AllStat::HttpCodeInfo(uint32_t code)
{
  TABLES t;
  HTTPGetTables(t);

  ItemArray aa;
  auto a = EntryByCodeArray(code, t.Items, t.Code2name);
  for (auto it = a.begin(); it != a.end(); ++it)
  {
    auto item = *it;

    AS_ITEM ai;
    ItemFromStatusItem(*item, ai, AS_GENERATOR::AS_HTTP, AS_GENERATOR::AS_HTTP);

    aa.push_back(ai);
  }
  return aa;
}

const char* HttpCode2Name(uint32_t code)
{
  TABLES t;
  HTTPGetTables(t);

  const STATUS_ITEM* p = EntryByCode(code, t.Items, t.Code2name);
  return p ? p->Name : nullptr;
}

uint32_t Name2HttpCodeItem(const char* constant_name, PAS_ITEM pitem)
{
  if (pitem == nullptr)
  {
    assert(pitem);
    return AS_UNKNOWN;
  }

  TABLES t;
  HTTPGetTables(t);

  auto e = EntryByName(constant_name, t.Items, t.Name2code);
  if (e == nullptr)
    return AS_UNKNOWN;

  ItemFromStatusItem(*e, *pitem, AS_GENERATOR::AS_HTTP, AS_GENERATOR::AS_HTTP);
  return 0;
}

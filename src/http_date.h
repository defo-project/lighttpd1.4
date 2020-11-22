/*
 * http_date - HTTP date manipulation
 *
 * Copyright(c) 2015 Glenn Strauss gstrauss()gluelogic.com  All rights reserved
 * License: BSD 3-clause (same as lighttpd)
 */
#ifndef INCLUDED_HTTP_DATE_H
#define INCLUDED_HTTP_DATE_H
#include "first.h"


#ifdef __cplusplus
extern "C" {
#endif


#define HTTP_DATE_SZ 30  /* (IMF-fixdate is 29 chars + '\0') */

uint32_t http_date_time_to_str (char *s, size_t sz, time_t t);

int http_date_if_modified_since (const char *ifmod, uint32_t ifmodlen, time_t lmtime);


#ifdef __cplusplus
}
#endif


#endif

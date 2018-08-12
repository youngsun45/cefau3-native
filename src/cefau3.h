#ifndef CEFAU3_INCLUDE
#define CEFAU3_INCLUDE
#pragma once

//#include <sdkddkver.h>

#define WIN32_LEAN_AND_MEAN 

#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif
#include "include/capi/cef_app_capi.h"
#include "include/capi/cef_base_capi.h"
#include "include/capi/cef_client_capi.h"
#include "include/internal/cef_types.h"
#include "include/cef_version.h"
#ifdef __cplusplus
}
#endif

cef_string_t cefstring_cs(char *);
cef_string_t cefstring_wcs(wchar_t *);
cef_string_t *cefstring_pcs(char *);
cef_string_t *cefstring_pwcs(wchar_t *);

#endif
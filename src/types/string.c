#include "../cefau3.h"

cef_string_t * __stdcall CefString_Create(wchar_t *wcs)
{
	cef_string_t *p = calloc(1, sizeof(cef_string_t));
	cef_string_from_wide(wcs, wcslen(wcs), p);
	return p;
}

void * __stdcall CefString_Free(cef_string_t *s)
{
	if (s) free(s);
}

wchar_t * __stdcall CefString_Read(cef_string_t *s)
{
	return s->str;
}

u16 __stdcall CefString_Len(cef_string_t *s)
{
	return s->length;
}

cef_string_t cefstring_cs(char *cs)
{
	cef_string_t s = { 0 };
	cef_string_from_utf8(cs, strlen(cs), &s);
	return s;
}

cef_string_t cefstring_wcs(wchar_t *wcs)
{
	cef_string_t s = { 0 };
	cef_string_from_wide(wcs, wcslen(wcs), &s);
	return s;
}

cef_string_t * cefstring_pcs(char *cs)
{
	cef_string_t s = { 0 };
	cef_string_from_utf8(cs, strlen(cs), &s);
	return &s;
}

cef_string_t * cefstring_pwcs(wchar_t *wcs)
{
	cef_string_t s = { 0 };
	cef_string_from_wide(wcs, wcslen(wcs), &s);
	return &s;
}
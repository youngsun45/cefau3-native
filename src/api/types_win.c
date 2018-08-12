#include "../cefau3.h"

cef_window_info_t * __stdcall CefWindowInfo_Create()
{
	size_t sz = sizeof(cef_window_info_t);
	cef_window_info_t *p = calloc(1, sz);
	return p;
}

void __stdcall CefWindowInfo_Set_window_name(cef_window_info_t *self, wchar_t *value)
{
	self->window_name = cefstring_wcs(value);
}

wchar_t * __stdcall CefWindowInfo_Get_window_name(cef_window_info_t *self)
{
	return self->window_name.str;
}

cef_main_args_t * __stdcall CefMainArgs_Create()
{
	size_t sz = sizeof(cef_main_args_t);
	cef_main_args_t *p = calloc(1, sz);
	p->instance = GetModuleHandleA(NULL);
	return p;
}
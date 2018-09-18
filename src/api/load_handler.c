#include "../cefau3.h"

#include "include/capi/cef_base_capi.h"
#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_frame_capi.h"

cef_load_handler_t * __stdcall CefLoadHandler_Create()
{
	u16 sz = sizeof(cef_load_handler_t);
	cef_load_handler_t *p = calloc(1, sz);
	p->base.size = sz;
	return p;
}

void __stdcall CefLoadHandler_OnLoadingStateChange(cef_load_handler_t *self, void* ptr)
{
	self->on_loading_state_change = ptr;
}

void __stdcall CefLoadHandler_OnLoadStart(cef_load_handler_t *self, void* ptr)
{
	self->on_load_start = ptr;
}

void __stdcall CefLoadHandler_OnLoadEnd(cef_load_handler_t *self, void* ptr)
{
	self->on_load_end = ptr;
}

void __stdcall CefLoadHandler_OnLoadError(cef_load_handler_t *self, void* ptr)
{
	self->on_load_error = ptr;
}
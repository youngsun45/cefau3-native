#include "../cefau3.h"

cef_request_context_handler_t * __stdcall CefRequestContextHandler_Create()
{
	u16 sz = sizeof(cef_request_context_handler_t);
	cef_request_context_handler_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void __stdcall CefRequestContextHandler_GetCookieManager(cef_request_context_handler_t *self, void *p)
{
	self->get_cookie_manager = p;
}

void __stdcall CefRequestContextHandler_OnBeforePluginLoad(cef_request_context_handler_t *self, void *p)
{
	self->on_before_plugin_load = p;
}
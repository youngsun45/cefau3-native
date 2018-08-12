#include "../cefau3.h"

cef_life_span_handler_t * __stdcall CefLifeSpanHandler_Create()
{
	size_t sz = sizeof(cef_life_span_handler_t);
	cef_life_span_handler_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void __stdcall CefLifeSpanHandler_OnBeforePopup(cef_life_span_handler_t *self, void *ptr)
{
	self->on_before_popup = ptr;
}
void __stdcall CefLifeSpanHandler_OnAfterCreated(cef_life_span_handler_t *self, void *ptr)
{
	self->on_after_created = ptr;
}
void __stdcall CefLifeSpanHandler_DoClose(cef_life_span_handler_t *self, void *ptr)
{
	self->do_close = ptr;
}
void __stdcall CefLifeSpanHandler_OnBeforeClose(cef_life_span_handler_t *self, void *ptr)
{
	self->on_before_close = ptr;
}
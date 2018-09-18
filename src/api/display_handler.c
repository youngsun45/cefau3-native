#include "../cefau3.h"

cef_display_handler_t * __stdcall CefDisplayHandler_Create()
{
	u16 sz = sizeof(cef_display_handler_t);
	cef_display_handler_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void __stdcall CefDisplayHandler_OnAddressChange(cef_display_handler_t *self, void* ptr)
{
	self->on_address_change = ptr;
}

void __stdcall CefDisplayHandler_OnTitleChange(cef_display_handler_t *self, void* ptr)
{
	self->on_title_change = ptr;
}

void __stdcall CefDisplayHandler_OnFaviconUrlChange(cef_display_handler_t *self, void* ptr)
{
	self->on_favicon_urlchange = ptr;
}

void __stdcall CefDisplayHandler_OnFullscreenModeChange(cef_display_handler_t *self, void* ptr)
{
	self->on_fullscreen_mode_change = ptr;
}

void __stdcall CefDisplayHandler_OnTooltip(cef_display_handler_t *self, void* ptr)
{
	self->on_tooltip = ptr;
}

void __stdcall CefDisplayHandler_OnStatusMessage(cef_display_handler_t *self, void* ptr)
{
	self->on_status_message = ptr;
}

void __stdcall CefDisplayHandler_OnConsoleMessage(cef_display_handler_t *self, void* ptr)
{
	self->on_console_message = ptr;
}
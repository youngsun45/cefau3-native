#include "../cefau3.h"
#include "include/capi/cef_focus_handler_capi.h"

//  ___                 _             _ _         
// |  _|___ ___ _ _ ___| |_ ___ ___ _| | |___ ___ 
// |  _| . |  _| | |_ -|   | .'|   | . | | -_|  _|
// |_| |___|___|___|___|_|_|__,|_|_|___|_|___|_|  
//=================================================

cef_focus_handler_t * __stdcall  CefFocusHandler_Create()
{
	u16 sz = sizeof(cef_focus_handler_t);
	cef_focus_handler_t *p = calloc(1, sz);
	p->base.size = sz;
	return p;
}

void __stdcall CefFocusHandler_OnTakeFocus(cef_focus_handler_t *self, void *ptr)
{
	self->on_take_focus = ptr;
}

void __stdcall CefFocusHandler_OnSetFocus(cef_focus_handler_t *self, void *ptr)
{
	self->on_set_focus = ptr;
}

void __stdcall CefFocusHandler_OnGotFocus(cef_focus_handler_t *self, void *ptr)
{
	self->on_got_focus = ptr;
}
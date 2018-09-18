#include "../cefau3.h"

cef_keyboard_handler_t * __stdcall CefKeyboardHandler_Create()
{
	u16 sz = sizeof(cef_keyboard_handler_t);
	cef_keyboard_handler_t *p = calloc(1, sz);
	p->base.size = sz;
	return p;
}

void __stdcall CefKeyboardHandler_OnPreKeyEvent(cef_keyboard_handler_t *self, void* ptr)
{
	self->on_pre_key_event = ptr;
}

void __stdcall CefKeyboardHandler_OnKeyEvent(cef_keyboard_handler_t *self, void* ptr)
{
	self->on_key_event = ptr;
}

#include "../cefau3.h"

cef_accessibility_handler_t * __stdcall CefAccessibilityHandler_Create()
{
	u16 sz = sizeof(cef_accessibility_handler_t);
	cef_accessibility_handler_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void __stdcall CefAccessibilityHandler_OnAccessibilityTreeChange(
	struct _cef_accessibility_handler_t* self, void *p)
{
	self->on_accessibility_tree_change = p;
}

void __stdcall CefAccessibilityHandler_OnAccessibilityLocationchange(
	struct _cef_accessibility_handler_t* self, void *p)
{
	self->on_accessibility_location_change = p;
}
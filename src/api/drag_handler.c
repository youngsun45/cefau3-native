#include "include/capi/cef_drag_handler_capi.h"

cef_drag_handler_t * CefDragHandler_Create()
{
	size_t sz = sizeof(cef_drag_handler_t);
	struct _cef_drag_handler_t * p = calloc(1, sz);
	p->base.size = sz;
	return p;
}

void __stdcall CefDragHandler_OnDragEnter(cef_drag_handler_t *self, void *ptr)
{
	self->on_drag_enter = ptr;
}

void __stdcall CefDragHandler_OnDraggableRegionsChanged(cef_drag_handler_t *self, void *ptr)
{
	self->on_draggable_regions_changed = ptr;
}
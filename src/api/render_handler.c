#include "../cefau3.h"

#include "include/capi/cef_render_handler_capi.h"

cef_render_handler_t * __stdcall CefRenderHander_Create()
{
	u16 sz = sizeof(cef_render_handler_t);
	cef_render_handler_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void __stdcall CefRenderHandler_GetAccessibilityHandler(cef_render_handler_t *self, ptr p)
{
	self->get_accessibility_handler = p;
}

void __stdcall CefRenderHandler_GetRootScreenRect(cef_render_handler_t *self, ptr p)
{
	self->get_root_screen_rect = p;
}

void __stdcall CefRenderHandler_GetViewRect(cef_render_handler_t *self, ptr p)
{
	self->get_view_rect = p;
}

void __stdcall CefRenderHandler_GetScreenPoint(cef_render_handler_t *self, ptr p)
{
	self->get_screen_point = p;
}

void __stdcall CefRenderHandler_GetScreenInfo(cef_render_handler_t *self, ptr p)
{
	self->get_screen_info = p;
}

void __stdcall CefRenderHandler_OnPopupShow(cef_render_handler_t *self, ptr p)
{
	self->on_popup_show = p;
}

void __stdcall CefRenderHandler_OnPopupSize(cef_render_handler_t *self, ptr p)
{
	self->on_popup_size = p;
}

void __stdcall CefRenderHandler_OnPaint(cef_render_handler_t *self, ptr p)
{
	self->on_paint = p;
}

void __stdcall CefRenderHandler_OnCursorChange(cef_render_handler_t *self, ptr p)
{
	self->on_cursor_change = p;
}

void __stdcall CefRenderHandler_StartDragging(cef_render_handler_t *self, ptr p)
{
	self->start_dragging = p;
}

void __stdcall CefRenderHandler_UpdateDragCursor(cef_render_handler_t *self, ptr p)
{
	self->update_drag_cursor = p;
}

void __stdcall CefRenderHandler_OnScrollOffsetChanged(cef_render_handler_t *self, ptr p)
{
	self->on_scroll_offset_changed = p;
}

void __stdcall CefRenderHandler_OnIMECompositionRangeChanged(cef_render_handler_t *self, ptr p)
{
	self->on_ime_composition_range_changed = p;
}
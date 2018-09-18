#include "../cefau3.h"
#include "include/capi/cef_render_process_handler_capi.h"

cef_render_process_handler_t * __stdcall CefRenderProcessHandler_Create()
{
	u16 sz = sizeof(cef_render_process_handler_t);
	cef_render_process_handler_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void __stdcall CefRenderProcessHandler_OnRenderThreadCreated(cef_render_process_handler_t *self, void* ptr)
{
	self->on_render_thread_created = ptr;
}

void __stdcall CefRenderProcessHandler_OnWebKitInitialized(cef_render_process_handler_t *self, void* ptr)
{
	self->on_web_kit_initialized = ptr;
}

void __stdcall CefRenderProcessHandler_OnBrowserCreated(cef_render_process_handler_t *self, void* ptr)
{
	self->on_browser_created = ptr;
}

void __stdcall CefRenderProcessHandler_OnBrowserDestroyed(cef_render_process_handler_t *self, void* ptr)
{
	self->on_browser_destroyed = ptr;
}

void __stdcall CefRenderProcessHandler_GetLoadHandler(cef_render_process_handler_t *self, void* ptr)
{
	self->get_load_handler = ptr;
}

void __stdcall CefRenderProcessHandler_OnBeforeNavigation(cef_render_process_handler_t *self, void* ptr)
{
	self->on_before_navigation = ptr;
}

void __stdcall CefRenderProcessHandler_OnContextCreated(cef_render_process_handler_t *self, void* ptr)
{
	self->on_context_created = ptr;
}

void __stdcall CefRenderProcessHandler_OnContextReleased(cef_render_process_handler_t *self, void* ptr)
{
	self->on_context_released = ptr;
}

void __stdcall CefRenderProcessHandler_OnUncaughtException(cef_render_process_handler_t *self, void* ptr)
{
	self->on_uncaught_exception = ptr;
}

void __stdcall CefRenderProcessHandler_OnFocusedNodeChanged(cef_render_process_handler_t *self, void* ptr)
{
	self->on_focused_node_changed = ptr;
}

void __stdcall CefRenderProcessHandler_OnProcessMessageReceived(cef_render_process_handler_t *self, void* ptr)
{
	self->on_process_message_received = ptr;
}


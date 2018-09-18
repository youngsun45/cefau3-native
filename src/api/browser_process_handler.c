#include "../cefau3.h"
#include "include/capi/cef_browser_process_handler_capi.h"

//  _                                                         _             _ _         
// | |_ ___ ___ _ _ _ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___| |_ ___ ___ _| | |___ ___ 
// | . |  _| . | | | |_ -| -_|  _| . |  _| . |  _| -_|_ -|_ -|   | .'|   | . | | -_|  _|
// |___|_| |___|_____|___|___|_| |  _|_| |___|___|___|___|___|_|_|__,|_|_|___|_|___|_|  
//===============================|_|=====================================================

cef_browser_process_handler_t * __stdcall CefBrowserProcessHandler_Create()
{
	u16 sz = sizeof(cef_browser_process_handler_t);
	cef_browser_process_handler_t *p = calloc(1, sz);
	p->base.size = sz;
	return p;
}

void __stdcall CefBrowserProcessHandler_OnContextInitialized(cef_browser_process_handler_t *self, void* ptr)
{
	self->on_context_initialized = ptr;
}

void __stdcall CefBrowserProcessHandler_OnBeforeChildProcessLaunch(cef_browser_process_handler_t *self, void* ptr)
{
	self->on_before_child_process_launch = ptr;
}

void __stdcall CefBrowserProcessHandler_OnRenderProcessThreadCreated(cef_browser_process_handler_t *self, void* ptr)
{
	self->on_render_process_thread_created = ptr;
}

void __stdcall CefBrowserProcessHandler_GetPrintHandler(cef_browser_process_handler_t *self, void* ptr)
{
	self->get_print_handler = ptr;
}

void __stdcall CefBrowserProcessHandler_OnScheduleMessagePumpWork(cef_browser_process_handler_t *self, void* ptr)
{
	self->on_schedule_message_pump_work = ptr;
}
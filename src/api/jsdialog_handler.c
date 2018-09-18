#include "../cefau3.h"
#include "include/capi/cef_jsdialog_handler_capi.h"

cef_jsdialog_handler_t * __stdcall CefJSDialogHandler_Create()
{
	u16 sz = sizeof(cef_jsdialog_handler_t);
	cef_jsdialog_handler_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void __stdcall CefJSDialogHandler_OnJSDialog(cef_jsdialog_handler_t *self, ptr *p)
{
	self->on_jsdialog = p;
}

void __stdcall CefJSDialogHandler_OnBeforeUnloadDialog(cef_jsdialog_handler_t *self, ptr *p)
{
	self->on_before_unload_dialog = p;
}

void __stdcall CefJSDialogHandler_OnResetDialogState(cef_jsdialog_handler_t *self, ptr *p)
{
	self->on_reset_dialog_state = p;
}

void __stdcall CefJSDialogHandler_OnDialogClosed(cef_jsdialog_handler_t *self, ptr *p)
{
	self->on_dialog_closed = p;
}
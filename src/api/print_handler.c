#include "../cefau3.h"

/* CefPrintDialogCallback
--------------------------------------------------*/

void __stdcall CefPrintDialogCallback_Continue(struct _cef_print_dialog_callback_t* self,
	struct _cef_print_settings_t* settings)
{
	self->cont(self, settings);
}

void __stdcall CefPrintDialogCallback_Cancel(struct _cef_print_dialog_callback_t* self)
{
	self->cancel(self);
}

/* CefPrintJobCallback
--------------------------------------------------*/

void __stdcall CefPrintJobCallback_Continue(struct _cef_print_job_callback_t* self)
{
	self->cont(self);
}

/* CefPrintHandler
--------------------------------------------------*/

cef_print_handler_t * __stdcall CefPrintHandler_Create()
{
	u16 sz = sizeof(cef_print_handler_t);
	cef_print_handler_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void __stdcall CefPrintHandler_OnPrintStart(struct _cef_print_handler_t* self, void *p)
{
	self->on_print_start = p;
}

void __stdcall CefPrintHandler_OnPrintSettings(struct _cef_print_handler_t* self, void *p)
{
	self->on_print_start = p;
}

int __stdcall CefPrintHandler_OnPrintDialog(struct _cef_print_handler_t* self, void *p)
{
	self->on_print_dialog = p;
}

int __stdcall CefPrintHandler_OnPrintJob(struct _cef_print_handler_t* self, void *p)
{
	self->on_print_job = p;
}

void __stdcall on_print_reset(struct _cef_print_handler_t* self, void *p)
{
	self->on_print_reset = p;
}

cef_size_t __stdcall get_pdf_paper_size(struct _cef_print_handler_t *self, void *p)
{
	self->get_pdf_paper_size = p;
}
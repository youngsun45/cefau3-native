#include "../cefau3.h"

#include "include/capi/cef_callback_capi.h"

/* CefCallback
--------------------------------------------------*/

void __stdcall CefCallback_Continue(struct _cef_callback_t* self)
{
	self->cont(self);
}

void __stdcall CefCallback_Cancel(struct _cef_callback_t* self)
{
	self->cancel(self);
}

/* CefCompletionCallback
--------------------------------------------------*/

cef_completion_callback_t * __stdcall CefCompletionCallback_Create()
{
	u16 sz = sizeof(cef_completion_callback_t);
	cef_completion_callback_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void __stdcall CefCompletionCallback_OnComplete(struct _cef_completion_callback_t* self, void *p)
{
	self->on_complete = p;
}
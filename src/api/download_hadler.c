#include "../cefau3.h"

#include "include/capi/cef_base_capi.h"
#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_download_item_capi.h"

void __stdcall CefBeforeDownloadCallback_Continue(cef_before_download_callback_t *self, wchar_t *download_path, int show_dialog)
{
	self->cont(self, cefstring_pwcs(download_path), show_dialog);
}

void __stdcall CefDownloadItemCallback_Cancel(cef_download_item_callback_t *self)
{
	self->cancel(self);
}

void __stdcall CefDownloadItemCallback_Pause(cef_download_item_callback_t *self)
{
	self->pause(self);
}

void __stdcall CefDownloadItemCallback_Resume(cef_download_item_callback_t *self)
{
	self->resume(self);
}

cef_download_handler_t * __stdcall CefDowbloadHandler_New()
{
	u16 sz = sizeof(cef_download_handler_t);
	cef_download_handler_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void CefDownloadHandler_OnBeforeDownload(cef_download_handler_t *self, void* ptr)
{
	self->on_before_download = ptr;
}

void CefDownloadHandler_OnDownloadUpdated(cef_download_handler_t *self, void* ptr)
{
	self->on_download_updated = ptr;
}
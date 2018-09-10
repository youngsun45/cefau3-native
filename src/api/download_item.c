#include "../cefau3.h"

#include "include/capi/cef_base_capi.h"

int __stdcall CefDownloadItem_IsValid(cef_download_item_t* self)
{
	return self->is_valid(self);
}

int __stdcall CefDownloadItem_IsInProgress(cef_download_item_t* self)
{
	return self->is_in_progress(self);
}

int __stdcall CefDownloadItem_IsComplete(cef_download_item_t* self)
{
	return self->is_complete(self);
}

int __stdcall CefDownloadItem_IsCanceled(cef_download_item_t* self)
{
	return self->is_canceled(self);
}

int64 __stdcall CefDownloadItem_GetCurrentSpeed(cef_download_item_t* self)
{
	return self->get_current_speed(self);
}

int __stdcall CefDownloadItem_GetPercentComplete(cef_download_item_t* self)
{
	return self->get_percent_complete(self);
}

int64 __stdcall CefDownloadItem_GetTotalBytes(cef_download_item_t* self)
{
	return self->get_total_bytes(self);
}

int64 __stdcall CefDownloadItem_GetReceivedBytes(cef_download_item_t* self)
{
	return self->get_received_bytes(self);
}

cef_time_t __stdcall CefDownloadItem_GetStartTime(cef_download_item_t* self)
{
	return self->get_start_time(self);
}

cef_time_t __stdcall CefDownloadItem_GetEndTime(cef_download_item_t* self)
{
	return self->get_end_time(self);
}

wchar_t * __stdcall CefDownloadItem_GetFullPath(
	cef_download_item_t* self)
{
	return self->get_full_path(self)->str;
}

uint32 __stdcall CefDownloadItem_GetId(cef_download_item_t* self)
{
	return self->get_id(self);
}

wchar_t * __stdcall CefDownloadItem_GetUrl(
	cef_download_item_t* self)
{
	return self->get_url(self)->str;
}

wchar_t * __stdcall CefDownloadItem_GetOriginalUrl(
	cef_download_item_t* self)
{
	return self->get_original_url(self)->str;
}

wchar_t * __stdcall CefDownloadItem_GetSuggestedFileName(
	cef_download_item_t* self)
{
	return self->get_suggested_file_name(self)->str;
}

wchar_t * __stdcall CefDownloadItem_GetContentDisposition(
	cef_download_item_t* self)
{
	return self->get_content_disposition(self)->str;
}

wchar_t * __stdcall CefDownloadItem_GetMimeType(
	cef_download_item_t* self)
{
	return self->get_mime_type(self)->str;
}
#include "../cefau3.h"
#include "include/capi/cef_drag_data_capi.h"

//    _               _     _       
//  _| |___ ___ ___ _| |___| |_ ___ 
// | . |  _| .'| . | . | .'|  _| .'|
// |___|_| |__,|_  |___|__,|_| |__,|
//=============|___|=================

struct _cef_drag_data_t* __stdcall CefDragData_Clone(struct _cef_drag_data_t* self)
{
	return self->clone(self);
}

int __stdcall CefDragData_IsReadOnly(struct _cef_drag_data_t* self)
{
	return self->is_read_only(self);
}

int __stdcall CefDragData_IsLink(struct _cef_drag_data_t* self)
{
	return self->is_link(self);
}

int __stdcall CefDragData_IsFragment(struct _cef_drag_data_t* self)
{
	return self->is_fragment(self);
}

int __stdcall CefDragData_IsFile(struct _cef_drag_data_t* self)
{
	return self->is_file(self);
}

const wchar_t* __stdcall CefDragData_GetLinkUrl(
	struct _cef_drag_data_t* self)
{
	return self->get_link_url(self)->str;
}

const wchar_t* __stdcall CefDragData_GetLinkTitle(
	struct _cef_drag_data_t* self)
{
	return self->get_link_title(self)->str;
}

const wchar_t* __stdcall CefDragData_GetLinkMetadata(
	struct _cef_drag_data_t* self)
{
	return self->get_link_metadata(self)->str;
}

const wchar_t* __stdcall CefDragData_GetFragmentText(
	struct _cef_drag_data_t* self)
{
	return self->get_fragment_text(self)->str;
}

const wchar_t* __stdcall CefDragData_GetFragmentHtml(
	struct _cef_drag_data_t* self)
{
	return self->get_fragment_html(self)->str;
}

const wchar_t* __stdcall CefDragData_GetFragmentBaseUrl(
	struct _cef_drag_data_t* self)
{
	return self->get_fragment_base_url(self)->str;
}

const wchar_t* __stdcall CefDragData_GetFileName(
	struct _cef_drag_data_t* self)
{
	return self->get_file_name(self)->str;
}

size_t __stdcall CefDragData_GetFileContents(struct _cef_drag_data_t* self,
	struct _cef_stream_writer_t* writer)
{
	return self->get_file_contents(self, writer);
}

int __stdcall CefDragData_GetFileNames(struct _cef_drag_data_t* self,
	cef_string_list_t names)
{
	return self->get_file_names(self, names);
}

void __stdcall CefDragData_SetLinkUrl(struct _cef_drag_data_t* self,
	const wchar_t* url)
{
	return self->set_link_url(self, cefstring_pwcs(url));
}

void __stdcall CefDragData_SetLinkTitle(struct _cef_drag_data_t* self,
	const wchar_t* title)
{
	return self->set_link_title(self, cefstring_pwcs(title));
}

void __stdcall CefDragData_SetLinkMetadata(struct _cef_drag_data_t* self,
	const wchar_t* data)
{
	return self->set_link_metadata(self, cefstring_pwcs(data));
}

void __stdcall CefDragData_SetFragmentText(struct _cef_drag_data_t* self,
	const wchar_t* text)
{
	return self->set_fragment_text(self, cefstring_pwcs(text));
}

void __stdcall CefDragData_SetFragmentHtml(struct _cef_drag_data_t* self,
	const wchar_t* html)
{
	return self->set_fragment_html(self, cefstring_pwcs(html));
}

void __stdcall CefDragData_SetFragmentBaseUrl(struct _cef_drag_data_t* self,
	const wchar_t* base_url)
{
	return self->set_fragment_base_url(self, cefstring_pwcs(base_url));
}

void __stdcall CefDragData_ResetFileContents(struct _cef_drag_data_t* self)
{
	return self->reset_file_contents(self);
}

void __stdcall CefDragData_AddFile(struct _cef_drag_data_t* self,
	const wchar_t* path,
	const wchar_t* display_name)
{
	return self->add_file(self, cefstring_pwcs(path), cefstring_pwcs(display_name));
}

struct _cef_image_t* __stdcall CefDragData_GetImage(struct _cef_drag_data_t* self)
{
	return self->get_image(self);
}

cef_point_t __stdcall CefDragData_GetImageHotspot(struct _cef_drag_data_t* self)
{
	return self->get_image_hotspot(self);
}

int __stdcall CefDragData_HasImage(struct _cef_drag_data_t* self)
{
	return self->has_image(self);
}

cef_drag_data_t* __stdcall CefDragData_Create()
{
	return cef_drag_data_create();
}
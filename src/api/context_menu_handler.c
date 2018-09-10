#include "../cefau3.h"
#include "include/capi/cef_context_menu_handler_capi.h"

//                          _           _                             _ _ _           _   
//  ___ _ _ ___ ___ ___ ___| |_ ___ _ _| |_ _____ ___ ___ _ _ ___ ___| | | |_ ___ ___| |_ 
// |  _| | |   |  _| . |   |  _| -_|_'_|  _|     | -_|   | | |  _| .'| | | . | .'|  _| '_|
// |_| |___|_|_|___|___|_|_|_| |___|_,_|_| |_|_|_|___|_|_|___|___|__,|_|_|___|__,|___|_,_|
//=========================================================================================

void __stdcall CefRunContextMenuCallback_Continue(struct _cef_run_context_menu_callback_t* self,
	int command_id,
	int event_flags)
{
	return self->cont(self, command_id, event_flags);
}

void __stdcall CefRunContextMenuCallback_Cancel(struct _cef_run_context_menu_callback_t* self)
{
	return self->cancel(self);
}

//              _           _                     _             _ _         
//  ___ ___ ___| |_ ___ _ _| |_ _____ ___ ___ _ _| |_ ___ ___ _| | |___ ___ 
// |  _| . |   |  _| -_|_'_|  _|     | -_|   | | |   | .'|   | . | | -_|  _|
// |___|___|_|_|_| |___|_,_|_| |_|_|_|___|_|_|___|_|_|__,|_|_|___|_|___|_|  
//===========================================================================

cef_context_menu_handler_t * __stdcall CefContextMenuHandler_Create()
{
	size_t sz = sizeof(cef_context_menu_handler_t);
	cef_context_menu_handler_t *p = calloc(1, sz);
	p->base.size = sz;
	return p;
}

void __stdcall CefContextMenuHandler_OnBeforeContextMenu(cef_context_menu_handler_t *self, void *ptr)
{
	self->on_before_context_menu = ptr;
}

void __stdcall CefContextMenuHandler_RunContextMenu(cef_context_menu_handler_t *self, void *ptr)
{
	self->run_context_menu = ptr;
}

void __stdcall CefContextMenuHandler_OnContextMenuCommand(cef_context_menu_handler_t *self, void *ptr)
{
	self->on_context_menu_command = ptr;
}

void __stdcall CefContextMenuHandler_OnContextMenuDismissed(cef_context_menu_handler_t *self, void *ptr)
{
	self->on_context_menu_dismissed = ptr;
}

//              _           _                                               
//  ___ ___ ___| |_ ___ _ _| |_ _____ ___ ___ _ _ ___ ___ ___ ___ _____ ___ 
// |  _| . |   |  _| -_|_'_|  _|     | -_|   | | | . | .'|  _| .'|     |_ -|
// |___|___|_|_|_| |___|_,_|_| |_|_|_|___|_|_|___|  _|__,|_| |__,|_|_|_|___|
//===============================================|_|=========================

int __stdcall CefContextMenuParams_GetXCoord(struct _cef_context_menu_params_t* self)
{
	return self->get_xcoord(self);
}

int __stdcall CefContextMenuParams_GetYCoord(struct _cef_context_menu_params_t* self)
{
	return self->get_ycoord(self);
}

cef_context_menu_type_flags_t __stdcall CefContextMenuParams_GetTypeFlags(
	struct _cef_context_menu_params_t* self)
{
	return self->get_type_flags(self);
}

const wchar_t* __stdcall CefContextMenuParams_GetLinkUrl(
	struct _cef_context_menu_params_t* self)
{
	return self->get_link_url(self)->str;
}

const wchar_t* __stdcall CefContextMenuParams_GetUnfilteredLinkUrl(
	struct _cef_context_menu_params_t* self)
{
	return self->get_unfiltered_link_url(self)->str;
}

const wchar_t* __stdcall CefContextMenuParams_GetSourceUrl(
	struct _cef_context_menu_params_t* self)
{
	return self->get_source_url(self)->str;
}

int __stdcall CefContextMenuParams_HasImageContents(
	struct _cef_context_menu_params_t* self)
{
	return self->has_image_contents(self);
}

const wchar_t* __stdcall CefContextMenuParams_GetTitleText(
	struct _cef_context_menu_params_t* self)
{
	return self->get_title_text(self)->str;
}

const wchar_t* __stdcall CefContextMenuParams_GetPageUrl(
	struct _cef_context_menu_params_t* self)
{
	return self->get_page_url(self)->str;
}

const wchar_t* __stdcall CefContextMenuParams_GetFrameUrl(
	struct _cef_context_menu_params_t* self)
{
	return self->get_frame_url(self)->str;
}

const wchar_t* __stdcall CefContextMenuParams_GetFrameCharset(
	struct _cef_context_menu_params_t* self)
{
	return self->get_frame_charset(self)->str;
}

cef_context_menu_media_type_t __stdcall CefContextMenuParams_GetMediaType(
	struct _cef_context_menu_params_t* self)
{
	return self->get_media_type(self);
}

cef_context_menu_media_state_flags_t __stdcall CefContextMenuParams_GetMediaStateFlags(
	struct _cef_context_menu_params_t* self)
{
	return self->get_media_state_flags(self);
}

const wchar_t* __stdcall CefContextMenuParams_GetSelectionText(
	struct _cef_context_menu_params_t* self)
{
	return self->get_selection_text(self)->str;
}

const wchar_t* __stdcall CefContextMenuParams_GetMisspelledWord(
	struct _cef_context_menu_params_t* self)
{
	return self->get_misspelled_word(self)->str;
}

int __stdcall CefContextMenuParams_GetDictionarySuggestions(
	struct _cef_context_menu_params_t* self,
	cef_string_list_t suggestions)
{
	return self->get_dictionary_suggestions(self, suggestions);
}

int __stdcall CefContextMenuParams_IsEditable(struct _cef_context_menu_params_t* self)
{
	return self->is_editable(self);
}

int __stdcall CefContextMenuParams_IsSpellCheckEnabled(
	struct _cef_context_menu_params_t* self)
{
	return self->is_spell_check_enabled(self);
}

cef_context_menu_edit_state_flags_t __stdcall CefContextMenuParams_GetEditStateFlags(
	struct _cef_context_menu_params_t* self)
{
	return self->get_edit_state_flags(self);
}

int __stdcall CefContextMenuParams_IsCustomMenu(struct _cef_context_menu_params_t* self)
{
	return self->is_custom_menu(self);
}

int __stdcall CefContextMenuParams_IsPepperMenu(struct _cef_context_menu_params_t* self)
{
	return self->is_pepper_menu(self);
}
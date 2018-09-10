#include "../cefau3.h"

//  ___ _ _       _ _     _                 _ _ _           _   
// |  _|_| |___ _| |_|___| |___ ___ ___ ___| | | |_ ___ ___| |_ 
// |  _| | | -_| . | | .'| | . | . |  _| .'| | | . | .'|  _| '_|
// |_| |_|_|___|___|_|__,|_|___|_  |___|__,|_|_|___|__,|___|_,_|
//=============================|___|=============================

void __stdcall CefFileDialogCallback_Continue(struct _cef_file_dialog_callback_t* self,
	int selected_accept_filter,
	cef_string_list_t file_paths)
{
	self->cont(self, selected_accept_filter, file_paths);
}

void __stdcall CefFileDialogCallback_Cancel(struct _cef_file_dialog_callback_t* self)
{
	return self->cancel(self);
}

//    _ _     _         _             _ _         
//  _| |_|___| |___ ___| |_ ___ ___ _| | |___ ___ 
// | . | | .'| | . | . |   | .'|   | . | | -_|  _|
// |___|_|__,|_|___|_  |_|_|__,|_|_|___|_|___|_|  
//=================|___|===========================

cef_dialog_handler_t * __stdcall CefDialogHandler_Create()
{
	size_t sz = sizeof(cef_dialog_handler_t);
	cef_dialog_handler_t *p = calloc(1, sz);
	p->base.size = sz;
	return p;
}

void __stdcall CefDialodHandler_OnFileDialog(cef_dialog_handler_t *self, void *ptr)
{
	self->on_file_dialog = ptr;
}
#include "include/capi/cef_find_handler_capi.h"

//  ___ _       _ _             _ _         
// |  _|_|___ _| | |_ ___ ___ _| | |___ ___ 
// |  _| |   | . |   | .'|   | . | | -_|  _|
// |_| |_|_|_|___|_|_|__,|_|_|___|_|___|_|  
//===========================================

cef_find_handler_t * __stdcall CefFindHandler_Create()
{
	size_t sz = sizeof(cef_find_handler_t);
	cef_find_handler_t *p = calloc(1, sz);
	p->base.size = sz;
	return p;
}

void __stdcall CefFindHandler_OnFindResult(struct _cef_find_handler_t* self, void *ptr)
{
	self->on_find_result = ptr;
}
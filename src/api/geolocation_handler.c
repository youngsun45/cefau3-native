#include "include/capi/cef_geolocation_handler_capi.h"

//              _             _   _         _             _ _         
//  ___ ___ ___| |___ ___ ___| |_|_|___ ___| |_ ___ ___ _| | |___ ___ 
// | . | -_| . | | . |  _| .'|  _| | . |   |   | .'|   | . | | -_|  _|
// |_  |___|___|_|___|___|__,|_| |_|___|_|_|_|_|__,|_|_|___|_|___|_|  
// |___|===============================================================

cef_geolocation_handler_t * __stdcall CefGeolocationHandler_Create()
{
	size_t sz = sizeof(cef_geolocation_handler_t);
	cef_geolocation_handler_t *p = calloc(1, sz);
	p->base.size = sz;
	return p;
}

void __stdcall CefGeolocationHandler_OnRequestGeolocationPermission(
	cef_geolocation_handler_t *self,
	void *ptr)
{
	self->on_request_geolocation_permission = ptr;
}

void __stdcall CefGeolocationHandler_OnCancelGeolocationPermission(
	cef_geolocation_handler_t *self,
	void *ptr)
{
	self->on_cancel_geolocation_permission = ptr;
}
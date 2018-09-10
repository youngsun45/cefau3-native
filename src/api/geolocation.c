#include "include/capi/cef_geolocation_capi.h"

//              _             _   _         
//  ___ ___ ___| |___ ___ ___| |_|_|___ ___ 
// | . | -_| . | | . |  _| .'|  _| | . |   |
// |_  |___|___|_|___|___|__,|_| |_|___|_|_|
// |___|=====================================

cef_get_geolocation_callback_t * __stdcall CefGetGeolocationCallback_Create()
{
	size_t sz = sizeof(cef_get_geolocation_callback_t);
	cef_get_geolocation_callback_t *p = calloc(1, sz);
	p->base.size = sz;
	return p;
}

int __stdcall CefGetGeolocation(cef_get_geolocation_callback_t* callback)
{
	return cef_get_geolocation(callback);
}
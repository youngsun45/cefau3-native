#include "../cefau3.h"

cef_resource_bundle_handler_t * __stdcall CefResourceBundleHandler_Create()
{
	u16 sz = sizeof(cef_resource_bundle_handler_t);
	cef_resource_bundle_handler_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void CefResourceBundleHandler_GetLocalizedString(cef_resource_bundle_handler_t *self, void *p)
{
	self->get_localized_string = p;
}

void CefResourceBundleHandler_GetDataResource(cef_resource_bundle_handler_t *self, void *p)
{
	self->get_data_resource = p;
}

void CefResourceBundleHandler_GetDataResourceForScale(cef_resource_bundle_handler_t *self, void *p)
{
	self->get_data_resource_for_scale = p;
}
#include "../cefau3.h"

/* CefRequestCallback
--------------------------------------------------*/

void __stdcall CefRequestCallback_Continue(struct _cef_request_callback_t* self, int allow)
{
	self->cont(self, allow);
}

void __stdcall CefRequestCallback_Cancel(struct _cef_request_callback_t* self)
{
	self->cancel(self);
}

/* CefSelectClientCertificateCallback
--------------------------------------------------*/

void __stdcall CefSelectClientCertificateCallback_Select(
	struct _cef_select_client_certificate_callback_t* self,
	struct _cef_x509certificate_t* cert)
{
	self->select(self, cert);
}

/* CefRequestHandler
--------------------------------------------------*/

cef_request_handler_t * __stdcall CefRequestHandler_Create()
{
	u16 sz = sizeof(cef_request_handler_t);
	cef_request_handler_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void __stdcall CefRequestHandler_on_before_browse(cef_request_handler_t *self, void *p)
{
	self->on_before_browse = p;
}

void __stdcall CefRequestHandler_on_open_urlfrom_tab(cef_request_handler_t *self, void *p)
{
	self->on_open_urlfrom_tab = p;
}

void __stdcall CefRequestHandler_on_before_resource_load(cef_request_handler_t *self, void *p)
{
	self->on_before_resource_load = p;
}

void __stdcall CefRequestHandler_get_resource_handler(cef_request_handler_t *self, void *p)
{
	self->get_resource_handler = p;
}

void __stdcall CefRequestHandler_on_resource_redirect(cef_request_handler_t *self, void *p)
{
	self->on_resource_redirect = p;
}

void __stdcall CefRequestHandler_on_resource_response(cef_request_handler_t *self, void *p)
{
	self->on_resource_response = p;
}

void __stdcall CefRequestHandler_get_resource_response_filter(cef_request_handler_t *self, void *p)
{
	self->get_resource_response_filter = p;
}

void __stdcall CefRequestHandler_on_resource_load_complete(cef_request_handler_t *self, void *p)
{
	self->on_resource_load_complete = p;
}

void __stdcall CefRequestHandler_get_auth_credentials(cef_request_handler_t *self, void *p)
{
	self->get_auth_credentials = p;
}

void __stdcall CefRequestHandler_on_quota_request(cef_request_handler_t *self, void *p)
{
	self->on_quota_request = p;
}

void __stdcall CefRequestHandler_on_protocol_execution(cef_request_handler_t *self, void *p)
{
	self->on_protocol_execution = p;
}

void __stdcall CefRequestHandler_on_certificate_error(cef_request_handler_t *self, void *p)
{
	self->on_certificate_error = p;
}

void __stdcall CefRequestHandler_on_select_client_certificate(cef_request_handler_t *self, void *p)
{
	self->on_select_client_certificate = p;
}

void __stdcall CefRequestHandler_on_plugin_crashed(cef_request_handler_t *self, void *p)
{
	self->on_plugin_crashed = p;
}

void __stdcall CefRequestHandler_on_render_view_ready(cef_request_handler_t *self, void *p)
{
	self->on_render_view_ready = p;
}

void __stdcall CefRequestHandler_on_render_process_terminated(cef_request_handler_t *self, void *p)
{
	self->on_render_process_terminated = p;
}
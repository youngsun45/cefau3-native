#include "../cefau3.h"

#include "include/capi/cef_cookie_capi.h"

/* CefCookieManager
--------------------------------------------------*/

void __stdcall CefCookieManager_SetSupportedSchemes(
	struct _cef_cookie_manager_t* self,
	cef_string_list_t schemes,
	struct _cef_completion_callback_t* callback)
{
	return self->set_supported_schemes(self,
		schemes,
		callback
	);
}

int __stdcall CefCookieManager_VisitAllCookies(struct _cef_cookie_manager_t* self,
	struct _cef_cookie_visitor_t* visitor)
{
	return self->visit_all_cookies(self, visitor);
}

int __stdcall CefCookieManager_VisitUrlCookies(struct _cef_cookie_manager_t* self,
	const wchar_t* url,
	int includeHttpOnly,
	struct _cef_cookie_visitor_t* visitor)
{
	return self->visit_url_cookies(self,
		cefstring_pwcs(url),
		includeHttpOnly,
		visitor
	);
}

int __stdcall CefCookieManager_SetCookie(struct _cef_cookie_manager_t* self,
	const wchar_t* url,
	const struct _cef_cookie_t* cookie,
	struct _cef_set_cookie_callback_t* callback)
{
	return self->set_cookie(self,
		cefstring_pwcs(url),
		cookie,
		callback
	);
}

int __stdcall CefCookieManager_DeleteCookies(
	struct _cef_cookie_manager_t* self,
	const wchar_t* url,
	const wchar_t* cookie_name,
	struct _cef_delete_cookies_callback_t* callback)
{
	return self->delete_cookies(self,
		cefstring_pwcs(url),
		cefstring_pwcs(cookie_name),
		callback
	);
}

int __stdcall CefCookieManager_SetStoragePath(
	struct _cef_cookie_manager_t* self,
	const wchar_t* path,
	int persist_session_cookies,
	struct _cef_completion_callback_t* callback)
{
	return self->set_storage_path(
		self,
		cefstring_pwcs(path),
		persist_session_cookies,
		callback
	);
}

int __stdcall CefCookieManager_FlushStore(struct _cef_cookie_manager_t* self,
	struct _cef_completion_callback_t* callback)
{
	return self->flush_store(self, callback);
}

cef_cookie_manager_t* __stdcall CefCookieManager_GetGlobalManager(
	struct _cef_completion_callback_t* callback)
{
	return cef_cookie_manager_get_global_manager(callback);
}

cef_cookie_manager_t* __stdcall CefCookieManager_CreateManager(
	const wchar_t* path,
	int persist_session_cookies,
	struct _cef_completion_callback_t* callback)
{
	return cef_cookie_manager_create_manager(
		cefstring_pwcs(path),
		persist_session_cookies,
		callback
	);
}

/* CefCookieVisitor
--------------------------------------------------*/

int __stdcall CefCookieVisitor_Visit(struct _cef_cookie_visitor_t* self,
	const struct _cef_cookie_t* cookie,
	int count,
	int total,
	int* deleteCookie)
{
	return self->visit(self, cookie, count, total, deleteCookie);
}


/* CefSetCookieCallback
--------------------------------------------------*/

cef_set_cookie_callback_t * __stdcall CefSetCookieCallback_Create()
{
	u16 sz = sizeof(cef_set_cookie_callback_t);
	cef_set_cookie_callback_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void __stdcall CefSetCookieCallback_OnComplete(cef_set_cookie_callback_t *self, void *p)
{
	self->on_complete = p;
}

/* CefDeleteCookiesCallback
--------------------------------------------------*/

cef_delete_cookies_callback_t * __stdcall CefDeleteCookiesCallback_Create()
{
	u16 sz = sizeof(cef_delete_cookies_callback_t);
	cef_delete_cookies_callback_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void __stdcall CefDeleteCookiesCallback_OnComplete(cef_delete_cookies_callback_t *self, void *p)
{
	self->on_complete = p;
}
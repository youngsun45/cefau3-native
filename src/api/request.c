#include "../cefau3.h"

#include "include/capi/cef_request_capi.h"

/* CefRequest
--------------------------------------------------*/

int __stdcall CefRequest_IsReadOnly(struct _cef_request_t* self)
{
	return self->is_read_only(self);
}

const wchar_t* __stdcall CefRequest_GetUrl(struct _cef_request_t* self)
{
	return self->get_url(self)->str;
}

void __stdcall CefRequest_SetUrl(struct _cef_request_t* self,
	const wchar_t* url)
{
	return self->set_url(self, cefstring_pwcs(url));
}

const wchar_t* __stdcall CefRequest_GetMethod(struct _cef_request_t* self)
{
	return self->get_method(self)->str;
}

void __stdcall CefRequest_SetMethod(struct _cef_request_t* self,
	const wchar_t* method)
{
	return self->set_method(self, method);
}

void __stdcall CefRequest_SetReferrer(struct _cef_request_t* self,
	const wchar_t* referrer_url,
	cef_referrer_policy_t policy)
{
	return self->set_referrer(self, cefstring_pwcs(referrer_url), policy);
}

const wchar_t* __stdcall CefRequest_GetReferrerUrl(
	struct _cef_request_t* self)
{
	return self->get_referrer_url(self)->str;
}

cef_referrer_policy_t __stdcall CefRequest_GetReferrerPolicy(
	struct _cef_request_t* self)
{
	return self->get_referrer_policy(self);
}

struct _cef_post_data_t* __stdcall CefRequest_GetPostData(
	struct _cef_request_t* self)
{
	return self->get_post_data(self);
}

void __stdcall CefRequest_SetPostData(struct _cef_request_t* self,
	struct _cef_post_data_t* postData)
{
	return self->set_post_data(self, postData);
}

void __stdcall CefRequest_GetHeaderMap(struct _cef_request_t* self,
	cef_string_multimap_t headerMap)
{
	return self->get_header_map(self, headerMap);
}

void __stdcall CefRequest_SetHeaderMap(struct _cef_request_t* self,
	cef_string_multimap_t headerMap)
{
	return self->set_header_map(self, headerMap);
}

void __stdcall CefRequest_Set(struct _cef_request_t* self,
	const wchar_t* url,
	const wchar_t* method,
	struct _cef_post_data_t* postData,
	cef_string_multimap_t headerMap)
{
	return self->set(self, cefstring_pwcs(url), cefstring_pwcs(method), postData, headerMap);
}

int __stdcall CefRequest_GetFlags(struct _cef_request_t* self)
{
	return self->get_flags(self);
}

void __stdcall CefRequest_SetFlags(struct _cef_request_t* self, int flags)
{
	return self->set_flags(self, flags);
}

const wchar_t* __stdcall CefRequest_GetFirstPartyForCookies(
	struct _cef_request_t* self)
{
	return self->get_first_party_for_cookies(self)->str;
}

void __stdcall CefRequest_SetFirstPartyForCookies(struct _cef_request_t* self,
	const wchar_t* url)
{
	return self->set_first_party_for_cookies(self, cefstring_pwcs(url));
}

cef_resource_type_t __stdcall CefRequest_GetResourceType(
	struct _cef_request_t* self)
{
	return self->get_resource_type(self);
}

cef_transition_type_t __stdcall CefRequest_GetTransitionType(
	struct _cef_request_t* self)
{
	return self->get_transition_type(self);
}

uint64 __stdcall CefRequest_GetIdentifier(struct _cef_request_t* self)
{
	return self->get_identifier(self);
}

///////////////////////////////////////////

cef_request_t* __stdcall CefRequest_create()
{
	return cef_request_create();
}

/* CefPOstData
--------------------------------------------------*/

int __stdcall CefPostData_IsReadOnly(struct _cef_post_data_t* self)
{
	return self->is_read_only(self);
}

int __stdcall CefPostData_HasExcludedElements(struct _cef_post_data_t* self)
{
	return self->has_excluded_elements(self);
}

size_t __stdcall CefPostData_GetElementCount(struct _cef_post_data_t* self)
{
	return self->get_element_count(self);
}

void __stdcall CefPostData_GetElements(struct _cef_post_data_t* self,
	size_t* elementsCount,
	struct _cef_post_data_element_t** elements)
{
	return self->get_elements(self, elementsCount, elements);
}

int __stdcall CefPostData_RemoveElement(struct _cef_post_data_t* self,
	struct _cef_post_data_element_t* element)
{
	return self->remove_element(self, element);
}

int __stdcall CefPostData_AddElement(struct _cef_post_data_t* self,
	struct _cef_post_data_element_t* element)
{
	return self->add_element(self, element);
}

void __stdcall CefPostData_RemoveElements(struct _cef_post_data_t* self)
{
	return self->remove_elements(self);
}

//////////////////////////////////

cef_post_data_t* __stdcall CefPostData_Create()
{
	return cef_post_data_create();
}

/* CefPostDataElement
--------------------------------------------------*/

int __stdcall CefPostDataElement_IsReadOnly(struct _cef_post_data_element_t* self)
{
	return self->is_read_only(self);
}

void __stdcall CefPostDataElement_SetToEmpty(struct _cef_post_data_element_t* self)
{
	return self->set_to_empty(self);
}

void __stdcall CefPostDataElement_SetToFile(struct _cef_post_data_element_t* self,
	const wchar_t* fileName)
{
	return self->set_to_file(self, cefstring_pwcs(fileName));
}

void __stdcall CefPostDataElement_SetToBytes(struct _cef_post_data_element_t* self,
	size_t size,
	const void* bytes)
{
	return self->set_to_bytes(self, size, bytes);
}

cef_postdataelement_type_t __stdcall CefPostDataElement_GetType(
	struct _cef_post_data_element_t* self)
{
	return self->get_type(self);
}

cef_string_userfree_t __stdcall CefPostDataElement_GetFile(
	struct _cef_post_data_element_t* self)
{
	return self->get_file(self);
}

size_t __stdcall CefPostDataElement_GetBytesCount(struct _cef_post_data_element_t* self)
{
	return self->get_bytes_count(self);
}

size_t __stdcall CefPostDataElement_GetBytes(struct _cef_post_data_element_t* self,
	size_t size,
	void* bytes)
{
	return self->get_bytes(self, size, bytes);
}

cef_post_data_element_t* __stdcall CefPostDataElement_Create()
{
	return cef_post_data_element_create();
}
#include "../cefau3.h"

#include "include/capi/cef_base_capi.h"
#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_frame_capi.h"
#include "include/capi/cef_task_capi.h"
#include "include/capi/cef_v8_capi.h"


CEF_EXPORT cef_v8context_t* CEF_CALLBACK CefV8ContextGetCurrentContext()
{
	return cef_v8context_get_current_context();
}

CEF_EXPORT cef_v8context_t* CEF_CALLBACK CefV8contextGetEnteredContext()
{
	return cef_v8context_get_entered_context();
}

CEF_EXPORT int CEF_CALLBACK CefV8contextInContext()
{
	return cef_v8context_in_context();
}




cef_v8handler_t * CEF_CALLBACK CefV8Handler_Create()
{
	size_t sz = sizeof(cef_v8handler_t);
	cef_v8handler_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void CEF_CALLBACK CefV8Handler_Execute(cef_v8handler_t *self, void *ptr)
{
	self->execute = ptr;
}

//////////////////////////////////////////


int CEF_CALLBACK CefV8Value_IsValid(struct _cef_v8value_t* self)
{
	return self->is_valid(self);
}

int CEF_CALLBACK CefV8Value_IsUndefined(struct _cef_v8value_t* self)
{
	return self->is_undefined(self);
}

int CEF_CALLBACK CefV8Value_IsNull(struct _cef_v8value_t* self)
{
	return self->is_null(self);
}

int CEF_CALLBACK CefV8Value_IsBool(struct _cef_v8value_t* self)
{
	return self->is_bool(self);
}

int CEF_CALLBACK CefV8Value_IsInt(struct _cef_v8value_t* self)
{
	return self->is_int(self);
}

int CEF_CALLBACK CefV8Value_IsUInt(struct _cef_v8value_t* self)
{
	return self->is_uint(self);
}

int CEF_CALLBACK CefV8Value_IsDouble(struct _cef_v8value_t* self)
{
	return self->is_double(self);
}

int CEF_CALLBACK CefV8Value_IsDate(struct _cef_v8value_t* self)
{
	return self->is_date(self);
}

int CEF_CALLBACK CefV8Value_IsString(struct _cef_v8value_t* self)
{
	return self->is_string(self);
}

int CEF_CALLBACK CefV8Value_IsObject(struct _cef_v8value_t* self)
{
	return self->is_object(self);
}

int CEF_CALLBACK CefV8Value_IsArray(struct _cef_v8value_t* self)
{
	return self->is_array(self);
}

int CEF_CALLBACK CefV8Value_IsFunction(struct _cef_v8value_t* self)
{
	return self->is_function(self);
}

int CEF_CALLBACK CefV8Value_IsSame(struct _cef_v8value_t* self,
	struct _cef_v8value_t* that)
{
	return self->is_same(self, that);
}

int CEF_CALLBACK CefV8Value_GetBoolValue(struct _cef_v8value_t* self)
{
	return self->get_bool_value(self);
}

int32 CEF_CALLBACK CefV8Value_GetIntValue(struct _cef_v8value_t* self)
{
	return self->get_int_value(self);
}

uint32 CEF_CALLBACK CefV8Value_GetUIntValue(struct _cef_v8value_t* self)
{
	return self->get_uint_value(self);
}

double CEF_CALLBACK CefV8Value_GetDoubleValue(struct _cef_v8value_t* self)
{
	return self->get_double_value(self);
}

cef_time_t CEF_CALLBACK CefV8Value_GetDateValue(struct _cef_v8value_t* self)
{
	return self->get_date_value(self);
}

const wchar_t * CEF_CALLBACK CefV8Value_GetStringValue(
	struct _cef_v8value_t* self)
{
	cef_string_userfree_t s = self->get_string_value(self);
	const wchar_t * ret = s->str;
	cef_string_userfree_free(s);
	return ret;
}

int CEF_CALLBACK CefV8Value_IsUserCreated(struct _cef_v8value_t* self)
{
	return self->is_user_created(self);
}

////////////////////////////////////////

cef_v8value_t* CEF_CALLBACK CefV8Value_CreateUndefined()
{
	return cef_v8value_create_undefined();
}

cef_v8value_t* CEF_CALLBACK CefV8Value_CreateNull()
{
	return cef_v8value_create_null();
}

cef_v8value_t* CEF_CALLBACK CefV8Value_CreateBool(int value)
{
	return cef_v8value_create_bool(value);
}

cef_v8value_t* CEF_CALLBACK CefV8Value_CreateInt(int32 value)
{
	return cef_v8value_create_int(value);
}

cef_v8value_t* CEF_CALLBACK CefV8Value_CreateUInt(uint32 value)
{
	return cef_v8value_create_uint(value);
}

cef_v8value_t* CEF_CALLBACK CefV8Value_CreateDouble(double value)
{
	return cef_v8value_create_double(value);
}

cef_v8value_t* CEF_CALLBACK CefV8Value_CreateString(const wchar_t* value)
{
	return cef_v8value_create_string(cefstring_pwcs(value));
}

void CEF_CALLBACK CefV8Value_SetReturn(struct _cef_v8value_t** retval, cef_v8value_t* value)
{
	*retval = value;
}

/////////////////////////////////////////////////////////////

int CEF_CALLBACK CefRegisterExtension(
	const wchar_t* extension_name,
	const wchar_t* javascript_code,
	cef_v8handler_t* handler)
{
	cef_string_t s1 = { 0 };
	cef_string_t s2 = { 0 };

	cef_string_from_wide(extension_name, wcslen(extension_name), &s1);
	cef_string_from_wide(javascript_code, wcslen(javascript_code), &s2);

	return cef_register_extension(
		&s1,
		&s2,
		handler
	);
}

#include "../cefau3.h"

#include "include/capi/cef_base_capi.h"
#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_frame_capi.h"
#include "include/capi/cef_task_capi.h"
#include "include/capi/cef_v8_capi.h"

//      ___             _           _   
//  _ _| . |___ ___ ___| |_ ___ _ _| |_ 
// | | | . |  _| . |   |  _| -_|_'_|  _|
//  \_/|___|___|___|_|_|_| |___|_,_|_|  
//=======================================

cef_task_runner_t* __stdcall CefV8Context_GetTaskRunner(
	struct _cef_v8context_t* self)
{
	return self->get_task_runner(self);
}

int __stdcall CefV8Context_IsValid(struct _cef_v8context_t* self)
{
	return self->is_valid(self);
}

cef_browser_t* __stdcall CefV8Context_get_browser(
	struct _cef_v8context_t* self)
{
	return self->get_browser(self);
}

cef_frame_t* __stdcall CefV8Context_get_frame(struct _cef_v8context_t* self)
{
	return self->get_frame(self);
}

cef_v8value_t* __stdcall CefV8Context_get_global(
	struct _cef_v8context_t* self)
{
	return self->get_global(self);
}

int __stdcall CefV8Context_enter(struct _cef_v8context_t* self)
{
	return self->enter(self);
}

int __stdcall CefV8Context_exit(struct _cef_v8context_t* self)
{
	return self->exit(self);
}

int __stdcall CefV8Context_is_same(struct _cef_v8context_t* self,
	struct _cef_v8context_t* that)
{
	return self->is_same(self, that);
}

int __stdcall CefV8Context_eval(struct _cef_v8context_t* self,
	const wchar_t* code,
	const wchar_t* script_url,
	int start_line,
	struct _cef_v8value_t** retval,
	struct _cef_v8exception_t** exception)
{
	return self->eval(
		self,
		cefstring_pwcs(code),
		cefstring_pwcs(code),
		start_line,
		retval,
		exception
	);
}

////////////////////////////////////////////////////////////////////////

cef_v8context_t* __stdcall CefV8ContextGetCurrentContext()
{
	return cef_v8context_get_current_context();
}

cef_v8context_t* __stdcall CefV8contextGetEnteredContext()
{
	return cef_v8context_get_entered_context();
}

int __stdcall CefV8contextInContext()
{
	return cef_v8context_in_context();
}

//      ___ _             _ _         
//  _ _| . | |_ ___ ___ _| | |___ ___ 
// | | | . |   | .'|   | . | | -_|  _|
//  \_/|___|_|_|__,|_|_|___|_|___|_|  
//=====================================

cef_v8handler_t * __stdcall CefV8Handler_Create()
{
	u16 sz = sizeof(cef_v8handler_t);
	cef_v8handler_t *p = calloc(1, sz);
	p->base.size = sz;

	return p;
}

void __stdcall CefV8Handler_Execute(cef_v8handler_t *self, void *ptr)
{
	self->execute = ptr;
}


//      ___                                 
//  _ _| . |___ ___ ___ ___ ___ ___ ___ ___ 
// | | | . | .'|  _|  _| -_|_ -|_ -| . |  _|
//  \_/|___|__,|___|___|___|___|___|___|_|  
//===========================================

int __stdcall CefV8Accessor_Get(struct _cef_v8accessor_t* self,
	const wchar_t* name,
	struct _cef_v8value_t* object,
	struct _cef_v8value_t** retval,
	wchar_t* exception)
{
	return self->get(
		self,
		cefstring_pwcs(name),
		object,
		retval,
		cefstring_pwcs(exception)
	);
}

int __stdcall CefV8Accessor_Set(struct _cef_v8accessor_t* self,
	const wchar_t* name,
	struct _cef_v8value_t* object,
	struct _cef_v8value_t* value,
	wchar_t* exception)
{
	return self->set(
		self,
		cefstring_pwcs(name),
		object,
		value,
		cefstring_pwcs(exception)
	);
}

//      ___ _     _                       _           
//  _ _| . |_|___| |_ ___ ___ ___ ___ ___| |_ ___ ___ 
// | | | . | |   |  _| -_|  _|  _| -_| . |  _| . |  _|
//  \_/|___|_|_|_|_| |___|_| |___|___|  _|_| |___|_|  
//===================================|_|===============

int __stdcall CefV8Interceptor_GetByName(struct _cef_v8interceptor_t* self,
	const wchar_t* name,
	struct _cef_v8value_t* object,
	struct _cef_v8value_t** retval,
	wchar_t* exception)
{
	return self->get_byname(
		self,
		cefstring_pwcs(name),
		object,
		retval,
		cefstring_pwcs(exception)
	);
}

int __stdcall CefV8Interceptor_GetByindex(struct _cef_v8interceptor_t* self,
	int index,
	struct _cef_v8value_t* object,
	struct _cef_v8value_t** retval,
	wchar_t* exception)
{
	return self->get_byindex(
		self,
		index,
		object,
		retval,
		cefstring_pwcs(exception)
	);
}

int __stdcall CefV8Interceptor_SetByname(struct _cef_v8interceptor_t* self,
	const wchar_t* name,
	struct _cef_v8value_t* object,
	struct _cef_v8value_t* value,
	wchar_t* exception)
{
	return self->set_byname(
		self,
		cefstring_pwcs(name),
		object,
		value,
		cefstring_pwcs(exception)
	);
}

int __stdcall CefV8Interceptor_SetByIndex(struct _cef_v8interceptor_t* self,
	int index,
	struct _cef_v8value_t* object,
	struct _cef_v8value_t* value,
	wchar_t* exception)
{
	return self->set_byindex(
		self,
		index,
		object,
		value,
		cefstring_pwcs(exception)
	);
}



//      ___                     _   _         
//  _ _| . |___ _ _ ___ ___ ___| |_|_|___ ___ 
// | | | . | -_|_'_|  _| -_| . |  _| | . |   |
//  \_/|___|___|_,_|___|___|  _|_| |_|___|_|_|
//=========================|_|=================

const wchar_t* __stdcall CefV8Exception_GetMessage(
	struct _cef_v8exception_t* self)
{
	self->get_message(self)->str;
}

const wchar_t*  __stdcall CefV8Exception_GetSourceLine(
	struct _cef_v8exception_t* self)
{
	self->get_source_line(self)->str;
}

const wchar_t*  __stdcall CefV8Exception_GetScriptResourceName(
	struct _cef_v8exception_t* self)
{
	self->get_script_resource_name(self)->str;
}

int __stdcall CefV8Exception_GetLineNumber(struct _cef_v8exception_t* self)
{
	self->get_line_number(self);
}

int __stdcall CefV8Exception_GetStartPosition(struct _cef_v8exception_t* self)
{
	self->get_start_position(self);
}

int __stdcall CefV8Exception_GetEndPosition(struct _cef_v8exception_t* self)
{
	self->get_end_position(self);
}

int __stdcall CefV8Exception_GetStartColumn(struct _cef_v8exception_t* self)
{
	self->get_start_column(self);
}

int __stdcall CefV8Exception_GetEndColumn(struct _cef_v8exception_t* self)
{
	self->get_end_column(self);
}


//      ___         _         
//  _ _| . |_ _ ___| |_ _ ___ 
// | | | . | | | .'| | | | -_|
//  \_/|___|\_/|__,|_|___|___|
//=============================

int __stdcall CefV8Value_IsValid(struct _cef_v8value_t* self)
{
	return self->is_valid(self);
}

int __stdcall CefV8Value_IsUndefined(struct _cef_v8value_t* self)
{
	return self->is_undefined(self);
}

int __stdcall CefV8Value_IsNull(struct _cef_v8value_t* self)
{
	return self->is_null(self);
}

int __stdcall CefV8Value_IsBool(struct _cef_v8value_t* self)
{
	return self->is_bool(self);
}

int __stdcall CefV8Value_IsInt(struct _cef_v8value_t* self)
{
	return self->is_int(self);
}

int __stdcall CefV8Value_IsUInt(struct _cef_v8value_t* self)
{
	return self->is_uint(self);
}

int __stdcall CefV8Value_IsDouble(struct _cef_v8value_t* self)
{
	return self->is_double(self);
}

int __stdcall CefV8Value_IsDate(struct _cef_v8value_t* self)
{
	return self->is_date(self);
}

int __stdcall CefV8Value_IsString(struct _cef_v8value_t* self)
{
	return self->is_string(self);
}

int __stdcall CefV8Value_IsObject(struct _cef_v8value_t* self)
{
	return self->is_object(self);
}

int __stdcall CefV8Value_IsArray(struct _cef_v8value_t* self)
{
	return self->is_array(self);
}

int __stdcall CefV8Value_IsFunction(struct _cef_v8value_t* self)
{
	return self->is_function(self);
}

int __stdcall CefV8Value_IsSame(struct _cef_v8value_t* self,
	struct _cef_v8value_t* that)
{
	return self->is_same(self, that);
}

int __stdcall CefV8Value_GetBoolValue(struct _cef_v8value_t* self)
{
	return self->get_bool_value(self);
}

int32 __stdcall CefV8Value_GetIntValue(struct _cef_v8value_t* self)
{
	return self->get_int_value(self);
}

uint32 __stdcall CefV8Value_GetUIntValue(struct _cef_v8value_t* self)
{
	return self->get_uint_value(self);
}

double __stdcall CefV8Value_GetDoubleValue(struct _cef_v8value_t* self)
{
	return self->get_double_value(self);
}

cef_time_t __stdcall CefV8Value_GetDateValue(struct _cef_v8value_t* self)
{
	return self->get_date_value(self);
}

const wchar_t * __stdcall CefV8Value_GetStringValue(
	struct _cef_v8value_t* self)
{
	return self->get_string_value(self)->str;
}

int __stdcall CefV8Value_IsUserCreated(struct _cef_v8value_t* self)
{
	return self->is_user_created(self);
}

int __stdcall CefV8Value_HasException(struct _cef_v8value_t* self)
{
	return self->has_exception(self);
}

struct _cef_v8exception_t* __stdcall CefV8Value_GetException(
	struct _cef_v8value_t* self)
{
	return self->get_exception(self);
}

int __stdcall CefV8Value_ClearException(struct _cef_v8value_t* self)
{
	return self->clear_exception(self);
}

int __stdcall CefV8Value_WillRethrowExceptions(struct _cef_v8value_t* self)
{
	return self->will_rethrow_exceptions(self);
}

int __stdcall CefV8Value_SetRethrowExceptions(struct _cef_v8value_t* self,
	int rethrow)
{
	return self->set_rethrow_exceptions(self, rethrow);
}

int __stdcall CefV8Value_HasValueBykey(struct _cef_v8value_t* self,
	const char* key)
{
	return self->has_value_bykey(self, cefstring_pcs(key));
}

int __stdcall CefV8Value_HasValueByIndex(struct _cef_v8value_t* self, int index)
{
	return self->has_value_byindex(self, index);
}

int __stdcall CefV8Value_DeleteValueByKey(struct _cef_v8value_t* self,
	const char* key)
{
	return self->delete_value_bykey(self, cefstring_pcs(key));
}

int __stdcall CefV8Value_DeleteValueByIndex(struct _cef_v8value_t* self,
	int index)
{
	return self->delete_value_byindex(self, index);
}

cef_v8value_t* __stdcall CefV8Value_GetValueByKey(
	struct _cef_v8value_t* self,
	const char* key)
{
	return self->get_value_bykey(self, cefstring_pcs(key));
}

cef_v8value_t*
__stdcall CefV8Value_GetValueByIndex(struct _cef_v8value_t* self, int index)
{
	return self->get_value_byindex(self, index);
}

int __stdcall CefV8Value_SetValueByKey(struct _cef_v8value_t* self,
	const char* key,
	struct _cef_v8value_t* value,
	cef_v8_propertyattribute_t attribute)
{
	return self->set_value_bykey(
		self,
		cefstring_pcs(key),
		value,
		attribute
	);
}

int __stdcall CefV8Value_SetValueByIndex(struct _cef_v8value_t* self,
	int index,
	struct _cef_v8value_t* value)
{
	return self->set_value_byindex(self, index, value);
}

int __stdcall CefV8Value_SetValueByAccessor(struct _cef_v8value_t* self,
	const char* key,
	cef_v8_accesscontrol_t settings,
	cef_v8_propertyattribute_t attribute)
{
	return self->set_value_byaccessor(
		self,
		cefstring_pcs(key),
		settings, 
		attribute
	);
}

int __stdcall CefV8Value_GetKeys(struct _cef_v8value_t* self,
	cef_string_list_t keys)
{
	return self->get_keys(self, keys);
}

int __stdcall CefV8Value_SetUserData(struct _cef_v8value_t* self,
	struct _cef_base_ref_counted_t* user_data)
{
	return self->set_user_data(self, user_data);
}

cef_base_ref_counted_t* __stdcall CefV8Value_GetUserData(
	struct _cef_v8value_t* self)
{
	return self->get_user_data(self);
}

int __stdcall CefV8Value_GetExternallyAllocatedMemory(
	struct _cef_v8value_t* self)
{
	return self->get_externally_allocated_memory(self);
}

int __stdcall CefV8Value_AdjustExternallyAllocatedMemory(
	struct _cef_v8value_t* self,
	int change_in_bytes)
{
	return self->adjust_externally_allocated_memory(self, change_in_bytes);
}


int __stdcall CefV8Value_GetArrayLength(struct _cef_v8value_t* self)
{
	return self->get_array_length(self);
}


cef_string_userfree_t __stdcall CefV8Value_GetFunctionName(
	struct _cef_v8value_t* self)
{
	return self->get_function_name(self);
}

cef_v8handler_t* __stdcall CefV8Value_GetFunctionHandler(
	struct _cef_v8value_t* self)
{
	return self->get_function_handler(self);
}

cef_v8value_t* __stdcall CefV8Value_ExecuteFunction(
	struct _cef_v8value_t* self,
	struct _cef_v8value_t* object,
	u16 argumentsCount,
	struct _cef_v8value_t* const* arguments)
{
	return self->execute_function(
		self,
		object,
		argumentsCount,
		arguments
	);
}

cef_v8value_t* __stdcall CefV8Value_ExecuteFunctionWithContext(
	struct _cef_v8value_t* self,
	struct _cef_v8context_t* context,
	struct _cef_v8value_t* object,
	u16 argumentsCount,
	struct _cef_v8value_t* const* arguments)
{
	return self->execute_function_with_context(
		self,
		context,
		object,
		argumentsCount,
		arguments
	);
}

////////////////////////////////////////

cef_v8value_t * __stdcall CefV8Value_CreateUndefined()
{
	return cef_v8value_create_undefined();
}

cef_v8value_t * __stdcall CefV8Value_CreateNull()
{
	return cef_v8value_create_null();
}

cef_v8value_t * __stdcall CefV8Value_CreateBool(int value)
{
	return cef_v8value_create_bool(value);
}

cef_v8value_t * __stdcall CefV8Value_CreateInt(int32 value)
{
	return cef_v8value_create_int(value);
}

cef_v8value_t * __stdcall CefV8Value_CreateUInt(uint32 value)
{
	return cef_v8value_create_uint(value);
}

cef_v8value_t * __stdcall CefV8Value_CreateDouble(double value)
{
	return cef_v8value_create_double(value);
}

cef_v8value_t * __stdcall CefV8Value_CreateDate(const cef_time_t* date)
{
	return cef_v8value_create_date(date);
}

cef_v8value_t * __stdcall CefV8Value_CreateString(const wchar_t* value)
{
	return cef_v8value_create_string(cefstring_pwcs(value));
}

cef_v8value_t * __stdcall CefV8Value_CreateObject(
	cef_v8accessor_t* accessor,
	cef_v8interceptor_t* interceptor)
{
	return cef_v8value_create_object(
		accessor,
		interceptor
	);
}

cef_v8value_t * __stdcall CefV8Value_CreateArray(int length)
{
	return cef_v8value_create_array(length);
}

cef_v8value_t * __stdcall CefV8Value_CreateFunction(const char* name,
	cef_v8handler_t* handler)
{
	return cef_v8value_create_function(
		cefstring_pcs(name),
		handler
	);
}

////////////////////

void __stdcall CefV8Value_SetReturn(struct _cef_v8value_t** retval, cef_v8value_t* value)
{
	*retval = value;
}

//      ___     _           _   _                   
//  _ _| . |___| |_ ___ ___| |_| |_ ___ ___ ___ ___ 
// | | | . |_ -|  _| .'|  _| '_|  _|  _| .'|  _| -_|
//  \_/|___|___|_| |__,|___|_,_|_| |_| |__,|___|___|
//===================================================

int __stdcall CefV8StackTrace_IsValid(struct _cef_v8stack_trace_t* self)
{
	return self->is_valid(self);
}

int __stdcall CefV8StackTrace_GetFrameCount(struct _cef_v8stack_trace_t* self)
{
	return self->get_frame_count(self);
}

struct _cef_v8stack_frame_t *
	__stdcall CefV8StackTrace_GetFrame(struct _cef_v8stack_trace_t* self, int index)
{
	return self->get_frame(self, index);
}

//      ___     _           _   ___                   
//  _ _| . |___| |_ ___ ___| |_|  _|___ ___ _____ ___ 
// | | | . |_ -|  _| .'|  _| '_|  _|  _| .'|     | -_|
//  \_/|___|___|_| |__,|___|_,_|_| |_| |__,|_|_|_|___|
//=====================================================

int __stdcall CefV8StackFrame_IsValid(struct _cef_v8stack_frame_t* self)
{
	return self->is_valid(self);
}

const wchar_t * __stdcall CefV8StackFrame_GetScriptName(
	struct _cef_v8stack_frame_t* self)
{
	return self->get_script_name(self)->str;
}

const wchar_t * __stdcall CefV8StackFrame_GetScriptNameOrSourceUrl(
	struct _cef_v8stack_frame_t* self)
{
	return self->get_script_name_or_source_url(self)->str;
}

const wchar_t * __stdcall CefV8StackFrame_GetFunctionName(
	struct _cef_v8stack_frame_t* self)
{
	return self->get_function_name(self)->str;
}

int __stdcall CefV8StackFrame_GetLineNumber(struct _cef_v8stack_frame_t* self)
{
	return self->get_line_number(self);
}

int __stdcall CefV8StackFrame_GetColumn(struct _cef_v8stack_frame_t* self)
{
	return self->get_column(self);
}

int __stdcall CefV8StackFrame_IsEval(struct _cef_v8stack_frame_t* self)
{
	return self->is_eval(self);
}

int __stdcall CefV8StackFrame_IsConstructor(struct _cef_v8stack_frame_t* self)
{
	return self->is_eval(self);
}

/////////////////////////////////////////////////////////////

int __stdcall CefRegisterExtension(
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

#include "../cefau3.h"

#include "include/capi/cef_base_capi.h"

//  _____     _         
// |  |  |___| |_ _ ___ 
// |  |  | .'| | | | -_|
//  \___/|__,|_|___|___|
//=======================

int __stdcall CefValue_IsValid(struct _cef_value_t* self)
{
	return self->is_valid(self);
}

int __stdcall CefValue_IsOwned(struct _cef_value_t* self)
{
	return self->is_owned(self);
}

int __stdcall CefValue_IsReadOnly(struct _cef_value_t* self)
{
	return self->is_read_only(self);
}

int __stdcall CefValue_IsSame(struct _cef_value_t* self,
	struct _cef_value_t* that)
{
	return self->is_same(self, that);
}

int __stdcall CefValue_IsEqual(struct _cef_value_t* self,
	struct _cef_value_t* that)
{
	return self->is_equal(self, that);
}

struct _cef_value_t* __stdcall CefValue_Copy(struct _cef_value_t* self)
{
	return self->copy(self);
}

cef_value_type_t __stdcall CefValue_GetType(struct _cef_value_t* self)
{
	return self->get_type(self);
}

int __stdcall CefValue_GetBool(struct _cef_value_t* self)
{
	return self->get_bool(self);
}

int __stdcall CefValue_GetInt(struct _cef_value_t* self)
{
	return self->get_int(self);
}

double __stdcall CefValue_GetDouble(struct _cef_value_t* self)
{
	return self->get_double(self);
}

const wchar_t * __stdcall CefValue_GetString(struct _cef_value_t* self)
{
	return self->get_string(self)->str;
}

struct _cef_binary_value_t* __stdcall CefValue_GetBinary(
	struct _cef_value_t* self)
{
	return self->get_binary(self);
}

struct _cef_dictionary_value_t* __stdcall CefValue_GetDictionary(
	struct _cef_value_t* self)
{
	return self->get_dictionary(self);
}

struct _cef_list_value_t* __stdcall CefValue_GetList(struct _cef_value_t* self)
{
	return self->get_list(self);
}

int __stdcall CefValue_SetNull(struct _cef_value_t* self)
{
	return self->set_null(self);
}

int __stdcall CefValue_SetBool(struct _cef_value_t* self, int value)
{
	return self->set_bool(self, value);
}

int __stdcall CefValue_SetInt(struct _cef_value_t* self, int value)
{
	return self->set_int(self, value);
}

int __stdcall CefValue_SetDouble(struct _cef_value_t* self, double value)
{
	return self->set_double(self, value);
}

int __stdcall CefValue_SetString(struct _cef_value_t* self,
	const wchar_t* value)
{
	return self->set_string(self, cefstring_pwcs(value));
}

int __stdcall CefValue_SetBinary(struct _cef_value_t* self,
	struct _cef_binary_value_t* value)
{
	return self->set_binary(self, value);
}

int __stdcall CefValue_SetDictionary(struct _cef_value_t* self,
	struct _cef_dictionary_value_t* value)
{
	return self->set_dictionary(self, value);
}

int __stdcall CefValue_SetList(struct _cef_value_t* self,
	struct _cef_list_value_t* value)
{
	return self->set_list(self, value);
}

cef_value_t * __stdcall CefValue_Create()
{
	return cef_value_create();
}

//  _____ _                 _____     _         
// | __  |_|___ ___ ___ _ _|  |  |___| |_ _ ___ 
// | __ -| |   | .'|  _| | |  |  | .'| | | | -_|
// |_____|_|_|_|__,|_| |_  |\___/|__,|_|___|___|
//=====================|___|=====================

int __stdcall CefBinaryValue_IsValid(struct _cef_binary_value_t* self)
{
	return self->is_valid(self);
}

int __stdcall CefBinaryValue_IsOwned(struct _cef_binary_value_t* self)
{
	return self->is_owned(self);
}

int __stdcall CefBinaryValue_IsSame(struct _cef_binary_value_t* self,
	struct _cef_binary_value_t* that)
{
	return self->is_same(self, that);
}

int __stdcall CefBinaryValue_IsEqual(struct _cef_binary_value_t* self,
	struct _cef_binary_value_t* that)
{
	return self->is_equal(self, that);
}

struct _cef_binary_value_t* __stdcall CefBinaryValue_Copy(
	struct _cef_binary_value_t* self)
{
	return self->copy(self);
}

size_t __stdcall CefBinaryValue_GetSize(struct _cef_binary_value_t* self)
{
	return self->get_size(self);
}

size_t __stdcall CefBinaryValue_GetData(struct _cef_binary_value_t* self,
	void* buffer,
	size_t buffer_size,
	size_t data_offset)
{
	return self->get_data(
		self,
		buffer,
		buffer_size,
		data_offset
	);
}

cef_binary_value_t * __stdcall CefBinaryValue_Create(const void* data,
	size_t data_size)
{
	return cef_binary_value_create(data, data_size);
}

int __stdcall CefDictionaryValue_IsValid(struct _cef_dictionary_value_t* self)
{
	return self->is_valid(self);
}

int __stdcall CefDictionaryValue_IsOwned(struct _cef_dictionary_value_t* self)
{
	return self->is_owned(self);
}

int __stdcall CefDictionaryValue_IsReadOnly(struct _cef_dictionary_value_t* self)
{
	return self->is_read_only(self);
}

int __stdcall CefDictionaryValue_IsSame(struct _cef_dictionary_value_t* self,
	struct _cef_dictionary_value_t* that)
{
	return self->is_same(self, that);
}

int __stdcall CefDictionaryValue_IsEqual(struct _cef_dictionary_value_t* self,
	struct _cef_dictionary_value_t* that)
{
	return self->is_equal(self, that);
}

cef_dictionary_value_t* __stdcall CefDictionaryValue_Copy(
	struct _cef_dictionary_value_t* self,
	int exclude_empty_children)
{
	return self->copy(self, exclude_empty_children);
}

size_t __stdcall CefDictionaryValue_GetSize(struct _cef_dictionary_value_t* self)
{
	return self->get_size(self);
}

int __stdcall CefDictionaryValue_Clear(struct _cef_dictionary_value_t* self)
{
	return self->clear(self);
}

int __stdcall CefDictionaryValue_HasKey(struct _cef_dictionary_value_t* self,
	const wchar_t* key)
{
	return self->has_key(self, cefstring_pwcs(key));
}

int __stdcall CefDictionaryValue_GetKeys(struct _cef_dictionary_value_t* self,
	cef_string_list_t keys)
{
	return self->get_keys(self, keys);
}

int __stdcall CefDictionaryValue_Remove(struct _cef_dictionary_value_t* self,
	const wchar_t* key)
{
	return self->remove(self, cefstring_pwcs(key));
}

cef_value_type_t __stdcall CefDictionaryValue_GetType(struct _cef_dictionary_value_t* self,
	const wchar_t* key)
{
	return self->get_type(self, cefstring_pwcs(key));
}

cef_value_t* __stdcall CefDictionaryValue_GetValue(
	struct _cef_dictionary_value_t* self,
	const wchar_t* key)
{
	return self->get_value(self, cefstring_pwcs(key));
}

int __stdcall CefDictionaryValue_GetBool(struct _cef_dictionary_value_t* self,
	const wchar_t* key)
{
	return self->get_bool(self, cefstring_pwcs(key));
}

int __stdcall CefDictionaryValue_GetInt(struct _cef_dictionary_value_t* self,
	const wchar_t* key)
{
	return self->get_int(self, cefstring_pwcs(key));
}

double __stdcall CefDictionaryValue_GetDouble(struct _cef_dictionary_value_t* self,
	const wchar_t* key)
{
	return self->get_double(self, cefstring_pwcs(key));
}

cef_string_userfree_t __stdcall CefDictionaryValue_GetString(
	struct _cef_dictionary_value_t* self,
	const wchar_t* key)
{
	return self->get_string(self, cefstring_pwcs(key));
}

cef_binary_value_t* __stdcall CefDictionaryValue_GetBinary(
	struct _cef_dictionary_value_t* self,
	const wchar_t* key)
{
	return self->get_binary(self, cefstring_pwcs(key));
}

cef_dictionary_value_t* __stdcall CefDictionaryValue_GetDictionary(
	struct _cef_dictionary_value_t* self,
	const wchar_t* key)
{
	return self->get_dictionary(self, cefstring_pwcs(key));
}

cef_list_value_t* __stdcall CefDictionaryValue_GetList(
	struct _cef_dictionary_value_t* self,
	const wchar_t* key)
{
	return self->get_list(self, cefstring_pwcs(key));
}

int __stdcall CefDictionaryValue_SetValue(struct _cef_dictionary_value_t* self,
	const wchar_t* key,
	struct _cef_value_t* value)
{
	return self->set_value(self, cefstring_pwcs(key), value);
}

int __stdcall CefDictionaryValue_SetNull(struct _cef_dictionary_value_t* self,
	const wchar_t* key)
{
	return self->set_null(self, cefstring_pwcs(key));
}

int __stdcall CefDictionaryValue_SetBool(struct _cef_dictionary_value_t* self,
	const wchar_t* key,
	int value)
{
	return self->set_bool(self, cefstring_pwcs(key), value);
}

int __stdcall CefDictionaryValue_SetInt(struct _cef_dictionary_value_t* self,
	const wchar_t* key,
	int value)
{
	return self->set_int(self, cefstring_pwcs(key), value);
}

int __stdcall CefDictionaryValue_SetDouble(struct _cef_dictionary_value_t* self,
	const wchar_t* key,
	double value)
{
	return self->set_double(self, cefstring_pwcs(key), value);
}

int __stdcall CefDictionaryValue_SetString(struct _cef_dictionary_value_t* self,
	const wchar_t* key,
	const cef_string_t* value)
{
	return self->set_string(self, cefstring_pwcs(key), value);
}

int __stdcall CefDictionaryValue_SetBinary(struct _cef_dictionary_value_t* self,
	const wchar_t* key,
	struct _cef_binary_value_t* value)
{
	return self->set_binary(self, cefstring_pwcs(key), value);
}

int __stdcall CefDictionaryValue_SetDictionary(struct _cef_dictionary_value_t* self,
	const wchar_t* key,
	struct _cef_dictionary_value_t* value)
{
	return self->set_dictionary(self, cefstring_pwcs(key), value);
}

int __stdcall CefDictionaryValue_SetList(struct _cef_dictionary_value_t* self,
	const wchar_t* key,
	struct _cef_list_value_t* value)
{
	return self->set_list(self, cefstring_pwcs(key), value);
}

cef_dictionary_value_t * __stdcall CefDictionaryValue_Create()
{
	return cef_dictionary_value_create();
}


//  __    _     _   _____     _         
// |  |  |_|___| |_|  |  |___| |_ _ ___ 
// |  |__| |_ -|  _|  |  | .'| | | | -_|
// |_____|_|___|_|  \___/|__,|_|___|___|
//=======================================

int __stdcall CefListValue_IsValid(struct _cef_list_value_t* self)
{
	return self->is_valid(self);
}

int __stdcall CefListValue_IsOwned(struct _cef_list_value_t* self)
{
	return self->is_owned(self);
}

int __stdcall CefListValue_IsReadOnly(struct _cef_list_value_t* self)
{
	return self->is_read_only(self);
}

int __stdcall CefListValue_IsSame(struct _cef_list_value_t* self,
	struct _cef_list_value_t* that)
{
	return self->is_same(self, that);
}

int __stdcall CefListValue_IsEqual(struct _cef_list_value_t* self,
	struct _cef_list_value_t* that)
{
	return self->is_equal(self, that);
}

struct _cef_list_value_t* __stdcall CefListValue_Copy(struct _cef_list_value_t* self)
{
	return self->copy(self);
}

int __stdcall CefListValue_SetSize(struct _cef_list_value_t* self, size_t size)
{
	return self->set_size(self, size);
}

size_t __stdcall CefListValue_GetSize(struct _cef_list_value_t* self)
{
	return self->get_size(self);
}

int __stdcall CefListValue_Clear(struct _cef_list_value_t* self)
{
	return self->clear(self);
}

int __stdcall CefListValue_Remove(struct _cef_list_value_t* self, size_t index)
{
	return self->remove(self, index);
}

cef_value_type_t __stdcall CefListValue_GetType(struct _cef_list_value_t* self,
	size_t index)
{
	return self->get_type(self, index);
}

struct _cef_value_t* __stdcall CefListValue_GetValue(struct _cef_list_value_t* self,
	size_t index)
{
	return self->get_value(self, index);
}

int __stdcall CefListValue_GetBool(struct _cef_list_value_t* self, size_t index)
{
	return self->get_bool(self, index);
}

int __stdcall CefListValue_GetInt(struct _cef_list_value_t* self, size_t index)
{
	return self->get_int(self, index);
}

double __stdcall CefListValue_GetDouble(struct _cef_list_value_t* self,
	size_t index)
{
	return self->get_double(self, index);
}

const wchar_t *	__stdcall CefListValue_GetString(struct _cef_list_value_t* self, size_t index)
{
	return self->get_string(self, index)->str;
}

struct _cef_binary_value_t * __stdcall CefListValue_GetBinary(struct _cef_list_value_t* self, size_t index)
{
	return self->get_binary(self, index);
}

struct _cef_dictionary_value_t* __stdcall CefListValue_GetDictionary(
	struct _cef_list_value_t* self,
	size_t index)
{
	return self->get_dictionary(self, index);
}

struct _cef_list_value_t *
	__stdcall CefListValue_GetList(struct _cef_list_value_t* self, size_t index)
{
	return self->get_list(self, index);
}

int __stdcall CefListValue_SetValue(struct _cef_list_value_t* self,
	size_t index,
	struct _cef_value_t* value)
{
	return self->set_value(self, index, value);
}

int __stdcall CefListValue_SetNull(struct _cef_list_value_t* self, size_t index)
{
	return self->set_null(self, index);
}

int __stdcall CefListValue_SetBool(struct _cef_list_value_t* self,
	size_t index,
	int value)
{
	return self->set_bool(self, index, value);
}

int __stdcall CefListValue_SetInt(struct _cef_list_value_t* self,
	size_t index,
	int value)
{
	return self->set_int(self, index, value);
}

int __stdcall CefListValue_SetDouble(struct _cef_list_value_t* self,
	size_t index,
	double value)
{
	return self->set_double(self, index, value);
}

int __stdcall CefListValue_SetString(struct _cef_list_value_t* self,
	size_t index,
	const wchar_t* value)
{
	return self->set_string(self, index, cefstring_pwcs(value));
}

int __stdcall CefListValue_SetBinary(struct _cef_list_value_t* self,
	size_t index,
	struct _cef_binary_value_t* value)
{
	return self->set_binary(self, index, value);
}

int __stdcall CefListValue_SetDictionary(struct _cef_list_value_t* self,
	size_t index,
	struct _cef_dictionary_value_t* value)
{
	return self->set_dictionary(self, index, value);
}

int __stdcall CefListValue_SetList(struct _cef_list_value_t* self,
	size_t index,
	struct _cef_list_value_t* value)
{
	return self->set_list(self, index, value);
}
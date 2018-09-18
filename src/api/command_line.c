#include "../cefau3.h"

/* CefCommandLine
--------------------------------------------------*/

int __stdcall CefCommandLine_IsValid(struct _cef_command_line_t* self) {
	return self->is_valid(self);
}

int __stdcall CefCommandLine_IsReadOnly(struct _cef_command_line_t* self)
{
	return self->is_read_only(self);
}

struct _cef_command_line_t* __stdcall CefCommandLine_Copy(
	struct _cef_command_line_t* self)
{
	return self->copy(self);
}

void __stdcall CefCommandLine_InitFromArgv(struct _cef_command_line_t* self,
	int argc,
	const char* const* argv)
{
	return self->init_from_argv(self, argc, argv);
}

void __stdcall CefCommandLine_InitFromString(struct _cef_command_line_t* self,
	const char* command_line)
{
	return self->init_from_string(self, cefstring_pcs(command_line));
}

void __stdcall CefCommandLine_Reset(struct _cef_command_line_t* self)
{
	return self->reset(self);
}

void __stdcall CefCommandLine_GetArgv(struct _cef_command_line_t* self,
	cef_string_list_t argv)
{
	return self->get_argv(self, argv);
}

const wchar_t * __stdcall CefCommandLine_GetCommandLineString(
	struct _cef_command_line_t* self)
{
	return self->get_command_line_string(self)->str;
}

const wchar_t * __stdcall CefCommandLine_GetProgram(
	struct _cef_command_line_t* self)
{
	return self->get_program(self)->str;
}

void __stdcall CefCommandLine_SetProgram(struct _cef_command_line_t* self,
	const char* program)
{
	return self->set_program(self, cefstring_pcs(program));
}

int __stdcall CefCommandLine_HasSwitches(struct _cef_command_line_t* self)
{
	return self->has_switches(self);
}

int __stdcall CefCommandLine_HasSwitch(struct _cef_command_line_t* self,
	const char* name)
{
	return self->has_switch(self, cefstring_pcs(name));
}

cef_string_userfree_t __stdcall CefCommandLine_GetSwitchValue(
	struct _cef_command_line_t* self,
	const char* name)
{
	return self->get_switch_value(self, cefstring_pcs(name));
}

void __stdcall CefCommandLine_GetSwitches(struct _cef_command_line_t* self,
	cef_string_map_t switches)
{
	return self->get_switches(self, switches);
}

void __stdcall CefCommandLine_AppendSwitch(struct _cef_command_line_t* self,
	const char* name)
{
	return self->append_switch(self, cefstring_pcs(name));
}

void __stdcall CefCommandLine_AppendSwitchWithValue(struct _cef_command_line_t* self,
	const char* name,
	const char* value)
{
	return self->append_switch_with_value(self, cefstring_pcs(name), cefstring_pcs(value));
}

int __stdcall CefCommandLine_HasArguments(struct _cef_command_line_t* self)
{
	return self->has_arguments(self);
}

void __stdcall CefCommandLine_GetArguments(struct _cef_command_line_t* self,
	cef_string_list_t arguments)
{
	return self->get_arguments(self, arguments);
}

void __stdcall CefCommandLine_AppendArgument(struct _cef_command_line_t* self,
	const char* argument)
{
	return self->append_argument(self, cefstring_pcs(argument));
}

void __stdcall CefCommandLine_PrependWrapper(struct _cef_command_line_t* self,
	const char* wrapper)
{
	return self->prepend_wrapper(self, cefstring_pcs(wrapper));
}

/////////////////////////////////////////////////////

cef_command_line_t* __stdcall CefCommandLine_Create()
{
	return cef_command_line_create();
}

cef_command_line_t* __stdcall CefCommandLine_GetGlobal()
{
	return cef_command_line_get_global();
}
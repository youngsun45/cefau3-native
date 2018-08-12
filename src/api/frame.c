#include "../cefau3.h"

#pragma warning(disable : 4996)

int __stdcall CefFrame_IsValid(struct _cef_frame_t* self)
{
	self->is_valid(self);
}

void __stdcall CefFrame_Undo(struct _cef_frame_t* self)
{
	self->undo(self);
}

void __stdcall CefFrame_Redo(struct _cef_frame_t* self)
{
	self->redo(self);
}

void __stdcall CefFrame_Cut(struct _cef_frame_t* self)
{
	self->cut(self);
}

void __stdcall CefFrame_Copy(struct _cef_frame_t* self)
{
	self->copy(self);
}

void __stdcall CefFrame_Paste(struct _cef_frame_t* self)
{
	self->paste(self);
}

void __stdcall CefFrame_Delete(struct _cef_frame_t* self)
{
	self->del(self);
}

void __stdcall CefFrame_SelectAll(struct _cef_frame_t* self)
{
	self->select_all(self);
}

void __stdcall CefFrame_ViewSource(struct _cef_frame_t* self)
{
	self->view_source(self);
}

void __stdcall CefFrame_GetSource(struct _cef_frame_t* self,
	struct _cef_string_visitor_t* visitor)
{
	self->get_source(self, visitor);
}

void __stdcall CefFrame_GetText(struct _cef_frame_t* self,
	struct _cef_string_visitor_t* visitor)
{
	self->get_text(self, visitor);
}

void __stdcall CefFrame_LoadRequest(struct _cef_frame_t* self,
	struct _cef_request_t* request)
{
	self->load_request(self, request);
}

void __stdcall CefFrame_LoadUrl(struct _cef_frame_t* self,
	const wchar_t* url)
{
	self->load_url(self, cefstring_pwcs(url));
}

void __stdcall CefFrame_LoadString(struct _cef_frame_t* self,
	const wchar_t* string_val,
	const wchar_t* url)
{
	self->load_string(self, cefstring_pwcs(string_val), cefstring_pwcs(url));
}

void __stdcall CefFrame_ExecuteJavaScript(struct _cef_frame_t* self,
	const wchar_t* code,
	const wchar_t* script_url,
	int start_line)
{
	self->execute_java_script(self, cefstring_pwcs(code), cefstring_pwcs(script_url), start_line);;
}

int __stdcall CefFrame_IsMain(struct _cef_frame_t* self)
{
	return self->is_main(self);
}

int __stdcall CefFrame_IsFocused(struct _cef_frame_t* self)
{
	return self->is_focused(self);
}

const wchar_t * __stdcall CefFrame_GetName(struct _cef_frame_t* self)
{
	cef_string_userfree_t s =  self->get_name(self);
	const wchar_t *r = wcsdup(s->str);
	cef_string_userfree_free(s);
	return r;
}

int64 __stdcall CefFrame_GetIdentifier(struct _cef_frame_t* self)
{
	return self->get_identifier(self);
}

struct _cef_frame_t* __stdcall CefFrame_GetParent(struct _cef_frame_t* self)
{
	return self->get_parent(self);
}

cef_string_userfree_t __stdcall CefFrame_GetUrl(struct _cef_frame_t* self)
{
	cef_string_userfree_t s = self->get_url(self);
	const wchar_t *r = wcsdup(s->str);
	cef_string_userfree_free(s);
	return r;
}

struct _cef_browser_t* __stdcall CefFrame_GetBrowser(struct _cef_frame_t* self)
{
	return self->get_browser(self);
}

struct _cef_v8context_t* __stdcall CefFrame_GetV8Context(struct _cef_frame_t* self)
{
	return self->get_v8context(self);
}

void __stdcall CefFrame_VisitDOM(struct _cef_frame_t* self, struct _cef_domvisitor_t* visitor)
{
	self->visit_dom(self, visitor);
}
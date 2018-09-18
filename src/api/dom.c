#include "../cefau3.h"

#include "include/capi/cef_dom_capi.h"

/* CefDOMVisitor
--------------------------------------------------*/

void CefDOMVisitor_Visit(struct _cef_domvisitor_t* self,
	struct _cef_domdocument_t* document)
{
	self->visit(self, document);
}

/* CefDOMDocument
--------------------------------------------------*/

cef_dom_document_type_t __stdcall CefDOMDocument_GetType(
	struct _cef_domdocument_t* self)
{
	return self->get_type(self);
}

struct _cef_domnode_t* __stdcall CefDOMDocument_GetDocument(
	struct _cef_domdocument_t* self)
{
	return self->get_document(self);
}

struct _cef_domnode_t* __stdcall CefDOMDocument_GetBody(
	struct _cef_domdocument_t* self)
{
	return self->get_body(self);
}

struct _cef_domnode_t* __stdcall CefDOMDocument_GetHead(
	struct _cef_domdocument_t* self)
{
	return self->get_head(self);
}

const wchar_t* __stdcall CefDOMDocument_GetTitle(
	struct _cef_domdocument_t* self)
{
	return self->get_title(self)->str;
}

struct _cef_domnode_t* __stdcall CefDOMDocument_GetElementById(
	struct _cef_domdocument_t* self,
	const wchar_t* id)
{
	return self->get_element_by_id(self, cefstring_pwcs(id));
}

struct _cef_domnode_t* __stdcall CefDOMDocument_GetFocusedNode(
	struct _cef_domdocument_t* self)
{
	return self->get_focused_node(self);
}

int __stdcall CefDOMDocument_HasSelection(struct _cef_domdocument_t* self)
{
	return self->has_selection(self);
}

int __stdcall CefDOMDocument_GetSelectionStartOffset(
	struct _cef_domdocument_t* self)
{
	return self->get_selection_start_offset(self);
}

int __stdcall CefDOMDocument_GetSelectionEndOffset(struct _cef_domdocument_t* self)
{
	return self->get_selection_end_offset(self);
}

const wchar_t* __stdcall CefDOMDocument_GetSelectionAsMarkup(
	struct _cef_domdocument_t* self)
{
	return self->get_selection_as_markup(self)->str;
}

const wchar_t* __stdcall CefDOMDocument_GetSelectionAsText(
	struct _cef_domdocument_t* self)
{
	return self->get_selection_as_text(self)->str;
}

const wchar_t* __stdcall CefDOMDocument_GetBaseUrl(
	struct _cef_domdocument_t* self)
{
	return self->get_base_url(self)->str;
}

const wchar_t* __stdcall CefDOMDocument_GetCompleteUrl(
	struct _cef_domdocument_t* self,
	const wchar_t* partialURL)
{
	return self->get_complete_url(self, cefstring_pwcs(partialURL))->str;
}

/* CefDOMNode
--------------------------------------------------*/

cef_dom_node_type_t __stdcall CefDOMNode_GetType(struct _cef_domnode_t* self)
{
	return self->get_type(self);
}

int __stdcall CefDOMNode_IsText(struct _cef_domnode_t* self)
{
	return self->is_text(self);
}

int __stdcall CefDOMNode_IsElement(struct _cef_domnode_t* self)
{
	return self->is_element(self);
}

int __stdcall CefDOMNode_IsEditable(struct _cef_domnode_t* self)
{
	return self->is_editable(self);
}

int __stdcall CefDOMNode_IsFormControlElement(struct _cef_domnode_t* self)
{
	return self->is_form_control_element(self);
}

const wchar_t* __stdcall CefDOMNode_GetFormControlElementType(
	struct _cef_domnode_t* self)
{
	return self->get_form_control_element_type(self)->str;
}

int __stdcall CefDOMNode_IsSame(struct _cef_domnode_t* self,
	struct _cef_domnode_t* that)
{
	return self->is_same(self, that);
}

const wchar_t* __stdcall CefDOMNodeget_name(struct _cef_domnode_t* self)
{
	return self->get_name(self)->str;
}

const wchar_t* __stdcall CefDOMNode_GetValue(struct _cef_domnode_t* self)
{
	return self->get_value(self)->str;
}

int __stdcall CefDOMNode_SetValue(struct _cef_domnode_t* self,
	const wchar_t* value)
{
	return self->set_value(self, cefstring_pwcs(value));
}

const wchar_t* __stdcall CefDOMNode_GetAsMarkup(
	struct _cef_domnode_t* self)
{
	return self->get_as_markup(self)->str;
}

struct _cef_domdocument_t* __stdcall CefDOMNode_GetDocument(
	struct _cef_domnode_t* self)
{
	return self->get_document(self);
}

struct _cef_domnode_t* __stdcall CefDOMNode_GetParent(struct _cef_domnode_t* self)
{
	return self->get_parent(self);
}

struct _cef_domnode_t* __stdcall CefDOMNode_GetPreviousSibling(
	struct _cef_domnode_t* self)
{
	return self->get_previous_sibling(self);
}

struct _cef_domnode_t* __stdcall CefDOMNode_GetNextSibling(
	struct _cef_domnode_t* self)
{
	return self->get_next_sibling(self);
}

int __stdcall CefDOMNode_HasChildren(struct _cef_domnode_t* self)
{
	return self->has_children(self);
}

struct _cef_domnode_t* __stdcall CefDOMNode_GetFirstChild(
	struct _cef_domnode_t* self)
{
	return self->get_first_child(self);
}

struct _cef_domnode_t* __stdcall CefDOMNode_GetLastChild(
	struct _cef_domnode_t* self)
{
	return self->get_last_child(self);
}

const wchar_t* __stdcall CefDOMNode_GetElementTagName(
	struct _cef_domnode_t* self)
{
	return self->get_element_tag_name(self)->str;
}

int __stdcall CefDOMNode_HasElementAttributes(struct _cef_domnode_t* self)
{
	return self->has_element_attributes(self);
}

int __stdcall CefDOMNode_HasElementAttribute(struct _cef_domnode_t* self,
	const wchar_t* attrName)
{
	return self->has_element_attribute(self, cefstring_pwcs(attrName));
}

const wchar_t* __stdcall CefDOMNode_GetElementAttribute(
	struct _cef_domnode_t* self,
	const wchar_t* attrName)
{
	return self->get_element_attribute(self, cefstring_pwcs(attrName))->str;
}

void __stdcall CefDOMNode_GetElementAttributes(struct _cef_domnode_t* self,
	cef_string_map_t attrMap)
{
	return self->get_element_attributes(self, attrMap);
}

int __stdcall CefDOMNode_SetElementAttribute(struct _cef_domnode_t* self,
	const wchar_t* attrName,
	const wchar_t* value)
{
	return self->set_element_attribute(
		self, 
		cefstring_pwcs(attrName), 
		cefstring_pwcs(value)
	);
}

const wchar_t* __stdcall CefDOMNode_GetElementInnerText(
	struct _cef_domnode_t* self)
{
	return self->get_element_inner_text(self)->str;
}

cef_rect_t __stdcall CefDOMNode_GetElementBounds(struct _cef_domnode_t* self)
{
	return self->get_element_bounds(self);
}
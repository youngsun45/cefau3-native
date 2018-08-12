#include "../cefau3.h"

cef_settings_t * __stdcall CefSettings_Create()
{
	size_t sz = sizeof(cef_settings_t);
	cef_settings_t *p = calloc(1, sz);
	p->size = sz;
	p->single_process = 1;
	p->log_severity = 99;
	//p->multi_threaded_message_loop = 1
		; p->no_sandbox = 1;

	return p;
}

void __stdcall CefSettings_Set_browser_subprocess_path(cef_settings_t *self, wchar_t* value)
{
	self->browser_subprocess_path = cefstring_wcs(value);
}

wchar_t * __stdcall CefSettings_Get_browser_subprocess_path(cef_settings_t *self)
{
	return self->browser_subprocess_path.str;
}

void __stdcall CefSettings_Set_framework_dir_path(cef_settings_t *self, wchar_t* value)
{
	self->framework_dir_path = cefstring_wcs(value);
}

wchar_t * __stdcall CefSettings_Get_framework_dir_path(cef_settings_t *self)
{
	return self->framework_dir_path.str;
}

void __stdcall CefSettings_Set_cache_path(cef_settings_t *self, wchar_t* value)
{
	self->cache_path = cefstring_wcs(value);
}

wchar_t * __stdcall CefSettings_Get_cache_path(cef_settings_t *self)
{
	return self->cache_path.str;
}

void __stdcall CefSettings_Set_user_data_path(cef_settings_t *self, wchar_t* value)
{
	self->user_data_path = cefstring_wcs(value);
}

wchar_t * __stdcall CefSettings_Get_user_data_path(cef_settings_t *self)
{
	return self->user_data_path.str;
}

void __stdcall CefSettings_Set_user_agent(cef_settings_t *self, wchar_t* value)
{
	self->user_agent = cefstring_wcs(value);
}

wchar_t * __stdcall CefSettings_Get_user_agent(cef_settings_t *self)
{
	return self->user_agent.str;
}

void __stdcall CefSettings_Set_product_version(cef_settings_t *self, wchar_t* value)
{
	self->product_version = cefstring_wcs(value);
}

wchar_t * __stdcall CefSettings_Get_product_version(cef_settings_t *self)
{
	return self->product_version.str;
}

void __stdcall CefSettings_Set_locale(cef_settings_t *self, wchar_t* value)
{
	self->locale = cefstring_wcs(value);
}

wchar_t * __stdcall CefSettings_Get_locale(cef_settings_t *self)
{
	return self->locale.str;
}

void __stdcall CefSettings_Set_log_file(cef_settings_t *self, wchar_t* value)
{
	self->log_file = cefstring_wcs(value);
}

wchar_t * __stdcall CefSettings_Get_log_file(cef_settings_t *self)
{
	return self->log_file.str;
}

void __stdcall CefSettings_Set_javascript_flags(cef_settings_t *self, wchar_t* value)
{
	self->javascript_flags = cefstring_wcs(value);
}

wchar_t * __stdcall CefSettings_Get_javascript_flags(cef_settings_t *self)
{
	return self->javascript_flags.str;
}

void __stdcall CefSettings_Set_resources_dir_path(cef_settings_t *self, wchar_t* value)
{
	self->resources_dir_path = cefstring_wcs(value);
}

wchar_t * __stdcall CefSettings_Get_resources_dir_path(cef_settings_t *self)
{
	return self->resources_dir_path.str;
}

void __stdcall CefSettings_Set_locales_dir_path(cef_settings_t *self, wchar_t* value)
{
	self->locales_dir_path = cefstring_wcs(value);
}

wchar_t * __stdcall CefSettings_Get_locales_dir_path(cef_settings_t *self)
{
	return self->locales_dir_path.str;
}

void __stdcall CefSettings_Set_accept_language_list(cef_settings_t *self, wchar_t* value)
{
	self->accept_language_list = cefstring_wcs(value);
}

wchar_t * __stdcall CefSettings_Get_accept_language_list(cef_settings_t *self)
{
	return self->accept_language_list.str;
}




////////////////////////////////////////////////////////////


cef_browser_settings_t * __stdcall CefBrowserSettings_Create()
{
	size_t sz = sizeof(cef_browser_settings_t);
	cef_browser_settings_t *p = calloc(1, sz);
	p->size = sz;
	return p;
}

void __stdcall BrowserHost(cef_browser_t *self)
{
	ShowWindow(self->get_host(self)->get_window_handle(self->get_host(self)), 5);
}

void __stdcall CefBrowserSettings_Set_standard_font_family(cef_browser_settings_t *self, wchar_t *value)
{
	self->standard_font_family = cefstring_wcs(value);
}

wchar_t * __stdcall CefBrowserSettings_Get_standard_font_family(cef_browser_settings_t *self)
{
	return self->standard_font_family.str;
}

void __stdcall CefBrowserSettings_Set_fixed_font_family(cef_browser_settings_t *self, wchar_t *value)
{
	self->fixed_font_family = cefstring_wcs(value);
}

wchar_t * __stdcall CefBrowserSettings_Get_fixed_font_family(cef_browser_settings_t *self)
{
	return self->fixed_font_family.str;
}

void __stdcall CefBrowserSettings_Set_serif_font_family(cef_browser_settings_t *self, wchar_t *value)
{
	self->serif_font_family = cefstring_wcs(value);
}

wchar_t * __stdcall CefBrowserSettings_Get_serif_font_family(cef_browser_settings_t *self)
{
	return self->serif_font_family.str;
}

void __stdcall CefBrowserSettings_Set_sans_serif_font_family(cef_browser_settings_t *self, wchar_t *value)
{
	self->sans_serif_font_family = cefstring_wcs(value);
}

wchar_t * __stdcall CefBrowserSettings_Get_sans_serif_font_family(cef_browser_settings_t *self)
{
	return self->sans_serif_font_family.str;
}

void __stdcall CefBrowserSettings_Set_cursive_font_family(cef_browser_settings_t *self, wchar_t *value)
{
	self->cursive_font_family = cefstring_wcs(value);
}

wchar_t * __stdcall CefBrowserSettings_Get_cursive_font_family(cef_browser_settings_t *self)
{
	return self->cursive_font_family.str;
}

void __stdcall CefBrowserSettings_Set_fantasy_font_family(cef_browser_settings_t *self, wchar_t *value)
{
	self->fantasy_font_family = cefstring_wcs(value);
}

wchar_t * __stdcall CefBrowserSettings_Get_fantasy_font_family(cef_browser_settings_t *self)
{
	return self->fantasy_font_family.str;
}

void __stdcall CefBrowserSettings_Set_default_encoding(cef_browser_settings_t *self, wchar_t *value)
{
	self->default_encoding = cefstring_wcs(value);
}

wchar_t * __stdcall CefBrowserSettings_Get_default_encoding(cef_browser_settings_t *self)
{
	return self->default_encoding.str;
}

void __stdcall CefBrowserSettings_Set_accept_language_list(cef_browser_settings_t *self, wchar_t *value)
{
	self->accept_language_list = cefstring_wcs(value);
}

wchar_t * __stdcall CefBrowserSettings_Get_accept_language_list(cef_browser_settings_t *self)
{
	return self->accept_language_list.str;
}

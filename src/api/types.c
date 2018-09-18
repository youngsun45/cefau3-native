#include "../cefau3.h"

/* CefSettings
--------------------------------------------------*/

cef_settings_t * __stdcall CefSettings_Create()
{
	u16 sz = sizeof(cef_settings_t);
	cef_settings_t *p = calloc(1, sz);
	p->size = sz;
	p->log_severity = 99;
	p->no_sandbox = 1;

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

void __stdcall CefSettings_Set_size(cef_settings_t *self, int value)
{
	self->size = value;
}

int __stdcall CefSettings_Get_size(cef_settings_t *self)
{
	return self->size;
}

void __stdcall CefSettings_Set_single_process(cef_settings_t *self, int value)
{
	self->single_process = value;
}

int __stdcall CefSettings_Get_single_process(cef_settings_t *self)
{
	return self->single_process;
}

void __stdcall CefSettings_Set_no_sandbox(cef_settings_t *self, int value)
{
	self->no_sandbox = value;
}

int __stdcall CefSettings_Get_no_sandbox(cef_settings_t *self)
{
	return self->no_sandbox;
}

void __stdcall CefSettings_Set_multi_threaded_message_loop(cef_settings_t *self, int value)
{
	self->multi_threaded_message_loop = value;
}

int __stdcall CefSettings_Get_multi_threaded_message_loop(cef_settings_t *self)
{
	return self->multi_threaded_message_loop;
}

void __stdcall CefSettings_Set_external_message_pump(cef_settings_t *self, int value)
{
	self->external_message_pump = value;
}

int __stdcall CefSettings_Get_external_message_pump(cef_settings_t *self)
{
	return self->external_message_pump;
}

void __stdcall CefSettings_Set_windowless_rendering_enabled(cef_settings_t *self, int value)
{
	self->windowless_rendering_enabled = value;
}

int __stdcall CefSettings_Get_windowless_rendering_enabled(cef_settings_t *self)
{
	return self->windowless_rendering_enabled;
}

void __stdcall CefSettings_Set_command_line_args_disabled(cef_settings_t *self, int value)
{
	self->command_line_args_disabled = value;
}

int __stdcall CefSettings_Get_command_line_args_disabled(cef_settings_t *self)
{
	return self->command_line_args_disabled;
}

void __stdcall CefSettings_Set_persist_session_cookies(cef_settings_t *self, int value)
{
	self->persist_session_cookies = value;
}

int __stdcall CefSettings_Get_persist_session_cookies(cef_settings_t *self)
{
	return self->persist_session_cookies;
}

void __stdcall CefSettings_Set_persist_user_preferences(cef_settings_t *self, int value)
{
	self->persist_user_preferences = value;
}

int __stdcall CefSettings_Get_persist_user_preferences(cef_settings_t *self)
{
	return self->persist_user_preferences;
}

void __stdcall CefSettings_Set_log_severity(cef_settings_t *self, int value)
{
	self->log_severity = value;
}

int __stdcall CefSettings_Get_log_severity(cef_settings_t *self)
{
	return self->log_severity;
}

void __stdcall CefSettings_Set_pack_loading_disabled(cef_settings_t *self, int value)
{
	self->pack_loading_disabled = value;
}

int __stdcall CefSettings_Get_pack_loading_disabled(cef_settings_t *self)
{
	return self->pack_loading_disabled;
}

void __stdcall CefSettings_Set_remote_debugging_port(cef_settings_t *self, int value)
{
	self->remote_debugging_port = value;
}

int __stdcall CefSettings_Get_remote_debugging_port(cef_settings_t *self)
{
	return self->remote_debugging_port;
}

void __stdcall CefSettings_Set_uncaught_exception_stack_size(cef_settings_t *self, int value)
{
	self->uncaught_exception_stack_size = value;
}

int __stdcall CefSettings_Get_uncaught_exception_stack_size(cef_settings_t *self)
{
	return self->uncaught_exception_stack_size;
}

void __stdcall CefSettings_Set_ignore_certificate_errors(cef_settings_t *self, int value)
{
	self->ignore_certificate_errors = value;
}

int __stdcall CefSettings_Get_ignore_certificate_errors(cef_settings_t *self)
{
	return self->ignore_certificate_errors;
}

void __stdcall CefSettings_Set_enable_net_security_expiration(cef_settings_t *self, int value)
{
	self->enable_net_security_expiration = value;
}

int __stdcall CefSettings_Get_enable_net_security_expiration(cef_settings_t *self)
{
	return self->enable_net_security_expiration;
}

void __stdcall CefSettings_Set_background_color(cef_settings_t *self, int value)
{
	self->background_color = value;
}

int __stdcall CefSettings_Get_background_color(cef_settings_t *self)
{
	return self->background_color;
}

/* Cef RequestContextSettings
--------------------------------------------------*/

void __stdcall CefRequestContextSettings_Set_size(cef_request_context_settings_t *self, int value)
{
	self->size = value;
}

int __stdcall CefRequestContextSettings_Get_size(cef_request_context_settings_t *self)
{
	return self->size;
}

void __stdcall CefRequestContextSettings_Set_persist_session_cookies(cef_request_context_settings_t *self, int value)
{
	self->persist_session_cookies = value;
}

int __stdcall CefRequestContextSettings_Get_persist_session_cookies(cef_request_context_settings_t *self)
{
	return self->persist_session_cookies;
}

void __stdcall CefRequestContextSettings_Set_persist_user_preferences(cef_request_context_settings_t *self, int value)
{
	self->persist_user_preferences = value;
}

int __stdcall CefRequestContextSettings_Get_persist_user_preferences(cef_request_context_settings_t *self)
{
	return self->persist_user_preferences;
}

void __stdcall CefRequestContextSettings_Set_ignore_certificate_errors(cef_request_context_settings_t *self, int value)
{
	self->ignore_certificate_errors = value;
}

int __stdcall CefRequestContextSettings_Get_ignore_certificate_errors(cef_request_context_settings_t *self)
{
	return self->ignore_certificate_errors;
}

void __stdcall CefRequestContextSettings_Set_enable_net_security_expiration(cef_request_context_settings_t *self, int value)
{
	self->enable_net_security_expiration = value;
}

int __stdcall CefRequestContextSettings_Get_enable_net_security_expiration(cef_request_context_settings_t *self)
{
	return self->enable_net_security_expiration;
}

void __stdcall CefRequestContextSettings_Set_cache_path(cef_request_context_settings_t *self, const wchar_t* value)
{
	self->cache_path = cefstring_wcs(value);
}

const wchar_t* __stdcall CefRequestContextSettings_Get_cache_path(cef_request_context_settings_t *self)
{
	return self->cache_path.str;
}

void __stdcall CefRequestContextSettings_Set_accept_language_list(cef_request_context_settings_t *self, const wchar_t* value)
{
	self->accept_language_list = cefstring_wcs(value);
}

const wchar_t* __stdcall CefRequestContextSettings_Get_accept_language_list(cef_request_context_settings_t *self)
{
	return self->accept_language_list.str;
}

/* Cef BrowserSettings
--------------------------------------------------*/

cef_browser_settings_t * __stdcall CefBrowserSettings_Create()
{
	u16 sz = sizeof(cef_browser_settings_t);
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

void __stdcall CefBrowserSettings_Set_size(cef_browser_settings_t *self, int value)
{
	self->size = value;
}

int __stdcall CefBrowserSettings_Get_size(cef_browser_settings_t *self)
{
	return self->size;
}

void __stdcall CefBrowserSettings_Set_windowless_frame_rate(cef_browser_settings_t *self, int value)
{
	self->windowless_frame_rate = value;
}

int __stdcall CefBrowserSettings_Get_windowless_frame_rate(cef_browser_settings_t *self)
{
	return self->windowless_frame_rate;
}

void __stdcall CefBrowserSettings_Set_default_font_size(cef_browser_settings_t *self, int value)
{
	self->default_font_size = value;
}

int __stdcall CefBrowserSettings_Get_default_font_size(cef_browser_settings_t *self)
{
	return self->default_font_size;
}

void __stdcall CefBrowserSettings_Set_default_fixed_font_size(cef_browser_settings_t *self, int value)
{
	self->default_fixed_font_size = value;
}

int __stdcall CefBrowserSettings_Get_default_fixed_font_size(cef_browser_settings_t *self)
{
	return self->default_fixed_font_size;
}

void __stdcall CefBrowserSettings_Set_minimum_font_size(cef_browser_settings_t *self, int value)
{
	self->minimum_font_size = value;
}

int __stdcall CefBrowserSettings_Get_minimum_font_size(cef_browser_settings_t *self)
{
	return self->minimum_font_size;
}

void __stdcall CefBrowserSettings_Set_minimum_logical_font_size(cef_browser_settings_t *self, int value)
{
	self->minimum_logical_font_size = value;
}

int __stdcall CefBrowserSettings_Get_minimum_logical_font_size(cef_browser_settings_t *self)
{
	return self->minimum_logical_font_size;
}

void __stdcall CefBrowserSettings_Set_remote_fonts(cef_browser_settings_t *self, int value)
{
	self->remote_fonts = value;
}

int __stdcall CefBrowserSettings_Get_remote_fonts(cef_browser_settings_t *self)
{
	return self->remote_fonts;
}

void __stdcall CefBrowserSettings_Set_javascript(cef_browser_settings_t *self, int value)
{
	self->javascript = value;
}

int __stdcall CefBrowserSettings_Get_javascript(cef_browser_settings_t *self)
{
	return self->javascript;
}

void __stdcall CefBrowserSettings_Set_javascript_close_windows(cef_browser_settings_t *self, int value)
{
	self->javascript_close_windows = value;
}

int __stdcall CefBrowserSettings_Get_javascript_close_windows(cef_browser_settings_t *self)
{
	return self->javascript_close_windows;
}

void __stdcall CefBrowserSettings_Set_javascript_access_clipboard(cef_browser_settings_t *self, int value)
{
	self->javascript_access_clipboard = value;
}

int __stdcall CefBrowserSettings_Get_javascript_access_clipboard(cef_browser_settings_t *self)
{
	return self->javascript_access_clipboard;
}

void __stdcall CefBrowserSettings_Set_javascript_dom_paste(cef_browser_settings_t *self, int value)
{
	self->javascript_dom_paste = value;
}

int __stdcall CefBrowserSettings_Get_javascript_dom_paste(cef_browser_settings_t *self)
{
	return self->javascript_dom_paste;
}

void __stdcall CefBrowserSettings_Set_plugins(cef_browser_settings_t *self, int value)
{
	self->plugins = value;
}

int __stdcall CefBrowserSettings_Get_plugins(cef_browser_settings_t *self)
{
	return self->plugins;
}

void __stdcall CefBrowserSettings_Set_universal_access_from_file_urls(cef_browser_settings_t *self, int value)
{
	self->universal_access_from_file_urls = value;
}

int __stdcall CefBrowserSettings_Get_universal_access_from_file_urls(cef_browser_settings_t *self)
{
	return self->universal_access_from_file_urls;
}

void __stdcall CefBrowserSettings_Set_file_access_from_file_urls(cef_browser_settings_t *self, int value)
{
	self->file_access_from_file_urls = value;
}

int __stdcall CefBrowserSettings_Get_file_access_from_file_urls(cef_browser_settings_t *self)
{
	return self->file_access_from_file_urls;
}

void __stdcall CefBrowserSettings_Set_web_security(cef_browser_settings_t *self, int value)
{
	self->web_security = value;
}

int __stdcall CefBrowserSettings_Get_web_security(cef_browser_settings_t *self)
{
	return self->web_security;
}

void __stdcall CefBrowserSettings_Set_image_loading(cef_browser_settings_t *self, int value)
{
	self->image_loading = value;
}

int __stdcall CefBrowserSettings_Get_image_loading(cef_browser_settings_t *self)
{
	return self->image_loading;
}

void __stdcall CefBrowserSettings_Set_image_shrink_standalone_to_fit(cef_browser_settings_t *self, int value)
{
	self->image_shrink_standalone_to_fit = value;
}

int __stdcall CefBrowserSettings_Get_image_shrink_standalone_to_fit(cef_browser_settings_t *self)
{
	return self->image_shrink_standalone_to_fit;
}

void __stdcall CefBrowserSettings_Set_text_area_resize(cef_browser_settings_t *self, int value)
{
	self->text_area_resize = value;
}

int __stdcall CefBrowserSettings_Get_text_area_resize(cef_browser_settings_t *self)
{
	return self->text_area_resize;
}

void __stdcall CefBrowserSettings_Set_tab_to_links(cef_browser_settings_t *self, int value)
{
	self->tab_to_links = value;
}

int __stdcall CefBrowserSettings_Get_tab_to_links(cef_browser_settings_t *self)
{
	return self->tab_to_links;
}

void __stdcall CefBrowserSettings_Set_local_storage(cef_browser_settings_t *self, int value)
{
	self->local_storage = value;
}

int __stdcall CefBrowserSettings_Get_local_storage(cef_browser_settings_t *self)
{
	return self->local_storage;
}

void __stdcall CefBrowserSettings_Set_databases(cef_browser_settings_t *self, int value)
{
	self->databases = value;
}

int __stdcall CefBrowserSettings_Get_databases(cef_browser_settings_t *self)
{
	return self->databases;
}

void __stdcall CefBrowserSettings_Set_application_cache(cef_browser_settings_t *self, int value)
{
	self->application_cache = value;
}

int __stdcall CefBrowserSettings_Get_application_cache(cef_browser_settings_t *self)
{
	return self->application_cache;
}

void __stdcall CefBrowserSettings_Set_webgl(cef_browser_settings_t *self, int value)
{
	self->webgl = value;
}

int __stdcall CefBrowserSettings_Get_webgl(cef_browser_settings_t *self)
{
	return self->webgl;
}

void __stdcall CefBrowserSettings_Set_background_color(cef_browser_settings_t *self, int value)
{
	self->background_color = value;
}

int __stdcall CefBrowserSettings_Get_background_color(cef_browser_settings_t *self)
{
	return self->background_color;
}

/* CefURLParts
--------------------------------------------------*/

void __stdcall CefURLParts_Set_spec(cef_urlparts_t *self, const wchar_t *value)
{
	self->spec = cefstring_wcs(value);
}

const wchar_t* __stdcall CefURLParts_Get_spec(cef_urlparts_t *self)
{
	return self->spec.str;
}

void __stdcall CefURLParts_Set_scheme(cef_urlparts_t *self, const wchar_t *value)
{
	self->scheme = cefstring_wcs(value);
}

const wchar_t* __stdcall CefURLParts_Get_scheme(cef_urlparts_t *self)
{
	return self->scheme.str;
}

void __stdcall CefURLParts_Set_username(cef_urlparts_t *self, const wchar_t *value)
{
	self->username = cefstring_wcs(value);
}

const wchar_t* __stdcall CefURLParts_Get_username(cef_urlparts_t *self)
{
	return self->username.str;
}

void __stdcall CefURLParts_Set_password(cef_urlparts_t *self, const wchar_t *value)
{
	self->password = cefstring_wcs(value);
}

const wchar_t* __stdcall CefURLParts_Get_password(cef_urlparts_t *self)
{
	return self->password.str;
}

void __stdcall CefURLParts_Set_host(cef_urlparts_t *self, const wchar_t *value)
{
	self->host = cefstring_wcs(value);
}

const wchar_t* __stdcall CefURLParts_Get_host(cef_urlparts_t *self)
{
	return self->host.str;
}

void __stdcall CefURLParts_Set_port(cef_urlparts_t *self, const wchar_t *value)
{
	self->port = cefstring_wcs(value);
}

const wchar_t* __stdcall CefURLParts_Get_port(cef_urlparts_t *self)
{
	return self->port.str;
}

void __stdcall CefURLParts_Set_origin(cef_urlparts_t *self, const wchar_t *value)
{
	self->origin = cefstring_wcs(value);
}

const wchar_t* __stdcall CefURLParts_Get_origin(cef_urlparts_t *self)
{
	return self->origin.str;
}

void __stdcall CefURLParts_Set_path(cef_urlparts_t *self, const wchar_t *value)
{
	self->path = cefstring_wcs(value);
}

const wchar_t* __stdcall CefURLParts_Get_path(cef_urlparts_t *self)
{
	return self->path.str;
}

void __stdcall CefURLParts_Set_query(cef_urlparts_t *self, const wchar_t *value)
{
	self->query = cefstring_wcs(value);
}

const wchar_t* __stdcall CefURLParts_Get_query(cef_urlparts_t *self)
{
	return self->query.str;
}

/* CefCookie
--------------------------------------------------*/

void __stdcall CefCookie_Set_name(cef_cookie_t *self, const wchar_t *value)
{
	self->name = cefstring_wcs(value);
}

const wchar_t* __stdcall CefCookie_Get_name(cef_cookie_t *self)
{
	return self->name.str;
}

void __stdcall CefCookie_Set_value(cef_cookie_t *self, const wchar_t *value)
{
	self->value = cefstring_wcs(value);
}

const wchar_t* __stdcall CefCookie_Get_value(cef_cookie_t *self)
{
	return self->value.str;
}

void __stdcall CefCookie_Set_domain(cef_cookie_t *self, const wchar_t *value)
{
	self->domain = cefstring_wcs(value);
}

const wchar_t* __stdcall CefCookie_Get_domain(cef_cookie_t *self)
{
	return self->domain.str;
}

void __stdcall CefCookie_Set_path(cef_cookie_t *self, const wchar_t *value)
{
	self->path = cefstring_wcs(value);
}

const wchar_t* __stdcall CefCookie_Get_path(cef_cookie_t *self)
{
	return self->path.str;
}

void __stdcall CefCookie_Set_secure(cef_cookie_t *self, int value)
{
	self->secure = value;
}

int __stdcall CefCookie_Get_secure(cef_cookie_t *self)
{
	return self->secure;
}

void __stdcall CefCookie_Set_httponly(cef_cookie_t *self, int value)
{
	self->httponly = value;
}

int __stdcall CefCookie_Get_httponly(cef_cookie_t *self)
{
	return self->httponly;
}

void __stdcall CefCookie_Set_creation(cef_cookie_t *self, cef_time_t *value)
{
	self->creation = *value;
}

cef_time_t* __stdcall CefCookie_Get_creation(cef_cookie_t *self)
{
	return &self->creation;
}

void __stdcall CefCookie_Set_last_access(cef_cookie_t *self, cef_time_t *value)
{
	self->last_access = *value;
}

cef_time_t* __stdcall CefCookie_Get_last_access(cef_cookie_t *self)
{
	return &self->last_access;
}

void __stdcall CefCookie_Set_has_expires(cef_cookie_t *self, int value)
{
	self->has_expires = value;
}

int __stdcall CefCookie_Get_has_expires(cef_cookie_t *self)
{
	return self->has_expires;
}

void __stdcall CefCookie_Set_expires(cef_cookie_t *self, cef_time_t *value)
{
	self->expires = *value;
}

cef_time_t* __stdcall CefCookie_Get_expires(cef_cookie_t *self)
{
	return &self->expires;
}

/* CefPoint
--------------------------------------------------*/

void __stdcall CefPoint_Set_x(cef_point_t *self, int value)
{
	self->x = value;
}

int __stdcall CefPoint_Get_x(cef_point_t *self)
{
	return self->x;
}

void __stdcall CefPoint_Set_y(cef_point_t *self, int value)
{
	self->y = value;
}

int __stdcall CefPoint_Get_y(cef_point_t *self)
{
	return self->y;
}

/* CefRect
--------------------------------------------------*/

void __stdcall CefRect_Set_x(cef_rect_t *self, int value)
{
	self->x = value;
}

int __stdcall CefRect_Get_x(cef_rect_t *self)
{
	return self->x;
}

void __stdcall CefRect_Set_y(cef_rect_t *self, int value)
{
	self->y = value;
}

int __stdcall CefRect_Get_y(cef_rect_t *self)
{
	return self->y;
}

void __stdcall CefRect_Set_width(cef_rect_t *self, int value)
{
	self->width = value;
}

int __stdcall CefRect_Get_width(cef_rect_t *self)
{
	return self->width;
}

void __stdcall CefRect_Set_height(cef_rect_t *self, int value)
{
	self->height = value;
}

int __stdcall CefRect_Get_height(cef_rect_t *self)
{
	return self->height;
}

/* CefSize
--------------------------------------------------*/

void __stdcall CefSize_Set_width(cef_size_t *self, int value)
{
	self->width = value;
}

int __stdcall CefSize_Get_width(cef_size_t *self)
{
	return self->width;
}

void __stdcall CefSize_Set_height(cef_size_t *self, int value)
{
	self->height = value;
}

int __stdcall CefSize_Get_height(cef_size_t *self)
{
	return self->height;
}

/* CefRange
--------------------------------------------------*/

void __stdcall CefRange_Set_to(cef_range_t *self, int value)
{
	self->to = value;
}

int __stdcall CefRange_Get_to(cef_range_t *self)
{
	return self->to;
}

void __stdcall CefRange_Set_from(cef_range_t *self, int value)
{
	self->from = value;
}

int __stdcall CefRange_Get_from(cef_range_t *self)
{
	return self->from;
}

/* CefInsets
--------------------------------------------------*/

void __stdcall CefInsets_Set_top(cef_insets_t *self, int value)
{
	self->top = value;
}

int __stdcall CefInsets_Get_top(cef_insets_t *self)
{
	return self->top;
}

void __stdcall CefInsets_Set_left(cef_insets_t *self, int value)
{
	self->left = value;
}

int __stdcall CefInsets_Get_left(cef_insets_t *self)
{
	return self->left;
}

void __stdcall CefInsets_Set_bottom(cef_insets_t *self, int value)
{
	self->bottom = value;
}

int __stdcall CefInsets_Get_bottom(cef_insets_t *self)
{
	return self->bottom;
}

void __stdcall CefInsets_Set_right(cef_insets_t *self, int value)
{
	self->right = value;
}

int __stdcall CefInsets_Get_right(cef_insets_t *self)
{
	return self->right;
}

/* CefDraggableRegion
--------------------------------------------------*/

void __stdcall CefDraggableRegion_Set_bounds(cef_draggable_region_t *self, cef_rect_t *value)
{
	self->bounds = *value;
}

cef_rect_t * __stdcall CefDraggableRegion_Get_bounds(cef_draggable_region_t *self)
{
	return &self->bounds;
}

void __stdcall CefDraggableRegion_Set_draggable(cef_draggable_region_t *self, int value)
{
	self->draggable = value;
}

int __stdcall CefDraggableRegion_Get_draggable(cef_draggable_region_t *self)
{
	return self->draggable;
}

/* CefScreenInfo
--------------------------------------------------*/

void __stdcall CefScreenInfo_Set_depth(cef_screen_info_t *self, int value)
{
	self->depth = value;
}

int __stdcall CefScreenInfo_Get_depth(cef_screen_info_t *self)
{
	return self->depth;
}

void __stdcall CefScreenInfo_Set_depth_per_component(cef_screen_info_t *self, int value)
{
	self->depth_per_component = value;
}

int __stdcall CefScreenInfo_Get_depth_per_component(cef_screen_info_t *self)
{
	return self->depth_per_component;
}

void __stdcall CefScreenInfo_Set_is_monochrome(cef_screen_info_t *self, int value)
{
	self->is_monochrome = value;
}

int __stdcall CefScreenInfo_Get_is_monochrome(cef_screen_info_t *self)
{
	return self->is_monochrome;
}

void __stdcall CefScreenInfo_Set_device_scale_factor(cef_screen_info_t *self, float value)
{
	self->device_scale_factor = value;
}

float __stdcall CefScreenInfo_Get_device_scale_factor(cef_screen_info_t *self)
{
	return self->device_scale_factor;
}

void __stdcall CefScreenInfo_Set_rect(cef_screen_info_t *self, cef_rect_t* value)
{
	self->rect = *value;
}

cef_rect_t* __stdcall CefScreenInfo_Get_rect(cef_screen_info_t *self)
{
	return &self->rect;
}

void __stdcall CefScreenInfo_Set_available_rect(cef_screen_info_t *self, cef_rect_t* value)
{
	self->available_rect = *value;
}

cef_rect_t* __stdcall CefScreenInfo_Get_available_rect(cef_screen_info_t *self)
{
	return &self->available_rect;
}

/* CefMouseEvent
--------------------------------------------------*/

void __stdcall CefMouseEvent_Set_x(cef_mouse_event_t *self, int value)
{
	self->x = value;
}

int __stdcall CefMouseEvent_Get_x(cef_mouse_event_t *self)
{
	return self->x;
}

void __stdcall CefMouseEvent_Set_y(cef_mouse_event_t *self, int value)
{
	self->y = value;
}

int __stdcall CefMouseEvent_Get_y(cef_mouse_event_t *self)
{
	return self->y;
}

void __stdcall CefMouseEvent_Set_modifiers(cef_mouse_event_t *self, int value)
{
	self->modifiers = value;
}

int __stdcall CefMouseEvent_Get_modifiers(cef_mouse_event_t *self)
{
	return self->modifiers;
}

/* CefKeyEvent
--------------------------------------------------*/

void __stdcall CefKeyEvent_Set_type(cef_key_event_t *self, int value)
{
	self->type = value;
}

int __stdcall CefKeyEvent_Get_type(cef_key_event_t *self)
{
	return self->type;
}

void __stdcall CefKeyEvent_Set_modifiers(cef_key_event_t *self, int value)
{
	self->modifiers = value;
}

int __stdcall CefKeyEvent_Get_modifiers(cef_key_event_t *self)
{
	return self->modifiers;
}

void __stdcall CefKeyEvent_Set_windows_key_code(cef_key_event_t *self, int value)
{
	self->windows_key_code = value;
}

int __stdcall CefKeyEvent_Get_windows_key_code(cef_key_event_t *self)
{
	return self->windows_key_code;
}

void __stdcall CefKeyEvent_Set_native_key_code(cef_key_event_t *self, int value)
{
	self->native_key_code = value;
}

int __stdcall CefKeyEvent_Get_native_key_code(cef_key_event_t *self)
{
	return self->native_key_code;
}

void __stdcall CefKeyEvent_Set_is_system_key(cef_key_event_t *self, int value)
{
	self->is_system_key = value;
}

int __stdcall CefKeyEvent_Get_is_system_key(cef_key_event_t *self)
{
	return self->is_system_key;
}

void __stdcall CefKeyEvent_Set_focus_on_editable_field(cef_key_event_t *self, int value)
{
	self->focus_on_editable_field = value;
}

int __stdcall CefKeyEvent_Get_focus_on_editable_field(cef_key_event_t *self)
{
	return self->focus_on_editable_field;
}

/*
char16 character;
char16 unmodified_character;
*/

/* CefPopupFeatures
--------------------------------------------------*/

void __stdcall CefPopupFeatures_Set_x(cef_popup_features_t *self, int value)
{
	self->x = value;
}

int __stdcall CefPopupFeatures_Get_x(cef_popup_features_t *self)
{
	return self->x;
}

void __stdcall CefPopupFeatures_Set_xSet(cef_popup_features_t *self, int value)
{
	self->xSet = value;
}

int __stdcall CefPopupFeatures_Get_xSet(cef_popup_features_t *self)
{
	return self->xSet;
}

void __stdcall CefPopupFeatures_Set_y(cef_popup_features_t *self, int value)
{
	self->y = value;
}

int __stdcall CefPopupFeatures_Get_y(cef_popup_features_t *self)
{
	return self->y;
}

void __stdcall CefPopupFeatures_Set_ySet(cef_popup_features_t *self, int value)
{
	self->ySet = value;
}

int __stdcall CefPopupFeatures_Get_ySet(cef_popup_features_t *self)
{
	return self->ySet;
}

void __stdcall CefPopupFeatures_Set_width(cef_popup_features_t *self, int value)
{
	self->width = value;
}

int __stdcall CefPopupFeatures_Get_width(cef_popup_features_t *self)
{
	return self->width;
}

void __stdcall CefPopupFeatures_Set_widthSet(cef_popup_features_t *self, int value)
{
	self->widthSet = value;
}

int __stdcall CefPopupFeatures_Get_widthSet(cef_popup_features_t *self)
{
	return self->widthSet;
}

void __stdcall CefPopupFeatures_Set_height(cef_popup_features_t *self, int value)
{
	self->height = value;
}

int __stdcall CefPopupFeatures_Get_height(cef_popup_features_t *self)
{
	return self->height;
}

void __stdcall CefPopupFeatures_Set_heightSet(cef_popup_features_t *self, int value)
{
	self->heightSet = value;
}

int __stdcall CefPopupFeatures_Get_heightSet(cef_popup_features_t *self)
{
	return self->heightSet;
}

void __stdcall CefPopupFeatures_Set_menuBarVisible(cef_popup_features_t *self, int value)
{
	self->menuBarVisible = value;
}

int __stdcall CefPopupFeatures_Get_menuBarVisible(cef_popup_features_t *self)
{
	return self->menuBarVisible;
}

void __stdcall CefPopupFeatures_Set_statusBarVisible(cef_popup_features_t *self, int value)
{
	self->statusBarVisible = value;
}

int __stdcall CefPopupFeatures_Get_statusBarVisible(cef_popup_features_t *self)
{
	return self->statusBarVisible;
}

void __stdcall CefPopupFeatures_Set_toolBarVisible(cef_popup_features_t *self, int value)
{
	self->toolBarVisible = value;
}

int __stdcall CefPopupFeatures_Get_toolBarVisible(cef_popup_features_t *self)
{
	return self->toolBarVisible;
}

void __stdcall CefPopupFeatures_Set_scrollbarsVisible(cef_popup_features_t *self, int value)
{
	self->scrollbarsVisible = value;
}

int __stdcall CefPopupFeatures_Get_scrollbarsVisible(cef_popup_features_t *self)
{
	return self->scrollbarsVisible;
}

/* CefGeoposition
--------------------------------------------------*/

void __stdcall CefGeoposition_Set_latitude(cef_geoposition_t *self, double value)
{
	self->latitude = value;
}

double __stdcall CefGeoposition_Get_latitude(cef_geoposition_t *self)
{
	return self->latitude;
}

void __stdcall CefGeoposition_Set_longitude(cef_geoposition_t *self, double value)
{
	self->longitude = value;
}

double __stdcall CefGeoposition_Get_longitude(cef_geoposition_t *self)
{
	return self->longitude;
}

void __stdcall CefGeoposition_Set_altitude(cef_geoposition_t *self, double value)
{
	self->altitude = value;
}

double __stdcall CefGeoposition_Get_altitude(cef_geoposition_t *self)
{
	return self->altitude;
}

void __stdcall CefGeoposition_Set_accuracy(cef_geoposition_t *self, double value)
{
	self->accuracy = value;
}

double __stdcall CefGeoposition_Get_accuracy(cef_geoposition_t *self)
{
	return self->accuracy;
}

void __stdcall CefGeoposition_Set_altitude_accuracy(cef_geoposition_t *self, double value)
{
	self->altitude_accuracy = value;
}

double __stdcall CefGeoposition_Get_altitude_accuracy(cef_geoposition_t *self)
{
	return self->altitude_accuracy;
}

void __stdcall CefGeoposition_Set_heading(cef_geoposition_t *self, double value)
{
	self->heading = value;
}

double __stdcall CefGeoposition_Get_heading(cef_geoposition_t *self)
{
	return self->heading;
}

void __stdcall CefGeoposition_Set_speed(cef_geoposition_t *self, double value)
{
	self->speed = value;
}

double __stdcall CefGeoposition_Get_speed(cef_geoposition_t *self)
{
	return self->speed;
}

void __stdcall CefGeoposition_Set_error_code(cef_geoposition_t *self, double value)
{
	self->error_code = value;
}

double __stdcall CefGeoposition_Get_error_code(cef_geoposition_t *self)
{
	return self->error_code;
}

void __stdcall CefGeoposition_Set_timestamp(cef_geoposition_t *self, cef_time_t *value)
{
	self->timestamp = *value;
}

cef_time_t* __stdcall CefGeoposition_Get_timestamp(cef_geoposition_t *self)
{
	return &self->timestamp;
}

void __stdcall CefGeoposition_Set_scheme(cef_geoposition_t *self, const wchar_t *value)
{
	self->error_message = cefstring_wcs(value);
}

const wchar_t* __stdcall CefGeoposition_Get_scheme(cef_geoposition_t *self)
{
	return self->error_message.str;
}

/* CefCursorInfo
--------------------------------------------------*/

void __stdcall CefCursorInfo_Set_image_scale_factor(cef_cursor_info_t *self, float value)
{
	self->image_scale_factor = value;
}

float __stdcall CefCursorInfo_Get_image_scale_factor(cef_cursor_info_t *self)
{
	return self->image_scale_factor;
}

void __stdcall CefCursorInfo_Set_buffer(cef_cursor_info_t *self, void *value)
{
	self->buffer = value;
}

void* __stdcall CefCursorInfo_Get_buffer(cef_cursor_info_t *self)
{
	return self->buffer;
}

void __stdcall CefCursorInfo_Set_hotspot(cef_cursor_info_t *self, cef_point_t *value)
{
	self->hotspot = *value;
}

cef_point_t* __stdcall CefCursorInfo_Get_hotspot(cef_cursor_info_t *self)
{
	return &self->hotspot;
}

void __stdcall CefCursorInfo_Set_size(cef_cursor_info_t *self, cef_size_t *value)
{
	self->size = *value;
}

cef_size_t* __stdcall CefCursorInfo_Get_size(cef_cursor_info_t *self)
{
	return &self->size;
}

/* CefPDFPrintSettings
--------------------------------------------------*/

void __stdcall CefPDFPrintSettings_Set_margin_top(cef_pdf_print_settings_t *self, double value)
{
	self->margin_top = value;
}

double __stdcall CefPDFPrintSettings_Get_margin_top(cef_pdf_print_settings_t *self)
{
	return self->margin_top;
}

void __stdcall CefPDFPrintSettings_Set_margin_right(cef_pdf_print_settings_t *self, double value)
{
	self->margin_right = value;
}

double __stdcall CefPDFPrintSettings_Get_margin_right(cef_pdf_print_settings_t *self)
{
	return self->margin_right;
}

void __stdcall CefPDFPrintSettings_Set_margin_bottom(cef_pdf_print_settings_t *self, double value)
{
	self->margin_bottom = value;
}

double __stdcall CefPDFPrintSettings_Get_margin_bottom(cef_pdf_print_settings_t *self)
{
	return self->margin_bottom;
}

void __stdcall CefPDFPrintSettings_Set_margin_left(cef_pdf_print_settings_t *self, double value)
{
	self->margin_left = value;
}

double __stdcall CefPDFPrintSettings_Get_margin_left(cef_pdf_print_settings_t *self)
{
	return self->margin_left;
}

void __stdcall CefPDFPrintSettings_Set_page_width(cef_pdf_print_settings_t *self, int value)
{
	self->page_width = value;
}

int __stdcall CefPDFPrintSettings_Get_page_width(cef_pdf_print_settings_t *self)
{
	return self->page_width;
}

void __stdcall CefPDFPrintSettings_Set_page_height(cef_pdf_print_settings_t *self, int value)
{
	self->page_height = value;
}

int __stdcall CefPDFPrintSettings_Get_page_height(cef_pdf_print_settings_t *self)
{
	return self->page_height;
}

void __stdcall CefPDFPrintSettings_Set_scale_factor(cef_pdf_print_settings_t *self, int value)
{
	self->scale_factor = value;
}

int __stdcall CefPDFPrintSettings_Get_scale_factor(cef_pdf_print_settings_t *self)
{
	return self->scale_factor;
}

void __stdcall CefPDFPrintSettings_Set_header_footer_enabled(cef_pdf_print_settings_t *self, int value)
{
	self->header_footer_enabled = value;
}

int __stdcall CefPDFPrintSettings_Get_header_footer_enabled(cef_pdf_print_settings_t *self)
{
	return self->header_footer_enabled;
}

void __stdcall CefPDFPrintSettings_Set_selection_only(cef_pdf_print_settings_t *self, int value)
{
	self->selection_only = value;
}

int __stdcall CefPDFPrintSettings_Get_selection_only(cef_pdf_print_settings_t *self)
{
	return self->selection_only;
}

void __stdcall CefPDFPrintSettings_Set_landscape(cef_pdf_print_settings_t *self, int value)
{
	self->landscape = value;
}

int __stdcall CefPDFPrintSettings_Get_landscape(cef_pdf_print_settings_t *self)
{
	return self->landscape;
}

void __stdcall CefPDFPrintSettings_Set_backgrounds_enabled(cef_pdf_print_settings_t *self, int value)
{
	self->backgrounds_enabled = value;
}

int __stdcall CefPDFPrintSettings_Get_backgrounds_enabled(cef_pdf_print_settings_t *self)
{
	return self->backgrounds_enabled;
}

void __stdcall CefPDFPrintSettings_Set_margin_type(cef_pdf_print_settings_t *self, int value)
{
	self->margin_type = value;
}

int __stdcall CefPDFPrintSettings_Get_margin_type(cef_pdf_print_settings_t *self)
{
	return self->margin_type;
}

void __stdcall CefPDFPrintSettings_Set_header_footer_title(cef_pdf_print_settings_t *self, const wchar_t *value)
{
	self->header_footer_title = cefstring_wcs(value);
}

const wchar_t* __stdcall CefPDFPrintSettings_Get_header_footer_title(cef_pdf_print_settings_t *self)
{
	return self->header_footer_title.str;
}

void __stdcall CefPDFPrintSettings_Set_header_footer_url(cef_pdf_print_settings_t *self, const wchar_t *value)
{
	self->header_footer_url = cefstring_wcs(value);
}

const wchar_t* __stdcall CefPDFPrintSettings_Get_header_footer_url(cef_pdf_print_settings_t *self)
{
	return self->header_footer_url.str;
}

/* CefBoxLayoutSettings
--------------------------------------------------*/

void __stdcall CefBoxLayoutSettings_Set_horizontal(cef_box_layout_settings_t *self, int value)
{
	self->horizontal = value;
}

int __stdcall CefBoxLayoutSettings_Get_horizontal(cef_box_layout_settings_t *self)
{
	return self->horizontal;
}

void __stdcall CefBoxLayoutSettings_Set_inside_border_horizontal_spacing(cef_box_layout_settings_t *self, int value)
{
	self->inside_border_horizontal_spacing = value;
}

int __stdcall CefBoxLayoutSettings_Get_inside_border_horizontal_spacing(cef_box_layout_settings_t *self)
{
	return self->inside_border_horizontal_spacing;
}

void __stdcall CefBoxLayoutSettings_Set_inside_border_vertical_spacing(cef_box_layout_settings_t *self, int value)
{
	self->inside_border_vertical_spacing = value;
}

int __stdcall CefBoxLayoutSettings_Get_inside_border_vertical_spacing(cef_box_layout_settings_t *self)
{
	return self->inside_border_vertical_spacing;
}

void __stdcall CefBoxLayoutSettings_Set_between_child_spacing(cef_box_layout_settings_t *self, int value)
{
	self->between_child_spacing = value;
}

int __stdcall CefBoxLayoutSettings_Get_between_child_spacing(cef_box_layout_settings_t *self)
{
	return self->between_child_spacing;
}

void __stdcall CefBoxLayoutSettings_Set_minimum_cross_axis_size(cef_box_layout_settings_t *self, int value)
{
	self->minimum_cross_axis_size = value;
}

int __stdcall CefBoxLayoutSettings_Get_minimum_cross_axis_size(cef_box_layout_settings_t *self)
{
	return self->minimum_cross_axis_size;
}

void __stdcall CefBoxLayoutSettings_Set_default_flex(cef_box_layout_settings_t *self, int value)
{
	self->default_flex = value;
}

int __stdcall CefBoxLayoutSettings_Get_default_flex(cef_box_layout_settings_t *self)
{
	return self->default_flex;
}

void __stdcall CefBoxLayoutSettings_Set_main_axis_alignment(cef_box_layout_settings_t *self, int value)
{
	self->main_axis_alignment = value;
}

int __stdcall CefBoxLayoutSettings_Get_main_axis_alignment(cef_box_layout_settings_t *self)
{
	return self->main_axis_alignment;
}

void __stdcall CefBoxLayoutSettings_Set_cross_axis_alignment(cef_box_layout_settings_t *self, int value)
{
	self->cross_axis_alignment = value;
}

int __stdcall CefBoxLayoutSettings_Get_cross_axis_alignment(cef_box_layout_settings_t *self)
{
	return self->cross_axis_alignment;
}

void __stdcall CefBoxLayoutSettings_Set_inside_border_insets(cef_box_layout_settings_t *self, cef_insets_t *value)
{
	self->inside_border_insets = *value;
}

cef_insets_t* __stdcall CefBoxLayoutSettings_Get_inside_border_insets(cef_box_layout_settings_t *self)
{
	return &self->inside_border_insets;
}

/* CefCompositionUnderline
--------------------------------------------------*/

void __stdcall CefCompositionUnderline_Set_range(cef_composition_underline_t *self, cef_range_t *value)
{
	self->range = *value;
}

cef_range_t * __stdcall CefCompositionUnderline_Get_range(cef_composition_underline_t *self)
{
	return &self->range;
}

void __stdcall CefCompositionUnderline_Set_color(cef_composition_underline_t *self, int value)
{
	self->color = value;
}

int __stdcall CefCompositionUnderline_Get_color(cef_composition_underline_t *self)
{
	return self->color;
}

void __stdcall CefCompositionUnderline_Set_background_color(cef_composition_underline_t *self, int value)
{
	self->background_color = value;
}

int __stdcall CefCompositionUnderline_Get_background_color(cef_composition_underline_t *self)
{
	return self->background_color;
}

void __stdcall CefCompositionUnderline_Set_thick(cef_composition_underline_t *self, int value)
{
	self->thick = value;
}

int __stdcall CefCompositionUnderline_Get_thick(cef_composition_underline_t *self)
{
	return self->thick;
}
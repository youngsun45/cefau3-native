#include "../cefau3.h"

#include "include/capi/cef_base_capi.h"

int __stdcall CefParseUrl(const wchar_t* url,
	struct _cef_urlparts_t* parts)
{
	return cef_parse_url(cefstring_pwcs(url), parts);
}

int _stdcall CefCreateUrl(const struct _cef_urlparts_t* parts,
	wchar_t* url)
{
	return cef_create_url(parts, cefstring_pwcs(url));
}

CEF_EXPORT cef_string_userfree_t
cef_format_url_for_security_display(const cef_string_t* origin_url);

///
// Returns the mime type for the specified file extension or an NULL string if
// unknown.
///
// The resulting string must be freed by calling cef_string_userfree_free().
CEF_EXPORT cef_string_userfree_t
cef_get_mime_type(const cef_string_t* extension);

///
// Get the extensions associated with the given mime type. This should be passed
// in lower case. There could be multiple extensions for a given mime type, like
// "html,htm" for "text/html", or "txt,text,html,..." for "text/*". Any existing
// elements in the provided vector will not be erased.
///
CEF_EXPORT void cef_get_extensions_for_mime_type(const cef_string_t* mime_type,
	cef_string_list_t extensions);

///
// Encodes |data| as a base64 string.
///
// The resulting string must be freed by calling cef_string_userfree_free().
CEF_EXPORT cef_string_userfree_t cef_base64encode(const void* data,
	u16 data_size);

///
// Decodes the base64 encoded string |data|. The returned value will be NULL if
// the decoding fails.
///
CEF_EXPORT struct _cef_binary_value_t* cef_base64decode(
	const cef_string_t* data);

///
// Escapes characters in |text| which are unsuitable for use as a query
// parameter value. Everything except alphanumerics and -_.!~*'() will be
// converted to "%XX". If |use_plus| is true (1) spaces will change to "+". The
// result is basically the same as encodeURIComponent in Javacript.
///
// The resulting string must be freed by calling cef_string_userfree_free().
CEF_EXPORT cef_string_userfree_t cef_uriencode(const cef_string_t* text,
	int use_plus);

///
// Unescapes |text| and returns the result. Unescaping consists of looking for
// the exact pattern "%XX" where each X is a hex digit and converting to the
// character with the numerical value of those digits (e.g. "i%20=%203%3b"
// unescapes to "i = 3;"). If |convert_to_utf8| is true (1) this function will
// attempt to interpret the initial decoded result as UTF-8. If the result is
// convertable into UTF-8 it will be returned as converted. Otherwise the
// initial decoded result will be returned.  The |unescape_rule| parameter
// supports further customization the decoding process.
///
// The resulting string must be freed by calling cef_string_userfree_free().
CEF_EXPORT cef_string_userfree_t
cef_uridecode(const cef_string_t* text,
	int convert_to_utf8,
	cef_uri_unescape_rule_t unescape_rule);

///
// Parses the specified |json_string| and returns a dictionary or list
// representation. If JSON parsing fails this function returns NULL.
///
CEF_EXPORT struct _cef_value_t* cef_parse_json(
	const cef_string_t* json_string,
	cef_json_parser_options_t options);

///
// Parses the specified |json_string| and returns a dictionary or list
// representation. If JSON parsing fails this function returns NULL and
// populates |error_code_out| and |error_msg_out| with an error code and a
// formatted error message respectively.
///
CEF_EXPORT struct _cef_value_t* cef_parse_jsonand_return_error(
	const cef_string_t* json_string,
	cef_json_parser_options_t options,
	cef_json_parser_error_t* error_code_out,
	cef_string_t* error_msg_out);

///
// Generates a JSON string from the specified root |node| which should be a
// dictionary or list value. Returns an NULL string on failure. This function
// requires exclusive access to |node| including any underlying data.
///
// The resulting string must be freed by calling cef_string_userfree_free().
CEF_EXPORT cef_string_userfree_t
cef_write_json(struct _cef_value_t* node, cef_json_writer_options_t options);
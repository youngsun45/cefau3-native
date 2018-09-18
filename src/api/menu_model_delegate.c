#include "../cefau3.h"

#include "include/capi/cef_menu_model_delegate_capi.h"

/* CefMenuModelDelegate
--------------------------------------------------*/

void __stdcall CefMenuDelegate_ExecuteCommand(struct _cef_menu_model_delegate_t* self,
	struct _cef_menu_model_t* menu_model,
	int command_id,
	cef_event_flags_t event_flags)
{
	self->execute_command(self, menu_model, command_id, event_flags);
}

void __stdcall CefMenuDelegate_MouseOutsideMenu(
	struct _cef_menu_model_delegate_t* self,
	struct _cef_menu_model_t* menu_model,
	const cef_point_t* screen_point)
{
	self->mouse_outside_menu(self, menu_model, screen_point);
}

void __stdcall CefMenuDelegate_UnhandledOpenSubmenu(
	struct _cef_menu_model_delegate_t* self,
	struct _cef_menu_model_t* menu_model,
	int is_rtl)
{
	self->unhandled_open_submenu(self, menu_model, is_rtl);
}

void __stdcall CefMenuDelegate_UnhandledCloseSubmenu(
	struct _cef_menu_model_delegate_t* self,
	struct _cef_menu_model_t* menu_model,
	int is_rtl)
{
	self->unhandled_close_submenu(self, menu_model, is_rtl);
}

void __stdcall CefMenuDelegate_MenuWillShow(struct _cef_menu_model_delegate_t* self,
	struct _cef_menu_model_t* menu_model)
{
	self->menu_will_show(self, menu_model);
}

void __stdcall CefMenuDelegate_MenuClosed(struct _cef_menu_model_delegate_t* self,
	struct _cef_menu_model_t* menu_model)
{
	self->menu_closed(self, menu_model);
}

int __stdcall CefMenuDelegate_FormatLabel(struct _cef_menu_model_delegate_t* self,
	struct _cef_menu_model_t* menu_model,
	wchar_t* label)
{
	self->format_label(self, menu_model, cefstring_pwcs(label));
}
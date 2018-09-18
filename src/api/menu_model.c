#include "../cefau3.h"

#include "include/capi/cef_menu_model_capi.h"

/* CefMenuModel
--------------------------------------------------*/

int __stdcall CefMenuModel_IsSubMenu(struct _cef_menu_model_t* self)
{
	return self->is_sub_menu(self);
}

int __stdcall CefMenuModel_Clear(struct _cef_menu_model_t* self)
{
	return self->clear(self);
}

int __stdcall CefMenuModel_GetCount(struct _cef_menu_model_t* self)
{
	return self->get_count(self);
}

int __stdcall CefMenuModel_AddSeparator(struct _cef_menu_model_t* self)
{
	return self->add_separator(self);
}

int __stdcall CefMenuModel_AddItem(struct _cef_menu_model_t* self,
	int command_id,
	const wchar_t* label)
{
	return self->add_item(self, command_id, cefstring_pwcs(label));
}

int __stdcall CefMenuModel_AddCheckItem(struct _cef_menu_model_t* self,
	int command_id,
	const wchar_t* label)
{
	return self->add_check_item(self, command_id, cefstring_pwcs(label));
}

int __stdcall CefMenuModel_AddRadioItem(struct _cef_menu_model_t* self,
	int command_id,
	const wchar_t* label,
	int group_id)
{
	return self->add_radio_item(self, command_id, cefstring_pwcs(label), group_id);
}

cef_menu_model_t* __stdcall CefMenuModel_AddSubMenu(
	struct _cef_menu_model_t* self,
	int command_id,
	const wchar_t* label)
{
	return self->add_sub_menu(self, command_id, cefstring_pwcs(label));
}

int __stdcall CefMenuModel_InsertSeparatorAt(struct _cef_menu_model_t* self,
	int index)
{
	return self->insert_separator_at(self, index);
}

int __stdcall CefMenuModel_InsertItemAt(struct _cef_menu_model_t* self,
	int index,
	int command_id,
	const wchar_t* label)
{
	return self->insert_item_at(self, index, command_id, cefstring_pwcs(label));
}

int __stdcall CefMenuModel_InsertCheckItemAt(struct _cef_menu_model_t* self,
	int index,
	int command_id,
	const wchar_t* label)
{
	return self->insert_check_item_at(self, index, command_id, cefstring_pwcs(label));
}

int __stdcall CefMenuModel_InsertRadioItemAt(struct _cef_menu_model_t* self,
	int index,
	int command_id,
	const wchar_t* label,
	int group_id)
{
	return self->insert_radio_item_at(self, index, command_id, cefstring_pwcs(label), group_id);
}

cef_menu_model_t* __stdcall CefMenuModel_InsertSubMenuAt(
	struct _cef_menu_model_t* self,
	int index,
	int command_id,
	const wchar_t* label)
{
	return self->insert_sub_menu_at(self, index, command_id, cefstring_pwcs(label));
}

int __stdcall CefMenuModel_Remove(struct _cef_menu_model_t* self, int command_id)
{
	return self->remove(self, command_id);
}

int __stdcall CefMenuModel_RemoveAt(struct _cef_menu_model_t* self, int index)
{
	return self->remove_at(self, index);
}

int __stdcall CefMenuModel_GetIndexOf(struct _cef_menu_model_t* self,
	int command_id)
{
	return self->get_index_of(self, command_id);
}

int __stdcall CefMenuModel_GetCommandIdAt(struct _cef_menu_model_t* self,
	int index)
{
	return self->get_command_id_at(self, index);
}

int __stdcall CefMenuModel_SetCommandIdAt(struct _cef_menu_model_t* self,
	int index,
	int command_id)
{
	return self->set_command_id_at(self, index, command_id);
}

cef_string_userfree_t __stdcall CefMenuModel_GetLabel(struct _cef_menu_model_t* self,
	int command_id)
{
	return self->get_label(self, command_id);
}

cef_string_userfree_t __stdcall CefMenuModel_GetLabelAt(struct _cef_menu_model_t* self, int index)
{
	return self->get_label_at(self, index);
}

int __stdcall CefMenuModel_SetLabel(struct _cef_menu_model_t* self,
	int command_id,
	const wchar_t* label)
{
	return self->set_label(self, command_id, cefstring_pwcs(label));
}

int __stdcall CefMenuModel_SetLabelAt(struct _cef_menu_model_t* self,
	int index,
	const wchar_t* label)
{
	return self->set_label_at(self, index, cefstring_pwcs(label));
}

cef_menu_item_type_t __stdcall CefMenuModel_GetType(struct _cef_menu_model_t* self,
	int command_id)
{
	return self->get_type(self, command_id);
}

cef_menu_item_type_t __stdcall CefMenuModel_GetTypeAt(struct _cef_menu_model_t* self, int index)
{
	return self->get_type_at(self, index);
}

int __stdcall CefMenuModel_GetGroupId(struct _cef_menu_model_t* self,
	int command_id)
{
	return self->get_group_id(self, command_id);
}

int __stdcall CefMenuModel_GetGroupIdAt(struct _cef_menu_model_t* self, int index)
{
	return self->get_group_id_at(self, index);
}

int __stdcall CefMenuModel_SetGroupId(struct _cef_menu_model_t* self,
	int command_id,
	int group_id)
{
	return self->set_group_id(self, command_id, group_id);
}

int __stdcall CefMenuModel_SetGroupIdAt(struct _cef_menu_model_t* self,
	int index,
	int group_id)
{
	return self->set_group_id_at(self, index, group_id);
}

cef_menu_model_t* __stdcall CefMenuModel_GetSubMenu(
	struct _cef_menu_model_t* self,
	int command_id)
{
	return self->get_sub_menu(self, command_id);
}

cef_menu_model_t* __stdcall CefMenuModel_GetSubMenuAt(struct _cef_menu_model_t* self, int index)
{
	return self->get_sub_menu_at(self, index);
}

int __stdcall CefMenuModel_IsVisible(struct _cef_menu_model_t* self, int command_id)
{
	return self->is_visible(self, command_id);
}

int __stdcall CefMenuModel_IsVisibleAt(struct _cef_menu_model_t* self, int index)
{
	return self->is_visible_at(self, index);
}

int __stdcall CefMenuModel_SetVisible(struct _cef_menu_model_t* self,
	int command_id,
	int visible)
{
	return self->set_visible(self, command_id, visible);
}

int __stdcall CefMenuModel_SetVisibleAt(struct _cef_menu_model_t* self,
	int index,
	int visible)
{
	return self->set_visible_at(self, index, visible);
}

int __stdcall CefMenuModel_IsEnabled(struct _cef_menu_model_t* self, int command_id)
{
	return self->is_enabled(self, command_id);
}

int __stdcall CefMenuModel_IsEnabledAt(struct _cef_menu_model_t* self, int index)
{
	return self->is_enabled_at(self, index);
}

int __stdcall CefMenuModel_SetEnabled(struct _cef_menu_model_t* self,
	int command_id,
	int enabled)
{
	return self->set_enabled(self, command_id, enabled);
}

int __stdcall CefMenuModel_SetEnabledAt(struct _cef_menu_model_t* self,
	int index,
	int enabled)
{
	return self->set_enabled_at(self, index, enabled);
}

int __stdcall CefMenuModel_IsChecked(struct _cef_menu_model_t* self, int command_id)
{
	return self->is_checked(self, command_id);
}

int __stdcall CefMenuModel_IsCheckedAt(struct _cef_menu_model_t* self, int index)
{
	return self->is_checked_at(self, index);
}

int __stdcall CefMenuModel_SetChecked(struct _cef_menu_model_t* self,
	int command_id,
	int checked)
{
	return self->set_checked(self, command_id, checked);
}

int __stdcall CefMenuModel_SetCheckedAt(struct _cef_menu_model_t* self,
	int index,
	int checked)
{
	return self->set_checked_at(self, index, checked);
}

int __stdcall CefMenuModel_HasAccelerator(struct _cef_menu_model_t* self,
	int command_id)
{
	return self->has_accelerator(self, command_id);
}

int __stdcall CefMenuModel_HasAcceleratorAt(struct _cef_menu_model_t* self,
	int index)
{
	return self->has_accelerator_at(self, index);
}

int __stdcall CefMenuModel_SetAccelerator(struct _cef_menu_model_t* self,
	int command_id,
	int key_code,
	int shift_pressed,
	int ctrl_pressed,
	int alt_pressed)
{
	return self->set_accelerator(self, command_id, key_code, shift_pressed, ctrl_pressed, alt_pressed);
}

int __stdcall CefMenuModel_SetAcceleratorAt(struct _cef_menu_model_t* self,
	int index,
	int key_code,
	int shift_pressed,
	int ctrl_pressed,
	int alt_pressed)
{
	return self->set_accelerator_at(self, index, key_code, shift_pressed, ctrl_pressed, alt_pressed);
}

int __stdcall CefMenuModel_RemoveAccelerator(struct _cef_menu_model_t* self,
	int command_id)
{
	return self->remove_accelerator(self, command_id);
}

int __stdcall CefMenuModel_RemoveAcceleratorAt(struct _cef_menu_model_t* self,
	int index)
{
	return self->remove_accelerator_at(self, index);
}

int __stdcall CefMenuModel_GetAccelerator(struct _cef_menu_model_t* self,
	int command_id,
	int* key_code,
	int* shift_pressed,
	int* ctrl_pressed,
	int* alt_pressed)
{
	return self->get_accelerator(self, command_id, key_code, shift_pressed, ctrl_pressed, alt_pressed);
}

int __stdcall CefMenuModel_GetAcceleratorAt(struct _cef_menu_model_t* self,
	int index,
	int* key_code,
	int* shift_pressed,
	int* ctrl_pressed,
	int* alt_pressed)
{
	return self->get_accelerator_at(self, index, key_code, shift_pressed, ctrl_pressed, alt_pressed);
}

int __stdcall CefMenuModel_Setcolor(struct _cef_menu_model_t* self,
	int command_id,
	cef_menu_color_type_t color_type,
	cef_color_t color)
{
	return self->set_color(self, command_id, color_type, color);
}

int __stdcall CefMenuModel_SetColorAt(struct _cef_menu_model_t* self,
	int index,
	cef_menu_color_type_t color_type,
	cef_color_t color)
{
	return self->set_color_at(self, index, color_type, color);
}

int __stdcall CefMenuModel_GetColor(struct _cef_menu_model_t* self,
	int command_id,
	cef_menu_color_type_t color_type,
	cef_color_t* color)
{
	return self->get_color(self, command_id, color_type, color);
}

int __stdcall CefMenuModel_GetColorAt(struct _cef_menu_model_t* self,
	int index,
	cef_menu_color_type_t color_type,
	cef_color_t* color)
{
	return self->get_color_at(self, index, color_type, color);
}

int __stdcall CefMenuModel_SetFontList(struct _cef_menu_model_t* self,
	int command_id,
	const wchar_t* font_list)
{
	return self->set_font_list(self, command_id, font_list);
}

int __stdcall CefMenuModel_SetFontListAt(struct _cef_menu_model_t* self,
	int index,
	const wchar_t* font_list)
{
	return self->set_font_list_at(self, index, font_list);
}

///////////////////////////////////////////////////

cef_menu_model_t* __stdcall CefMenuModel_Create(
	struct _cef_menu_model_delegate_t* delegate)
{
	return cef_menu_model_create(delegate);
}
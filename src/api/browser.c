#include "../cefau3.h"

struct _cef_browser_host_t* CEF_CALLBACK CefBrowser_GetHost(
	struct _cef_browser_t* self)
{
	self->get_host(self);
}

int CEF_CALLBACK CefBrowser_CanGoBack(struct _cef_browser_t* self)
{
	return self->can_go_back(self);
}

void CEF_CALLBACK CefBrowser_GoBack(struct _cef_browser_t* self)
{
	self->go_back(self);
}

int CEF_CALLBACK CefBrowser_CanGoForward(struct _cef_browser_t* self)
{
	return self->can_go_forward(self);
}

void CEF_CALLBACK CefBrowser_GoForward(struct _cef_browser_t* self)
{
	self->go_forward(self);
}

int CEF_CALLBACK CefBrowser_IsLoading(struct _cef_browser_t* self)
{
	return self->is_loading(self);
}

void CEF_CALLBACK CefBrowser_Reload(struct _cef_browser_t* self)
{
	self->reload(self);
}

void CEF_CALLBACK CefBrowser_ReloadIgnoreCache(struct _cef_browser_t* self)
{
	self->reload_ignore_cache(self);
}

void CEF_CALLBACK CefBrowser_StopLoad(struct _cef_browser_t* self)
{
	self->stop_load(self);
}

int CEF_CALLBACK CefBrowser_GetIdentifier(struct _cef_browser_t* self)
{
	return self->get_identifier(self);
}

int CEF_CALLBACK CefBrowser_IsSame(struct _cef_browser_t* self,
	struct _cef_browser_t* that)
{
	return self->is_same(self, that);
}

int CEF_CALLBACK CefBrowser_IsPopup(struct _cef_browser_t* self)
{
	return self->is_popup(self);
}

int CEF_CALLBACK CefBrowser_HasDocument(struct _cef_browser_t* self)
{
	return self->has_document(self);
}

struct _cef_frame_t* CEF_CALLBACK CefBrowser_GetMainFrame(
	struct _cef_browser_t* self)
{
	return self->get_main_frame(self);
}

struct _cef_frame_t* CEF_CALLBACK CefBrowser_GetFocusedFrame(
	struct _cef_browser_t* self)
{
	return self->get_focused_frame(self);
}

struct _cef_frame_t* CEF_CALLBACK CefBrowser_GetFrameByident(
	struct _cef_browser_t* self,
	int64 identifier)
{
	return self->get_frame_byident(self, identifier);
}

struct _cef_frame_t* CEF_CALLBACK CefBrowser_GetFrame(struct _cef_browser_t* self,
	wchar_t* name)
{
	return self->get_frame(self, cefstring_pwcs(name));
}

size_t CEF_CALLBACK CefBrowser_GetFrameCount(struct _cef_browser_t* self)
{
	return self->get_frame_count(self);
}

void CEF_CALLBACK CefBrowser_GetFrameIdentifiers(struct _cef_browser_t* self,
	size_t* identifiersCount,
	int64* identifiers)
{
	return self->get_frame_identifiers(self, identifiersCount, identifiers);
}

void CEF_CALLBACK CefBrowser_GetFrameNames(struct _cef_browser_t* self,
	cef_string_list_t names)
{
	return self->get_frame_names(self, names);
}

int CEF_CALLBACK CefBrowser_SendProcessMessage(
	struct _cef_browser_t* self,
	cef_process_id_t target_process,
	struct _cef_process_message_t* message)
{
	return self->send_process_message(
		self,
		target_process,
		message
	);
}

//////////////////////////////////////////////////

struct _cef_browser_t* CEF_CALLBACK CefBrowserHost_GetBrowser(
	struct _cef_browser_host_t* self)
{
	return self->get_browser(self);
}

void CEF_CALLBACK CefBrowserHost_CloseBrowser(struct _cef_browser_host_t* self,
	int force_close)
{
	self->close_browser(self, force_close);
}

int CEF_CALLBACK CefBrowserHost_TryCloseBrowser(struct _cef_browser_host_t* self)
{
	return self->try_close_browser(self);
}

void CEF_CALLBACK CefBrowserHost_SetFocus(struct _cef_browser_host_t* self, int focus)
{
	self->set_focus(self, focus);
}

cef_window_handle_t CEF_CALLBACK CefBrowserHost_GetWindowHandle(
	struct _cef_browser_host_t* self)
{
	return self->get_window_handle(self);
}

cef_window_handle_t CEF_CALLBACK CefBrowserHost_GetOpenerWindowHandle(
	struct _cef_browser_host_t* self)
{
	return self->get_opener_window_handle(self);
}

int CEF_CALLBACK CefBrowserHost_HasView(struct _cef_browser_host_t* self)
{
	return self->has_view(self);
}

struct _cef_client_t* CEF_CALLBACK CefBrowserHost_GetClient(
	struct _cef_browser_host_t* self)
{
	return self->get_client(self);
}

struct _cef_request_context_t* CEF_CALLBACK CefBrowserHost_GetRequestContext(
	struct _cef_browser_host_t* self)
{
	return self->get_request_context(self);
}

double CEF_CALLBACK CefBrowserHost_GetZoomLevel(struct _cef_browser_host_t* self)
{
	return self->get_zoom_level(self);
}

void CEF_CALLBACK CefBrowserHost_SetZoomLevel(struct _cef_browser_host_t* self,
	double zoomLevel)
{
	self->set_zoom_level(self, zoomLevel);
}

void CEF_CALLBACK CefBrowserHost_RunFileDialog(
	struct _cef_browser_host_t* self,
	cef_file_dialog_mode_t mode,
	const wchar_t* title,
	const wchar_t* default_file_path,
	cef_string_list_t accept_filters,
	int selected_accept_filter,
	struct _cef_run_file_dialog_callback_t* callback)
{
	self->run_file_dialog(
		self,
		mode,
		cefstring_pwcs(title),
		cefstring_pwcs(default_file_path),
		accept_filters,
		selected_accept_filter,
		callback
	);
}

void CEF_CALLBACK CefBrowserHost_StartDownload(struct _cef_browser_host_t* self,
	const wchar_t* url)
{
	self->start_download(self, cefstring_pwcs(url));
}

void CEF_CALLBACK CefBrowserHost_DownloadImage(
	struct _cef_browser_host_t* self,
	const wchar_t* image_url,
	int is_favicon,
	uint32 max_image_size,
	int bypass_cache,
	struct _cef_download_image_callback_t* callback)
{
	self->download_image(
		self,
		cefstring_pwcs(image_url),
		is_favicon,
		max_image_size,
		bypass_cache,
		callback
	);
}

void CEF_CALLBACK CefBrowserHost_Print(struct _cef_browser_host_t* self)
{
	self->print(self);
}

void CEF_CALLBACK CefBrowserHost_PrintToPDF(
	struct _cef_browser_host_t* self,
	const wchar_t* path,
	const struct _cef_pdf_print_settings_t* settings,
	struct _cef_pdf_print_callback_t* callback)
{
	self->print_to_pdf(
		self,
		cefstring_pwcs(path),
		settings,
		callback
	);
}

void CEF_CALLBACK CefBrowserHost_Find(struct _cef_browser_host_t* self,
	int identifier,
	const wchar_t* searchText,
	int forward,
	int matchCase,
	int findNext)
{
	self->find(
		self,
		identifier,
		cefstring_pwcs(searchText),
		forward,
		matchCase,
		findNext
	);
}

void CEF_CALLBACK CefBrowserHost_StopFinding(struct _cef_browser_host_t* self,
	int clearSelection)
{
	self->stop_finding(self, clearSelection);
}

void CEF_CALLBACK CefBrowserHost_ShowDevTools(
	struct _cef_browser_host_t* self,
	const struct _cef_window_info_t* windowInfo,
	struct _cef_client_t* client,
	const struct _cef_browser_settings_t* settings,
	const cef_point_t* inspect_element_at)
{
	self->show_dev_tools(
		self,
		windowInfo,
		client,
		settings,
		inspect_element_at
	);
}

void CEF_CALLBACK CefBrowserHost_CloseDevTools(struct _cef_browser_host_t* self)
{
	self->close_dev_tools(self);
}


int CEF_CALLBACK CefBrowserHost_HasDevTools(struct _cef_browser_host_t* self)
{
	return self->has_dev_tools(self);
}

void CEF_CALLBACK CefBrowserHost_GetNavigationEntries(
	struct _cef_browser_host_t* self,
	struct _cef_navigation_entry_visitor_t* visitor,
	int current_only)
{
	self->get_navigation_entries(
		self,
		visitor,
		current_only
	);
}

void CEF_CALLBACK CefBrowserHost_SetMouseCursorChangeDisabled(
	struct _cef_browser_host_t* self,
	int disabled)
{
	self->set_mouse_cursor_change_disabled(
		self,
		disabled
	);
}

int CEF_CALLBACK CefBrowserHost_IsMouseCursorChangeDisabled(
	struct _cef_browser_host_t* self)
{
	return self->is_mouse_cursor_change_disabled(self);
}

void CEF_CALLBACK CefBrowserHost_ReplaceMisspelling(struct _cef_browser_host_t* self,
	const wchar_t* word)
{
	self->replace_misspelling(
		self,
		cefstring_pwcs(word)
	);
}

void CEF_CALLBACK CefBrowserHost_AddWordToDictionary(struct _cef_browser_host_t* self,
	const wchar_t* word)
{
	self->add_word_to_dictionary(
		self,
		cefstring_pwcs(word)
	);
}

int CEF_CALLBACK CefBrowserHost_IsWindowRenderingDisabled(
	struct _cef_browser_host_t* self)
{
	return self->is_window_rendering_disabled(self);
}

void CEF_CALLBACK CefBrowserHost_WasResized(struct _cef_browser_host_t* self)
{
	self->was_resized(self);
}

void CEF_CALLBACK CefBrowserHost_WasHidden(struct _cef_browser_host_t* self, int hidden)
{
	self->was_hidden(self, hidden);
}

void CEF_CALLBACK CefBrowserHost_NotifyScreenInfoChanged(
	struct _cef_browser_host_t* self)
{
	self->notify_move_or_resize_started(self);
}

void CEF_CALLBACK CefBrowserHost_Invalidate(struct _cef_browser_host_t* self,
	cef_paint_element_type_t type)
{
	self->invalidate(
		self,
		type
	);
}

void CEF_CALLBACK CefBrowserHost_SendKeyEvent(struct _cef_browser_host_t* self,
	const struct _cef_key_event_t* event)
{
	self->send_key_event(
		self,
		event
	);
}

void CEF_CALLBACK CefBrowserHost_SendMouseClickEvent(
	struct _cef_browser_host_t* self,
	const struct _cef_mouse_event_t* event,
	cef_mouse_button_type_t type,
	int mouseUp,
	int clickCount)
{
	self->send_mouse_click_event(
		self,
		event,
		type,
		mouseUp,
		clickCount
	);
}

void CEF_CALLBACK CefBrowserHost_SendMouseMoveEvent(
	struct _cef_browser_host_t* self,
	const struct _cef_mouse_event_t* event,
	int mouseLeave)
{
	self->send_mouse_move_event(
		self,
		event,
		mouseLeave
	);
}

void CEF_CALLBACK CefBrowserHost_SendMouseWheelEvent(
	struct _cef_browser_host_t* self,
	const struct _cef_mouse_event_t* event,
	int deltaX,
	int deltaY)
{
	self->send_mouse_wheel_event(
		self,
		event,
		deltaX,
		deltaY
	);
}

void CEF_CALLBACK CefBrowserHost_SendFocusEvent(struct _cef_browser_host_t* self,
	int setFocus)
{
	self->send_focus_event(
		self,
		setFocus
	);
}

void CEF_CALLBACK CefBrowserHost_SendCaptureLostEvent(struct _cef_browser_host_t* self)
{
	self->send_capture_lost_event(self);
}

void CEF_CALLBACK CefBrowserHost_NotifyMoveOrResizeStarted(
	struct _cef_browser_host_t* self)
{
	self->notify_move_or_resize_started(self);
}

int CEF_CALLBACK CefBrowserHost_GetWindowlessFrameRate(
	struct _cef_browser_host_t* self)
{
	return self->get_windowless_frame_rate(self);
}

void CEF_CALLBACK CefBrowserHost_SetWindowlessFrameRate(
	struct _cef_browser_host_t* self,
	int frame_rate)
{
	self->set_windowless_frame_rate(
		self,
		frame_rate
	);
}

void CEF_CALLBACK CefBrowserHost_ImeSetComposition(
	struct _cef_browser_host_t* self,
	const wchar_t* text,
	size_t underlinesCount,
	cef_composition_underline_t const* underlines,
	const cef_range_t* replacement_range,
	const cef_range_t* selection_range)
{
	self->ime_set_composition(
		self,
		cefstring_pwcs(text),
		underlinesCount,
		underlines,
		replacement_range,
		selection_range
	);
}

void CEF_CALLBACK CefBrowserHost_ImeCommitText(struct _cef_browser_host_t* self,
	const wchar_t* text,
	const cef_range_t* replacement_range,
	int relative_cursor_pos)
{
	self->ime_commit_text(
		self,
		cefstring_pwcs(text),
		replacement_range,
		relative_cursor_pos
	);
}

void CEF_CALLBACK CefBrowserHost_ImeFinishComposingText(
	struct _cef_browser_host_t* self,
	int keep_selection)
{
	self->ime_finish_composing_text(
		self,
		keep_selection
	);
}

void CEF_CALLBACK CefBrowserHost_ImeCancelComposition(struct _cef_browser_host_t* self)
{
	self->ime_cancel_composition(self);
}

void CEF_CALLBACK CefBrowserHost_DragTargetDragEnter(
	struct _cef_browser_host_t* self,
	struct _cef_drag_data_t* drag_data,
	const struct _cef_mouse_event_t* event,
	cef_drag_operations_mask_t allowed_ops)
{
	self->drag_target_drag_enter(
		self,
		drag_data,
		event,
		allowed_ops
	);
}

void CEF_CALLBACK CefBrowserHost_DragTargetDragOver(
	struct _cef_browser_host_t* self,
	const struct _cef_mouse_event_t* event,
	cef_drag_operations_mask_t allowed_ops)
{
	self->drag_target_drag_over(
		self,
		event,
		allowed_ops
	);
}

void CEF_CALLBACK CefBrowserHost_DragTargetDragLeave(struct _cef_browser_host_t* self)
{
	self->drag_target_drag_leave(self);
}

void CEF_CALLBACK CefBrowserHost_DragTargetDrop(struct _cef_browser_host_t* self,
	const struct _cef_mouse_event_t* event)
{
	self->drag_target_drop(
		self,
		event
	);
}

void CEF_CALLBACK CefBrowserHost_DragSourceEndedAt(struct _cef_browser_host_t* self,
	int x,
	int y,
	cef_drag_operations_mask_t op)
{
	self->drag_source_ended_at(
		self,
		x,
		y,
		op
	);
}

void CEF_CALLBACK CefBrowserHost_DragSourceSystemDragEnded(
	struct _cef_browser_host_t* self)
{
	self->drag_source_system_drag_ended(self);
}

struct _cef_navigation_entry_t* CEF_CALLBACK CefBrowserHost_GetVisibleNavigationEntry(
	struct _cef_browser_host_t* self)
{
	return self->get_visible_navigation_entry(self);
}

void CEF_CALLBACK CefBrowserHost_SetAccessibilityState(struct _cef_browser_host_t* self,
	cef_state_t accessibility_state)
{
	self->set_accessibility_state(self, accessibility_state);
}




int __stdcall CefBrowserHost_CreateBrowser(
	const cef_window_info_t* windowInfo,
	struct _cef_client_t* client,
	wchar_t *cs_url,
	const struct _cef_browser_settings_t* settings,
	struct _cef_request_context_t* request_context)
{
	;// cef_string_from_wide(cs_url, wcslen(cs_url), &url);

	return cef_browser_host_create_browser(
		windowInfo,
		client,
		cefstring_pwcs(cs_url),
		settings,
		request_context
	);
}

cef_browser_t * __stdcall CefBrowserHost_CreateBrowserSync(
	const cef_window_info_t* windowInfo,
	struct _cef_client_t* client,
	wchar_t *cs_url,
	const struct _cef_browser_settings_t* settings,
	struct _cef_request_context_t* request_context)
{
	return cef_browser_host_create_browser_sync(
		windowInfo,
		client,
		cefstring_pwcs(cs_url),
		settings,
		request_context
	);
}
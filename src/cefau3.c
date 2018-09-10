#include "cefau3.h"

#define QUITAPPMESSAGE 0x696969
HWND __main_window_message = NULL;
MSG __main_message = {0};
const wchar_t *__window_message_class = L"Cef.Message";

typedef void (__stdcall * au3_func)();

//                            
//  _____     ___         ___ 
// |     |___|  _|___ _ _|_  |
// |   --| -_|  _| .'| | |_  |
// |_____|___|_| |__,|___|___|

//  Chromium Embedded Framework for AutoIt 3

void __stdcall Cef_Release(void *p)
{
	if (p) {
		free(p);
		p = NULL;
	}
}

const char * __stdcall Cef_GetVersion()
{
	return CEF_VERSION;
}

void __stdcall Cef_GetChromiumVersion(struct { int v[3]; } *ref)
{
	ref->v[0] = CHROME_VERSION_MAJOR;
	ref->v[1] = CHROME_VERSION_MINOR;
	ref->v[2] = CHROME_VERSION_BUILD;
}

void __stdcall Cef_WindowMessage()
{
	GetMessageW(&__main_message, NULL, 0, 0);
	DispatchMessageW(&__main_message);
	TranslateMessage(&__main_message);
}

void __stdcall Cef_PostQuitMessage(int code)
{
	SendMessageW(__main_window_message, WM_COMMAND, QUITAPPMESSAGE, code);
}

LRESULT CALLBACK __cef_window_message_proc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp)
{
	switch (msg) {
		case WM_COMMAND:
			if (wp == QUITAPPMESSAGE) PostQuitMessage(lp);
			break;

		default: break;
	}
	return DefWindowProcW(hwnd, msg, wp, lp);
}

HWND __stdcall Cef_CreateWindowMessage()
{
	if (__main_window_message == NULL) {
		WNDCLASSEXW wcex = { 0 };
		wcex.cbSize = sizeof(WNDCLASSEXW);
		wcex.lpfnWndProc = __cef_window_message_proc;
		wcex.hInstance = NULL;
		wcex.lpszClassName = __window_message_class;
		RegisterClassExW(&wcex);
		__main_window_message = CreateWindowExW(
			0,
			__window_message_class,
			0, 
			0, 
			0, 
			0, 
			0, 
			0, 
			HWND_MESSAGE, 
			0, 
			NULL, 
			0
		);
	}
	return __main_window_message;
}
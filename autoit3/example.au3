#NoTrayIcon
#include <ButtonConstants.au3>
#include <EditConstants.au3>
#include <GUIConstantsEx.au3>
#include <WindowsConstants.au3>
#include './cefau3/cefau3.au3'

; start Cefau3
Cef_Start(@ScriptDir & (@AutoItX64 ? '\cef_x64' : '\cef'))

; enable high DPI, support for Windows 7 or later
CefEnableHighDPISupport()

; create app, main args
Global $app = CefApp_Create(), $args = CefMainArgs_Create()

; execute process
If (CefExecuteProcess($args, $app) >= 0) Then Exit

; if set [.single_process = 1] for CefSettings, do not insert code above
; //////////////////////////////////////////////////////////////////////

; must use GUIOnEventMode
Opt('GUIOnEventMode', 1)

; if use AutoIt v3 GUI, you must use GUIOnEventMode
Global $width = 1000, $height = 600
Global $zoom_level
Global $url = 'https://www.google.com/'

#Region ; Create GUI ==========================

Global $hGUI = GUICreate("Sample Browser", $width, $height, -1, -1, $WS_OVERLAPPEDWINDOW)
GUISetBkColor(0xffffff)

Global $input_url = GUICtrlCreateInput($url, 5, 5, $width - 55, 25)
GUICtrlSetFont(-1, 14)
GUICtrlSetResizing(-1, 544)
Global $btn_go = GUICtrlCreateButton("Go", $width - 45, 5, 40, 25)
GUICtrlSetFont(-1, 14)
GUICtrlSetResizing(-1, 544)
GUICtrlSetOnEvent(-1, '_Go')

Global $menu_file = GUICtrlCreateMenu('&File')
Global $item_goback= GUICtrlCreateMenuItem('Go Back' & @TAB & 'Alt Left arrow', $menu_file)
GUICtrlSetOnEvent(-1, '_GoBack')
Global $item_goforward = GUICtrlCreateMenuItem('Go Forward'  & @TAB & 'Alt Right arrow', $menu_file)
GUICtrlSetOnEvent(-1, '_GoForward')
Global $item_reload = GUICtrlCreateMenuItem('Reload'  & @TAB & 'F5', $menu_file)
GUICtrlSetOnEvent(-1, '_Reload')

GUICtrlCreateMenuItem('Show Dev Tools' & @TAB & 'F2', $menu_file)
GUICtrlSetOnEvent(-1, '_ShowDevTools')

GUICtrlCreateMenuItem('Zoom +'  & @TAB & 'Ctrl +', $menu_file)
GUICtrlSetOnEvent(-1, '_ZoomIn')
GUICtrlCreateMenuItem('Zoom -'  & @TAB & 'Ctrl -', $menu_file)
GUICtrlSetOnEvent(-1, '_ZoomOut')

Global $menu_about = GUICtrlCreateMenu('&Info')
Global $item_info = GUICtrlCreateMenuItem('About'  & @TAB & 'F1', $menu_about)
GUICtrlSetOnEvent(-1, '_About')

Local $accelerators[2][2] = [['{ENTER}', $btn_go], ['{f1}', $item_info]]
GUISetAccelerators($accelerators, $hGUI)

GUISetState(@SW_SHOW)

; set hotkey
HotKeySet('{F1}', '_About')
HotKeySet('{F2}', '_ShowDevTools')
HotKeySet('{F5}', '_Reload')
HotKeySet('!{LEFT}', '_GoBack')
HotKeySet('!{RIGHT}', '_GoForward')
HotKeySet('^{NUMPADADD}', '_ZoomIn')
HotKeySet('^{NUMPADSUB}', '_ZoomOut')

#EndRegion ; End GUI ==========================

Global $settings  = CefSettings_Create(), $bs = CefBrowserSettings_Create()
; create struct with [$tag_CefSettings] and fill it with [$settings] pointer
With Cef_Struct($tag_CefSettings, $settings)
	.log_severity = 99 ; disable log file
	.single_process = @Compiled ? 0 : 1 ; cannot run multiple process when running script
	.multi_threaded_message_loop = 1
EndWith

; initialize application
If (CefInitialize($args, $settings, $app) == 0) Then Exit

Global $info = CefWindowInfo_Create()
CefWindowInfo_Set_window_name($info, 'Hello World!')
With Cef_Struct($tag_CefWindowInfo, $info)
	.parent_window = $hGUI ; set browser window as child, null for popup
	.style 	= BitOR($WS_VISIBLE, $WS_CHILD) ; browser window style, like normal window
	.x 		= 0	; position
	.y 		= 35
	.width 	= $width
	.height = $height - 35
EndWith

Global $client = CefClient_Create() ; create client

; create handler for client
Global $lifespan = CefLifeSpanHandler_Create()
Global $display = CefDisplayHandler_Create()
Global $keyboard = CefKeyboardHandler_Create()
Global $render_process = CefRenderProcessHandler_Create()

Global $v8h = CefV8Handler_Create()

; add callback
CefApp_GetRenderProcessHandler($app, 'GetRenderProcessHandler')

CefRenderProcessHandler_OnWebKitInitialized($render_process, 'OnWebKitInitialized')
CefV8Handler_Execute($v8h, '_Execute')

CefClient_GetLifeSpanHandler($client, 'GetLifeSpanHandler')
CefLifeSpanHandler_OnAfterCreated($lifespan, 'OnAfterCreated')

CefClient_GetDisplayHandler($client, 'GetDisplayHandler')
CefDisplayHandler_OnAddressChange($display, 'OnAddressChange')
CefDisplayHandler_OnTitleChange($display, 'OnTitleChange')

CefClient_GetKeyboardHandler($client, 'GetKeyboardHandler')
CefKeyboardHandler_OnPreKeyEvent($keyboard, 'OnPreKeyEvent')

; create browser window
CefBrowserHost_CreateBrowser($info, $client, $url, $bs, Null)

Global $__browser, $browser_host, $browser_handle, $frame
GUIRegisterMsg(0x0005, 'OnResize')

GUISetOnEvent(-3, '_Exit')

; main loop ================================
While 1
	Cef_WindowMessage() ; must call this for window message
WEnd

#Region ; callback ==========================

Func OnResize()
	Local $rc = DllStructCreate($tag_RECT)
	_GetClientRect($hGUI, DllStructGetPtr($rc))
 	WinMove($browser_handle, '', 0, 35, $rc.right, $rc.bottom - 35)
EndFunc

Func GetLifeSpanHandler($client)
	Return $lifespan
EndFunc

Func GetDisplayHandler($client)
	Return $display
EndFunc

Func GetKeyboardHandler($client)
	Return $keyboard
EndFunc

Func GetRenderProcessHandler($client)
	Return $render_process
EndFunc

Func OnAfterCreated($lifespan, $browser)
	ConsoleWrite('-- on after created --' & @CRLF)
	If (Not $browser_host) Then ; when open devtools or popup window (from target: _blank), this function be called
		$__browser = $browser
		$browser_host = CefBrowser_GetHost($browser)
		$browser_handle = CefBrowserHost_GetWindowHandle($browser_host)
		$zoom_level = CefBrowserHost_GetZoomLevel($browser_host)
		$frame = CefBrowser_GetMainFrame($browser)
	EndIf
EndFunc

Func OnAddressChange($display, $browser, $frame, $url)
	GUICtrlSetData($input_url, CefString_Read($url))
EndFunc

Func OnTitleChange($display, $browser, $title)
	WinSetTitle($hGUI, '', CefString_Read($title))
EndFunc

Func OnPreKeyEvent($keyboard, $browser, $event, $os_event, $is_keyboard_shortcut)
	Local $t_event = Cef_Struct($tag_CefKeyEventType, $event)

	If ($t_event.type == 2) Then
		If $t_event.windows_key_code == 0xd then
			ConsoleWrite('Enter key released' & @CR)
		ElseIf $t_event.windows_key_code == 0x1b then
			ConsoleWrite('ESC key released' & @CR)
		EndIf
	EndIf

	Return 0
EndFunc

; extension
Func OnWebKitInitialized($RenderProcessHandler)
	Local $js = StringFormat( _
		"\n var app;" & _
		"if (!app) app = {};\n"& _
		"(function() {" & _
		"	app.MsgBox = function(title, text) {" & _ ; MsgBox, see at _Execute
		"		native function MsgBox();" & _
		"		return MsgBox(title, text);" & _
		"	};" & _
		"})();;\n" _
	)

	; register extension
	CefRegisterExtension('v8/app', $js, $v8h)
EndFunc

; handler for extension function called
;             |  self  |use CefString_Read|               |  count args   |                    |
Func _Execute($V8Handler, $CefString_name, $V8Value_object, $argumentsCount, $V8Value_arguments, $V8Value_retval, $CefString_exception)
	ConsoleWrite('-- executing extension --' & @CR)

	Local $name = CefString_Read($CefString_name)

	Switch $name
		Case 'MsgBox'
			Local $st_v8v = CefV8ValueArg_ToStruct($V8Value_arguments, $argumentsCount)
			Local $arg_1 = CefV8ValueArg_Get($st_v8v, 1)
			Local $arg_2 = CefV8ValueArg_Get($st_v8v, 2)

			If (CefV8Value_IsUndefined($arg_1) or CefV8Value_IsUndefined($arg_2)) then return 0

			MsgBox(0, CefV8Value_GetStringValue($arg_1), CefV8Value_GetStringValue($arg_2))

			CefV8Value_SetReturn($V8Value_retval, CefV8Value_CreateDouble(3.41))

			Return 1

		;Case ...

	EndSwitch

	Return 0

EndFunc

#EndRegion

#Region ; gui key/event ==========================

Func _Exit()
	; clean object/handler created by Cefxxx_Create() function
	Cef_Release($client)
	Cef_Release($app)
	Cef_Release($lifespan)
	Cef_Release($display)
	Cef_Release($keyboard)

	Cef_PostQuitMessage()
	Exit;
EndFunc

Func _Go()
	$url = GUICtrlRead($input_url)
;~ 	If ((Not StringInStr($url, 'http://')) And (Not StringInStr($url, 'https://'))) Then $url = 'http://' & $url
	CefFrame_LoadUrl($frame, $url)
EndFunc

Func _GoBack()
	CefBrowser_GoBack($__browser)
EndFunc

Func _GoForward()
	CefBrowser_GoForward($__browser)
EndFunc

Func _ZoomIn()
	$zoom_level += 0.1
	CefBrowserHost_SetZoomLevel($browser_host, $zoom_level)
EndFunc

Func _ZoomOut()
	$zoom_level -= 0.1
	CefBrowserHost_SetZoomLevel($browser_host, $zoom_level)
EndFunc

Func _Reload()
	CefBrowser_Reload($__browser)
EndFunc

Func _ShowDevTools()
	With Cef_Struct($tag_CefWindowInfo, $info)
		.style 	= 0x10CF0000
		.x 		= 0x80000000
		.y 		= 0x80000000
		.width 	= 0x80000000
		.height = 0x80000000
	EndWith

	Local $point = _WinAPI_GetMousePos(true, $hGUI)

	CefWindowInfo_Set_window_name($info, 'Dev Tools')
	CefBrowserHost_ShowDevTools($browser_host, $info, $client, $bs, DllStructGetPtr($point))
EndFunc

Func _About()
	MsgBox(0, 'About', "Sample Browser - Simple example of Cefau3 project" & @CR & @CR & _
		"CEF: " & Cef_GetVersion() & @CR & _
		"Chromium: " & Cef_GetChromiumVersion() & @CR & _
		@TAB & @TAB &  @TAB & @TAB & "@cre wuuyi123" _
	)
EndFunc

#EndRegion
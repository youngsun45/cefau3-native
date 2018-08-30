tcc -shared -w ^
-D__GNUC__ ^
-I./cef ^
-o cefau3.dll ^
src/cefau3.c ^
src/base/base.c ^
src/base/app.c  ^
src/base/client.c  ^
src/api/browser.c  ^
src/api/display_handler.c  ^
src/api/frame.c  ^
src/api/keyboard_handler.c  ^
src/api/life_span_handler.c  ^
src/api/render_process_handler.c  ^
src/api/types.c  ^
src/api/types_win.c  ^
src/api/v8.c  ^
src/types/ptr.c ^
src/types/string.c ^
libcef.def
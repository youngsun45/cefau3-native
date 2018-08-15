#include <array.au3>
#include <file.au3>

$cc = 'tcc'
$src = './src/'
$cef = './cef/'

$list = _FileListToArray($src)
$s = ''

for $i = 1 to $list[0]

	if not stringinstr($list[0], '.') then

		local $ls = _FileListToArray($src & $list[$i])
		for $j = 1 to $ls[0]
			RunWait($cc & ' -shared -D__GNUC__ -I -c ' & $cef & ' -o ' & $ls[$j] & '.o ' & $src & $list[$i] & '/' & $ls[$j], @ScriptDir,  @SW_HIDE)
			$s &= $ls[$j] & '.o '
		next

	endif

next

RunWait($cc & ' -shared -D__GNUC__ -I' & $cef & ' -o cefau3.dll ' & $src & 'cefau3.c ' & $s & $cef & 'libcef.def', @ScriptDir,  @SW_HIDE)
#!/bin/bash

set -e

cc="cc -Wall -Wextra"

cc_w32="i686-w64-mingw32-gcc\
 -Wall -Wextra -Os -fPIE\
 -s -mwindows -nostdlib -Wl,--dynamicbase,--export-all-symbols"

cc_w64="x86_64-w64-mingw32-gcc\
 -Wall -Wextra -Os -fPIE\
 -s -mwindows -nostdlib -Wl,--dynamicbase,--export-all-symbols"

src="bookwin.c crc.c crctab.c"
libs="-lkernel32 -luser32"

$cc -o gen-crctab gen-crctab.c; ./gen-crctab >crctab.c
$cc_w32 -o bookw32.exe $src $libs &
$cc_w64 -o bookw64.exe $src $libs &
wait

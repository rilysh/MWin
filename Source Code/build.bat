@echo off
mkdir x86 >Nul
mkdir x64 >Nul
gcc -Os -s -m32 -o movwin.exe movwin.c
copy movwin.exe x86\
del movwin.exe
gcc -Os -s -m64 -o movwin.exe movwin.c
copy movwin.exe x64\
del movwin.exe
echo Done!
Pause
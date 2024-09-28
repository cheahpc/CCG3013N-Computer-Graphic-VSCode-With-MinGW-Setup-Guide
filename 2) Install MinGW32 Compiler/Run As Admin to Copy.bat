@echo off
echo Copying MinGW32 to C:\
xcopy "%~dp0MinGW32" "C:\MinGW32\" /y /v /e /i
pause
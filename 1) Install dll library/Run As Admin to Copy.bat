@echo off
echo Copying glut32.dll to C:\Windows\SysWOW64\
XCOPY "%~dp0glut32.dll" "C:\Windows\SysWOW64\" /y /v /e /i
pause
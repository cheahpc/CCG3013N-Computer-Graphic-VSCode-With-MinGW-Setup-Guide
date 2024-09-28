@echo off
@For /F "Skip=2Tokens=1-2*" %%A In ('Reg Query HKCU\Environment /V PATH 2^>Nul') Do @setx Path "%%C;C:\MinGW32\bin"
pause
@echo off
echo Compiling %~n1.cpp...
g++ "%~n1.cpp" -o "%~n1.exe"

if %errorlevel% equ 0 (
    echo [SUCCESS] Built %~n1.exe
)

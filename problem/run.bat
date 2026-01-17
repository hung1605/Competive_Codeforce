@echo off
:: %~n1 takes the filename part only (removes .cpp if you typed it)
g++ "%~n1.cpp" -o "%~n1.exe"

if %errorlevel% equ 0 (
    ".\%~n1.exe"
)

@echo off
set CurrentDIR=%CD%
pushd C:\Program Files\teraterm
ttpmacro.exe /V %CurrentDIR%\IceMode.ttl
popd
set OLD_PATH=%PATH%
PATH=C:\NMake;%PATH%
start sde-insight --command=init_IceMode.gdb %CurrentDIR%/DemoKit_Data/Release/MIPS/DemoKit.axf
PATH=%OLD_PATH%
set CurrentDIR=
set OLD_PATH=
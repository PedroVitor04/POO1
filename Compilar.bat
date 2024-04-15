@echo off

SET EXECUTAVEL=main.exe

g++ -o %EXECUTAVEL% main.cpp Veiculo.cpp Caminhonete.cpp Cliente.cpp Servico.cpp Mostra.cpp

IF %ERRORLEVEL% EQU 0 (
    echo Executavel criado.
    echo.
    %EXECUTAVEL%
) ELSE (
    echo Erro!
)

pause
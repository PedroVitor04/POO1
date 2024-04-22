@echo off

SET EXECUTAVEL=main.exe

g++ -o %EXECUTAVEL% main.cpp Veiculo.cpp Caminhonete.cpp Carro.cpp Moto.cpp Caminhao.cpp Cliente.cpp Servico.cpp Garagem.cpp Clientela.cpp Atividades.cpp

IF %ERRORLEVEL% EQU 0 (
    echo Executavel criado.
    echo.
    %EXECUTAVEL%
) ELSE (
    echo Erro!
)

pause
#include <iostream>
#include "cliente.h"
#include "veiculo.h"
#include "servico.h"
#include "garagem.h"
#include "mostra.h"

#include "cliente.cpp"
#include "veiculo.cpp"
#include "servico.cpp"
#include "garagem.cpp"
#include "mostra.cpp"

using namespace std;

int main(){

    Cliente *C1 = new Cliente(30,"123.456.789-01","Maurice","Maculino","Alegrete");
    Veiculo *V1 = new Veiculo(0,2020,1850,1.735,650,"9BD111060T5002156","Caminhonete","ABC1D23");
    Servico *S1 = new Servico(C1,V1,350,"Alegrete","Porto Alegre");
    Garagem *G = new Garagem;

    G->addGaragem(V1);
    G->limpaLista();

    mostraCliente(C1); //funcao para imprimir os dados do cliente
    mostraVeiculo(V1); //funcao para imprimir os dados do veiculo
    mostraServico(S1); //funcao para imprimir os dados do servico

    delete C1; //libra as memorias
    delete V1;
    delete S1;

    return 0;
}
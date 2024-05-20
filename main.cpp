#include <iostream>
#include "inc/Cliente.h"
#include "inc/Veiculo.h"
#include "inc/Servico.h"
#include "inc/Garagem.h"
#include "inc/Clientela.h"
#include "inc/Atividades.h"
#include "inc/Caminhonete.h"
#include "inc/Carro.h"
#include "inc/Moto.h"
#include "inc/Caminhao.h"

using namespace std;

int main(){

    Clientela *C = new Clientela; //exemplos de inicializacao das listas
    Garagem *G = new Garagem;
    Atividades *A = new Atividades;

    Cliente *C1 = new Cliente(0,30,"56462612010","Maurice","Masculino","Alegrete"); //exemplos de criacao de cada classe
    C->addClientela(C1);

    Moto *V1 = new Moto(0,-27.5935,-48.5585,2020,1850,1.735,650.0,"9BD111060T5002156","SUV","EFG4H56");
    G->addGaragem(V1);

    Moto *V2 = new Moto(0,-30.0277,-51.2287,2020,1850,1.735,650.0,"9BD111060T5002156","FIAT","ABC1D23");
    G->addGaragem(V2);

    Servico *S1 = new Servico(0,C1,G,-29.7848,-55.7757,350,"Alegrete","Porto Alegre");
    A->addAtividades(S1);

    cout << *C1 << endl; //exemplos de ipressao
    cout << *V1 << endl;
    cout << *S1 << endl;

    C->limpaLista(); //libera todos os itens colocados nas listas
    G->limpaLista();
    A->limpaLista();

    delete G; //libera o ponteiro de cada lista
    delete C;
    delete A;

    return 0;
}
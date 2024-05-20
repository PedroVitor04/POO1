#ifndef GARAGEM_H
#define GARAGEM_H
#include <iostream>
#include <list>
#include "Veiculo.h"

using namespace std;

class Garagem{ //classe para lista de veiculos

    private:
    std::list<Veiculo*> lista;

    public:
    Garagem();
    ~Garagem();

    int addGaragem(Veiculo *veiculo);
    int removeGaragem(int id);
    Veiculo* pesquisaId(int id);
    int tamanho();

    int atualizaIds();
    int limpaLista();
};

#endif
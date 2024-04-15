#ifndef GARAGEM_H
#define GARAGEM_H
#include <iostream>
#include <list>
#include "veiculo.h"
#include "caminhonete.h"

using namespace std;

class Garagem{

    private:
    std::list<Veiculo*> lista;
    int count;

    public:
    Garagem();
    ~Garagem();

    int addGaragem(Veiculo *veiculo);
    int removeGaragem(int id);

    int limpaLista();
};

#endif;
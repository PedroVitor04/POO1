#ifndef CAMINHONETE_H
#define CAMINHONETE_H
#include <iostream>
#include "veiculo.h"

using namespace std;

class Caminhonete : public Veiculo{

    private:
        int quilometragem;

    public:
        Caminhonete();
        Caminhonete(int id, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa, int quilometragem);
        ~Caminhonete();

        int setQuilometragem(int quilometragem);
        int getQuilometragem();
};

#endif;
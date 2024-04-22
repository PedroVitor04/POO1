#ifndef CAMINHA_H
#define CAMINHA_H
#include <iostream>
#include "veiculo.h"


using namespace std;

class Caminhao : public Veiculo{ //uma das classes filhas da Veiculo

    private:

    public:
        Caminhao();
        Caminhao(int id, double latitude, double longitude, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa);
        ~Caminhao();

        bool operator==(const Caminhao& caminhao) const;
};

#endif
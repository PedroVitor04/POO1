#ifndef CARRO_H
#define CARRO_H
#include <iostream>
#include "veiculo.h"


using namespace std;

class Carro : public Veiculo{ //uma das classes filhas da Veiculo

    private:

    public:
        Carro();
        Carro(int id, double latitude, double longitude, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa);
        ~Carro();

        bool operator==(const Carro& carro) const;
};

#endif
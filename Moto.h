#ifndef MOTO_H
#define MOTO_H
#include <iostream>
#include "veiculo.h"


using namespace std;

class Moto : public Veiculo{ //uma das classes filhas da Veiculo

    private:

    public:
        Moto();
        Moto(int id, double latitude, double longitude, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa);
        ~Moto();

        bool operator==(const Moto& moto) const;
};

#endif
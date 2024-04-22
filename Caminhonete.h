#ifndef CAMINHONETE_H
#define CAMINHONETE_H
#include <iostream>
#include "veiculo.h"


using namespace std;

class Caminhonete : public Veiculo{ //uma das classes filhas da Veiculo

    private:

    public:
        Caminhonete();
        Caminhonete(int id, double latitude, double longitude, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa);
        ~Caminhonete();

        bool operator==(const Caminhonete& caminhonete) const;
};

#endif
#include <iostream>
#include "carro.h"

using namespace std;

Carro::Carro() : Veiculo(){
}

Carro::Carro(int id, double latitude, double longitude, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa) : Veiculo(id, latitude, longitude, ano, peso, altura, capacidade, chassi, modelo, placa){
}

Carro::~Carro(){
}

bool Carro::operator==(const Carro& carro) const{
    return Veiculo::operator==(carro);
}
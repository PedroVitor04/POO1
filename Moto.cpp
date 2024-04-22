#include <iostream>
#include "moto.h"

using namespace std;

Moto::Moto() : Veiculo(){
}

Moto::Moto(int id, double latitude, double longitude, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa) : Veiculo(id, latitude, longitude, ano, peso, altura, capacidade, chassi, modelo, placa){
}

Moto::~Moto(){
}

bool Moto::operator==(const Moto& moto) const{
    return Veiculo::operator==(moto);
}
#include <iostream>
#include "caminhonete.h"

using namespace std;

Caminhonete::Caminhonete() : Veiculo(){
}

Caminhonete::Caminhonete(int id, double latitude, double longitude, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa) : Veiculo(id, latitude, longitude, ano, peso, altura, capacidade, chassi, modelo, placa){
}

Caminhonete::~Caminhonete(){
}

bool Caminhonete::operator==(const Caminhonete& caminhonete) const{
    return Veiculo::operator==(caminhonete);
}
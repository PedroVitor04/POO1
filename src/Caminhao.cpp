#include <iostream>
#include "../inc/Caminhao.h"

using namespace std;

Caminhao::Caminhao() : Veiculo(){
}

Caminhao::Caminhao(int id, double latitude, double longitude, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa) : Veiculo(id, latitude, longitude, ano, peso, altura, capacidade, chassi, modelo, placa){
}

Caminhao::~Caminhao(){
}

bool Caminhao::operator==(const Caminhao& caminhao) const{
    return Veiculo::operator==(caminhao);
}
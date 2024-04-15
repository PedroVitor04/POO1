#include "caminhonete.h"
#include <iostream>

using namespace std;

Caminhonete::Caminhonete() : Veiculo(){
    this->quilometragem = 0;
}

Caminhonete::Caminhonete(int id, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa, int quilometragem) : Veiculo(id, ano, peso, altura, capacidade, chassi, modelo, placa){
    setQuilometragem(quilometragem);
}

Caminhonete::~Caminhonete(){
}

int Caminhonete::setQuilometragem(int quilometragem){
    if(quilometragem < 0){
        this->quilometragem = quilometragem;
        return 1;
    }

    return 0;
}

int Caminhonete::getQuilometragem(){
    if(this->quilometragem != 0){
        return this->quilometragem;
    }

    return 0;
}
#include "garagem.h"
#include "veiculo.h"
#include "caminhonete.h"
#include <iostream>
#include <list>

using namespace std;

Garagem::Garagem(){
    this->count = 0;
}

Garagem::~Garagem(){
    limpaLista();
}


int Garagem::addGaragem(Veiculo *veiculo){
    this->count++;
    veiculo->setId(count);
    this->lista.push_back(veiculo);
}

int Garagem::removeGaragem(int id){
    for (auto it = this->lista.begin(); it != this->lista.end(); ++it) {
        if ((*it)->getId() == id) {
            delete *it;
            this->lista.erase(it);

            this->count--;
            return 1;
        }
    }

    return 0;
}


int Garagem::limpaLista(){
    this->lista.clear();
}
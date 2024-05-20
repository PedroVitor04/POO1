#include <iostream>
#include <list>
#include "../inc/Clientela.h"

using namespace std;

Clientela::Clientela(){
}

Clientela::~Clientela(){
    this->limpaLista();
}

int Clientela::addClientela(Cliente *cliente){
    this->lista.push_back(cliente);
    this->atualizaIds();

    return 1;
}

int Clientela::removeClientela(int id){ //utiliza o id dos veiculos como indice para a lista       Obs.: o primeiro item da lista é sempre 1
    for (auto it = this->lista.begin(); it != this->lista.end(); ++it){
        if ((*it)->getId() == id) {
            delete *it;
            this->lista.erase(it);
            this->atualizaIds();

            return 1;
        }
    }

    return 0;
}

Cliente* Clientela::pesquisaId(int id){ //retorna o cliente desejado com base no seu indice na lista
    for (auto it = this->lista.begin(); it != this->lista.end(); ++it){
        if ((*it)->getId() == id) {

            return (*it);
        }
    }

    return nullptr;
}

int Clientela::atualizaIds(){ //toda vez que adicionams ou removemos um item na lista, seus itens podem ficar fora de ordem, entao essa funçao muda o id de todos para permancerem na ordem e funcionarem como indice
    int i = 1;

    for (auto it = this->lista.begin(); it != this->lista.end(); ++it){
        (*it)->setId(i);
        i++;
    }

    return 1;
}

int Clientela::limpaLista(){
    this->lista.clear();
    
    return 1;
}
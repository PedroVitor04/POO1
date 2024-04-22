#include <iostream>
#include <list>
#include "atividades.h"
#include "servico.h"

using namespace std;

Atividades::Atividades(){
}
Atividades::~Atividades(){
    this->limpaLista();
}

int Atividades::addAtividades(Servico *servico){
    this->lista.push_back(servico);
    this->atualizaIds();

    return 1;
}

int Atividades::removeAtividades(int id){ //utiliza o id dos veiculos como indice para a lista       Obs.: o primeiro item da lista é sempre 1
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

Servico* Atividades::pesquisaId(int id){ //retorna o cliente desejado com base no seu indice na lista
    for (auto it = this->lista.begin(); it != this->lista.end(); ++it){
        if ((*it)->getId() == id) {

            return (*it);
        }
    }

    return nullptr;
}

int Atividades::atualizaIds(){ //toda vez que adicionams ou removemos um item na lista, seus itens podem ficar fora de ordem, entao essa funçao muda o id de todos para permancerem na ordem e funcionarem como indice
    int i = 1;

    for (auto it = this->lista.begin(); it != this->lista.end(); ++it){
        (*it)->setId(i);
        i++;
    }

    return 1;
}

int Atividades::limpaLista(){
    this->lista.clear();
    
    return 1;
}
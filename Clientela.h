#ifndef CLIENTELA_H
#define CLIENTELA_H
#include <iostream>
#include <list>
#include "cliente.h"

using namespace std;

class Clientela{ //classe para lista de clientes

    private:
    std::list<Cliente*> lista;

    public:
    Clientela();
    ~Clientela();

    int addClientela(Cliente *cliente);
    int removeClientela(int id);
    Cliente* pesquisaId(int id);

    int atualizaIds();
    int limpaLista();
};

#endif
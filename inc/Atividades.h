#ifndef ATIVIDADES_H
#define ATIVIDADES_H
#include <iostream>
#include <list>
#include "Servico.h"

using namespace std;

class Atividades{ //classe para lista de servicos

    private:
    std::list<Servico*> lista;

    public:
    Atividades();
    ~Atividades();

    int addAtividades(Servico *servico);
    int removeAtividades(int id);
    Servico* pesquisaId(int id);

    int atualizaIds();
    int limpaLista();
};

#endif
#ifndef SERVICO_H
#define SERVICO_H
#include <iostream>
#include "cliente.h"

using namespace std;

class Servico{ //classe com argumentos das informacoes de um servico

    private: //argumentos
        class Cliente *contratante; //um servico esta sempre atrelado a um cliente
        class Veiculo *transporte; //e tambem a um veiculo
        float peso;
        float volume;
        string coleta;
        string entrega;

    public: //funcoes para interagir com os argumentos do servico
        Servico();
        Servico(Cliente *contratante, Veiculo *transporte, float peso, string coleta, string entrega);
        ~Servico();

        int setContratante(Cliente *contratante);
        Cliente* getContratante();

        int setTransporte(Veiculo *transporte);
        Veiculo* getTransporte();

        int setPeso(float peso);
        float getPeso();

        int setColeta(string coleta);
        string getColeta();

        int setEntrega(string entrega);
        string getEntrega();
};

#endif;
#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>

using namespace std;

class Veiculo{ //classe com argumentos das informacoes de um veiculo

    private: //argumentos
        int id;
        int ano;
        float peso;
        float altura;
        float capacidade;
        string chassi;
        string modelo;
        string placa;

    public: //funcoes para interagir com os argumentos do veiculo
        Veiculo();
        Veiculo(int id, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa);
        ~Veiculo();

        int setId(int id);
        int getId();

        int setAno(int ano);
        int getAno();

        int setPeso(float peso);
        float getPeso();

        int setAltura(float altura);
        float getAltura();

        int setCapacidade(float capacidade);
        float getCapacidade();

        int setChassi(string chassi);
        string getChassi();

        int setModelo(string modelo);
        string getModelo();

        int setPlaca(string placa);
        string getPlaca();
};

#endif;
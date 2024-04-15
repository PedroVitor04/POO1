#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>

using namespace std;

class Cliente{ //classe com os dados do perfil de um usuario

    private: //argumentos
        int idade;
        string CPF;
        string nome;
        string genero;
        string endereco;

    public: //funcoes para interagir com os argumentos do cliente, "set" para colocar um dado e "get" para retornar o dado
        Cliente();
        Cliente(int idade, string CPF, string nome, string genero, string endereco);
        ~Cliente();

        int setIdade(int idade);
        int getIdade();

        int setCPF(string CPF);
        string getCPF();

        int setNome(string nome);
        string getNome();

        int setGenero(string genero);
        string getGenero();

        int setEndereco(string endereco);
        string getEndereco();
};

#endif;
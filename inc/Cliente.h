#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>

using namespace std;

class Cliente{ //classe com os dados do perfil de um usuario

    private: //argumentos
        int id; //usado e atualizado para ser o indice do elemento na lista
        int idade;
        string CPF;
        string nome;
        string genero;
        string endereco;

    public:
        Cliente();
        Cliente(int id, int idade, string CPF, string nome, string genero, string endereco);
        ~Cliente();

        int setId(int id);
        int getId();

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

        bool operator==(const Cliente& cliente) const;

        friend std::ostream& operator<<(std::ostream& os, const Cliente& cliente);
};

#endif
#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>

using namespace std;

class Veiculo{

    private:
        int id; //usado e atualizado para ser o indice do elemento na lista
        int disponibilidade; //pode ser 1 ou 0 quando o veiculo estver disponivel ou nao respectivamente
        double latitude; 
        double longitude;
        int ano;
        float peso;
        float altura;
        float capacidade;
        string chassi;
        string modelo;
        string placa;

    public:
        Veiculo();
        Veiculo(int id, double latitude, double longitude, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa);
        ~Veiculo();

        int setId(int id); 
        int getId();

        int mudaDisponibilidade(); 
        int getDisponibilidade();

        int setLatitude(double latitude);
        double getLatitude();

        int setLongitude(double longitude);
        double getLongitude();

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

        bool operator==(const Veiculo& veiculo) const;

        friend std::ostream& operator<<(std::ostream& os, const Veiculo& veiculo);
};

#endif
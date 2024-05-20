#ifndef SERVICO_H
#define SERVICO_H
#include <iostream>
#include "Cliente.h"
#include "Veiculo.h"
#include "Garagem.h"

using namespace std;

class Servico{

    private:
        int id; //usado e atualizado para ser o indice do elemento na lista
        Cliente *contratante; //um servico esta sempre atrelado a um cliente
        Veiculo *transporte; //e tambem a um veiculo
        double latitude;
        double longitude;
        float peso;
        float volume;
        string coleta;
        string entrega;

    public:
        Servico();
        Servico(int id, Cliente *contratante, Garagem *transporte, double latitude, double longitude, float peso, string coleta, string entrega);
        ~Servico();

        int setId(int id);
        int getId();

        int setLatitude(double latitude);
        double getLatitude();

        int setLongitude(double longitude);
        double getLongitude();

        int setContratante(Cliente *contratante);
        Cliente* getContratante();

        int setTransporte(Garagem *transporte);
        Veiculo* getTransporte();

        int setPeso(float peso);
        float getPeso();

        int setColeta(string coleta);
        string getColeta();

        int setEntrega(string entrega);
        string getEntrega();

        double distancia(double lat1, double lon1, double lat2, double lon2);

        bool operator==(const Servico& servico) const;

        friend std::ostream& operator<<(std::ostream& os, const Servico& servico);
};

#endif
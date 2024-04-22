#include <iostream>
#include <cctype>
#include <cmath>
#include <limits>
#include "cliente.h"
#include "veiculo.h"
#include "servico.h"
#include "garagem.h"

using namespace std;

Servico::Servico(){
    this->id = -1; 
    this->contratante = new Cliente;
    this->transporte = new Veiculo;
    this->latitude = 0.0;
    this->longitude = 0.0;
    this->peso = 0.0;
    this->volume = 0.0;
    this->coleta = "";
    this->entrega = "";
}

Servico::Servico(int id, Cliente *contratante, Garagem *transporte, double latitude, double longitude, float peso, string coleta, string entrega){
    this->setId(id);
    this->setContratante(contratante);
    this->setTransporte(transporte);
    this->setLatitude(latitude);
    this->setLongitude(longitude);
    this->setPeso(peso);
    this->setColeta(coleta);
    this->setEntrega(entrega);
}

Servico::~Servico(){ //tem que liberar a momeria dos ponteiros do construtor aqui
    delete this->contratante;
    delete this->transporte;
}

int Servico::setId(int id){ //essa funcao so e usada pela classe da sua lista
    if(id >= 0){
        this->id = id;
        return 1;
    }

    return 0;
}
int Servico::getId(){
    if(this->id >= 1){
        return this->id;
    }

    return 0;
}

int Servico::setContratante(Cliente *contratante){ //usa CPF para verificar o cliente
    if(contratante->getCPF() != ""){
        this->contratante = contratante;

        return 1;
    }

    return 0;
}
Cliente* Servico::getContratante(){
    if(this->contratante != nullptr){
        return this->contratante;
    }

    return nullptr;
}

int Servico::setTransporte(Garagem *transporte){ //o construtor da classe recebe a lista dos veiculos e atrela ao servico o veiculo mais proximo do seu ponto de coleta, alem de trocar a disponibilidade do veiculo 
    double menorDistancia =numeric_limits<double>::max();
    double d;
    int menor;

    for (int i = 1; i < transporte->tamanho()+1; ++i){

        if(transporte->pesquisaId(i)->getDisponibilidade()){

            d = distancia(this->getLatitude(),this->getLongitude(),transporte->pesquisaId(i)->getLatitude(),transporte->pesquisaId(i)->getLongitude());
            
            if (d < menorDistancia) {
                menorDistancia = d;
                menor = i;
            }
        }
    }
    transporte->pesquisaId(menor)->mudaDisponibilidade();
    this->transporte = transporte->pesquisaId(menor);

    return 1;
}
Veiculo* Servico::getTransporte(){
    if(this->transporte != nullptr){
        return this->transporte;
    }

    return nullptr;
}

int Servico::setLatitude(double latitude){
    this->latitude = latitude;

    return 1;
}
double Servico::getLatitude(){
    if(!(this->latitude == 0.0)){
        return this->latitude;
    }

    return 0.0;
}

int Servico::setLongitude(double longitude){
    this->longitude = longitude;

    return 1;
}
double Servico::getLongitude(){
    if(!(this->longitude == 0.0)){
        return this->longitude;
    }

    return 0.0;
}

int Servico::setPeso(float peso){
    if(peso >= 0.0){
        this->peso = peso;
        return 1;
    }

    return 0;
}

float Servico::getPeso(){
    if(this->peso >= 0.0){
        return this->peso;
    }

    return 0;
}

int Servico::setColeta(string coleta){
    for(char aux : coleta){
        if(isdigit(aux)){
            return 0;
        }
    }

    for(char &aux : coleta){
        aux = tolower(aux);
    }

    coleta[0] = toupper(coleta[0]);
    this->coleta = coleta;
    return 1;
}
string Servico::getColeta(){
    if(this->coleta != ""){
        return this->coleta;
    }

    return "Sem dados";
}

int Servico::setEntrega(string entrega){
    for(char aux : entrega){
        if(isdigit(aux)){
            return 0;
        }
    }

    for(char &aux : entrega){
        aux = tolower(aux);
    }

    entrega[0] = toupper(entrega[0]);
    this->entrega = entrega;
    return 1;
}
string Servico::getEntrega(){
    if(this->entrega != ""){
        return this->entrega;
    }

    return "Sem dados";
}

double Servico::distancia(double lat1, double lon1, double lat2, double lon2){ //funcao que faz o calculo da distancia de dois pontos com as latitudes e longitudes
    double raioTerra = 6371.0;

    double lat1Rad = lat1 * M_PI / 180.0;
    double lon1Rad = lon1 * M_PI / 180.0;
    double lat2Rad = lat2 * M_PI / 180.0;
    double lon2Rad = lon2 * M_PI / 180.0;

    // Calcula diferenças de latitudes e longitudes
    double deltaLat = lat2Rad - lat1Rad;
    double deltaLon = lon2Rad - lon1Rad;

    // Aplica a fórmula de Haversine
    double a = sin(deltaLat / 2.0) * sin(deltaLat / 2.0) + cos(lat1Rad) * cos(lat2Rad) * sin(deltaLon / 2.0) * sin(deltaLon / 2.0);
    double c = 2.0 * atan2(sqrt(a), sqrt(1.0 - a));
    double distancia = raioTerra * c;

    return distancia;
}

bool Servico::operator==(const Servico& servico) const{ //se uma comparacao "==" entre servicos for efetuada, esses sao os argumentos que serao comparados
    return this->contratante == servico.contratante &&
           this->peso == servico.peso &&
           this->volume == servico.volume &&
           this->coleta == servico.coleta &&
           this->entrega == servico.entrega;
}

std::ostream& operator<<(std::ostream& os, const Servico& servico) { //modelo de saida
    os
    << "\n"
    << "Cliente: " << servico.contratante->getNome() << "\n" 
    << "Veiculo: " << servico.transporte->getPlaca() << "\n" 
    << "Peso da Carga: " << servico.peso << "kg" << "\n"
    << "Coleta: " << servico.coleta << "\n"
    << "Entrega: " << servico.entrega << "\n"
    << endl;
    }
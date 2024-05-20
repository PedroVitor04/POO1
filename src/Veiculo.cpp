#include <iostream>
#include <cctype>
#include <string>
#include "../inc/Veiculo.h"

using namespace std;

Veiculo::Veiculo(){
    this->id = -1;
    this->disponibilidade = 1;
    this->latitude = 0.0;
    this->longitude = 0.0;
    this->ano = 0;
    this->peso = 0.0;
    this->altura = 0.0;
    this->capacidade = 0.0;
    this->chassi = "";
    this->modelo = "";
    this->placa = "";
}

Veiculo::Veiculo(int id, double latitude, double longitude, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa){
    this->setId(id);
    this->setLatitude(latitude);
    this->setLongitude(longitude);
    this->setAno(ano);
    this->setPeso(peso);
    this->setAltura(altura);
    this->setCapacidade(capacidade);
    this->setChassi(chassi);
    this->setModelo(modelo);
    this->setPlaca(placa);
}

Veiculo::~Veiculo(){
}

int Veiculo::setId(int id){ //essa funcao so e usada pela classe da sua lista
    if(id >= 0){
        this->id = id;
        return 1;
    }

    return 0;
}
int Veiculo::getId(){
    if(this->id >= 1){
        return this->id;
    }

    return 0;
}

int Veiculo::mudaDisponibilidade(){ //altera entre 1 e 0 a disponibilidade conforme um veiculo é designado dentro da classe Servico
    if (this->disponibilidade){
        this->disponibilidade = 0;
    } else {
        this->disponibilidade = 1;
    }

    return 1; 
}
int Veiculo::getDisponibilidade(){

    return this->disponibilidade;
}

int Veiculo::setLatitude(double latitude){
    this->latitude = latitude;

    return 1;
}
double Veiculo::getLatitude(){
    if(!(this->latitude == 0.0)){
        return this->latitude;
    }

    return 0.0;
}

int Veiculo::setLongitude(double longitude){
    this->longitude = longitude;

    return 1;
}
double Veiculo::getLongitude(){
    if(!(this->longitude == 0.0)){
        return this->longitude;
    }

    return 0.0;
}

int Veiculo::setAno(int ano){
    if(1980 <= ano <= 2024){
        this->ano = ano;
        return 1;
    }

    return 0;
}
int Veiculo::getAno(){
    if(this->ano > 0){
        return this->ano;
    }

    return 0;
}

int Veiculo::setPeso(float peso){
    if(peso >= 0.0){
        this->peso = peso;
        return 1;
    }

    return 0;
}
float Veiculo::getPeso(){
    if(this->peso >= 0.0){
        return this->peso;
    }

    return 0.0;
}

int Veiculo::setAltura(float altura){
    if(altura >= 0.0){
        this->altura = altura;
        return 1;
    }

    return 0;
}
float Veiculo::getAltura(){
    if(this->altura >= 0.0){
        return this->altura;
    }

    return 0.0;
}

int Veiculo::setCapacidade(float capacidade){
    if(capacidade >= 0.0){
        this->capacidade = capacidade;
        return 1;
    }

    return 0;
}
float Veiculo::getCapacidade(){
    if(this->capacidade >= 0.0){
        return this->capacidade;
    }

    return 0.0;
}

int Veiculo::setChassi(string chassi){ //essa funcao tenta aceitar somente chassis dentro do padrao, porem o padrao e muito complexo, entao ela nao tem alguns parametros
    int i = 0;
    if(chassi.size() == 17){

        for(char &aux : chassi){
            i++;

            if(isalpha(aux) || isdigit(aux)){

                if(isalpha(aux)){
                    aux = toupper(aux);

                } 
                if (i >=14 && !isdigit(aux)){

                    return 0;
                }

            } else {

                return 0;
            }
        }
        this->chassi = chassi;

        return 1; 
    }

    return 0;
}

string Veiculo::getChassi(){
    if(this->chassi != ""){
        return this->chassi;
    }

    return "Sem dados";
}

int Veiculo::setModelo(string modelo){
    for(char &aux : modelo){

        if(isdigit(aux)){
            return 0;
        }
    }
    this->modelo = modelo;

    return 1;
}
string Veiculo::getModelo(){
    if(this->modelo != ""){
        return this->modelo;
    }

    return "Sem dados";
}

int Veiculo::setPlaca(string placa){ //so aceita placas validas
    int i = 0;
    if(placa.size() ==7){

        for(char &aux : placa){
        i++;

            if(isalpha(aux) || isdigit(aux)){

                if(i == 4 || i == 6 || i == 7){
                    if(!isdigit(aux)){

                        return 0;
                    }

                } else {
                    aux = toupper(aux);
                }

            } else {
                
                return 0;
            }
        }
        this->placa = placa;

        return 1;
    }

    return 0;
}
string Veiculo::getPlaca(){
    if(this->placa != ""){
        return this->placa;
    }

    return "Sem dados";
}

bool Veiculo::operator==(const Veiculo& veiculo) const{ //se uma comparacao "==" entre veiculos for efetuada, esses sao os argumentos que serao comparados
    return this->ano == veiculo.ano && 
           this->peso == veiculo.peso &&
           this->altura == veiculo.altura &&
           this->capacidade == veiculo.capacidade &&
           this->chassi == veiculo.chassi &&
           this->modelo == veiculo.modelo &&
           this->placa == veiculo.placa;
}

std::ostream& operator<<(std::ostream& os, const Veiculo& veiculo) { //modelo de saida
        os
        << "\n"
        << "Modelo de Veiculo: " << veiculo.modelo << "\n" 
        << "Ano: " << veiculo.ano << "\n" 
        << "Placa: " << veiculo.placa << "\n"
        << "Altura: " << veiculo.altura << "m"<< "\n"
        << "Peso: " << veiculo.peso << "kg" << "\n"
        << "Capacidade: " << veiculo.capacidade << "kg" << "\n"
        << "Chassi: " << veiculo.chassi << "\n"
        << endl;
        return os;
    }
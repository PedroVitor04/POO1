#include <iostream>
#include <string>
#include "veiculo.h"

using namespace std;

Veiculo::Veiculo(){
    this->id = -1;
    this->ano = 0;
    this->peso = 0.0;
    this->altura = 0.0;
    this->capacidade = 0.0;
    this->chassi = "";
    this->modelo = "";
    this->placa = "";
}

Veiculo::Veiculo(int id, int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa){
    this->setId(id);
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

int Veiculo::setId(int id){
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

int Veiculo::setAno(int ano){
    if(ano <= 1980 && ano <= 2024){
        this->ano = ano;
        return 1;
    }

    return 0;
}
int Veiculo::getAno(){
    if(this->ano >= 0){
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

int Veiculo::setChassi(string chassi){
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

    return 1;
}
string Veiculo::getModelo(){
    if(this->modelo != ""){
        return this->modelo;
    }

    return "Sem dados";
}

int Veiculo::setPlaca(string placa){
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
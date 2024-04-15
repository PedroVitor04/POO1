#include <iostream>
#include "cliente.h"
#include "veiculo.h"
#include "servico.h"

using namespace std;

Servico::Servico(){
    this->contratante = new Cliente;
    contratante = nullptr;
    this->transporte = new Veiculo;
    transporte = nullptr;
    this->peso = 0.0;
    this->volume = 0.0;
    this->coleta = "";
    this->entrega = "";
}

Servico::Servico(Cliente *contratante, Veiculo *transporte, float peso, string coleta, string entrega){
    this->setContratante(contratante);
    this->setTransporte(transporte);
    this->setPeso(peso);
    this->setColeta(coleta);
    this->setEntrega(entrega);
}

Servico::~Servico(){
    delete this->contratante;
    delete this->transporte;
}

int Servico::setContratante(Cliente *contratante){
    this->contratante = contratante;
}
Cliente* Servico::getContratante(){
    if(this->contratante != nullptr){
        return this->contratante;
    }

    return nullptr;
}

int Servico::setTransporte(Veiculo *transporte){
    this->transporte = transporte;
}
Veiculo* Servico::getTransporte(){
    if(this->transporte != nullptr){
        return this->transporte;
    }

    return nullptr;
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
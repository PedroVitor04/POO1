#include <iostream>
#include <cctype>
#include "../inc/Cliente.h"

using namespace std;

Cliente::Cliente(){
    this->id = -1;
    this->idade = 0;
    this->CPF = "";
    this->nome = "";
    this->genero = "";
    this->endereco = "";
}

Cliente::Cliente(int id, int idade, string CPF, string nome, string genero, string endereco){
    this->setId(id);
    this->setIdade(idade);
    this->setCPF(CPF);
    this->setNome(nome);
    this->setGenero(genero);
    this->setEndereco(endereco);
}

Cliente::~Cliente(){
}

int Cliente::setId(int id){ //essa funcao so e usada pela classe da sua lista
    if(id >= 0){
        this->id = id;
        return 1;
    }

    return 0;
}
int Cliente::getId(){
    if(this->id >= 1){
        return this->id;
    }

    return 0;
}

int Cliente::setIdade(int idade){
    if(idade >= 18){
        this->idade = idade;
        return 1;
    }

    return 0;
}
int Cliente::getIdade(){
    if(this->idade != 0){
        return this->idade;
    }

    return 0;
}

int Cliente::setCPF(string CPF){ //so aceita CPFs validos, e somente numeros, sem'.' ou '-'
    int i, rest1, rest2, x = 0, y = 0, vec[11];

    for(i=0;i<11;i++){
        vec[i] = CPF[i] - '0';
    }
    for(i=0;i<9;i++){
        x = x + vec[i]*(10-i);
    }
    if(11-x%11 > 9){
        rest1 = 0;
    } else {
        rest1 = 11-x%11;
    }
    
    for(i=0;i<10;i++){
        y = y + vec[i]*(11-i);
    }
    if(11-y%11 > 9){
        rest2 = 0;
    } else {
        rest2 = 11-y%11;
    }
    
    if(rest1 == vec[9] && rest2 == vec[10]){
        this->CPF = CPF;
        return 1;
    }

    return 0;
}
string Cliente::getCPF(){
    if(this->CPF != ""){
        return this->CPF;
    }

    return "Sem dados";
}

int Cliente::setNome(string nome){
    for(char aux : nome){
        if(isdigit(aux)){
            return 0;
        }
    }

    for(char &aux : nome){
        aux = tolower(aux);
    }

    nome[0] = toupper(nome[0]);
    this->nome = nome;
    return 1;
}
string Cliente::getNome(){
    if(this->nome != ""){
        return this->nome;
    }
    return "Sem dados";
}

int Cliente::setGenero(string genero){
    for(char aux : genero){
        if(isdigit(aux)){
            return 0;
        }
    }

    for(char &aux : genero){
        aux = tolower(aux);
    }
    this->genero = genero;
    
    return 1;
}
string Cliente::getGenero(){
    if(this->genero != ""){
        return this->genero;
    }
    return "Sem dados";
}
        
int Cliente::setEndereco(string endereco){
    for(char aux : endereco){
        if(isdigit(aux)){
            return 0;
        }
    }

    for(char &aux : endereco){
        aux = tolower(aux);
    }

    endereco[0] = toupper(endereco[0]);
    this->endereco = endereco;
    return 1;
}
string Cliente::getEndereco(){
    if(this->endereco != ""){
        return this->endereco;
    }
    return "Sem dados";
}

bool Cliente::operator==(const Cliente& cliente) const{ //se uma comparacao "==" entre clientes for efetuada, esses sao os argumentos que serao comparados
    return this->idade == cliente.idade &&
           this->CPF == cliente.CPF &&
           this->nome == cliente.nome &&
           this->genero == cliente.genero &&
           this->endereco == cliente.endereco;
}

std::ostream& operator<<(std::ostream& os, const Cliente& cliente) { //modelo de saida
    cout 
    << "\n"
    << "Cliente: " << cliente.nome << "\n" 
    << "Idade: " << cliente.idade << "\n" 
    << "Genero: " << cliente.genero << "\n"
    << "CPF: " << cliente.CPF << "\n"
    << "Endereco: " << cliente.endereco << "\n"
    << endl;
}
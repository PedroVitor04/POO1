#include <iostream>
#include "mostra.h"

void mostraCliente(Cliente *C){
    cout 
    << "\n"
    << "Cliente: " << C->getNome() << "\n" 
    << "Idade: " << C->getIdade() << "\n" 
    << "Genero: " << C->getGenero() << "\n"
    << "CPF: " << C->getCPF() << "\n"
    << "Endereco: " << C->getEndereco() << "\n"
    << endl;
}

void mostraVeiculo(Veiculo *V){
    cout 
    << "\n"
    << "Modelo de Veiculo: " << V->getModelo() << "\n" 
    << "Ano: " << V->getAno() << "\n" 
    << "Placa: " << V->getPlaca() << "\n"
    << "Altura: " << V->getAltura() << "m"<< "\n"
    << "Peso: " << V->getPeso() << "kg" << "\n"
    << "Capacidade: " << V->getPeso() << "kg" << "\n"
    << "Chassi: " << V->getChassi() << "\n"
    << endl;
}

void mostraServico(Servico *S){
    cout
    << "\n"
    << "Cliente: " << S->getContratante()->getNome() << "\n" 
    << "Veiculo: " << S->getTransporte()->getPlaca() << "\n" 
    << "Peso da Carga: " << S->getPeso() << "kg" << "\n"
    << "Coleta: " << S->getColeta() << "\n"
    << "Entrega: " << S->getEntrega() << "\n"
    << endl;
}
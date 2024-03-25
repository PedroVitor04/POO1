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
        void setIdade(int idade){
            this->idade = idade;
        }
        int getIdade(){
            return this->idade;
        }

        void setCPF(string CPF){
            this->CPF = CPF;
        }
        string getCPF(){
            return this->CPF;
        }

        void setNome(string nome){
            this->nome = nome;
        }
        string getNome(){
            return this->nome;
        }

        void setGenero(string genero){
            this->genero = genero;
        }
        string getGenero(){
            return this->genero;
        }
        
        void setEndereco(string endereco){
            this->endereco = endereco;
        }
        string getEndereco(){
            return this->endereco;
        }
};

class Veiculo{ //classe com argumentos das informacoes de um veiculo

    private: //argumentos
        int ano;
        float peso;
        float altura;
        float capacidade;
        string chassi;
        string modelo;
        string placa;

    public: //funcoes para interagir com os argumentos do veiculo
        void setAno(int ano){
            this->ano = ano;
        }
        int getAno(){
            return this->ano;
        }

        void setPeso(float peso){
            this->peso = peso;
        }
        float getPeso(){
            return this->peso;
        }

        void setAltura(float altura){
            this->altura = altura;
        }
        float getAltura(){
            return this->altura;
        }

        void setCapacidade(float capacidade){
            this->capacidade = capacidade;
        }
        float getCapacidade(){
            return this->capacidade;
        }

        void setChassi(string chassi){
            this->chassi = chassi;
        }
        string getChassi(){
            return this->chassi;
        }

        void setModelo(string modelo){
            this->modelo = modelo;
        }
        string getModelo(){
            return this->modelo;
        }

        void setPlaca(string placa){
            this->placa = placa;
        }
        string getPlaca(){
            return this->placa;
        }
};

class Servico{ //classe com argumentos das informacoes de um servico

    private: //argumentos
        class Cliente *contratante; //um servico esta sempre atrelado a um cliente
        class Veiculo *transporte; //e tambem a um veiculo
        float peso;
        float volume;
        string coleta;
        string entrega;

    public: //funcoes para interagir com os argumentos do servico
        void setContratante(Cliente *contratante){
            this->contratante = contratante;
        }
        Cliente* getContratante(){
            return this->contratante;
        }
        
        void setTransporte(Veiculo *transporte){
            this->transporte = transporte;
        }
        Veiculo* getTransporte(){
            return this->transporte;
        }

        void setPeso(float peso){
            this->peso = peso;
        }
        float getPeso(){
            return this->peso;
        }

        void setColeta(string coleta){
            this->coleta = coleta;
        }
        string getColeta(){
            return this->coleta;
        }

        void setEntrega(string entrega){
            this->entrega = entrega;
        }
        string getEntrega(){
            return this->entrega;
        }
};

Cliente* inicializaCliente(int idade, string CPF, string nome, string genero, string endereco){ //funcao para criar um cliente
    Cliente *aux = new Cliente;
    aux->setIdade(idade);
    aux->setCPF(CPF);
    aux->setNome(nome);
    aux->setGenero(genero);
    aux->setEndereco(endereco);

    return aux;
}

Veiculo* inicializaVeiculo(int ano, float peso, float altura, float capacidade, string chassi, string modelo, string placa){ //funcao para criar um veiculo
    Veiculo *aux = new Veiculo;
    aux->setAno(ano);
    aux->setPeso(peso);
    aux->setAltura(altura);
    aux->setCapacidade(capacidade);
    aux->setChassi(chassi);
    aux->setModelo(modelo);
    aux->setPlaca(placa);

    return aux;
}

Servico* inicializaServico(Cliente *contratante, Veiculo *transporte, float peso, string coleta, string entrega){ //funcao para criar um servico
    Servico *aux = new Servico;
    aux->setContratante(contratante);
    aux->setTransporte(transporte);
    aux->setPeso(peso);
    aux->setColeta(coleta);
    aux->setEntrega(entrega);

    return aux;
}

void mostraCliente(Cliente *C){ //funcao para imprimir os dados do cliente
    cout 
    << "\n"
    << "Cliente: " << C->getNome() << "\n" 
    << "Idade: " << C->getIdade() << "\n" 
    << "Genero: " << C->getGenero() << "\n"
    << "CPF: " << C->getCPF() << "\n"
    << "Endereco: " << C->getEndereco() << "\n"
    << endl;
}

void mostraVeiculo(Veiculo *V){ //funcao para imprimir os dados do veiculo
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

void mostraServico(Servico *S){ //funcao para imprimir os dados do servico
    cout
    << "\n"
    << "Cliente: " << S->getContratante()->getNome() << "\n" 
    << "Veiculo: " << S->getTransporte()->getPlaca() << "\n" 
    << "Peso da Carga: " << S->getPeso() << "kg" << "\n"
    << "Coleta: " << S->getColeta() << "\n"
    << "Entrega: " << S->getEntrega() << "\n"
    << endl;
}

int main(){

    Cliente *C1 = inicializaCliente(30,"123.456.789-01","Maurice","Maculino","Alegrete");
    Veiculo *V1 = inicializaVeiculo(2020,1850,1.735,650,"9BD111060T5002156","Caminhonete","ABC1D23");
    Servico *S1 = inicializaServico(C1,V1,350,"Alegrete","Porto Alegre");

    mostraCliente(C1);
    mostraVeiculo(V1);
    mostraServico(S1);

    delete C1; //libra as memorias
    delete V1;
    delete S1;

    return 0;
}
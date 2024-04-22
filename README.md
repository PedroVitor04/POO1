# POO1
 Tarefa da cadeira de Programação Orientada a Objetos

    ☆ Semana 1

Proposta: Criação de um sistema que administrasse os dados de uma empresa de transporte do Baita Chão.

- Foram criadas classes para representar os veiculos, clientes e os serviços a serem executados pela empresa, cada um contendo seus devidos argumentos que foram considerados relevantes no momento, além de seus métodos de alteração e acesso a esses argumentos.

    ☆ Semana 2

Proposta: Elaboração do sistema da empresa tanto no aspecto funcional quanto organizacional.

- As classes até então criadas foram removids do arquivo main.cpp e separadas em seus próprios arquivos Header.h e Source.cpp. Os métodos de escrita e acesso aos argumentos das classes foram aprimorados para filtrar as possíveis entradas indevidas do usuário, por exemplo foi corrigido o bug onde um pedido poderia ser realizado com um veiculo "Vassoura", o sistema agora é capáz de reportar quando um erro como esse acontece, també houve a adição dos construtores e destrutores com subrecarga dentro de cada classe. Por fim foi implementado herança para a Classe veiculo, que agora dá origem a Carro, Moto, Caminhonete e Caminhao.

    ☆ Semana 3

Proposta: Aumento da complexidade do sistema.

- Para cada classe Cliente, Veiculo, e Servico, foram implementadas listas do seu tipo a fins organizacionais, as memas foram utilizadas para melhor execução de certas funções. Foi feita a sobrecarga dos operadores "==" e "<<" para gerenciar as capacidades de comparação e visualização das classes respectivamente. Novos argumentos latitude e longitude foram implementados as classes Cliente e Veiculo com o objetivo de calcular a localização do veiculo e do ponto de coleta, ambos dados são utilizados para calcular a distancia e consequentemente identificar qual veiculo disponível está mais proximo do local. Atualmete a procimidade é o único critério que administra qual veiculo realizará um determinado serviço, além que é suposto que as ruas de um ponto a outro sejam retas.

    ☆ Semana 4

Proposta: Resolução se conflitos existentes.

- Algumas funcionalidades e argumentos de classes foram removidos para o melhor funcionamento do código em outros aspectos, além de que mais parâmetros para as funções foram adicionados. Está nos planos criar uma classe Localização que contenha as dados de latitude e longitude encapsulados.
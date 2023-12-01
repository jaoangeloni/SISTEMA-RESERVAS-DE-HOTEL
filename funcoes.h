/**
 * Arquivo de docimentação e declaração de funções, criado em 16/09
 * Sistema de reserva de Hotel
 */

#ifndef FUNCOES_H
#define FUNCOES_H
#define MAXIMODERESERVAS 10

//acrescentar os comentários sobre cada função

typedef struct {
    int numeroQuarto;
    char hospede[100];
    int ocupado; // 0 para livre, 1 para ocupado
    int diasReservados;
} Reserva;

/*
*Esta função é responsável por realizar uma reserva. 
* Parâmetros:
* @reservas: Um array de estruturas Reserva que contém as informações das reservas.
* @totalReservas: O número total de reservas no array.
*Verifica se o número total de reservas é menor que o máximo permitido
*Solicita e armazena o número do quarto
*Marca o quarto como ocupado
*Solicita e armazena a quantidade de dias da reserva
*Incrementa o total de reservas
*Informa que a reserva foi realizada com sucesso
*Informa que o número máximo de reservas foi atingido
 */
void fazerReserva(Reserva* reservas, int* totalReservas);

/*
* Função para realizar o check-in de um hóspede em um quarto
* Parâmetros:
* @reservas: Um array de estruturas Reserva que contém as informações das reservas.
* @totalReservas: O número total de reservas no array.
* Não possui retorno explícito, utiliza mensagens de saída para indicar o resultado do check-in.
* Verifica se o número do quarto na reserva atual é igual ao fornecido pelo usuário
* Marca o quarto como ocupado (check-in realizado com sucesso)
*/
void realizarCheckIn(Reserva* reservas, int totalReservas);

/*
* Função para realizar o check-out de um hóspede em um quarto
* Parâmetros:
* @reservas: Um array de estruturas Reserva que contém as informações das reservas.
* @totalReservas: O número total de reservas no array.
* Não possui retorno explícito, utiliza mensagens de saída para indicar o resultado do check-in.
* Variável para armazenar o número do quarto fornecido pelo usuário
* Solicita ao usuário o número do quarto para o check-out
* Itera sobre todas as reservas para encontrar o quarto desejado
* Verifica se o número do quarto na reserva atual é igual ao fornecido pelo usuário e se o quarto está atualmente ocupado
* Marca o quarto como não ocupado (check-out realizado com sucesso)
* Exibe mensagem indicando que o check-out foi realizado com sucesso
* Retorna da função, pois o check-out já foi efetuado
*Se nenhum quarto correspondente for encontrado ou se o quarto não estiver ocupado e exibe mensagem indicando que o quarto não foi encontrado ou não está ocupado
*/
void realizarCheckOut(Reserva* reservas, int totalReservas);

/*
* Função para visualizar as reservas de quartos atualmente ocupados
* Parâmetros:
* @reservas: Um array de estruturas Reserva que contém as informações das reservas.
* @totalReservas: O número total de reservas no array.
* Não possui retorno explícito, apenas imprime as informações das reservas ocupadas.
* Itera sobre todas as reservas para exibir aquelas que estão ocupadas
* Verifica se o quarto está ocupado
* Imprime as informações da reserva, incluindo número do quarto, nome do hóspede e quantidade de dias reservados
*/
void visualizarReservas(Reserva* reservas, int totalReservas);

#endif

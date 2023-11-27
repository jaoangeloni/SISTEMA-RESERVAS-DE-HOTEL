/**
 * Arquivo de docimentação e declaração de funções, criado em 16/09
 * Sistema de reserva de Hotel
 */

#ifndef FUNCOES_H
#define FUNCOES_H
#define MAXIMODERESERVAS 10

/**
 * Função que executa a soma de dois valores inteiros
 * @param a Primeiro valor inteiro
 * @param b Segundo valor inteiro
 * @return A soma do primeiro com o segundo valor
 */

typedef struct {
    int numeroQuarto;
    char hospede[100];
    int ocupado; // 0 para livre, 1 para ocupado
    int diasReservados;
} Reserva;

void fazerReserva(Reserva* reservas, int* totalReservas);

void realizarCheckIn(Reserva* reservas, int totalReservas);

void realizarCheckOut(Reserva* reservas, int totalReservas);

void visualizarReservas(Reserva* reservas, int totalReservas);

#endif
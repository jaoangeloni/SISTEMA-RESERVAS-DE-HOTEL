#include <stdio.h>
#include "funcoes.h"

void fazerReserva(Reserva* reservas, int* totalReservas) {

    if (*totalReservas < MAXIMODERESERVAS){

        printf("Digite o numero do quarto: ");
        scanf("%d", &reservas[*totalReservas].numeroQuarto);

        printf("Digite o nome do hospede: ");
        scanf("%s", reservas[*totalReservas].hospede);

        reservas[*totalReservas].ocupado = 1;
        printf("Digite a quantidade de dias da reserva: ");
        scanf("%d", &reservas[*totalReservas].diasReservados);

        (*totalReservas)++;
        printf("Reserva realizada!\n");

    } else {

        printf("Numero máxima de reservas Atingida.\n");

    }
}

void realizarCheckIn(Reserva* reservas, int totalReservas) {
    int numeroQuarto;
    printf("Digite o numero do quarto para check-in: ");
    scanf("%d", &numeroQuarto);

    for (int i = 0; i < totalReservas; i++) {
        if (reservas[i].numeroQuarto == numeroQuarto) {
            reservas[i].ocupado = 1;
            printf("Check-in realizado com sucesso!\n");
            return;
        }
    }

    printf("Quarto nao encontrado ou ja ocupado.\n");
}

void realizarCheckOut(Reserva* reservas, int totalReservas) {
    int numeroQuarto;
    printf("Digite o numero do quarto para check-out: ");
    scanf("%d", &numeroQuarto);

    for (int i = 0; i < totalReservas; i++) {
        if (reservas[i].numeroQuarto == numeroQuarto && reservas[i].ocupado) {
            reservas[i].ocupado = 0;
            printf("Check-out realizado com sucesso!\n");
            return;
        }
    }

    printf("Quarto nao encontrado ou nao ocupado.\n");
}

void visualizarReservas(Reserva* reservas, int totalReservas) {
    printf("Quartos Reservados:\n");
    for (int i = 0; i < totalReservas; i++) {
        if (reservas[i].ocupado) {
            printf("Quarto %d: %s - %d dias\n", reservas[i].numeroQuarto, reservas[i].hospede, reservas[i].diasReservados);
        }
    }
}

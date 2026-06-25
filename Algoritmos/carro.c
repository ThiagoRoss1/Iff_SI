#include <stdio.h>

int main(void) {
    float tempo, velocidademedia;

    printf("Digite o tempo gasto na viagem: ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média durante a viagem: ");
    scanf("%f", &velocidademedia);

    float distancia = tempo * velocidademedia;
    float litros = distancia / 14;

    printf("Tempo gasto na viagem: %.2f horas\n", tempo);
    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Velocidade média: %.2f km/h\n", velocidademedia);
    printf("Quantidade de litros utilizados: %.2f litros\n", litros);

    return 0;
}
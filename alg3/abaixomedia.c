// Preencha um vetor de 8 posições com números digitados e mostre todos os valores que ficaram abaixo da média do vetor.
#include <stdio.h>

int main (void) {
    int numeros[8];
    float soma = 0;

    for (int i = 0; i < 8; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    float media = soma / 8;

    printf("\nNúmeros abaixo da média: ");
    for (int i = 0; i < 8; i++) {
        if (numeros[i] < media) {
            printf("%d ", numeros[i]);
        } else {
            continue;
        }
    }

    printf("\n");

    return 0;
}
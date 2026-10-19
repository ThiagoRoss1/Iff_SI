// Preencha um vetor de 8 posições com números digitados e mostre todos os valores que ficaram abaixo da média do vetor.

#include <stdio.h>

int main (void) {
    int numeros[8], soma = 0;

    printf("Digite 8 números: ");

    for (int i = 0; i < 8; i++) {
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    float media = soma / 8;

    for (int j = 0; j < 8; j++) {
        
        if (numeros[j] <= media) {
            printf("%d ", numeros[j]);
        }
    }

    printf("\n");

    return 0;
}
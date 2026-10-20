// Preencher um vetor de 8 posições e mostrar os númers pares em uma linha e ímpares na outra linha.

#include <stdio.h>

int main (void) {
    int numeros[8];

    printf("Digite os números: ");

    for (int i = 0; i < 8; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("\nPares: ");
    for (int j = 0; j < 8; j++) {
        if (numeros[j] % 2 == 0) {
            printf("%d ", numeros[j]);
        }
    }

    printf("\nÍmpares: ");
    for (int k = 0; k < 8; k++) {
        if (numeros[k] % 2 != 0) {
            printf("%d ", numeros[k]);
        }
    }

    printf("\n");

    return 0;
}
// Preencher um vetor de 8 posições e mostrar os númers pares em uma linha e ímpares na outra linha.
#include <stdio.h>

int main (void) {
    int numeros[8];

    for (int i = 0; i < 8; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros pares: ");
    for (int i = 0; i < 8; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        } else {
            continue;
        }
    }

    printf("\nNúmeros ímpares: ");
    for (int i = 0; i < 8; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
        } else {
            continue;
        }
    }

    printf("\n");

    return 0;
}
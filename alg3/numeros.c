// Preencha um vetor de 8 posições com números digitados pelo usuário. Mostre o primeiro, quinto e último valor do vetor.
#include <stdio.h>

int main(void) {
    int numeros[8];

    for (int i = 0; i < 8; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }

    printf("\n");

    printf("Primeiro número: %d\n", numeros[0]);
    printf("Quinto número: %d\n", numeros[4]);
    printf("Último número: %d\n", numeros[7]);

    return 0;
}
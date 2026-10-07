// Preencha um vetor de 7 posições com números pares consecutivos a partir de um número digitado pelo usuário.
#include <stdio.h>

int main (void) {
    int numeros[7];
    int num_inicial;

    printf("Digite um número inicial: ");
    scanf("%d", &num_inicial);

    for (int i = 0; i < 7; i++) {
        int prox_num = num_inicial + 1;

        if (prox_num % 2 == 0) {
            numeros[i] = prox_num;
            num_inicial = prox_num;
        } else {
            numeros[i] = prox_num + 1;
            num_inicial = prox_num + 1;
        }
    }

    for (int i = 0; i < 7; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
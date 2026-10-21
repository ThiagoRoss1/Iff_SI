// Preencha um vetor de 6 posições com números ímpares consecutivos em ordem decrescente, a partir de um número digitado pelo usuário. 
// Se o número digitado já for ímpar, ele é o primeiro do vetor.

#include <stdio.h>

int main (void) {
    int vetor[6];
    int num_inicial, prox_num;

    printf("Digite um numero: ");
    scanf("%d", &num_inicial);

     if (num_inicial % 2 != 0) {
        vetor[0] = num_inicial;
    } else {
        prox_num = num_inicial + 1;
        vetor[0] = prox_num;
        num_inicial++;
    }

    for (int i = 1; i < 6; i++) {
        int prox_num = num_inicial + 1;

        if (prox_num % 2 != 0) {
            vetor[i] = prox_num;
            num_inicial = prox_num;
        } else {
            vetor[i] = prox_num + 1;
            num_inicial = prox_num + 1;
        }
    }

    for (int j = 5; j >= 0; j--) {
        printf("%d ", vetor[j]);
    }

    printf("\n");

    return 0;

}
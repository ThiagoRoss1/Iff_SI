// Preencha um vetor de 7 posições com números pares consecutivos a partir de um número digitado pelo usuário.

#include <stdio.h>

int main (void) {
    int vetor[7];
    int num_inicial;

    printf("Digite o inicial: ");
    scanf("%d", &num_inicial);

    for (int i = 0; i < 7; i++) {
        int proxnum = num_inicial + 1;

        if (proxnum % 2 == 0) {
            vetor[i] = proxnum;
            num_inicial = proxnum;
        } else {
            vetor[i] = proxnum + 1;
            num_inicial = proxnum + 1;
            
            // or 
            // proxnum += 1;
            // vetor[i] = proxnum;
            // num_inicial = proxnum;
        }
    }

    for (int j = 0; j < 7; j++) {
        printf("%d ", vetor[j]);
    }

    printf("\n");

    return 0;
}
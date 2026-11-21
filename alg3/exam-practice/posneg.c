// Preencha um vetor de 10 posições com números digitados pelo usuário. Diga quantos são positivos, quantos são negativos e quantos são zero.

#include <stdio.h>

int main (void) {
    int vetor[10];
    int quant_pos = 0, quant_neg = 0, quant_zero = 0;

    printf("Digite um numero: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);

        if (vetor[i] == 0) {
            quant_zero++;
        } else if (vetor[i] > 0) {
            quant_pos++;
        } else {
            quant_neg++;
        }
    }


        printf("\nQuantidade de positivos: %d", quant_pos);
        printf("\nQuantidade de negativos: %d", quant_neg);
        printf("\nQuantidade de zeros: %d", quant_zero);
        printf("\n");


    return 0;
}
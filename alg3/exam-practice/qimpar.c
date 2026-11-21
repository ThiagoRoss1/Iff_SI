// Preencha um vetor de 9 posições e dizer quantos são ímpares e quantos são pares.

#include <stdio.h>

int main (void) {
    int vetor[9];
    int quant_par = 0, quant_impar = 0;

    printf("Digite os números: ");
    for (int i = 0; i < 9; i++) {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            quant_par++;
        } else {
            quant_impar++;
        }
    }

    printf("Quantidade de números pares: %d\n", quant_par);
    printf("Quantidade de números ímpares: %d\n", quant_impar);

    return 0;
}
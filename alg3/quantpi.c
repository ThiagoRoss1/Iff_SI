// Preencha um vetor de 9 posições e dizer quantos são ímpares e quantos são pares.
#include <stdio.h>

int main (void) {
    int numeros[9];
    int quant_impar = 0, quant_par = 0;

    for (int i = 0; i < 9; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            quant_par++;
        } else {
            quant_impar++;
        }
    }

    printf("\n");

    printf("Quantidaade de números pares: %d\n", quant_par);
    printf("Quantidade de números ímpares: %d\n", quant_impar);

    return 0;
}
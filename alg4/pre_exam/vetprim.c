#include <stdio.h>

int main(void) {
    int vetor[10], quant_primos = 0;

    printf("Digite 10 numeros: ");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Numeros primos: ");

    for (int i = 0; i < 10; i++) {
        int divisores = 0;

        for (int j = 1; j <= vetor[i]; j++) {
            if (vetor[i] % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", vetor[i]);
            quant_primos++;
            vetor[i] *= 2;
        }
    }

    printf("\nQuantidade de primos: %d\n", quant_primos);

    printf("Vetor modificado: ");

    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
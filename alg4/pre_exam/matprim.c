#include <stdio.h>

int main(void) {
    int matriz[3][3], quant_primos = 0;

    printf("Digite os 9 elementos da matriz: ");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Numeros primos: ");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            int divisores = 0;

            for (int k = 1; k <= matriz[i][j]; k++) {
                if (matriz[i][j] % k == 0) {
                    divisores++;
                }
            }

            if (divisores == 2) {
                printf("%d ", matriz[i][j]);
                quant_primos++;
                matriz[i][j] *= 2;
            }
        }
    }

    printf("\nQuantidade de primos: %d\n", quant_primos);

    printf("\nMatriz modificada:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main (void) {
    int matriz[3][3], quant_par = 0, soma = 0;

    printf("Digite os 9 elementos da matriz: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                quant_par++;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != j) {
                soma += matriz[i][j];
            }
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Quantidade de pares: %d\n", quant_par);
    printf("Soma fora da diagonal principal: %d\n", soma);

    return 0;
}

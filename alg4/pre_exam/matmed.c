#include <stdio.h>

int main (void) {
    int matriz[3][3], quant_a_m = 0;
    float soma = 0;

    printf("Digite os 9 elementos da matriz: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }

    float media = soma / 9;

    printf("\n");

    printf("Média: %.2f\n\n", media);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    printf("Elementos acima da média: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > media) {
                printf("%d ", matriz[i][j]);
                quant_a_m++;
            }
        }
    }

    printf("\n");

    printf("Quantidade: %d\n", quant_a_m);

    return 0;
}

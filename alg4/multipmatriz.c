// 14. Faça um programa capaz de realizar multiplicação entre uma matriz 4x3 por uma 3x4.

#include <stdio.h>

int main (void) {
    int matriz1[4][3];
    int matriz2[3][4];
    int matriz3[4][4];

    printf("Digite os valores da primeira matriz (4x3): ");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\n");

    printf("Digite os valores da segunda matriz (3x4): ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz3[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("Multiplicação das matrizes: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz3[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}

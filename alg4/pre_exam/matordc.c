#include <stdio.h>

int main (void) {
    int matriz[3][3];

    printf("Digite os 9 elementos da matriz: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int aux;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = j + 1; k < 3; k++) {
                if (matriz[j][i] > matriz[k][i]) {
                    aux = matriz[j][i];
                    matriz[j][i] = matriz[k][i];
                    matriz[k][i] = aux;
                }
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

    return 0;
}

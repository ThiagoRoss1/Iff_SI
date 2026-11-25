#include <stdio.h>

int main (void) {
    int matriz[3][3], soma_d_principal = 0, soma_d_secundaria = 0;

    printf("Digite os 9 elementos da matriz: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Diagonal Principal
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                soma_d_principal += matriz[i][j];
            }
        }
    }

    // Diagonal Secundária
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i + j == 2) {
                soma_d_secundaria += matriz[i][j];
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

    printf("Soma da diagonal principal: %d\n", soma_d_principal);
    printf("Soma da diagonal secundária: %d\n", soma_d_secundaria);

    printf("\n");

    return 0;
}

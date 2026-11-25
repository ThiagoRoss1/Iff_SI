#include <stdio.h>

int main (void) {
    int matriz[3][3], linha_soma = 0, coluna_soma = 0;

    printf("Digite 9 elementos da matriz: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
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

    for (int i = 0; i < 3; i++) {
        linha_soma = 0;
        coluna_soma = 0;
        for (int j = 0; j < 3; j++) {
            linha_soma += matriz[i][j];
            coluna_soma += matriz[j][i];
        }

        printf("Soma da Linha %d: %d\n", i + 1, linha_soma);
        printf("Soma da coluna %d: %d\n", i + 1, coluna_soma);
        printf("\n");
    }

    printf("\n");

    return 0;
}

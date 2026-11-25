#include <stdio.h>

int main (void) {
    int matriz[3][3], quant_alt = 0;

    printf("Digite os 9 elementos da matriz: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] < 0) {
                matriz[i][j] = 0;
                quant_alt++;
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

    printf("Quantidade de alterações: %d\n", quant_alt);

    return 0;
}

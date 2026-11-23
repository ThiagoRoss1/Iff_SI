// 13. Preencha uma matriz 6x6 de inteiros com números digitados pelo usuário e exiba a média da diagonal principal e a
// soma da diagonal secundária.

#include <stdio.h>

int main (void) {
    int matriz[6][6], somasec = 0;
    float somaprinc = 0;

    printf("Digite 36 números: ");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);

            if (i == j) {
                somaprinc += matriz[i][j];
            }

            if (i + j == 5) {
                somasec += matriz[i][j];
            }
        }
    }

    float mediaprin = somaprinc / 6;

    printf("Média da principal: %.2f\n", mediaprin);
    printf("Soma da secundária: %d\n", somasec);

    return 0;
}
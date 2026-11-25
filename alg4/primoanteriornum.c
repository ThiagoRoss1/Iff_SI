// Preencha um vetor de inteiros de 11 posições com números digitados pelo usuário e:
// 4. Alterar cada valor do vetor número primo anterior daquele valor.

#include <stdio.h>

int main (void) {
    int nums[11];

    printf("Digite 11 números: ");
    for (int i = 0; i < 11; i++) {
        scanf("%d", &nums[i]);
    }

    for (int j = 0; j < 11; j++) {
        int anterior = nums[j] - 1;
        int primo = 0;

        while (anterior >= 2 && primo == 0) {
            int quant_divisores = 0;

            for (int k = 1; k <= anterior; k++) {
                if (anterior % k == 0) {
                    quant_divisores++;
                }
            }

            if (quant_divisores == 2) {
                nums[j] = anterior;
                primo = 1;
            } else {
                anterior--;
            }
        }
    }

    printf("Vetor alterado: ");
    for (int l = 0; l < 11; l++) {
        printf("%d ", nums[l]);
    }
    printf("\n");

    return 0;
}

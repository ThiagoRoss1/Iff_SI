// Preencha um vetor de inteiros de 11 posições com números digitados pelo usuário e:
// 6. Ordene o vetor em ordem decrescente e mostre o vetor.

#include <stdio.h>

int main (void) {
    int nums[11];
    int aux;

    printf("Digite 11 números: ");
    for (int i = 0; i < 11; i++) {
        scanf("%d", &nums[i]);
    }

    for (int j = 0; j < 11; j++) {
        for (int k = j + 1; k < 11; k++) {
            if (nums[j] < nums[k]) {
                aux = nums[j];
                nums[j] = nums[k];
                nums[k] = aux;
            }
        }
    }

    printf("Vetor decrescente: ");
    for (int l = 0; l < 11; l++) {
        printf("%d ", nums[l]);
    }
    printf("\n");

    return 0;
}

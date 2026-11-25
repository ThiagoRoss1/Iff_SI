// Preencha um vetor de inteiros de 11 posições com números digitados pelo usuário e:
// 5. Faça com que o vetor só possua números pares (transformando apenas os números ímpares no respectivo dobro).

#include <stdio.h>

int main (void) {
    int nums[11];

    printf("Digite 11 números: ");
    for (int i = 0; i < 11; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Vetor apenas com pares: ");
    for (int j = 0; j < 11; j++) {
        if (nums[j] % 2 != 0) {
            nums[j] *= 2;
        }

        printf("%d ", nums[j]);
    }
    printf("\n");

    return 0;
}

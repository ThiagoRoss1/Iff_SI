// Preencha um vetor de inteiros de 11 posições com números digitados pelo usuário e:
// 1. Peça ao usuário que digite 2 números referentes a duas posições do vetor. Calcule a média dos números entre as posições
// digitadas (inclusive as digitadas).

#include <stdio.h>

int main (void) {
    int nums[11];
    float soma = 0;
    int ini, fim;

    printf("Digite 11 números: ");
    for (int i = 0; i < 11; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Digite 2 números equivalentes à posição do vetor: ");
    scanf("%d %d", &ini, &fim);

    for (int j = ini; j <= fim; j++) {
        soma += nums[j];
    }

    float media = soma / (fim - ini + 1);

    printf("Média: %.2f\n", media);

    return 0;
}

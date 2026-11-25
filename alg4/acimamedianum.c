// Preencha um vetor de inteiros de 11 posições com números digitados pelo usuário e:
// 3. Mostre os valores do vetor que estiverem acima da média do vetor.

#include <stdio.h>

int main (void) {
    int nums[11];
    float soma = 0;

    printf("Digite 11 números: ");
    for (int i = 0; i < 11; i++) {
        scanf("%d", &nums[i]);
        soma += nums[i];
    }

    float media_vetor = soma / 11;

    printf("Média do vetor: %.2f\n", media_vetor);

    printf("Números acima da média do vetor: ");
    for (int j = 0; j < 11; j++) {
        if (nums[j] > media_vetor) {
            printf("%d ", nums[j]);
        }
    }
    printf("\n");

    return 0;
}

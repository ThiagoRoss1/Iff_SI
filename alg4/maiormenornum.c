// Preencha um vetor de inteiros de 11 posições com números digitados pelo usuário e:
// 2. Mostre o menor e o maior valor do vetor e a quantidade de números impares e de pares.

#include <stdio.h>

int main (void) {
    int nums[11];
    int maior, menor, quant_imp = 0, quant_par = 0;

    printf("Digite 11 números: ");
    for (int i = 0; i < 11; i++) {
        scanf("%d", &nums[i]);
    }

    maior = nums[0];
    menor = nums[0];

    for (int j = 0; j < 11; j++) {
        if (nums[j] > maior) {
            maior = nums[j];
        }

        if (nums[j] < menor) {
            menor = nums[j];
        }

        if (nums[j] % 2 == 0) {
            quant_par++;
        } else {
            quant_imp++;
        }
    }

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Quantidade de pares: %d\n", quant_par);
    printf("Quantidade de ímpares: %d\n", quant_imp);

    return 0;
}

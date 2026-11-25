// Faça um programa em C que leia um vetor de 10 números inteiros e apresente:
// - O maior e o menor valor.

#include <stdio.h>

int main (void) {
    int vetor[10];
    float soma = 0;
    int quant_a_m = 0;

    printf("Digite 10 numeros: ");
    for (int i = 0; i < 10; i ++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    int maior = vetor[0], menor = vetor[0], pos_maior = 0, pos_menor = 0;

    for (int i = 0; i < 10; i++) {
        if (maior < vetor[i]) {
            maior = vetor[i];
            pos_maior = i;
        }

        if (menor > vetor[i]) {
            menor = vetor[i];
            pos_menor = i;
        }
    }

    float media = soma / 10;

    printf("Maior valor: %d na posição: %d\n", maior, pos_maior);
    printf("Menor valor: %d na posição: %d\n", menor, pos_menor);
    printf("Média do vetor: %.2f\n", media);

    printf("Elementos acima da média: ");
        for (int j = 0; j < 10; j++) {
            if (vetor[j] > media) {
                printf("%d ", vetor[j]);
                quant_a_m++;
        }
    }
    printf("\n");

    printf("Quantidade de elementos acima da média: %d", quant_a_m);

    printf("\n");

    return 0;
}

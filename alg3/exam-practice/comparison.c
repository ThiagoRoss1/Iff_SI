// Preencha um vetor de 8 inteiros digitados pelo usuário (podem ser negativos). Depois:
// mostre os valores acima da média;
// diga quantos valores são exatamente iguais à média;
// diga quantos são negativos.

#include <stdio.h>

int main (void) {
    int vetor[8];
    int iguais = 0, negativos = 0;
    float soma = 0;


    printf("Digite um valor: ");

    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);

        soma += vetor[i];

        if (vetor[i] < 0) {
            negativos++;
        }
    }

    float media = soma / 8;

    printf("\nValores acima da media: ");
    for (int j = 0; j < 8; j++) {
        if (vetor[j] == media) {
            iguais++;
        }

        if (vetor[j] > media) {
            printf("%d ", vetor[j]);
        }
        
    }

    printf("\nQuantidade de valores iguais a media: %d", iguais);
    printf("\nQuantidade de negativos: %d", negativos);

    printf("\n");

    return 0;
}
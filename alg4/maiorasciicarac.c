// Utilize um vetor de caracteres para ler uma palavra e:
// 8. Mostre qual a posição do vetor que está o maior valor da tabela ascii.

#include <stdio.h>

int main (void) {
    char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    char maior = palavra[0];
    int posicao = 0;

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] > maior) {
            maior = palavra[i];
            posicao = i;
        }
    }

    printf("Posição do maior valor na tabela ASCII: Palavra[%d]\n", posicao);

    return 0;
}

// 7. Criar um vetor de caracteres de 15 posições e preencher com as letras de uma palavra (uma letra em cada posição). 
// Pedir o usuário para digitar * ao terminar de digitar a palavra. Exibir o vetor até o *. - Sem usar break.

#include <stdio.h>

int main (void) {
    char palavras[15];
    char letra = '\0';

    printf("Digite a palavra: ");

    for (int i = 0; i < 15 && letra != '*'; i++) {
        scanf(" %c", &letra);
        palavras[i] = letra;
    }

    printf("A palavra digitada foi: ");
    for (int j = 0; j < 15 && palavras[j] != '*'; j++) {
        printf("%c", palavras[j]);
    }

    printf("\n");

    return 0;
}
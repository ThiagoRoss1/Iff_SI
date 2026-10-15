// 7. Criar um vetor de caracteres de 15 posições e preencher com as letras de uma palavra (uma letra em cada posição). 
//  Pedir o usuário para digitar * ao terminar de digitar a palavra. Exibir o vetor até o *.

#include <stdio.h>

int main (void) {
    char palavra[15];
    char letra = '\0';

    printf("Digite uma palavra: ");

    for (int i = 0; i < 15  && letra != '*'; i++) {
        scanf(" %c", &letra);
        palavra[i] = letra;
    }

    printf("A palavra digitada foi: ");

    for (int j = 0; j < 15 && palavra[j] != '*'; j++) {
        printf("%c", palavra[j]);
    }

    printf("\n");

    return 0;
}
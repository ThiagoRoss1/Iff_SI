// Preencha um vetor de 5 letras digitadas pelo usuarios
#include <stdio.h>

int main (void) {
    char letras[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite a letra: ");
        scanf(" %c", &letras[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%c ", letras[i]);
    }

    printf("\n");

    return 0;
}
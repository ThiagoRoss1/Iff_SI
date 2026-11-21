// Crie um vetor de caracteres de 20 posições. O usuário digita letras uma a uma e termina com #. Sem usar break:
// mostre a palavra na ordem;
// mostre a palavra de trás pra frente (sem o #);
// peça uma letra ao usuário e diga quantas vezes ela aparece na palavra.

#include <stdio.h>

int main (void) {
    char vetor[20];
    char letra = '\0';
    char letra_usuario;
    int tamanho = 0, vezes = 0;

    printf("Digite a palavra: ");

    for (int i = 0; i < 20 && letra != '#'; i++) {
        scanf(" %c", &letra);
        vetor[i] = letra;
        tamanho++;
    }

    for (int j = 0; j < 20 && vetor[j] != '#'; j++) {
        printf("%c", vetor[j]);
    }

    printf("\n");

    for (int j = tamanho - 1; j >= 0; j--) {
        if (vetor[j] != '#') {
            printf("%c", vetor[j]);
        }
    }

    printf("\n");

    printf("Digite uma letra: ");
    scanf(" %c", &letra_usuario);
    
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == letra_usuario) {
            vezes++;
        }
    }

    printf("A letra %c aparece %d vezes.", letra_usuario, vezes);

    printf("\n");

    return 0;
}
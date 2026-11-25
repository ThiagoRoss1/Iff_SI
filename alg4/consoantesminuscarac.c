// Utilize um vetor de caracteres para ler uma palavra e:
// 12. Transforme todas as consoantes em letras minúsculas.

#include <stdio.h>

int main (void) {
    char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z' && palavra[i] != 'A' && palavra[i] != 'E' && palavra[i] != 'I' && palavra[i] != 'O' && palavra[i] != 'U') {
            palavra[i] += 32;
        }
    }

    printf("Consoantes minúsculas: ");
    for (int j = 0; palavra[j] != '\0'; j++) {
        printf("%c", palavra[j]);
    }
    printf("\n");

    return 0;
}

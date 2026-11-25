// Utilize um vetor de caracteres para ler uma palavra e:
// 10. Trocar consoantes da palavra por letras maiúsculas.

#include <stdio.h>

int main (void) {
    char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] >= 'a' && palavra[i] <= 'z' && palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u') {
            palavra[i] -= 32;
        }
    }

    printf("Consoantes maiúsculas: ");
    for (int j = 0; palavra[j] != '\0'; j++) {
        printf("%c", palavra[j]);
    }
    printf("\n");

    return 0;
}

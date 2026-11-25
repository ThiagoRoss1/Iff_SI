// Utilize um vetor de caracteres para ler uma palavra e:
// 9. Ordene as letras em ordem alfabética.

#include <stdio.h>

int main (void) {
    char palavra[30];
    char aux;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        for (int j = i + 1; palavra[j] != '\0'; j++) {
            int letra1 = palavra[i];
            int letra2 = palavra[j];

            if (letra1 >= 'A' && letra1 <= 'Z') {
                letra1 += 32;
            }

            if (letra2 >= 'A' && letra2 <= 'Z') {
                letra2 += 32;
            }

            if (letra1 > letra2) {
                aux = palavra[i];
                palavra[i] = palavra[j];
                palavra[j] = aux;
            }
        }
    }

    printf("Letras em ordem alfabética: ");
    for (int k = 0; palavra[k] != '\0'; k++) {
        printf("%c", palavra[k]);
    }
    printf("\n");

    return 0;
}

// Utilize um vetor de caracteres para ler uma palavra e:
// 7. Mostre qual letra aparece mais vezes.

#include <stdio.h>

int main (void) {
    char palavra[30];
    int contador = 0, frequencia = 0;
    char letra_frequente;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            palavra[i] += 32;
        }
    }

    for (int j = 0; palavra[j] != '\0'; j++) {
        contador = 1;
        for (int k = j + 1; palavra[k] != '\0'; k++) {
            if (palavra[j] == palavra[k]) {
                contador++;
            }
        }

        if (contador > frequencia) {
            frequencia = contador;
            letra_frequente = palavra[j];
        }
    }

    printf("Letra que aparece mais vezes: %c\n", letra_frequente);

    return 0;
}

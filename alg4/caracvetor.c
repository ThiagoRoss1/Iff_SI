// Utilize um vetor de caracteres para ler uma palavra e:
// 7. Mostre qual letra aparece mais vezes.
// 8. Mostre qual a posição do vetor que está o maior valor da tabela ascii.
// 9. Ordene as letras em ordem alfabética.
// 10. Trocar consoantes da palavra por letras maiúsculas.
// 11. Mostre quantas vogais distintas aparecem na palavra.
// 12. Transforme todas as consoantes em letras mainúsculas.

#include <stdio.h>

int main (void) {
    char palavra[30];
    int contador = 0, frequencia = 0;
    char letra_frequente;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // 7.
    char frequentes[30];
    int m;

    for (m = 0; palavra[m] != '\0'; m++) {
        frequentes[m] = palavra[m];

        if (frequentes[m] >= 'A' && frequentes[m] <= 'Z') {
            frequentes[m] += 32;
        }
    }
    frequentes[m] = '\0';

    printf("7. Letra que aparece mais vezes: ");
    for (int i = 0; frequentes[i] != '\0'; i++) {
        contador = 1;
        for (int j = i + 1; frequentes[j] != '\0'; j++) {
            if (frequentes[i] == frequentes[j]) {
                contador++;
            }
        }

        if (contador > frequencia) {
            frequencia = contador;
            letra_frequente = frequentes[i];
        }
    }

    printf("%c\n", letra_frequente);

    printf("\n");

    // 8.
    char maior = palavra[0];
    int posicao = 0;

    printf("8. Posição do maior valor na tabela ASCII: ");
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] > maior) {
            maior = palavra[i];
            posicao = i;
        }
    }

    printf("Palavra[%d]\n", posicao);

    printf("\n");

    // 9.
    char alfabetica[30];
    int i;
    char aux;

    printf("9. Ordene as letra sem ordem alfabética: ");
    // Copia
    for (i = 0; palavra[i] != '\0'; i++) {
        alfabetica[i] = palavra[i];
    }

    alfabetica[i] = '\0';

    for (int i = 0; alfabetica[i] != '\0'; i++) {
        for (int j = i + 1; alfabetica[j] != '\0'; j++) {
            int letra1 = alfabetica[i];
            int letra2 = alfabetica[j];

            if (letra1 >= 'A' && letra1 <= 'Z') {
                letra1 += 32;
            }

            if (letra2 >= 'A' && letra2 <= 'Z') {
                letra2 += 32;
            }

            if (letra1 > letra2) {
                aux = alfabetica[i];
                alfabetica[i] = alfabetica[j];
                alfabetica[j] = aux;
            }
        }
    }

    for (int i = 0; alfabetica[i] != '\0'; i++) {
        printf("%c", alfabetica[i]);
    }
    printf("\n");

    printf("\n");

    // 10.
    printf("10. Trocar consoantes da palavra por letras maiúsculas: ");

    char maiusculas[30];
    int j;

    // Copia
    for (j = 0; palavra[j] != '\0'; j++) {
        maiusculas[j] = palavra[j];
    }

    maiusculas[j] = '\0';

    for (int i = 0; maiusculas[i] != '\0'; i++) {
        if (maiusculas[i] >= 'a' && maiusculas[i] <= 'z' && maiusculas[i] != 'a' && maiusculas[i] != 'e' && maiusculas[i] != 'i' && maiusculas[i] != 'o' && maiusculas[i] != 'u') {
            maiusculas[i] -= 32;
        }
    }

    for (int j = 0; maiusculas[j] != '\0'; j++) {
        printf("%c", maiusculas[j]);
    }
    printf("\n");

    printf("\n");

    // 11.
    char distintas[30];
    int k, quant_v_distintas = 0;

    // Copia
    for (k = 0; palavra[k] != '\0'; k++) {
        distintas[k] = palavra[k];

        if (distintas[k] >= 'A' && distintas[k] <= 'Z') {
            distintas[k] += 32;
        }
    }

    distintas[k] = '\0';

    printf("11. Mostre quantas vogais distintas aparecem na palavra: ");
    for (int i = 0; distintas[i] != '\0'; i++) {
        if (distintas[i] == 'a' || distintas[i] == 'e' || distintas[i] == 'i' || distintas[i] == 'o' || distintas[i] == 'u') {

            int repetida = 0;

            for (int j = 0; j < i; j++) {
                if (distintas[i] == distintas[j]) {
                    repetida = 1;
                }
            }

            if (repetida == 0) {
                quant_v_distintas++;
            }
        }
    }
    printf("%d\n", quant_v_distintas);

    printf("\n");

    // 12.
    printf("12. Transforme todas as consoantes em letras minúsculas: ");

    char minusculas[30];
    int l;

    // Copia
    for (l = 0; palavra[l] != '\0'; l++) {
        minusculas[l] = palavra[l];
    }

    minusculas[l] = '\0';

    for (int i = 0; minusculas[i] != '\0'; i++) {
        if (minusculas[i] >= 'A' && minusculas[i] <= 'Z' && minusculas[i] != 'A' && minusculas[i] != 'E' && minusculas[i] != 'I' && minusculas[i] != 'O' && minusculas[i] != 'U') {
            minusculas[i] += 32;
        }
    }

    for (int j = 0; minusculas[j] != '\0'; j++) {
        printf("%c", minusculas[j]);
    }
    printf("\n");




}
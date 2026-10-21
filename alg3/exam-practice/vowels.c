// Crie um vetor de 15 caracteres. O usuário digita letras minúsculas uma a uma e termina com .. Sem usar break:`
// mostre a palavra;
// diga quantas vogais ela tem (a, e, i, o, u);
// mostre a palavra trocando cada vogal por *.

#include <stdio.h>

int main (void) {
    char vetor[15];
    char letra = '\0';
    int quant_vogais = 0;
    // char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    printf("Digite uma palavra: ");
    for (int i = 0; i < 15 && letra != '.'; i++) {
        scanf(" %c", &letra);
        vetor[i] = letra;

        // if (vetor[i] == 'a' || vetor[i] == 'e' || vetor[i] == 'i' || vetor[i] == 'o' || vetor[i] == 'u') {
        //     quant_vogais++;
        // } could have been also here.
    }

    for (int j = 0; j < 15 && vetor[j] != '.'; j++) {
        if (vetor[j] == 'a' || vetor[j] == 'e' || vetor[j] == 'i' || vetor[j] == 'o' || vetor[j] == 'u') {
            quant_vogais++;
        }

        printf("%c", vetor[j]);
    }

    printf("\n");

    for (int k = 0; k < 15 && vetor[k] != '.'; k++) {
        if (vetor[k] == 'a' || vetor[k] == 'e' || vetor[k] == 'i' || vetor[k] == 'o' || vetor[k] == 'u') {
            vetor[k] = '*';
        }

        printf("%c", vetor[k]);

        // Can also be like this (replaces the if + printf above) - the method below doesn't alter the array (vetor[15]) and only prints the * instead of a vowel, can be used when
        // asked to print the original word after these changes by not affecting the array.
        // if (vetor[k] == 'a' || ... ) {
        //     printf("*");
        // } else {
        //     printf("%c", vetor[k]);
        // }
    }

    printf("\n");

    printf("Quantidade de vogais: %d", quant_vogais);

    printf("\n");

    return 0;
}
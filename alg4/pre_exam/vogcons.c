#include <stdio.h>

int main (void) {
    char palavra[31];
    int quant_v = 0, quant_con = 0;
    // += 32

    printf("Digite uma palavra: ");
    scanf("%30s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            quant_v++;
        } else {
            quant_con++;
        }
    }

    for (int j = 0; palavra[j] != '\0'; j++) {
        if (palavra[j] != 'a' && palavra[j] != 'e' && palavra[j] != 'i' && palavra[j] != 'o' && palavra[j] != 'u') {
            palavra[j] -= 32;
        }
    }

    printf("Quantidade de Vogais: %d\n", quant_v);
    printf("Quantidade de Consoantes: %d\n", quant_con);
    
    printf("Palavra com consoantes maiúsculas: ");
    for (int k = 0; palavra[k] != '\0'; k++) {
        printf("%c", palavra[k]);
    }
    printf("\n");
    printf("\n");

    return 0;
}

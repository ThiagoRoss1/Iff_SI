// Utilize um vetor de caracteres para ler uma palavra e:
// 11. Mostre quantas vogais distintas aparecem na palavra.

#include <stdio.h>

int main (void) {
    char palavra[30];
    int quant_v_distintas = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            palavra[i] += 32;
        }
    }

    for (int j = 0; palavra[j] != '\0'; j++) {
        if (palavra[j] == 'a' || palavra[j] == 'e' || palavra[j] == 'i' || palavra[j] == 'o' || palavra[j] == 'u') {

            int repetida = 0;

            for (int k = 0; k < j; k++) {
                if (palavra[j] == palavra[k]) {
                    repetida = 1;
                }
            }

            if (repetida == 0) {
                quant_v_distintas++;
            }
        }
    }

    printf("Quantidade de vogais distintas: %d\n", quant_v_distintas);

    return 0;
}

#include <stdio.h>

int main (void) {
    int quant, maior, valor;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &quant);

    for (int i = 0; i < quant; i++) {
        printf("Digite o valor: ");
        scanf("%d", &valor);

        if (i == 0) {
            maior = valor;
        } else if (valor > maior) {
            maior = valor;
        }
    }

    printf("O maior valor digitado foi: %d\n", maior);

    return 0;
}
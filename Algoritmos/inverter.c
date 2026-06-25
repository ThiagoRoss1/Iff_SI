#include <stdio.h>

int main(void) {
    int negativo = 0, numero, x1, x2, x3;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        negativo = 1;
        numero = -numero;
    }

    x1 = numero % 10;
    x2 = (numero / 10) % 10;
    x3 = numero / 100;

    if (negativo == 1) {
        printf("-");
    }

    printf("%d%d%d\n", x1, x2, x3);

    return 0;
}
#include <stdio.h>

int main(void) {
    float temperatura, conversao;
    char medida;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    do {
    printf("Para qual medida você quer converter? Digite 'C' para Celsius e F para Fahrenheit: ");
    scanf(" %c", &medida);
    } while (medida != 'C' && medida != 'c' && medida != 'F' && medida != 'f');

    if (medida == 'C' || medida == 'c') {
        conversao = (temperatura - 32) * 5 / 9;
    } else {
        conversao = (temperatura * 9 / 5) + 32;
    }

    printf("Temperatura convertida para %c: %.2f\n", medida, conversao);

    return 0;
}
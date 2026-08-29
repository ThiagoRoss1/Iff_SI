// Celsius → Fahrenheit: F = C * 9/5 + 32
// Fahrenheit → Celsius: C = (F - 32) * 5/9

#include <stdio.h>

int main (void) {
    char c;
    float temp, conversao;

    printf("Qual a conversão ? C para Celsius F para Fahreinheit: ");
    scanf(" %c", &c);

    printf("Qual a temperatura a ser convertida: ");
    scanf("%f", &temp);

     if (c == 'C' || c == 'c') {
        conversao = (temp - 32) * 5 / 9;
    } else if (c == 'F' || c == 'f') {
        conversao = temp * 9 / 5 + 32;
    } else {
        printf("Digite uma conversão válida");
        return 1;
    }

    printf("Temperatura convertida para %c: %.2f", c, conversao);

    return 0;

}
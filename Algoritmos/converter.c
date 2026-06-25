#include <stdio.h>

int main(void) {
    float fahrenheit, kelvin;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;

    printf("Temperatura em Kelvin: %.2f\n", kelvin);

    return 0;
}
#include <stdio.h>

int main(void) {
    int lado1, lado2, lado3;

    printf("Digite os três lados do triângulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1) {
        printf("Os lados não formam um triângulo\n");
    } else if (lado1 == lado2 && lado2 == lado3) {
        printf("O triângulo é equilátero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triângulo é isósceles\n");
    } else {
        printf("O triângulo é escaleno\n");
    }

    return 0;
}
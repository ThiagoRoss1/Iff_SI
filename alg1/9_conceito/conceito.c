#include <stdio.h>

int main(void) {
// Desenvolva um algoritmo que, dada uma nota de 0 a 10, mostre o conceito relativo à nota, segundo a legenda a seguir
// (0 a 2 = E, 2 a 4 = D, 4 a 6 = C, 6 a 8 = B e 8 a 10 = A).

    float nota;

    printf("Digite a nota (0 a 10): ");
    scanf("%f", &nota);

    if (nota >= 0 && nota < 2) {
        printf("E\n");
    } else if (nota >= 2 && nota < 4) {
        printf("D\n");
    } else if (nota >= 4 && nota < 6) {
        printf("C\n");
    } else if (nota >= 6 && nota < 8) {
        printf("B\n");
    } else {
        printf("A\n");
    }

    return 0;
}
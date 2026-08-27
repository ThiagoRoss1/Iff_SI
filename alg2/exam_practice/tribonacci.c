#include <stdio.h>

int main (void) {
    int n, a = 0, b = 0, c = 1, fib;

    printf("Digite o número de termos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Inválido\n");
        return 1;
    }

    if (n == 1) {
        fib = a;
    } else if (n == 2) {
        fib = b;
    } else if (n == 3) {
        fib = c;
    } else {

        for (int i = 4; i <= n; i++) {
            fib = a + b + c;
            a = b;
            b = c;
            c = fib;
        }
    }

    printf("O enésimo termo é: %d\n", fib);

    return 0;
}
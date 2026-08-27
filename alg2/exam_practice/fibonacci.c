#include <stdio.h>

int main (void) {
    int n, a = 0, b = 1, c;

    printf("Digite o número de termos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Inválido\n");
        return 1;
    }

    for (int i = 0; i <= n; i++) {
        if (i <= 1) {
            c = i;
        } else {
            c = a + b;
            a = b;
            b = c;
        }
    }

    printf("O enésimo termo é: %d\n", c);
    return 0;
}
#include <stdio.h>

int main (void) {
    int n, maior;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Digite um número válido\n");
        return 1;
    }

    maior = n;

    while (n != 0) {
        printf("Digite o próximo número: ");
        scanf("%d", &n);

        if (n != 0) {
            if (n > maior) {
                maior = n;
            }
        }
    }

    printf("O maior número foi: %d\n", maior);

    return 0;
}
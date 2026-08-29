#include <stdio.h>

int main (void) {
    int n, primo = 1;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n < 2) {
        primo = 0;
        return 1;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primo = 0;
            // break; - 0(n)
        }
    }

    if (primo == 1) {
        printf("O número é primo\n");
    } else {
        printf("O número não é primo.\n");
    }

    return 0;
}
#include <stdio.h>

int main(void) {
    int a = 0, b = 1, c, n;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        if (i <= 1) {
            c = i;
        } else {
            c = a + b;
            a = b;
            b = c;
        }
    }

    printf("O enésimo termo da sequência de Fibonacci é: %d\n", c);
    
    return 0;
}
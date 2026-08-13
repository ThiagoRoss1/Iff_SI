#include <stdio.h>

int main(void) {
    int n1,n2,n3, maior;

    printf("Digite 3 números inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3) {
        maior = n1;
    } else if (n2 > n1 && n2 > n3) {
        maior = n2;
    } else {
        maior = n3;
    }

    printf("O maior número é %d\n", maior);

    return 0;
}
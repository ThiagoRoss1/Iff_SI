#include <stdio.h>

int main(void) {
    int x, y, z;
    int maior, meio, menor;

    printf("Digite 3 números inteiros: ");
    scanf("%d %d %d", &x, &y, &z);
    
    if (x >= y && x >= z) {
        maior = x;
        if (y > z) {
            meio = y;
            menor = z;
        } else {
            meio = z;
            menor = y;
        }
    }

    if (y >= x && y >= z) {
        maior = y;
        if (x > z) {
            meio = x;
            menor = z;
        } else {
            meio = z;
            menor = x;
        }
    }

    if (z >= x && z >= y) {
        maior = z;
        if (x > y) {
            meio = x;
            menor = y;
        } else {
            meio = y;
            menor = x;
        }
    }

    printf("Ordem crescente: %d, %d, %d\n", menor, meio, maior);

    return 0;
}
#include <stdio.h>

int main(void) {
    int total, base, sobra, carro1, carro2, carro3;

    printf("Quantas pessoas irão nos carros ? ");
    scanf("%d", &total);

    base = total / 3;
    sobra = total % 3;

    carro1 = base;
    carro2 = base;
    carro3 = base;

    if (sobra >= 1) {
        carro1++;
    }
    
    if (sobra >= 2) {
        carro2++;
    }

    printf("Irão: %d,%d,%d\n", carro1, carro2, carro3);

    return 0;
}
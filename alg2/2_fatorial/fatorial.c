#include <stdio.h>

int main(void) {
    int num, fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Número inválido.\n");
        return 1;
    }

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    printf("%d! = %d\n", num, fatorial);
    
    return 0;
}
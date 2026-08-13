#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        if (n > 0) {
            printf("O número é par e positivo\n");
        } else if (n < 0) {
            printf("O número é par e negativo\n");
        } else {
            printf("O número é par e nem negativo nem positivo (0)\n");
        }
    } else {
        if (n > 0) {
            printf("O número é ímpar e positivo\n");
        } else {
            printf("O número é impar e negativo\n");
        }
    }

    return 0;
}
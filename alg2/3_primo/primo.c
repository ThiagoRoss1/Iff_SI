#include <stdio.h>

int main(void) {
    int num, primo = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 2) {
        primo = 0;
    } else {

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo == 1) {
        printf("%d É primo.\n", num);
    } else {
        printf("%d Não é primo.\n", num);
    }
}
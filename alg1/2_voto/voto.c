#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        if (idade >= 70) {
            printf("Voto facultativo\n");
        } else {
            printf("Voto obrigatório\n");
        }
    } else if (idade >= 16) {
        printf("Voto facultativo\n");
    } else {
        printf("Não pode votar\n");
    }

    return 0;
}
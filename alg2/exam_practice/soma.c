// Exercício: Faça um programa que leia números digitados pelo usuário e exiba a soma de todos eles. 
// O programa para quando o usuário digitar 0 (sem usar break).

#include <stdio.h>

int main (void) {
    int n, soma = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &n);
    soma += n;

    while (n != 0) {
        printf("Digite o próximo numero a ser somado: ");
        scanf("%d", &n);
        soma += n;
    }

    printf("Resultado: %d\n", soma);

    return 0;
}
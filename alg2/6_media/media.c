#include <stdio.h>

int main (void) {
    float n, quant = 0, soma = 0;

    printf("Digite o primeiro número: ");
    scanf("%f", &n);

    if (n == 0) {
        printf("Nenhum número válido foi digitado.\n");
        return 0;
    } else {
        soma += n;
        quant++;
    }

    while (n != 0) {
        printf("Digite o próximo número: ");
        scanf("%f", &n);

        if (n != 0) {
            soma += n;
            quant++;
        }
    }
    
    float media = soma / quant;
    printf("A média dos números digitados é: %.2f\n", media); 

    return 0;
}
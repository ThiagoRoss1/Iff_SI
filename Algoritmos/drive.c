#include <stdio.h>

int main(void) {
    int idade;
    int temCarteira;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Tem carteira ? (1 para sim, outro número para não): ");
    scanf("%d", &temCarteira);

    if (idade >= 18 && temCarteira == 1)
    {
        printf("Pode dirigir\n");
    }
    else
    {
        printf("Não pode dirigir\n");
    }
    
    return 0;
}
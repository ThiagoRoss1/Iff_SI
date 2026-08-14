#include <stdio.h>

int main(void) {
    float n1, n2, n3, p1, p2, p3;

    printf("Digite suas 3 notas, respectivamente: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Digite os pesos das 3 notas, respectivamente: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    float media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);

    printf("Média ponderada das notas: %.2f\n", media);

    if (media >= 6) {
        printf("Você passou\n");
    } else if (media >= 3 && media < 6) {
        printf("Você ficou de recuperação\n");
    } else {
        printf("Você foi reprovado direto\n");
    }

    return 0;
}
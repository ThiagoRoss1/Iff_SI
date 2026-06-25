#include <stdio.h>

int main(void) {
    float basemaior, basemenor, altura, area;

    printf("Digite a base maior do trapézio: ");
    scanf("%f", &basemaior);

    printf("Digite a base menor do trapézio: ");
    scanf("%f", &basemenor);

    printf("Digite a altura do trapézio: ");
    scanf("%f", &altura);

    area = (basemaior + basemenor)  * altura / 2;

    printf("A área do trapézio é: %.2f\n", area);

    return 0;
}
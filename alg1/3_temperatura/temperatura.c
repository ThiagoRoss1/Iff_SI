#include <stdio.h>

int main(void) {
    float temperatura;

    printf("Digite a temperatura da água: ");
    scanf("%f", &temperatura);

    if (temperatura <= 0) {
        printf("A água está no estado sólido\n");
    } else if (temperatura > 0 && temperatura < 100) {
        printf("A água está no estado líquido\n");
    } else {
        printf("A água está no estado gasoso\n");
    }

    return 0;
}
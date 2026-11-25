#include <stdio.h>

int main (void) {
    int matriz[3][3], soma = 0;

    printf("Digite 9 elementos da matriz: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    int maior = matriz[0][0], maior_linha = 1, maior_col = 1;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                maior_linha = i + 1;
                maior_col = j + 1;
            }
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Soma: %d\n", soma);
    printf("Maior valor: %d, Encontrado na linha %d, Coluna %d\n", maior, maior_linha, maior_col);

    return 0;
}

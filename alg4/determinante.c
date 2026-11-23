// 15. Preencha uma matriz de inteiros 3x3 com números digitados pelo usuário e calcule sua determinante.

#include <stdio.h>

int main (void) {
    int matriz[3][3], determinante = 0;

    printf("Digite os elementos da matriz: ");
    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
       }
    }

    printf("Determinante dessa matriz: ");

    int primp = matriz[0][0] * matriz[1][1] * matriz[2][2];
    int segp = matriz[0][1] * matriz[1][2] * matriz[2][0];
    int terp = matriz[0][2] * matriz[1][0] * matriz[2][1];
    int quap = matriz[0][2] * matriz[1][1] * matriz[2][0];
    int quip = matriz[0][1] * matriz[1][0] * matriz[2][2];
    int sexp = matriz[0][0] * matriz[1][2] * matriz[2][1];

    determinante = primp + segp + terp - quap - quip - sexp;

    printf("%d\n", determinante);

    return 0;
}

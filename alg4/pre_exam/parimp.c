#include <stdio.h>

int main (void) {
    int vetor[10], quant_par = 0, quant_impar = 0;

    printf("Digite 10 números: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int j = 0; j < 10; j++) {
        if (vetor[j] % 2 == 0) {
            quant_par++;
        } else {
            quant_impar++;
        }
    }

    for (int k = 0; k < 10; k++) {
        if (vetor[k] % 2 != 0) {
            vetor[k] *= 2;
        }
    }


    int aux;

    for (int m = 0; m < 10; m++) {
        for (int n = m + 1; n < 10; n++) {
            if (vetor[n] > vetor[m]) {
                aux = vetor[n];
                vetor[n] = vetor[m];
                vetor[m] = aux;
            }
        }
    }
    
    printf("Quantidade de pares: %d\n", quant_par);
    printf("Quantidade de ímpares: %d\n", quant_impar);

    printf("Vetor em ordem decrescente: ");
    for (int z = 0; z < 10; z++) {
        printf("%d ", vetor[z]);
    }
    printf("\n");

    printf("\n");

    return 0;
}

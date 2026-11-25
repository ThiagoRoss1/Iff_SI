// Preencha um vetor de 11 inteiros de 11 posições com números digitados pelo usuário e:

// 1. Peça ao usuário que digite 2 números referentes a duas posições do vetor. Calcule a média dos números entre as posições
// digitadas (inclusive as digitadas).
// 2. Mostre o menor e o maior valor do vetor e a quantidade de números impares e de pares.
// 3. Mostre os valores do vetor que estiverem acima da média do vetor.
// 4. Alterar cada valor do vetor número primo anterior daquele valor.
// 5. Faça com que o vetor só possua números pares (transformando apenas os números ímpares no respectivo dobro).
// 6. Ordene o vetor em ordem decrescente e mostre o vetor.

#include <stdio.h>

int main (void) {
    int nums[11], original[11];
    float soma=0;
    int ini,fim;

    int maior, menor, quant_imp=0, quant_par=0;

    printf("Digite 11 números: ");
    for (int i = 0; i < 11; i++) {
        scanf("%d", &nums[i]);
        original[i] = nums[i];
    }

    printf("\n");

    // 1.
    printf("1. Digite 2 números equivalentes à posição do vetor: ");
    scanf("%d %d", &ini, &fim);

    

    for (int j = ini; j <= fim; j++) {
        soma += nums[j];
    }

    float media = soma / (fim - ini + 1);
    
    printf("1. Média: ");
    printf("%.2f\n", media);

    printf("\n");

    // 2.
    maior = nums[0];
    menor = nums[0];

    printf("2. Menor e maior valor do vetor e quantidade de ímpares e pares: \n");
    for (int k = 0; k < 11; k++) {

        if (nums[k] > maior) {
            maior = nums[k];
        } 

        if (nums[k] < menor) {
            menor = nums[k];
        }

        if (nums[k] % 2 == 0) {
            quant_par++;
        } else {
            quant_imp++;
        }
    }

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Quantidade de pares: %d\n", quant_par);
    printf("Quantidade de ímpares: %d\n", quant_imp);

    printf("\n");

    // 3.
    soma = 0;
    for (int l = 0; l < 11; l++) {
        soma += nums[l];
    }

    float media_vetor = soma / 11;

    printf("Média do vetor: %.2f\n", media_vetor);

    printf("3. Números acima da média do vetor: ");
    for (int m = 0; m < 11; m++) {
        if (nums[m] > media_vetor) {
            printf("%d ", nums[m]);
        }
    }

    printf("\n");
    printf("\n");

    // 4.
    printf("4. Alterar cada valor do vetor número primo anterior daquele valor:\n");
    for (int n = 0; n < 11; n++) {
        int anterior = nums[n] - 1;
        int primo = 0;

        while(anterior >= 2 && primo == 0) {
            int quant_divisores = 0;

            for (int o = 1; o <= anterior; o++) {
                if (anterior % o == 0) {
                    quant_divisores++;
                }
            }

            if (quant_divisores == 2) {
                nums[n] = anterior;
                primo = 1;
            } else {
                anterior--;
            }

        }
    }
    printf("Vetor alterado: ");
    for (int i = 0; i < 11; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("\n");

    // 5.
    printf("5. Faça com que o vetor só possua números pares (transformando apenas os números ímpares no respectivo dobro): \n");
    int vetorpares[11];

    printf("Vetor apenas com pares: ");
    for (int j = 0; j < 11; j++) {
        vetorpares[j] = original[j]; 
        if (vetorpares[j] % 2 != 0) {
            vetorpares[j] *= 2;
        }

        printf("%d ", vetorpares[j]);
    }
    printf("\n");

    printf("\n");

    // 6.
    printf("6. Ordene o vetor em ordem decrescente e mostre o vetor: \n");
    int vetordec[11];
    int aux;

    for (int k = 0; k < 11; k++) {
        vetordec[k] = original[k];
    }

    for (int k = 0; k < 11; k++) {
        for (int l = k + 1; l < 11; l++) {
            if (vetordec[k] < vetordec[l]) {
                aux = vetordec[k];
                vetordec[k] = vetordec[l];
                vetordec[l] = aux;
            }
        }
    }

    printf("Vetor decrescente: ");
    for (int k = 0; k < 11; k++) {
        printf("%d ", vetordec[k]);
    }

    printf("\n");
}
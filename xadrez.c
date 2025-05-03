#include <stdio.h>

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");

    // Vamos simular o movimento de 3 vezes (por exemplo)
    for (int m = 0; m < 1; m++) {
        int passo = 0;

        // Primeiro loop: 2 passos para baixo
        while (passo < 2) {
            printf("Baixo\n");
            passo++;
        }

        // Segundo loop: 1 passo para a esquerda (após os 2 para baixo)
        for (int n = 0; n < 1; n++) {
            printf("Esquerda\n");
        }

        printf("---\n"); // Separador de movimento completo do cavalo
    }

    return 0;
}

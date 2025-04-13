
    #include <stdio.h>

    int main() {
        // Simulação do movimento da Torre usando o loop 'for'
        // A Torre vai se mover 5 casas para a direita
        printf("Movimento da Torre:\n");
        for (int i = 1; i <= 5; i++) {
            printf("Direita\n");
        }
    
        printf("\n"); // Separador visual entre as peças
    
        // Simulação do movimento do Bispo usando o loop 'while'
        // O Bispo vai se mover 5 casas na diagonal superior direita
        printf("Movimento do Bispo:\n");
        int j = 1;
        while (j <= 5) {
            printf("Cima Direita\n");
            j++;
        }
    
        printf("\n"); // Separador visual entre as peças
    
        // Simulação do movimento da Rainha usando o loop 'do-while'
        // A Rainha vai se mover 8 casas para a esquerda
        printf("Movimento da Rainha:\n");
        int k = 1;
        do {
            printf("Esquerda\n");
            k++;
        } while (k <= 8);
    
        return 0;
    }


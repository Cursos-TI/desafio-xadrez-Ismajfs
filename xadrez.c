#include <stdio.h>

int main() {
    // -------------------------------
    // Movimento da TORRE (for loop)
    // -------------------------------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Movimento do BISPO (while loop)
    // -------------------------------
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // -------------------------------
    // Movimento da RAINHA (do-while loop)
    // -------------------------------
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    // -------------------------------
    // Movimento do CAVALO (loops aninhados)
    // -------------------------------
    int casasVerticais = 2;
    int casasHorizontais = 1;
    printf("\nMovimento do Cavalo:\n");

    // Loop externo (for): movimento vertical (2 casas para baixo)
    for (int i = 0; i < casasVerticais; i++) {
        printf("Baixo\n");

        // Loop interno (while): após cada movimento vertical, faz o movimento horizontal
        int j = 0;
        while (j < casasHorizontais && i == casasVerticais - 1) {
            // Executa o movimento horizontal apenas após o segundo "Baixo"
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}



#include <stdio.h>

// -------------------------------
// Função recursiva para a TORRE
// Move-se em linha reta (Direita)
// -------------------------------
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// -------------------------------
// Função recursiva para a RAINHA
// Move-se em linha reta (Esquerda)
// -------------------------------
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// -------------------------------
// Função recursiva para o BISPO
// Move-se na diagonal (Cima Direita)
// Também usa loops aninhados para simular o movimento
// -------------------------------
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais <= 0 || casasHorizontais <= 0) return;

    // Loop externo: movimento vertical
    for (int i = 0; i < casasVerticais; i++) {
        // Loop interno: movimento horizontal
        for (int j = 0; j < casasHorizontais; j++) {
            printf("Cima Direita\n");
        }
    }

    // Chamada recursiva reduzindo uma casa em cada direção
    moverBispo(casasVerticais - 1, casasHorizontais - 1);
}

// -------------------------------
// Movimento do CAVALO com loops complexos
// Move-se em "L": duas casas para cima e uma para a direita
// -------------------------------
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < movimentosVerticais; i++) {
        if (i == 1) {
            // Quando atingir o segundo movimento vertical, inicia o horizontal
            for (int j = 0; j < movimentosHorizontais; j++) {
                if (j == 0) {
                    printf("Direita\n");
                    break; // Sai após um movimento horizontal
                }
            }
        }
        if (i == 0) {
            printf("Cima\n");
            continue; // Vai para o próximo movimento vertical
        }
        printf("Cima\n");
    }
}

// -------------------------------
// Função principal
// -------------------------------
int main() {
    // -------------------------------
    // Movimento da TORRE (recursivo)
    // -------------------------------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // -------------------------------
    // Movimento do BISPO (recursivo + loops aninhados)
    // -------------------------------
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 1;
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);

    // -------------------------------
    // Movimento da RAINHA (recursivo)
    // -------------------------------
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // -------------------------------
    // Movimento do CAVALO (loops complexos)
    // -------------------------------
    moverCavalo();

    return 0;
}

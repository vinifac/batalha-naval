#include <stdio.h>

int main() {
    // =======================
    // Declaração de Variáveis
    // =======================

    // Constantes para definir os tamanhos
    const int TAMANHO_TABULEIRO = 10;
    const int TAMANHO_NAVIO = 3;

    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    const int NAVIO = 3;
    const int AGUA = 0;

    // Coordenadas iniciais para o Navio 1.
    int navio1_linha = 2;
    int navio1_coluna = 3;

    // Coordenadas iniciais para o Navio 2 
    int navio2_linha = 5;
    int navio2_coluna = 7;

    // Variáveis de controle para os laços de repetição (loops).
    int i, j;


    // =======================
    // Lógica do Programa
    // =======================
    
    printf("--- Iniciando Jogo de Batalha Naval ---\n\n");

    // Este loop duplo percorre cada célula da matriz
    printf("1. Preenchendo o oceano (tabuleiro)...\n");
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // As coordenadas foram escolhidas para garantir que o navio não saia do tabuleiro
    printf("2. Posicionando navio horizontal...\n");
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[navio1_linha][navio1_coluna + i] = NAVIO;
    }

    printf("3. Posicionando navio vertical...\n");
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[navio2_linha + i][navio2_coluna] = NAVIO;
    }

    // O loop duplo percorre a matriz e imprime cada valor
    printf("\n--- Tabuleiro Final ---\n\n");
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

#define tam 10      // tamanho fixo do tabuleiro 10x10
#define navio 3     // valor que representa navio no tabuleiro
#define agua 0      // valor que representa água
#define tam_navio 3 // tamanho fixo dos navios

int main() {
    int tabuleiro[tam][tam]; // matriz que representa o tabuleiro
    int i, j;

  
    // Inicializando
   
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            tabuleiro[i][j] = agua; // coloca 0 (água) em todas as posições
        }
    }

   
    // Navios
   
    // Coordenadas iniciais dos navios
    int linhaHorizontal = 2, colunaHorizontal = 1; // começo do navio horizontal
    int linhaVertical = 5, colunaVertical = 7;     // começo do navio vertical

    // Posicionando navio horizontal (3 posições na mesma linha)
    for (j = 0; j < tam_navio; j++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + j] = navio;
    }

    // Posicionando navio vertical (3 posições na mesma coluna)
    for (i = 0; i < tam_navio; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = navio;
    }

  
    // Tabuleiro

    printf("*TABULEIRO BATALHA NAVAL*\n\n");

    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("%d ", tabuleiro[i][j]); // imprime cada posição
        }
        printf("\n"); // pula de linha ao final de cada linha
    }

    return 0;
}

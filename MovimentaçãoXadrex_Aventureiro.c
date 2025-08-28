#include <stdio.h>

int main(void) {

    int passos_torre  = 5;  /* Torre: 5 casas para a direita */
    int passos_bispo  = 5;  /* Bispo: 5 casas na diagonal para cima e à direita */
    int passos_rainha = 8;  /* Rainha: 8 casas para a esquerda */

    /* TORRE - FOR */
    printf("Movimento da Torre (for): %d casas para a direita\n", passos_torre);
    for (int i = 1; i <= passos_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    /* BISPO — WHILE */
    printf("Movimento do Bispo (while): %d casas na diagonal para cima e à direita\n", passos_bispo);
    int contador_bispo = 0;
    while (contador_bispo < passos_bispo) {
        printf("Cima\n");
        printf("Direita\n");
        contador_bispo++;
    }
    printf("\n");

    /* RAINHA — DO-WHILE */
    printf("Movimento da Rainha (do-while): %d casas para a esquerda\n", passos_rainha);
    int contador_rainha = 0;
    if (passos_rainha > 0) {
        do {
            printf("Esquerda\n");
            contador_rainha++;
        } while (contador_rainha < passos_rainha);
    }
    printf("\n");

    /* CAVALO — FOR + WHILE (movimento em L: duas casas para baixo e uma para a esquerda) */
    int passos_baixo   = 2;  /* duas casas para baixo */
    int passos_esquerda = 1; /* uma casa para a esquerda */

    printf("Movimento do Cavalo (for + while):\n");

    /* Primeiro: duas casas para baixo (loop for) */
    for (int i = 0; i < passos_baixo; i++) {
        printf("Baixo\n");
    }

    /* Depois: uma casa para a esquerda (loop while aninhado) */
    int contador_esquerda = 0;
    while (contador_esquerda < passos_esquerda) {
        printf("Esquerda\n");
        contador_esquerda++;
    }

    return 0;
}

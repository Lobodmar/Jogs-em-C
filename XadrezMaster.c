#include <stdio.h>

/* Funções Recursivas */
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

/* Loops Complexos */
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo (loops aninhados):\n");
    for (int i = 1; i <= movimentos; i++) {
        for (int j = 1; j <= 2; j++)  
            printf("Cima\n");
        for (int k = 1; k <= 1; k++) 
            printf("Direita\n");
        printf("---\n");
    }
}

void moverBispoLoops(int casas) {
    printf("Movimento do Bispo (loops aninhados):\n");
    for (int i = 1; i <= casas; i++) {   
        for (int j = 1; j <= 1; j++)   
            printf("Cima Direita\n");
    }
}

int main(void) {
    /* Variáveis */
    int passos_torre  = 5;
    int passos_bispo  = 5;
    int passos_rainha = 8;
    int movimentos_cavalo = 3;

    /* Torre */
    printf("Movimento da Torre (recursivo): %d casas para a direita\n", passos_torre);
    moverTorre(passos_torre);
    printf("\n");

    /* Bispo */
    printf("Movimento do Bispo (recursivo): %d casas na diagonal para cima e à direita\n", passos_bispo);
    moverBispoRecursivo(passos_bispo);
    printf("\n");

    moverBispoLoops(passos_bispo);
    printf("\n");

    /* Rainha */
    printf("Movimento da Rainha (recursivo): %d casas para a esquerda\n", passos_rainha);
    moverRainha(passos_rainha);
    printf("\n");

    /* Cavalo */
    moverCavalo(movimentos_cavalo);
    printf("\n");

    return 0;
}

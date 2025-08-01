#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, chute;

    // Inicializa o gerador de números aleatórios
    srand(time(0));
    numeroSecreto = rand() % 10 + 1;  // número entre 1 e 10

    printf("=== Jogo: Maior, Menor ou Igual ===\n");
    printf("Tente adivinhar o número (entre 1 e 10): ");
    scanf("%d", &chute);

    if (chute < numeroSecreto) {
        printf("Seu número é MENOR que o número secreto.\n");
    } else if (chute > numeroSecreto) {
        printf("Seu número é MAIOR que o número secreto.\n");
    } else {
        printf("Parabéns! Você ACERTOU o número!\n");
    }

    printf("O número secreto era: %d\n", numeroSecreto);
    return 0;

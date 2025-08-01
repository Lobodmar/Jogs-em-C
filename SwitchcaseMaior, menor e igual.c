#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, chute, resultado;

    // Gera número aleatório entre 1 e 10
    srand(time(0));
    numeroSecreto = rand() % 10 + 1;

    printf("=== Jogo: Maior, Menor ou Igual ===\n");
    printf("Digite um número entre 1 e 10: ");
    scanf("%d", &chute);

    // Verifica se o número é menor, maior ou igual
    if (chute < numeroSecreto) {
        resultado = 1; // menor
    } else if (chute > numeroSecreto) {
        resultado = 2; // maior
    } else {
        resultado = 3; // igual
    }

    // Usando switch para mostrar o resultado
    switch (resultado) {
        case 1:
            printf("Seu número é MENOR que o número secreto.\n");
            break;
        case 2:
            printf("Seu número é MAIOR que o número secreto.\n");
            break;
        case 3:
            printf("Parabéns! Você ACERTOU o número!\n");
            break;
        default:
            printf("Erro desconhecido.\n");
    }

    printf("O número secreto era: %d\n", numeroSecreto);

    return 0;
}

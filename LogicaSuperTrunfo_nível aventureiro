#include <stdio.h>

int main() {
    // === Dados da Carta 1 ===
    char estado1;
    char codigo1[4];
    char nomeCidade1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // === Dados da Carta 2 ===
    char estado2;
    char codigo2[4];
    char nomeCidade2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // === Entrada de dados ===
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade (sem espaco): ");
    scanf("%s", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra): ");
    scanf(" %c", &estado2);
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade (sem espaco): ");
    scanf("%s", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // === Cálculos ===
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // === Menu ===
    int opcao;

    printf("\nEscolha um atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Digite a opcao (1 a 5): ");
    scanf("%d", &opcao);

    printf("\nComparando %s (Carta 1) com %s (Carta 2):\n", nomeCidade1, nomeCidade2);

    // === Comparação com Switch ===
    switch(opcao) {
        case 1:
            printf("Populacao - Carta 1: %lu | Carta 2: %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Area - Carta 1: %.2f | Carta 2: %.2f\n", area1, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("PIB - Carta 1: %.2f | Carta 2: %.2f\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Pontos Turisticos - Carta 1: %d | Carta 2: %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Densidade Demografica - Carta 1: %.2f | Carta 2: %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 venceu! (menor densidade)\n");
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 venceu! (menor densidade)\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Por favor, selecione um numero entre 1 e 5.\n");
    }

    return 0;
}

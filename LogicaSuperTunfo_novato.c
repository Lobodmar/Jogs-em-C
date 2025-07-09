#include <stdio.h>

int main() {
    //  Dados da Carta 1 
    char estado1;
    char codigo1[4];
    char nomeCidade1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    //  Dados da Carta 2 
    char estado2;
    char codigo2[4];
    char nomeCidade2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    //  Entrada dos dados 
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade (sem espaco): ");
    scanf("%s", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area em km²: ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade (sem espaco): ");
    scanf("%s", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area em km²: ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo de atributo
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibir  calculo
    printf("\n Dados calculados \n");
    printf("Carta 1 - %s (%c): Densidade = %.2f hab/km² | PIB per capita = %.2f\n", nomeCidade1, estado1, densidade1, pibPerCapita1);
    printf("Carta 2 - %s (%c): Densidade = %.2f hab/km² | PIB per capita = %.2f\n", nomeCidade2, estado2, densidade2, pibPerCapita2);

    // Comparação final de atributo 
    printf("\n Comparacao de cartas (Atributo: Populacao) \n");
    printf("Carta 1 - %s (%c): %lu habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu habitantes\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! As duas cidades têm a mesma populacao.\n");
    }

    return 0;
}

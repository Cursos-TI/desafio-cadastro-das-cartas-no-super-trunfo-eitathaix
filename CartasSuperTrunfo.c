#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigoDaCarta1[5];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H):\n");
    scanf(" %c", &estado1); 
    printf("Digite o código da carta (ex: A1, B2):\n");
    scanf("%4s", codigoDaCarta1);
    printf("Digite o nome da cidade:\n");
    scanf("%49s", nomeCidade1); 
    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao1); 
    printf("Digite a área da cidade (km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigoDaCarta2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2;

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H):\n");
    scanf(" %c", &estado2); 
    printf("Digite o código da carta (ex: A1, B2):\n");
    scanf("%4s", codigoDaCarta2); 
    printf("Digite o nome da cidade:\n");
    scanf("%49s", nomeCidade2); 
    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao2); 
    printf("Digite a área da cidade (km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Cálculo de Densidade Populacional e PIB per capita
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Comparação entre cartas - Atributo escolhido: PIB per capita
    printf("\nComparação de cartas (Atributo: PIB per capita):\n");

    printf("Carta 1 - %s (%c): R$ %.2f\n", nomeCidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%c): R$ %.2f\n", nomeCidade2, estado2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! Ambas as cartas possuem o mesmo PIB per capita.\n");
    }

    return 0;
}
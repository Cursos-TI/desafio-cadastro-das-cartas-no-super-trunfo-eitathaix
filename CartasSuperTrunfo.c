#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigoDaCarta1[3], codigoDaCarta2[3];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    // Cidade 1
        // Cadastro da Carta 1
    printf("Cadastro da Carta 1: \n");
    printf("Digite o estado (A-H):\n");
    scanf(" %c", &estado1); 
    printf("Digite o código da carta (ex: A01, B03):\n");
    scanf("%s", codigoDaCarta1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomeCidade1);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);


    // Cadastro da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado2); 
    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%s", codigoDaCarta2); 
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

 // Cálculos das novas variáveis
 densidadePopulacional1 = populacao1 / area1; // Densidade populacional para a Carta 1
 pibPerCapita1 = (pib1 / populacao1); // PIB per capita para a Carta 1

 densidadePopulacional2 = populacao2 / area2; // Densidade populacional para a Carta 2
 pibPerCapita2 = (pib2 / populacao2); // PIB per capita para a Carta 2
 
 printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
 printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}

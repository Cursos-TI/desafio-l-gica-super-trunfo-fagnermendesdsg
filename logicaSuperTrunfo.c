#include <stdio.h>

int main() {

    printf("Novo commit\n");

    // Variáveis da Carta 1
    char estado1[50], codigo1[4], nomecidade1[50];
    int populacao1, pontosturisticos1;
    float area1, pib1;
    float densidade1, pibpercapita1;

    // Variáveis da Carta 2
    char estado2[50], codigo2[4], nomecidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;
    float densidade2, pibpercapita2;

    // Coletando dados da Carta 1
    printf("=== SUPER TRUNFO DE CIDADES ===\n\n");

    printf("Digite o Estado da primeira carta: ");
    scanf("%s", estado1);
    printf("Digite o Código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o Nome da cidade: ");
    scanf("%s", nomecidade1);
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Calculando densidade e PIB per capita - Carta 1
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    // Coletando dados da Carta 2
    printf("\nDigite o Estado da segunda carta: ");
    scanf("%s", estado2);
    printf("Digite o Código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o Nome da cidade: ");
    scanf("%s", nomecidade2);
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Calculando densidade e PIB per capita - Carta 2
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // COMPARAÇÃO DE UM ATRIBUTO: População
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("Atributo escolhido: POPULAÇÃO\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", nomecidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", nomecidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado: Empate! Ambas têm a mesma população.\n");
    }

    printf("\nFim do jogo.\n");
    return 0;
}

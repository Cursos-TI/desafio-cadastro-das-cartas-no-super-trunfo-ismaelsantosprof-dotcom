#include <stdio.h>

int main() {
    // Dados da carta 1 - São Paulo
    char codigo1[] = "A01";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 800.22;
    int pontos_turisticos1 = 05;

    // Dados da carta 2 - Belo Horizonte
    char codigo2[] = "B02";
    int populacao2 = 2523000;
    float area2 = 330.00;
    float pib2 = 104.37;
    int pontos_turisticos2 = 8;

    // Exibição dos dados
    printf("\n--- Dados das Cartas Cadastradas ---\n");

    printf("\nCarta 1 - Código: %s\n", codigo1);
    printf("Cidade: São Paulo\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2 - Código: %s\n", codigo2);
    printf("Cidade: Belo Horizonte\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}


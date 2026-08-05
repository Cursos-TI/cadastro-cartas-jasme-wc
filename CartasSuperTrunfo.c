#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis - Carta 1
    char Estado1[50];
    int codigo1;
    char Cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontoturistico1;

    // Área para definição das variáveis - Carta 2
    char Estado2[50];
    int codigo2;
    char Cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistico2;

    // Área para entrada de dados - Carta 1
    printf("Cadastre a carta 1\n");

    printf("Estado: ");
    scanf("%s", Estado1);

    printf("Codigo: ");
    scanf("%d", &codigo1);

    printf("Cidade: ");
    scanf("%s", Cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("Pib: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontoturistico1);

    // Área para entrada de dados - Carta 2
    printf("\nCadastre a carta 2\n");

    printf("Estado: ");
    scanf("%s", Estado2);

    printf("Codigo: ");
    scanf("%d", &codigo2);

    printf("Cidade: ");
    scanf("%s", Cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("Pib: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontoturistico2);

    // Área para exibição dos dados - Carta 1
    printf("\n--- Carta 1 Cadastrada ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %d\n", codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("Pib: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontoturistico1);

    // Área para exibição dos dados - Carta 2
    printf("\n--- Carta 2 Cadastrada ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %d\n", codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontoturistico2);

    return 0;
}


#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado;
    char codigo[4];        
    char nomeCidade[100];  
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("--- Inserindo dados da carta 1 ---\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado); 

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo);

    while (getchar() != '\n');

    printf("Nome da Cidade: ");
    scanf("%[^\n]", nomeCidade);  

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Inserindo dados da carta 2 ---\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);  

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);

    while (getchar() != '\n');

    printf("Nome da Cidade: ");
    scanf("%[^\n]", nomeCidade2); 

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n===== Dados das Cartas Inseridas =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

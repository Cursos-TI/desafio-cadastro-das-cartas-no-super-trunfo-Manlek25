#include <stdio.h>

struct CartaSuperTrunfo
{
    char estado;
    char codigo[4];
    char nomeCidade[100];
    int populacao;
    float area;
    float pib;
    float densidadepop;
    float pibpercap;
    int pontosTuristicos;
};

int main()
{
    // Declaração de duas cartas
    struct CartaSuperTrunfo carta1;
    struct CartaSuperTrunfo carta2;

    // =====================
    // Entrada de dados - Carta 1
    // =====================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em R$): ");
    scanf("%f", &carta1.pib);

    //Cálculos Automáticos
    carta1.densidadepop = carta1.populacao / carta1.area;
    carta1.pibpercap = carta1.pib / carta1.populacao;

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // =====================
    // Entrada de dados - Carta 2
    // =====================

    printf("=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em R$): ");
    scanf("%f", &carta2.pib);

    //Cálculos Automáticos
    carta2.densidadepop = carta2.populacao / carta2.area;
    carta2.pibpercap = carta2.pib / carta2.populacao;

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // =====================
    // Exibição dos Dados
    // =====================
    printf("\n===== Dados da Carta 1 =====\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f\n", carta1.pib);
    printf("Densidade Populacional:  %.2f\n", carta1.densidadepop);
    printf("PIB per capita: R$ %.2f\n", carta1.pibpercap);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n===== Dados da Carta 2 =====\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f\n", carta2.pib);
    printf("Densidade Populacional:  %.2f\n", carta2.densidadepop);
    printf("PIB per capita: R$ %.2f\n", carta2.pibpercap);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
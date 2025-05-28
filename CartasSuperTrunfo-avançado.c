#include <stdio.h>

struct CartaSuperTrunfo {
    char estado[3];
    char codigo[4];
    char nomeCidade[100];
    unsigned long int populacao;
    float area;
    float pib;
    float densidadepop;
    float pibpercap;
    int pontosTuristicos;
    float superpoder;
};

int main() {
    struct CartaSuperTrunfo carta1, carta2;
    int vitoriasCarta1 = 0, vitoriasCarta2 = 0;

    // =====================
    // Entrada de dados - Carta 1
    // =====================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %2s", carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em R$): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos Automáticos
    carta1.densidadepop = carta1.populacao / carta1.area;
    carta1.pibpercap = carta1.pib / carta1.populacao;
    carta1.superpoder = carta1.populacao + carta1.area + carta1.pib +
                        carta1.pontosTuristicos + carta1.pibpercap +
                        (1.0f / carta1.densidadepop);

    // =====================
    // Entrada de dados - Carta 2
    // =====================
    printf("=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %2s", carta2.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em R$): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos Automáticos
    carta2.densidadepop = carta2.populacao / carta2.area;
    carta2.pibpercap = carta2.pib / carta2.populacao;
    carta2.superpoder = carta2.populacao + carta2.area + carta2.pib +
                        carta2.pontosTuristicos + carta2.pibpercap +
                        (1.0f / carta2.densidadepop);

    // =====================
    // Exibição dos Dados
    // =====================
    printf("\n===== Dados da Carta 1 =====\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f\n", carta1.pib);
    printf("Densidade Populacional: %.2f\n", carta1.densidadepop);
    printf("PIB per capita: R$ %.2f\n", carta1.pibpercap);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Super Poder: %.2f\n", carta1.superpoder);

    printf("\n===== Dados da Carta 2 =====\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f\n", carta2.pib);
    printf("Densidade Populacional: %.2f\n", carta2.densidadepop);
    printf("PIB per capita: R$ %.2f\n", carta2.pibpercap);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Super Poder: %.2f\n", carta2.superpoder);

    // =====================
    // Comparações
    // =====================
    printf("\n===== Comparação entre as cartas =====\n");

    printf("População: ");
    if (carta1.populacao > carta2.populacao) {
        printf("Carta 1 vence\n"); vitoriasCarta1++;
    } else if (carta1.populacao < carta2.populacao) {
        printf("Carta 2 vence\n"); vitoriasCarta2++;
    } else {
        printf("Empate\n");
    }

    printf("Área: ");
    if (carta1.area > carta2.area) {
        printf("Carta 1 vence\n"); vitoriasCarta1++;
    } else if (carta1.area < carta2.area) {
        printf("Carta 2 vence\n"); vitoriasCarta2++;
    } else {
        printf("Empate\n");
    }

    printf("PIB: ");
    if (carta1.pib > carta2.pib) {
        printf("Carta 1 vence\n"); vitoriasCarta1++;
    } else if (carta1.pib < carta2.pib) {
        printf("Carta 2 vence\n"); vitoriasCarta2++;
    } else {
        printf("Empate\n");
    }

    printf("Densidade Populacional (vence menor): ");
    if (carta1.densidadepop < carta2.densidadepop) {
        printf("Carta 1 vence\n"); vitoriasCarta1++;
    } else if (carta1.densidadepop > carta2.densidadepop) {
        printf("Carta 2 vence\n"); vitoriasCarta2++;
    } else {
        printf("Empate\n");
    }

    printf("PIB per capita: ");
    if (carta1.pibpercap > carta2.pibpercap) {
        printf("Carta 1 vence\n"); vitoriasCarta1++;
    } else if (carta1.pibpercap < carta2.pibpercap) {
        printf("Carta 2 vence\n"); vitoriasCarta2++;
    } else {
        printf("Empate\n");
    }

    printf("Pontos Turísticos: ");
    if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
        printf("Carta 1 vence\n"); vitoriasCarta1++;
    } else if (carta1.pontosTuristicos < carta2.pontosTuristicos) {
        printf("Carta 2 vence\n"); vitoriasCarta2++;
    } else {
        printf("Empate\n");
    }

    printf("Super Poder: ");
    if (carta1.superpoder > carta2.superpoder) {
        printf("Carta 1 vence\n"); vitoriasCarta1++;
    } else if (carta1.superpoder < carta2.superpoder) {
        printf("Carta 2 vence\n"); vitoriasCarta2++;
    } else {
        printf("Empate\n");
    }

    // =====================
    // Resultado Final
    // =====================
    printf("\n===== Resultado Final =====\n");
    printf("Vitórias da Carta 1: %d\n", vitoriasCarta1);
    printf("Vitórias da Carta 2: %d\n", vitoriasCarta2);

    if (vitoriasCarta1 > vitoriasCarta2) {
        printf("🏆 Carta 1 é a campeã!\n");
    } else if (vitoriasCarta1 < vitoriasCarta2) {
        printf("🏆 Carta 2 é a campeã!\n");
    } else {
        printf("🤝 Empate geral entre as cartas!\n");
    }

    return 0;
}

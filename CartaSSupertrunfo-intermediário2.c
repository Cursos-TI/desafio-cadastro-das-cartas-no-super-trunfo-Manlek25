#include <stdio.h>
#include <string.h>

struct CartaSuperTrunfo {
    char nomePais[100];
    long long populacao;
    double area;
    double pib;
    int pontosTuristicos;
    double densidadepop;
    double pibpercap;
};

void mostrarMenu() {
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("0 - Sair\n");
    printf("Escolha o atributo para comparar (0 a 5): ");
}

int main() {
    struct CartaSuperTrunfo carta1, carta2;

    // Cadastro Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Nome do País: ");
    scanf(" %[^\n]", carta1.nomePais);

    printf("População: ");
    scanf("%lld", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%lf", &carta1.area);

    printf("PIB (em R$): ");
    scanf("%lf", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos Automáticos
    carta1.densidadepop = carta1.populacao / carta1.area;
    carta1.pibpercap = carta1.pib / (double)carta1.populacao;

    // Cadastro Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Nome do País: ");
    scanf(" %[^\n]", carta2.nomePais);

    printf("População: ");
    scanf("%lld", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%lf", &carta2.area);

    printf("PIB (em R$): ");
    scanf("%lf", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos Automáticos
    carta2.densidadepop = carta2.populacao / carta2.area;
    carta2.pibpercap = carta2.pib / (double)carta2.populacao;

    int opcao;

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        printf("\n===== COMPARAÇÃO =====\n");

        switch (opcao) {
            case 1:
                printf("População:\n");
                printf("%s: %lld habitantes\n", carta1.nomePais, carta1.populacao);
                printf("%s: %lld habitantes\n", carta2.nomePais, carta2.populacao);
                if (carta1.populacao > carta2.populacao)
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                else if (carta2.populacao > carta1.populacao)
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 2:
                printf("Área:\n");
                printf("%s: %.2lf km²\n", carta1.nomePais, carta1.area);
                printf("%s: %.2lf km²\n", carta2.nomePais, carta2.area);
                if (carta1.area > carta2.area)
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                else if (carta2.area > carta1.area)
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 3:
                printf("PIB:\n");
                printf("%s: R$ %.2lf\n", carta1.nomePais, carta1.pib);
                printf("%s: R$ %.2lf\n", carta2.nomePais, carta2.pib);
                if (carta1.pib > carta2.pib)
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                else if (carta2.pib > carta1.pib)
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 4:
                printf("Pontos Turísticos:\n");
                printf("%s: %d\n", carta1.nomePais, carta1.pontosTuristicos);
                printf("%s: %d\n", carta2.nomePais, carta2.pontosTuristicos);
                if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 5:
                printf("Densidade Demográfica (vence o MENOR):\n");
                printf("%s: %.2lf hab/km²\n", carta1.nomePais, carta1.densidadepop);
                printf("%s: %.2lf hab/km²\n", carta2.nomePais, carta2.densidadepop);
                if (carta1.densidadepop < carta2.densidadepop)
                    printf("Resultado: %s venceu!\n", carta1.nomePais);
                else if (carta2.densidadepop < carta1.densidadepop)
                    printf("Resultado: %s venceu!\n", carta2.nomePais);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 0:
                printf("Saindo do jogo...\n");
                break;

            default:
                printf("Opção inválida. Escolha de 0 a 5.\n");
        }

    } while (opcao != 0);

    return 0;
}

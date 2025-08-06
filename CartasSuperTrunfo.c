#include <stdio.h>

// Estrutura para armazenar as informações de cada carta
struct Carta {
    char estado;                     // Letra de 'A' a 'H'
    char codigo[4];                  // Ex: "A01"
    char nomeCidade[50];             // Nome da cidade
    int populacao;                   // Número de habitantes
    float area;                      // Área em km²
    float pib;                       // PIB em bilhões de reais
    int pontosTuristicos;            // Quantidade de pontos turísticos
};

int main() {
    // Declaração das variáveis (duas cartas)
    struct Carta carta1, carta2;

    // ======== LEITURA DA CARTA 1 ========
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código (ex: A01): ");
    scanf(" %3s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de R$): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // ======== LEITURA DA CARTA 2 ========
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código (ex: A01): ");
    scanf(" %3s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de R$): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // ======== EXIBIÇÃO DA CARTA 1 ========
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    // ======== EXIBIÇÃO DA CARTA 2 ========
    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}

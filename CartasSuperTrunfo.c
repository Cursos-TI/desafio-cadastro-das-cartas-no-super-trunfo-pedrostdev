#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1; // Novas variáveis

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2; // Novas variáveis

    printf("CARTAS SUPER TRUNFO! \n");
    // Leitura da Carta 1
    printf("\n=== CADASTRO CARTA 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais, ex: 400.50): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos): ");
    scanf("%d", &pontos_turisticos1);

    // Leitura da Carta 2
    printf("\n=== CADASTRO CARTA 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População): ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais, ex: 400.50): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos): ");
    scanf("%d", &pontos_turisticos2);

    //Cálculo para a Carta 1:
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 10000000) / populacao1; //PIB multiplicado por 1 bilhão para ser exibido no formato correto.

    //Cálculo para a Carta 2:
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 10000000) / populacao2; //PIB multiplicado por 1 bilhão para ser exibido no formato correto.

    // Exibição da Carta 1 
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); 
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);


    // Exibição da Carta 2 
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2); 
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
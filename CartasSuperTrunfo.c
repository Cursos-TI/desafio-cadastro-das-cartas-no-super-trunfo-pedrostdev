#include <stdio.h>

int main() {
    // Identificação de variáveis
    int Populacao1, PontosTuristicos1, Populacao2, PontosTuristicos2;
    float Area1, PIB1, Area2, PIB2;
    char Estado1[30], CodigoDaCarta1[30], NomeDaCidade1[30];
    char Estado2[30], CodigoDaCarta2[30], NomeDaCidade2[30];

    // Carta 1
    printf("Carta 1: \n");

    printf("Digite uma letra para representar estado escolhido de 'A' a 'H': \n");
    scanf("%s", Estado1);

    printf("Digite um código para a carta, coloque a primeira letra do estado escolhido seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", CodigoDaCarta1);

    printf("Digite o nome da cidade escolhida: \n");
    fgets(NomeDaCidade1, 30, stdin);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de Pontos Turísticos da cidade: \n");
    scanf("%d", &PontosTuristicos1);

    // Carta 2
    printf("Carta 2: \n");

    printf("Digite uma letra para representar estado escolhido de 'A' a 'H': \n");
    scanf("%s", Estado2);

    printf("Digite um código para a carta, coloque a primeira letra do estado escolhido seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", CodigoDaCarta2);

    printf("Digite o nome da cidade escolhida: \n");
    fgets(NomeDaCidade2, 30, stdin);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &Populacao2);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de Pontos Turísticos da cidade: \n");
    scanf("%d", &PontosTuristicos2);

    //Exibição das cartas

    printf("")

    return 0;
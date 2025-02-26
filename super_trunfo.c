#include <stdio.h>

int main() {
    char Nome1[50], Nome2[50];
    char Estado1, Estado2;
    char Codigo1[4], Codigo2[4];
    int Populacao1, Populacao2;
    float area1, area2;
    float pib1, pib2;
    int PontosTuristicos1, PontosTuristicos2;

    // Leitura dos dados da primeira cidade
    printf("Informe os dados da Cidade 1:\n");

    printf("Nome da cidade: ");
    scanf("%s", Nome1);

    printf("Estado (A a H): ");
    scanf(" %c", &Estado1);

    printf("Código: ");
    scanf("%s", Codigo1);

    printf("População: ");
    scanf("%d", &Populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // Leitura dos dados da segunda cidade
    printf("\nInforme os dados da Cidade 2:\n");

    printf("Nome da cidade: ");
    scanf("%s", Nome2);

    printf("Estado (A a H): ");
    scanf(" %c", &Estado2);

    printf("Código: ");
    scanf("%s", Codigo2);

    printf("População: ");
    scanf("%d", &Populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos2);

    // Exibição dos dados da primeira cidade
    printf("\nDados da Cidade 1:\n");
    printf("Nome: %s\n", Nome1);
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("População: %d habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais \n", pib1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);

    // Exibição dos dados da segunda cidade
    printf("\nDados da Cidade 2:\n");
    printf("Nome: %s\n", Nome2);
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("População: %d habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);

    return 0;



}


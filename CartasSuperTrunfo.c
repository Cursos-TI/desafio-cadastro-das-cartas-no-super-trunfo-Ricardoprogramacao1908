#include <stdio.h>

int main() {

    // cda = código da carta;
    // ndc = nome da cidade;
    // akm2 = área em km²;
    // npt = número de pontos turisticos;
    char estado;
    char cda[10];
    char ndc[20];
    int populacao;
    float akm2;
    float pib;
    int  npt;

    printf("Carta 1: \n");

    printf("Insira o nome do estado:\n");
    scanf("%c", &estado);

    printf("Insira o codigo da carta:\n");
    scanf("%s", &cda);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &ndc);

    printf("Insira a populacao:\n");
    scanf("%d", &populacao);

    printf("Insira a area em km2:\n");
    scanf("%f", &akm2);

    printf("Insira o PBI:\n");
    scanf("%f", &pib);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &npt);


    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", cda);
    printf("Nome da Cidade: %s\n", ndc);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", akm2);
    printf("PIB: %f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n\n", npt);

    printf("Carta 2: \n");

    printf("Insira o nome do estado:\n");
    scanf("\n%c", &estado);

    printf("Insira o codigo da carta:\n");
    scanf("%s", &cda);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &ndc);

    printf("Insira a populacao:\n");
    scanf("%d", &populacao);

    printf("Insira a area em km2:\n");
    scanf("%f", &akm2);

    printf("Insira o PBI:\n");
    scanf("%f", &pib);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &npt);


    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", cda);
    printf("Nome da Cidade: %s\n", ndc);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", akm2);
    printf("PIB: %f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", npt);




}
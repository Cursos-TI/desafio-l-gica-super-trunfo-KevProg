#include <stdio.h>

int main() {
printf("Bem vindo ao Super Trunfo Aventureiro\n");

//Variáveis da primeira cidade
char estado_1;
char codigo_1[30];
char nomeCidade_1[30];
unsigned long int populacao_1;
float area_1;
float PIB_1;
int nPontosTur_1;
float DensidadePopulacional_1;
float PIBperCapita_1;

//Variáveis da segunda cidade
char estado_2;
char codigo_2[30];
char nomeCidade_2[30];
unsigned long int populacao_2;
float area_2;
float PIB_2;
int nPontosTur_2;
float DensidadePopulacional_2;
float PIBperCapita_2;

//Primeira Cidade 
printf("Dados da primeira cidade \n");

printf("Uma letra de 'A' a 'H': ");
scanf(" %c", &estado_1);

printf("Código da carta: ");
scanf("%s", codigo_1);

printf("Nome da cidade: ");
scanf("%s", nomeCidade_1);

printf("População da cidade: ");
scanf("%lu", &populacao_1);

printf("Área da cidade em km²: ");
scanf("%f", &area_1);

printf("PIB da cidade: ");
scanf("%f", &PIB_1);

printf("Número de pontos turísticos da cidade: ");
scanf("%d", &nPontosTur_1);

//Calculo da Densidade e PIB per Capita.
DensidadePopulacional_1 = (float) populacao_1 / area_1;
printf("A Densidade Populacional da cidade em km² é: %.2f \n", DensidadePopulacional_1);

PIBperCapita_1 = (float) PIB_1 / populacao_1;
printf("O PIB per Capita da cidade em bilhões é: %.2f \n", PIBperCapita_1);


//Segunda cidade
printf("Dados da segunda cidade \n");

printf("Uma letra de 'A' a 'H': ");
scanf(" %c", &estado_2);

printf("Código da carta: ");
scanf("%s", codigo_2);

printf("Nome da cidade: ");
scanf("%s", nomeCidade_2);

printf("População da cidade: ");
scanf("%lu", &populacao_2);

printf("Área da cidade em km²: ");
scanf("%f", &area_2);

printf("PIB da cidade: ");
scanf("%f", &PIB_2);

printf("Número de pontos turísticos da cidade: ");
scanf("%d", &nPontosTur_2);

//Calculo da Densidade e PIB per Capita.
DensidadePopulacional_2 = (float)(populacao_2 / area_2);
printf("A Densidade Populacional da cidade em km² é: %.2f \n", DensidadePopulacional_2);

PIBperCapita_2 = (float)(PIB_2 / populacao_2);
printf("O PIB per Capita da cidade em bilhões é: %.2f \n", PIBperCapita_2);


//Impressão dos dados
printf("\n----Carta 1----\n");
printf("Estado: %c\n", estado_1);
printf("Código: %s\n", codigo_1);
printf("Nome: %s\n", nomeCidade_1);
printf("População: %lu\n", populacao_1);
printf("Área: %.2f km²\n", area_1);
printf("PIB: %.2f bilhões\n", PIB_1);
printf("Pontos turísticos: %d\n", nPontosTur_1);
printf("Densidade Populacional: %.2f km²\n", DensidadePopulacional_1);
printf("PIB per Capita: %.2f bilhões\n", PIBperCapita_1);

printf("\n----Carta 2----\n");
printf("Estado: %c\n", estado_2);
printf("Código: %s\n", codigo_2);
printf("Nome: %s\n", nomeCidade_2);
printf("População: %lu\n", populacao_2);
printf("Área: %.2f km²\n", area_2);
printf("PIB: %.2f bilhões\n", PIB_2);
printf("Pontos turísticos: %d\n", nPontosTur_2);
printf("Densidade Populacional: %.2f km²\n", DensidadePopulacional_2);
printf("PIB per Capita: %.2f bilhões\n", PIBperCapita_2);

// Menu interativo de comparação

int resultado1, resultado2;
char opcao1 = 0, opcao2 = 0;

// Primeiro item
printf("Escolha o primeiro item para comparação\n");
printf("A - População\n");
printf("B - Área\n");
printf("C - PIB\n");
printf("D - Número de pontos turísticos\n");
printf("E - Densidade demográfica (Menor valor vence)\n");
printf("Opção 1: ");
scanf(" %c", &opcao1);

// Caso escolha alguma opção fora de norma
if (opcao1 < 'A' || opcao1 > 'E') {
    printf("Opção inválida\n");
    return 0;
}

if (opcao1 == opcao2)
{
    printf("Você escolheu ao mesmo atributo");
} else {
}

//Comparações

//Primeira comparação.
switch (opcao1)
{
    case 'A':
    case 'a':
        printf("Você escolheu a População\n");
        resultado1 = populacao_1 > populacao_2 ? 1 : 0;
        break;
    case 'B':
    case 'b':
        printf("Você escolheu a Área\n");
        resultado1 = area_1 > area_2 ? 1 : 0;
        break;
    case 'C':
    case 'c':
        printf("Você escolheu o PIB\n");
        resultado1 = PIB_1 > PIB_2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("Você escolheu o Número de pontos turísticos\n");
        resultado1 = nPontosTur_1 > nPontosTur_2 ? 1 : 0;
        break;
    case 'E':
    case 'e':
        printf("Você escolheu a Densidade Demografica\n");
        resultado1 = DensidadePopulacional_1 < DensidadePopulacional_2 ? 1 : 0;
        break;
}

//Segunda comparação


// Segundo item
printf("Escolha o segundo item para comparação\n");
printf("A - População\n");
printf("B - Área\n");
printf("C - PIB\n");
printf("D - Número de pontos turísticos\n");
printf("E - Densidade demográfica (Menor valor vence)\n");
printf("Opção 2: ");
scanf(" %c", &opcao2);

//Caso escolha alguma opção fora de norma
if (opcao2 < 'A' || opcao2 > 'E') {
    printf("Opção inválida\n");
    return 0;
}

if (opcao1 == opcao2)
{
    printf("Você escolheu o mesmo atributo\n");
} else {
    switch (opcao2)
    {
    case 'A':
    case 'a':
        printf("Você escolheu a População\n");
        resultado2 = populacao_1 > populacao_2 ? 1 : 0;
        break;
    case 'B':
    case 'b':
        printf("Você escolheu a área\n");
        resultado2 = area_1 > area_2 ? 1 : 0;
        break;
    case 'C':
    case 'c':
        printf("Você escolheu PIB\n");
        resultado2 = PIB_1 > PIB_2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("Você escolheu Número de pontos turísticos\n");
        resultado2 = nPontosTur_1 > nPontosTur_2 ? 1 : 0;
        break;
    case 'E':
    case 'e':
        printf("Você escolheu Densidade Demográfica\n");
        resultado2 = DensidadePopulacional_1 < DensidadePopulacional_2 ? 1 : 0;
        break;
    }
}


//Resultado das comparações
    if (resultado1 && resultado2)
    {
        printf("Você venceu\n");

    } else if (resultado1 != resultado2){
        printf("Empate\n");
    } else {
        printf("Você perdeu\n");
    }
    
return 0;
}
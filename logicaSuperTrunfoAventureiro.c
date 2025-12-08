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

int opcao;

printf("Escolha o item para comparação\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Número de pontos turísticos\n");
printf("5 - Densidade demográfica (Menor valor vence)\n");
printf("Opção: ");
scanf("%d", &opcao);

//Resultados de comparação

 printf("\nResultados das comparações\n");

switch(opcao) {

    case 1:
    printf("Atributo comparado: População\n");
    printf("%s: %lu habitantes\n", nomeCidade_1, populacao_1);
    printf("%s: %lu habitantes\n", nomeCidade_2, populacao_2);

    if (populacao_1 > populacao_2)
        printf("Venceu: %s\n", nomeCidade_1);
    else if (populacao_1 < populacao_2)
        printf("Venceu: %s\n", nomeCidade_2);
    else
        printf("Empatou\n");
        break;
    

    case 2:
    printf("Atributo comparado: Área\n");
    printf("%s: %.2f km²\n", nomeCidade_1, area_1);
    printf("%s: %.2f km²\n", nomeCidade_2,area_2);

        if (area_1 > area_2)
        printf("Venceu: %s\n", nomeCidade_1);
    else if (area_1 < area_2)
        printf("Venceu: %s\n", nomeCidade_2);
    else
        printf("Empatou\n");
        break;



        case 3:
    printf("Atributo comparado: PIB\n");
    printf("%s: %.2f bilhões\n", nomeCidade_1, PIB_1);
    printf("%s: %.2f bilhões\n", nomeCidade_2,PIB_2);

        if (PIB_1 > PIB_2)
        printf("Venceu: %s\n", nomeCidade_1);
    else if (PIB_1 < PIB_2)
        printf("Venceu: %s\n", nomeCidade_2);
    else
        printf("Empatou\n");
        break;



        case 4:
    printf("Atributo comparado: Pontos Turísticos\n");
    printf("%s: %d pontos\n", nomeCidade_1, nPontosTur_1);
    printf("%s: %d pontos\n", nomeCidade_2,nPontosTur_2);

        if (nPontosTur_1 > nPontosTur_2)
        printf("Venceu: %s\n", nomeCidade_1);
    else if (nPontosTur_1 < nPontosTur_2)
        printf("Venceu: %s\n", nomeCidade_2);
    else
        printf("Empatou\n");
        break;



        case 5:
    printf("Atributo comparado: Densidade Demográfica (menor vence)\n");
    printf("%s: %.2f hab/km²\n", nomeCidade_1, DensidadePopulacional_1);
    printf("%s: %.2f hab/km²\n", nomeCidade_2, DensidadePopulacional_2);

        if (DensidadePopulacional_1 < DensidadePopulacional_2)
        printf("Venceu: %s\n", nomeCidade_1);
    else if (DensidadePopulacional_1 > DensidadePopulacional_2)
        printf("Venceu: %s\n", nomeCidade_2);
    else
        printf("Empatou\n");
        break;

        default:
        printf("Opção inválida. Escolha novamente \n");
        break;
    
    }


return 0;
}
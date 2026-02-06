#include<stdio.h>

int main()
{
    //CÓDIGO DO JOGO SUPER TRUNFO - PAÍSES
    
    //Carta 1
    char estadoCarta1;
    char codigoCarta1[5];
    //Adicionar uma variável que retorne o número da carta com estado + código
    char cidadeCarta1[20];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontos_turisticosCarta1;

    //Carta 2
    char estadoCarta2;
    char codigoCarta2[5];
    //Adicionar uma variável que retorne o número da carta com estado + código
    char cidadeCarta2[20];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontos_turisticosCarta2;

    //Título inicial do sistema - Super Trunfo
    printf("\t\tSuper Trunfo - Países.\n\n");

    //Informações em tela
    printf("\tVamos começar!.\n");
    printf("Para começar o jogo informe os dados solicitados a seguir.\n\n");

    //Inserção de dados para a carta 1
    printf("\tInforme os dados para a 1ª carta.\n");
    printf("Insira uma letra de A - H para referênciar um estado brasileiro.\n");
    scanf(" %c", &estadoCarta1);
    printf("Insira um código para a carta de 01 - 04.\n");
    scanf(" %s", &codigoCarta1);
    printf("Insira o nome de uma cidade.\n");
    scanf(" %s", &cidadeCarta1);
    printf("Insira o número de habitantes de %s.\n", cidadeCarta1);
    scanf(" %d", &populacaoCarta1);
    printf("Insira a área tota de %s.\n", cidadeCarta1);
    scanf(" %f", &areaCarta1);
    printf("Insira o PIB de %s.\n", cidadeCarta1);
    scanf(" %f", &pibCarta1);
    printf("Insira o número total de pontos turísticos de %s.\n", cidadeCarta1);
    scanf(" %d", &pontos_turisticosCarta1);

    //Inserção de dados para a carta 2
    printf("\tInforme os dados para a 2ª carta.\n");
    printf("Insira uma letra de A - H para referênciar um estado brasileiro.\n");
    scanf(" %c", &estadoCarta2);
    printf("Insira um código para a carta de 01 - 04.\n");
    scanf(" %s", &codigoCarta2);
    printf("Insira o nome de uma cidade.\n");
    scanf(" %s", &cidadeCarta2);
    printf("Insira o número de habitantes de %s.\n", cidadeCarta2);
    scanf(" %d", &populacaoCarta2);
    printf("Insira a área tota de %s.\n", cidadeCarta2);
    scanf(" %f", &areaCarta2);
    printf("Insira o PIB de %s.\n", cidadeCarta2);
    scanf(" %f", &pibCarta2);
    printf("Insira o número total de pontos turísticos de %s.\n", cidadeCarta2);
    scanf(" %d", &pontos_turisticosCarta2);

    //Apresentar em tela as informações referentes a carta 1
    printf("\tConfira as informações adicionadas ao jogo: referência carta 1\n");
    printf("O estado escolhido faz referência a letra %c.\n", estadoCarta1);
    printf("O código informado para a carta %c%s.\n", estadoCarta1, codigoCarta1);
    printf("A cidade escolhida que pertence ao estado %c é %s.\n", estadoCarta1, cidadeCarta1);
    printf("O número de habitantes da cidade de %s é de %d.\n", cidadeCarta1, populacaoCarta1);
    printf("A área total de %s é de %.2f km².\n", cidadeCarta1, areaCarta1);
    printf("O PIB da cidade de %s é de %.2f.\n", cidadeCarta1, pibCarta1);
    printf("O total de pontos turísticos da cidade de %s é de %d.\n\n\n", cidadeCarta1, pontos_turisticosCarta1);

    //Apresentar em tela as informações referentes a carta 2
    printf("\tConfira as informações adicionadas ao jogo: referência carta 2\n");
    printf("O estado escolhido faz referência a letra %c.\n", estadoCarta2);
    printf("O código informado para a carta %c%s.\n", estadoCarta2, codigoCarta2);
    printf("A cidade escolhida que pertence ao estado %c é %s.\n", estadoCarta2, cidadeCarta2);
    printf("O número de habitantes da cidade de %s é de %d.\n", cidadeCarta2, populacaoCarta2);
    printf("A área total de %s é de %.2f km².\n", cidadeCarta2, areaCarta2);
    printf("O PIB da cidade de %s é de %.2f.\n", cidadeCarta2, pibCarta2);
    printf("O total de pontos turísticos da cidade de %s é de %d.\n", cidadeCarta2, pontos_turisticosCarta2);

    return 0;
}


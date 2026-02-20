#include<stdio.h>

int main()
{
    //CÓDIGO DO JOGO SUPER TRUNFO - PAÍSES

    //Carta 1
    char estadoCarta1;
    char codigoCarta1[5];
    char cidadeCarta1[20];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontos_turisticosCarta1;
    float densidadePopulacionalCarta1;
    float pibPercaptaCarta1;
    float superPoderCarta1;

    //Carta 2
    char estadoCarta2;
    char codigoCarta2[5];
    char cidadeCarta2[20];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontos_turisticosCarta2;
    float densidadePopulacionalCarta2;
    float pibPercaptaCarta2;
    float superPoderCarta2;

    //Título inicial do sistema - Super Trunfo
    printf("\t\tSuper Trunfo - Países.\n");

    //Informações em tela
        printf("\tVamos começar!.\n");
        printf("Para começar o jogo informe os dados solicitados a seguir.\n\n");

        //Adicionar dados para a carta 1
        printf("\tInforme os dados para a 1ª carta.\n");
        printf("Insira uma letra de A - H para referênciar um estado brasileiro.\n");
        scanf(" %c", &estadoCarta1);
        printf("Insira um código para a carta de 01 - 04.\n");
        scanf(" %s", codigoCarta1);
        printf("Insira o nome de uma cidade.\n");
        scanf(" %s", cidadeCarta1);
        printf("Insira o número de habitantes de %s.\n", cidadeCarta1);
        scanf(" %d", &populacaoCarta1);
        printf("Insira a área tota de %s.\n", cidadeCarta1);
        scanf(" %f", &areaCarta1);
        printf("Insira o PIB de %s.\n", cidadeCarta1);
        scanf(" %f", &pibCarta1);
        printf("Insira o número total de pontos turísticos de %s.\n", cidadeCarta1);
        scanf(" %d", &pontos_turisticosCarta1);

        //Adicionar dados para a carta 2
        printf("\tInforme os dados para a 2ª carta.\n");
        printf("Insira uma letra de A - H para referênciar um estado brasileiro.\n");
        scanf(" %c", &estadoCarta2);
        printf("Insira um código para a carta de 01 - 04.\n");
        scanf(" %s", codigoCarta2);
        printf("Insira o nome de uma cidade.\n");
        scanf(" %s", cidadeCarta2);
        printf("Insira o número de habitantes de %s.\n", cidadeCarta2);
        scanf(" %d", &populacaoCarta2);
        printf("Insira a área tota de %s.\n", cidadeCarta2);
        scanf(" %f", &areaCarta2);
        printf("Insira o PIB de %s.\n", cidadeCarta2);
        scanf(" %f", &pibCarta2);
        printf("Insira o número total de pontos turísticos de %s.\n", cidadeCarta2);
        scanf(" %d", &pontos_turisticosCarta2);

        //Calculo da densidade populacional
        densidadePopulacionalCarta1 = (float)populacaoCarta1/areaCarta1;
        densidadePopulacionalCarta2 = (float)populacaoCarta2/areaCarta2;

        //Calculo do PIB per Capita
        pibPercaptaCarta1 = pibCarta1 / (float)populacaoCarta1;
        pibPercaptaCarta2 = pibCarta2 / (float)populacaoCarta2;

        //Somatório para Super poder
        superPoderCarta1 = (float)populacaoCarta1+areaCarta1+pibCarta1 + (float)pontos_turisticosCarta1 + pibPercaptaCarta1 + (1.0f/densidadePopulacionalCarta1);
        superPoderCarta2 = (float)populacaoCarta2+areaCarta2+pibCarta2 + (float)pontos_turisticosCarta2 + pibPercaptaCarta2 + (1.0f/densidadePopulacionalCarta2);
        
        //Apresentar em tela as informações referentes a carta 1
        printf("\tConfira as informações adicionadas ao jogo: referência carta 1\n");
        printf("Estado: %c.\n", estadoCarta1);
        printf("Código da carta: %c%s.\n", estadoCarta1, codigoCarta1);
        printf("Nome da cidade: %s.\n", cidadeCarta1);
        printf("População: %d.\n", populacaoCarta1);
        printf("Área: %.2f.\n", areaCarta1);
        printf("PIB: %.2f.\n", pibCarta1);
        printf("Densidade demográfica: %.2f.\n", densidadePopulacionalCarta1);
        printf("PIB per capta %.2f.\n", pibPercaptaCarta1);
        printf("Pontos Turísticos: %d.\n\n", pontos_turisticosCarta1);

        //Apresentar em tela as informações referentes a carta 2
        printf("\tConfira as informações adicionadas ao jogo: referência carta 2\n");
        printf("Estado: %c.\n", estadoCarta2);
        printf("Código da carta: %c%s.\n", estadoCarta2, codigoCarta2);
        printf("Nome da cidade: %s.\n", cidadeCarta2);
        printf("População: %d.\n", populacaoCarta2);
        printf("Área: %.2f.\n", areaCarta2);
        printf("PIB: %.2f.\n", pibCarta2);
        printf("Densidade demográfica: %.2f.\n", densidadePopulacionalCarta2);
        printf("PIB per capta %.2f.\n", pibPercaptaCarta2);
        printf("Pontos Turísticos: %d.\n\n", pontos_turisticosCarta2);

        //Comparação das cartas - VERDADEIRO E FALSO
        int populacaoCartaVencedora = populacaoCarta1 > populacaoCarta2;
        int areaCartaVencedora = areaCarta1 > areaCarta2;
        int pibCartaVencedora = pibCarta1 > pibCarta2;
        int pontos_turisticosCartaVencedora = pontos_turisticosCarta1 > pontos_turisticosCarta2;
        int densidadePopulacionalCartaVencedora = densidadePopulacionalCarta1 < densidadePopulacionalCarta2;
        int pibPercaptaCartaVencedora = pibPercaptaCarta1 > pibPercaptaCarta2;
        int superPoderCartaVencedora = superPoderCarta1 > superPoderCarta2;

        //Aprensentação das cartas vencedoras
        printf("\tConfira as cartas vencedoras em cada requisito\n");
        printf("Vencedora em População: %d.\n", populacaoCartaVencedora);
        printf("Vencedora em Área: %d.\n", areaCartaVencedora);
        printf("Vencedora em PIB: %d.\n", pibCartaVencedora);
        printf("Vencedora em Pontos Turísticos: %d.\n", pontos_turisticosCartaVencedora);
        printf("Vencedora em Densidade Demográfica: %d.\n", densidadePopulacionalCartaVencedora);
        printf("Vencedora em PIB per capta: %d.\n", pibPercaptaCartaVencedora);
        printf("Vencedora em Super Poder: %d.\n\n", superPoderCartaVencedora);

        //Comparação de cartas - (IF)
            printf("\tComparação entre cartas:.\n");
        
            //Maior população
            printf("Comparação: POPULAÇÃO.\n");
            printf("\tCarta 1 - %s: %d .\n", cidadeCarta1, populacaoCarta1);
            printf("\tCarta 2 - %s: %d .\n", cidadeCarta2, populacaoCarta2);

            if ( populacaoCarta1>populacaoCarta2 )
            {
                printf("Carta 1 ( %s )venceu!.\n\n", cidadeCarta1);
            }else
            {
                printf("Carta 2 ( %s )venceu!.\n\n", cidadeCarta2);
            }
            
            //Maior PIB
            printf("Comparação: PIB.\n");
            printf("\tCarta 1 - %s: %.2f .\n", cidadeCarta1, pibCarta1);
            printf("\tCarta 2 - %s: %.2f .\n", cidadeCarta2, pibCarta2);


            if ( pibCarta1>pibCarta2 )
            {
                printf("Carta 1 ( %s )venceu!.\n\n", cidadeCarta1);
            }else
            {
                printf("Carta 2 ( %s )venceu!.\n\n", cidadeCarta2);
            }

        //Comparações com menu - SWITCH E IF
            int opcoes;

            //Menu de comparações 
            printf("\t Menu de comparação.\n");
            printf("1 - População.\n");
            printf("2 - Área.\n"); 
            printf("3 - PIB.\n");
            printf("4 - Densidade demográfica.\n");
            printf("5 - PIB per capta.\n");
            printf("6 - Número de pontos turísticos.\n"); 

            printf("\tInsira o número correspondente a opção:.\n");
            scanf("%d", &opcoes);

            switch ( opcoes )
            {
                case 1:

                    //COMPARAÇÃO: POPULAÇÃO
                    if ( populacaoCarta1 > populacaoCarta2 )
                    {
                        //Carta 1
                        printf("\t Comparação selecionada: POPULAÇÃO.\n");
                        printf("Carta 1 VENCEDORA.\n");
                        printf("Nome da cidade: %s.\n", cidadeCarta1);
                        printf("População: %d.\n", populacaoCarta1);
                    }else if ( populacaoCarta2 > populacaoCarta1 )
                    {
                        //Carta 2
                        printf("\t Comparação selecionada: POPULAÇÃO.\n");
                        printf("Carta 2 VENCEDORA.\n");
                        printf("Nome da cidade: %s.\n", cidadeCarta2);
                        printf("População: %d.\n", populacaoCarta2);
                    }else
                    {
                        //Empate
                        printf("\t Comparação selecionada: POPULAÇÃO.\n");
                        printf("Empate entre Carta 1 e Carta 2.\n");
                    }
                break;
                case 2:

                    //COMPARAÇÃO: ÁREA
                    if ( areaCarta1 > areaCarta2 )
                    {
                        //Carta 1
                        printf("\t Comparação selecionada: ÁREA.\n");
                        printf("Carta 1 VENCEDORA.\n");
                        printf("Nome da cidade: %s.\n", cidadeCarta1);
                        printf("Área: %.2f.\n", areaCarta1);
                    }else if ( areaCarta2 > areaCarta1 )
                    {
                        //Carta 2
                        printf("\t Comparação selecionada: ÁREA.\n");
                        printf("Carta 2 VENCEDORA.\n");
                        printf("Nome da cidade: %s.\n", cidadeCarta2);
                        printf("Área: %.2f.\n", areaCarta2);
                    }else
                    {
                        //Empate
                        printf("\t Comparação selecionada: ÁREA.\n");
                        printf("Empate entre Carta 1 e Carta 2.\n");
                    }    
                break;
                case 3:

                    //COMPARAÇÃO: PIB
                    if ( pibCarta1 > pibCarta2 )
                    {
                        //Carta 1
                        printf("\t Comparação selecionada: PIB.\n");
                        printf("Carta 1 VENCEDORA.\n");
                        printf("Nome da cidade: %s.\n", cidadeCarta1);
                        printf("PIB: %.2f.\n", pibCarta1);
                    }else if ( pibCarta2 > pibCarta1 )
                    {
                        //Carta 2
                        printf("\t Comparação selecionada: PIB.\n");
                        printf("Carta 2 VENCEDORA.\n");
                        printf("Nome da cidade: %s.\n", cidadeCarta2);
                        printf("PIB: %.2f.\n", pibCarta2);
                    }else
                    {
                        //Empate
                        printf("\t Comparação selecionada: PIB.\n");
                        printf("Empate entre Carta 1 e Carta 2.\n");
                    }            
                break;
                case 4:

                    //COMPARAÇÃO: DENSIDADE DEMOGRÁFICA
                    if ( densidadePopulacionalCarta1 > densidadePopulacionalCarta2 )
                    {
                        //Carta 1
                        printf("\t Comparação selecionada: DENSIDADE DEMOGRÁFICA.\n");
                        printf("Carta 1 VENCEDORA.\n");
                        printf("Nome da cidade: %s.\n", cidadeCarta1);
                        printf("Densidade demográfica: %.2f.\n", densidadePopulacionalCarta1);
                    }else if ( densidadePopulacionalCarta2 > densidadePopulacionalCarta1 )
                    {
                        //Carta 2
                        printf("\t Comparação selecionada: DENSIDADE DEMOGRÁFICA.\n");
                        printf("Carta 2 VENCEDORA.\n");
                        printf("Nome da cidade: %s.\n", cidadeCarta2);
                        printf("Densidade demográfica: %.2f.\n", densidadePopulacionalCarta2);
                    }else
                    {
                        //Empate
                        printf("\t Comparação selecionada: DENSIDADE DEMOGRÁFICA.\n");
                        printf("Empate entre Carta 1 e Carta 2.\n");
                    }
                break;
                case 5:

                    //COMPARAÇÃO: PIB PER CAPTA
                    if ( pibPercaptaCarta1 > pibPercaptaCarta2 )
                    {
                        //Carta 1
                        printf("\t Comparação selecionada: PIB PER CAPTA.\n");
                        printf("Carta 1 VENCEDORA.\n");
                        printf("Nome da cidade: %s.\n", cidadeCarta1);
                        printf("PIB per capta %.2f.\n", pibPercaptaCarta1);
                    }else if ( pibPercaptaCarta2 > pibPercaptaCarta1 )
                    {
                        //Carta 2
                        printf("\t Comparação selecionada: PIB PER CAPTA.\n");
                        printf("Carta 2 VENCEDORA.\n");
                        printf("Nome da cidade: %s.\n", cidadeCarta2);
                        printf("PIB per capta %.2f.\n", pibPercaptaCarta2);
                    }else
                    {
                        //Empate
                        printf("\t Comparação selecionada: PIB PER CAPTA.\n");
                        printf("Empate entre Carta 1 e Carta 2.\n");
                    }
                break;
                case 6:

                    //COMPARAÇÃO: NÚMERO DE PONTOS TURÍSTICOS
                    if ( pontos_turisticosCarta1 > pontos_turisticosCarta2 )
                    {
                        //Carta 1
                        printf("\t Comparação selecionada: PONTOS TURÍSTICOS.\n");
                        printf("Carta 1 VENCEDORA.\n");
                        printf("Nome da cidade: %s.\n", cidadeCarta1);
                        printf("Pontos Turísticos: %d.\n", pontos_turisticosCarta1);
                    }else if ( pontos_turisticosCarta2 > pontos_turisticosCarta1 )
                    {
                        //Carta 2
                        printf("\t Comparação selecionada: PONTOS TURÍSTICOS.\n");
                        printf("Carta 2 VENCEDORA.\n");
                        printf("Nome da cidade: %s.\n", cidadeCarta2);
                        printf("Pontos Turísticos: %d.\n", pontos_turisticosCarta2);
                    }else
                    {
                        //Empate
                        printf("\t Comparação selecionada: PONTOS TURÍSTICOS.\n");
                        printf("Empate entre Carta 1 e Carta 2.\n");
                    }
                break;

                default:
                    printf("Opção inválida! Tente novamente.\n");
                break;
            }

    return 0;
}

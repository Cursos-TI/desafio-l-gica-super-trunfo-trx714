#include <stdio.h>

int main() {

    // variaveis da carta 1
    char pais_1[20];
    char estado_1[20];
    char codigo_da_carta_1[20];
    char nome_da_cidade_1[20];
    int populacao_1;
    float Area_em_km2_1;
    float PIB_1;
    int pontos_turisticos_1;
    float densidade_populacional_1;
    float densidade_populacao_invertida_1;
    float PIB_per_capita_1;
    float super_poder_1;
    // variaveis para as duas cartas
    int resultadopopulacao, resultadoarea, resultadoPIB, resultadopontosturisticos, resultadodensidadepopulacional, resultado_PIB_per_capita, resultado_super_poder, escolha1, escolha2;
    int primeiroatributo, segundoatributo, resultado1, resultado2, soma1 = 0, soma2 = 0;
    float somadacarta1, somadacarta2;
    const char *atributos[] = {
        "",
        "População",
        "Área",
        "PIB",
        "Pontos Turísticos",
        "Densidade Populacional"
    };
 
    

    // variaveis da carta 2
    char pais_2[20];
    char estado_2[20];
    char codigo_da_carta_2[20];
    char nome_da_cidade_2[20];
    int populacao_2;
    float Area_em_km2_2;
    float PIB_2;
    int pontos_turisticos_2;
    float densidade_populacional_2;
    float densidade_populacao_invertida_2;
    float PIB_per_capita_2;
    float super_poder_2;


    printf("insira as informações\n");

    printf("carta 1\n");

    
//codigo de registro da carta 1

    printf("Digite o nome do país: ");
    scanf("%s", pais_2);
    printf("Digite o nome do estado: ");
    scanf("%s", estado_1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_da_carta_1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade_1);

    printf("Digite o numero populacional: ");
    scanf("%d", &populacao_1);

    printf("Digite a area em km2: ");
    scanf("%f", &Area_em_km2_1);

    printf("Digite o PIB do local: ");
    scanf("%f", &PIB_1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_1);

    printf("carta 2\n");


    //codigo de registro da carta 2
        
        printf("Digite o nome do país: ");
        scanf("%s", pais_1);
        printf("Digite o nome do estado: ");
        scanf("%s", estado_2);
    
        printf("Digite o codigo da carta: ");
        scanf("%s", codigo_da_carta_2);
    
        printf("Digite o nome da cidade: ");
        scanf("%s", nome_da_cidade_2);
    
        printf("Digite o numero populacional: ");
        scanf("%d", &populacao_2);
    
        printf("Digite a area em km2: ");
        scanf("%f", &Area_em_km2_2);
    
        printf("Digite o PIB do local: ");
        scanf("%f", &PIB_2);
    
        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontos_turisticos_2);

        //impressao da carta 1

        printf("carta 1\n");


        printf("estado: %s\n", estado_1);

        printf("codigo: %s\n", codigo_da_carta_1);


        printf("nome da cidade: %s\n", nome_da_cidade_1);


        printf("populacao: %d\n", populacao_1);


        printf("area: %.2f\n", Area_em_km2_1);


        printf("PIB: %.2f\n", PIB_1);


        printf("numeros de pontos turisticos: %d\n", pontos_turisticos_1);
        // calculo da densidade populacional da carta 1

        densidade_populacional_1 = (float)populacao_1 / Area_em_km2_1;
        densidade_populacao_invertida_1 = 1.0 / densidade_populacional_1;
        // calculo do PIB per capita da carta 1

        PIB_per_capita_1 = PIB_1 / (float)populacao_1;

        // calculo do super poder da carta 1

        super_poder_1 = populacao_1 + Area_em_km2_1 + PIB_1 + PIB_per_capita_1 + densidade_populacao_invertida_1 + pontos_turisticos_1;

        printf("Densidade populacional: %.2f hab/km2\n", densidade_populacional_1);

        printf("PIB per capita: %f\n", PIB_per_capita_1);

        printf("super poder: %.2f\n", super_poder_1);




         //impressao da carta 2

        printf("carta 2\n");


         printf("estado: %s\n", estado_2);
 
         printf("codigo: %s\n", codigo_da_carta_2);
 
 
         printf("nome da cidade: %s\n", nome_da_cidade_2);
 
 
         printf("populacao: %d\n", populacao_2);
 
 
         printf("area: %.2f\n", Area_em_km2_2);
 
 
         printf("PIB: %.2f\n", PIB_2);
     
 
         printf("numeros de pontos turisticos: %d\n", pontos_turisticos_2);
         // calculo da densidade populacional da carta 2

         densidade_populacional_2 = (float)populacao_2 / Area_em_km2_2;
         densidade_populacao_invertida_2 = 1.0 / densidade_populacional_2;

          // calculo do PIB per capita da carta 2

          PIB_per_capita_2 = PIB_2 / (float)populacao_2;
          // calculo do super poder da carta2

        
          super_poder_2 = populacao_2 + Area_em_km2_2 + PIB_2 + PIB_per_capita_2 + densidade_populacao_invertida_2 + pontos_turisticos_2;



          printf("Densidade populacional: %.2f hab/km2\n", densidade_populacional_2);

        printf("PIB per capita: %f\n", PIB_per_capita_2);

        printf("super poder: %.2f\n", super_poder_2);

        // comparação das cartas
        printf("Comparação de atributos das cartas:\n");

        printf("Escolha o primeiro atributo para comparar\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade populacional\n");
        scanf("%d", &primeiroatributo);

        switch (primeiroatributo)
        {
        case 1:
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
        case 2:
            resultado1 = Area_em_km2_1 > Area_em_km2_2 ? 1 : 0;
            break;
        case 3:
            resultado1 = PIB_1 > PIB_2 ? 1 : 0;
            break;
        case 4:
            resultado1 = pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 0;
            break;
        case 5:
            resultado1 = densidade_populacional_1 < densidade_populacional_2 ? 1 : 0;
            break;

        
        default:
        printf("opção invalida!\n");
            break;
        }

        printf("Escolha o segundo atributo para comparar\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade populacional\n");
        scanf("%d", &segundoatributo);

        switch (segundoatributo)
        {
        case 1:
            resultado2 = populacao_1 > populacao_2 ? 1 : 0;
            break;
        case 2:
            resultado2 = Area_em_km2_1 > Area_em_km2_2 ? 1 : 0;
            break;
        case 3:
            resultado2 = PIB_1 > PIB_2 ? 1 : 0;
            break;
        case 4:
            resultado2 = pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 0;
            break;
        case 5:
            resultado2 = densidade_populacional_1 < densidade_populacional_2 ? 1 : 0;
            break;

        default:
        printf("opção invalida!\n");
            break;
        }
        //valor da soma das duas cartas

        if (primeiroatributo == 1){
            soma1 = soma1 + populacao_1;
            soma2 = soma2 + populacao_2;
        }else if (primeiroatributo == 2){
            soma1 = soma1 + Area_em_km2_1;
            soma2 = soma2 + Area_em_km2_2;
        }else if (primeiroatributo == 3){
            soma1 = soma1 + PIB_1;
            soma2 = soma2 + PIB_2;
        }else if (primeiroatributo == 4){
            soma1 = soma1 + pontos_turisticos_1;
            soma2 = soma2 + pontos_turisticos_2;
        }else {
            soma1 = soma1 + densidade_populacional_1;
            soma2 = soma1 + densidade_populacional_2;
        }

        // soma das duas cartas
        somadacarta1 = (float) soma1 + (float) soma2;
        somadacarta2 = (float) soma1 + (float) soma2;




        if (primeiroatributo == segundoatributo){
            printf("voce escolheu o mesmo atributo para comparar\n");

        }
        if (resultado1 && resultado2){
            printf("Países (%s) e (%s)\n", pais_1, pais_2);
            printf("os atributos usados são %s e %s\n", atributos[primeiroatributo], atributos[segundoatributo]);
            switch (primeiroatributo)
            {
            case 1:
            printf("População - Carta 1: %d, Carta 2: %d\n", populacao_1, populacao_2);
                break;
            case 2:
            printf("Área - Carta 1: %.2f, Carta 2: %.2f\n", Area_em_km2_1, Area_em_km2_2);
                break;

            case 3:
            printf("PIB - Carta 1: %.2f, Carta 2: %.2f\n", PIB_1, PIB_2);
                break;
            case 4:
            printf("Pontos Turísticos - Carta 1: %d, Carta 2: %d\n", pontos_turisticos_1, pontos_turisticos_2);
                break;
            case 5:
            printf("Densidade Populacional - Carta 1: %.2f, Carta 2: %.2f\n", densidade_populacional_1, densidade_populacional_2);
                break;
            }
            switch (segundoatributo)
            {
            case 1:
            printf("População - Carta 1: %d, Carta 2: %d\n", populacao_1, populacao_2);
                break;
            case 2:
            printf("Área - Carta 1: %.2f, Carta 2: %.2f\n", Area_em_km2_1, Area_em_km2_2);
                break;

            case 3:
            printf("PIB - Carta 1: %.2f, Carta 2: %.2f\n", PIB_1, PIB_2);
                break;
            case 4:
            printf("Pontos Turísticos - Carta 1: %d, Carta 2: %d\n", pontos_turisticos_1, pontos_turisticos_2);
                break;
            case 5:
            printf("Densidade Populacional - Carta 1: %.2f, Carta 2: %.2f\n", densidade_populacional_1, densidade_populacional_2);
                break;
            }
            printf("Soma da Carta 1: %.2f\n", somadacarta1);
            printf("Soma da Carta 2: %.2f\n", somadacarta2);

            printf("Carta 1 venceu!\n");
        }else if (resultado1 != resultado2){
            printf("empatou!\n");
        }else {
        
            printf("Países (%s) e (%s)\n", pais_1, pais_2);
            printf("os atributos usados são %s e %s\n", atributos[primeiroatributo], atributos[segundoatributo]);
            switch (primeiroatributo)
            {
            case 1:
            printf("População - Carta 1: %d, Carta 2: %d\n", populacao_1, populacao_2);
                break;
            case 2:
            printf("Área - Carta 1: %.2f, Carta 2: %.2f\n", Area_em_km2_1, Area_em_km2_2);
                break;

            case 3:
            printf("PIB - Carta 1: %.2f, Carta 2: %.2f\n", PIB_1, PIB_2);
                break;
            case 4:
            printf("Pontos Turísticos - Carta 1: %d, Carta 2: %d\n", pontos_turisticos_1, pontos_turisticos_2);
                break;
            case 5:
            printf("Densidade Populacional - Carta 1: %.2f, Carta 2: %.2f\n", densidade_populacional_1, densidade_populacional_2);
                break;
            }
            switch (segundoatributo)
            {
            case 1:
            printf("População - Carta 1: %d, Carta 2: %d\n", populacao_1, populacao_2);
                break;
            case 2:
            printf("Área - Carta 1: %.2f, Carta 2: %.2f\n", Area_em_km2_1, Area_em_km2_2);
                break;

            case 3:
            printf("PIB - Carta 1: %.2f, Carta 2: %.2f\n", PIB_1, PIB_2);
                break;
            case 4:
            printf("Pontos Turísticos - Carta 1: %d, Carta 2: %d\n", pontos_turisticos_1, pontos_turisticos_2);
                break;
            case 5:
            printf("Densidade Populacional - Carta 1: %.2f, Carta 2: %.2f\n", densidade_populacional_1, densidade_populacional_2);
                break;
            }
            printf("Soma da Carta 1: %.2f\n", somadacarta1);
            printf("Soma da Carta 2: %.2f\n", somadacarta2);
            printf("Carta 2 venceu!\n");
        }

    return 0;
}

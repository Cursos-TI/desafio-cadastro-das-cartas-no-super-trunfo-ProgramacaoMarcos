#include <stdio.h>

int main(){
    char Estado1[50], Estado2[50];
    char CodigoCarta1[50], CodigoCarta2[50];
    char NomeCidade1[50], NomeCidade2[50];
    unsigned long int Populacao1, Populacao2;
    float Areakm21, Areakm22;
    double PIB1, PIB2;
    int NumeroPontosTuristicos1, NumeroPontosTuristicos2;
    double Densidadepopulacional1, Densidadepopulacional2;
    double PIBpercapita1, PIBpercapita2;
    double SuperPoder1, SuperPoder2;

    printf("Digite o Estado da Primeira Cidade: \n");
    scanf("%49s", Estado1);
    
    printf("Digite o Código da Carta: \n");
    scanf("%49s", CodigoCarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%49s", NomeCidade1);

    printf("Digite a População: \n");
    scanf("%lu", &Populacao1);

    printf("Digite a Área km²: \n");
    scanf("%f", &Areakm21);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &NumeroPontosTuristicos1);

    if (Areakm21 != 0) {
        Densidadepopulacional1 = Populacao1 / Areakm21;
    } else {
        Densidadepopulacional1 = 0;
    }
    PIBpercapita1 = PIB1 / Populacao1;
    SuperPoder1 = Populacao1 + Areakm21 + PIB1 + PIBpercapita1 + (Areakm21 != 0 ? 1 / Densidadepopulacional1 : 0) + NumeroPontosTuristicos1;

    printf("Digite o Estado da Segunda Cidade: \n");
    scanf("%49s", Estado2);
    
    printf("Digite o Código da Carta: \n");
    scanf("%49s", CodigoCarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%49s", NomeCidade2);

    printf("Digite a População: \n");
    scanf("%lu", &Populacao2);

    printf("Digite a Área km²: \n");
    scanf("%f", &Areakm22);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &NumeroPontosTuristicos2);

    if (Areakm22 != 0) {
        Densidadepopulacional2 = Populacao2 / Areakm22;
    } else {
        Densidadepopulacional2 = 0;
    }
    PIBpercapita2 = PIB2 / Populacao2;
    SuperPoder2 = Populacao2 + Areakm22 + PIB2 + PIBpercapita2 + (Areakm22 != 0 ? 1 / Densidadepopulacional2 : 0) + NumeroPontosTuristicos2;

    printf("\n----- Carta 1 -----\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", CodigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Areakm21);
    printf("PIB: %.2lf\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontosTuristicos1);
    printf("Densidade populacional: %.2lf hab/km²\n", Densidadepopulacional1);
    printf("PIB per capita: %.2lf\n", PIBpercapita1);
    printf("Super Poder 1: %.2lf\n", SuperPoder1);

    printf("\n----- Carta 2 -----\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Areakm22);
    printf("PIB: %.2lf\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontosTuristicos2);
    printf("Densidade populacional: %.2lf hab/km²\n", Densidadepopulacional2);
    printf("PIB per capita: %.2lf\n", PIBpercapita2);
    printf("Super Poder 2: %.2lf\n", SuperPoder2);

    printf("\nPopulação 1 é maior que População 2? %d\n", Populacao1 > Populacao2);
    printf("Área 1 é maior que Área 2? %d\n", Areakm21 > Areakm22);
    printf("PIB 1 é maior que PIB 2? %d\n", PIB1 > PIB2);
    printf("Número de Pontos Turísticos 1 é maior que 2? %d\n", NumeroPontosTuristicos1 > NumeroPontosTuristicos2);
    printf("Densidade populacional 1 é menor de 2? %d\n", Densidadepopulacional1 < Densidadepopulacional2);
    printf("PIB per capita 1 é maior ao PIB per capita 2? %d\n", PIBpercapita1 > PIBpercapita2);
    printf("Super Poder 1 é maior que Super Poder 2? %d\n", SuperPoder1 > SuperPoder2);

    return 0;
}
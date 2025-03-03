#include <stdio.h>

int main(){
    char Estado1 [50], Estado2 [50] ;
    char CodigoCarta1 [50], CodigoCarta2 [50] ;
    char NomeCidade1 [50], NomeCidade2 [50] ;
    int Populaçao1 , Populaçao2 ;
    float Areakm21 ,Areakm22 ;
    float PIB1, PIB2 ;
    int NumeroPontosTuristicos1, NumerosPontosTuristicos2 ;

    printf ("Digite o Estado da Primeira Cidade: \n");
    scanf ("%s", &Estado1);
    
    printf ("Digite o Codigo da Carta: \n");
    scanf ("%s", &CodigoCarta1);

    printf ("Digite o Nome da Cidade: \n");
    scanf ("%s", &NomeCidade1);

    printf ("Digite a Populaçao: \n");
    scanf ("%d", &Populaçao1);

    printf("Digite a Area km²: \n");
    scanf ("%f", &Areakm21);

    printf ("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf ("Digite o Numero de Pontos Turisticos: \n");
    scanf ("%d", &NumeroPontosTuristicos1);

    printf ("Digite o Estado da Segunda Cidade: \n");
    scanf ("%s", &Estado2);
    
    printf ("Digite o Codigo da Carta: \n");
    scanf ("%s", &CodigoCarta2);

    printf ("Digite o Nome da Cidade: \n");
    scanf ("%s", &NomeCidade2);

    printf ("Digite a Populaçao: \n");
    scanf ("%d", &Populaçao2);

    printf("Digite a Area km²: \n");
    scanf ("%f", &Areakm22);

    printf ("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf ("Digite o Numero de Pontos Turisticos: \n");
    scanf ("%d", &NumerosPontosTuristicos2);

    printf("\n----- Carta 1 -----\n");
    printf ("Estado:%s \n" ,Estado1);
    printf ("Codigo da Carta:%s \n" ,CodigoCarta1);
    printf ("Nome da Cidade:%s \n" ,NomeCidade1);
    printf ("Populaçao:%d \n" ,Populaçao1);
    printf ("Area:%f \n" ,Areakm21);
    printf("PIB:%f \n" ,PIB1);
    printf("Numero de pontos turisticos:%d \n" ,NumeroPontosTuristicos1);


    printf("\n----- Carta 2 -----\n");
    printf ("Estado:%s \n" ,Estado2);
    printf ("Codigo da Carta:%s \n" ,CodigoCarta2);
    printf ("Nome da Cidade:%s \n" ,NomeCidade2);
    printf ("Populaçao:%d \n" ,Populaçao2);
    printf ("Area:%f \n" ,Areakm22);
    printf("PIB:%f \n" ,PIB2);
    printf("Numero de pontos turisticos:%d \n" ,NumerosPontosTuristicos2);


    return 0;

}

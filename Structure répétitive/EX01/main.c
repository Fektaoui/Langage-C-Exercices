#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* En utilisant while */
    int N,i=1,Nom;
    long Som=0;
    double Prod=1;
    printf("Entrer le nombre de donn%ces :\t",130);
    scanf("%d",&N);
    while(i<=N){
        printf("%d. nombre :\t",i);
        scanf("%d",&Nom);
        Som+=Nom;
        Prod*=Nom;
        i++;
    }
    printf("La somme est %ld \nLe produit est %.0f \nLa moyenne est %.2f \n",Som,Prod,(float)Som/N);

    /* En utilisant do-while */
    int N,i=1,Nom;
    long Som=0;
    double Prod=1;
    printf("Entrer le nombre de donn%ces :\t",130);
    scanf("%d",&N);
    do{
        printf("%d. nombre :\t",i);
        scanf("%d",&Nom);
        Som+=Nom;
        Prod*=Nom;
        i++;
    }while(i<=N);
    printf("La somme est %ld \nLe produit est %.0f \nLa moyenne est %.2f \n",Som,Prod,(float)Som/N);

    /* En utilisant for */
    int N,i,Nom;
    long Som=0;
    double Prod=1;
    printf("Entrer le nombre de donn%ces :\t",130);
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        printf("%d. nombre :\t",i);
        scanf("%d",&Nom);
        Som+=Nom;
        Prod*=Nom;
    }
    printf("La somme est %ld \nLe produit est %.0f \nLa moyenne est %.2f \n",Som,Prod,(float)Som/N);

    /* La structure for est la plus compacte et celle qui exprime le mieux l'idée de l'algorithme. D'autre part, elle permet d'intégrer très confortablement l'initialisation et l'incrémentation des variables dans la structure. */
    return 0;
}

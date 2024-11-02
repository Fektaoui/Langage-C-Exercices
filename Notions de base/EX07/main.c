#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* en se servant de 5 variables ( mémorisation des valeurs entrées ) */
    int A,B,C,D;
    long som;
    printf("Entrer le premier nombre :\t");
    scanf("%d",&A);
    printf("Entrer le deuxi%cme nombre :\t",138);
    scanf("%d",&B);
    printf("Entrer le troisi%cme nombre :\t",138);
    scanf("%d",&C);
    printf("Entrer le quatri%cme nombre :\t",138);
    scanf("%d",&D);
    som=(long)A+B+C+D;
    printf("\t %d + %d + %d + %d = %ld \n",A,B,C,D,som);

    /* en se servant de 2 variables ( perte des valeurs entrées ) */
    int X;
    long SOM;
    SOM=0;
    printf("Entrer le premier nombre :\t");
    scanf("%d",&X);
    SOM+=X;
    printf("Entrer le deuxi%cme nombre :\t",138);
    scanf("%d",&X);
    SOM+=X;
    printf("Entrer le troisi%cme nombre :\t",138);
    scanf("%d",&X);
    SOM+=X;
    printf("Entrer le quatri%cme nombre :\t",138);
    scanf("%d",&X);
    SOM+=X;
    printf("La somme des nombres entr%cs est : %ld",130,SOM);
    return 0;
}

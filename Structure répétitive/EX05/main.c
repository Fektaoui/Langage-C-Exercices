#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* En utilisant while */
    int N,i=1;
    double Fac=1;
    do{
        printf("Entrer un nombre entier naturel :\t");
        scanf("%d",&N);
    }while(N<0);
    while(i<=N){
        Fac*=i;
        i++;
    }
    printf("%d%c = %.0lf \n",N,33,Fac);

    /* En utilisant for */
    int N,i;
    double Fac=1;
    do{
        printf("Entrer un nombre entier naturel :\t");
        scanf("%d",&N);
    }while(N<0);
    for(i=1;i<=N;i++){
        Fac*=i;
    }
    printf("%d%c = %.0lf \n",N,33,Fac);
    return 0;
}

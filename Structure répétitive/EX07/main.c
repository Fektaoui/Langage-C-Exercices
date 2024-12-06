#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* En utilisant for */
    int N,i;
    float Som=0;
    do{
        printf("Entrer un nombre entier :\t");
        scanf("%d",&N);
    }while(N<1);
    for(i=1;i<=N;i++){
        Som+=(float)1/i;
    }
    printf("La somme est %.2f\n",Som);

    /* En utilisant while */
    int N,i=1;
    float Som=0;
    do{
        printf("Entrer un nombre entier :\t");
        scanf("%d",&N);
    }while(N<1);
    while(i<=N){
        Som+=(float)1/i;
        i++;
    }
    printf("La somme est %.2f\n",Som);
    return 0;
}

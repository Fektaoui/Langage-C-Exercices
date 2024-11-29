#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* En utilisant while */
    int N,i=2;
    long Som=0;
    double Prod=1;
    do{
        printf("Entrer un nombre :\t");
        scanf("%d",&N);
    }while(N<0);
    while(i<=N){
        if(i%2==0){
            Som+=i;
            Prod*=i;
        }
        i++;
    }
    printf("La somme des entiers paires jusqu'%c %d est %ld\n",133,N,Som);
    printf("Le produit des entiers paires jusqu'%c %d est %.0lf\n",133,N,Prod);

    /* En utilisant for */
    int N,i;
    long Som=0;
    double Prod=1;
    do{
        printf("Entrer un nombre :\t");
        scanf("%d",&N);
    }while(N<0);
    for(i=2;i<=N;i++){
        if(i%2==0){
            Som+=i;
            Prod*=i;
        }
    }
    printf("La somme des entiers paires jusqu'%c %d est %ld\n",133,N,Som);
    printf("Le produit des entiers paires jusqu'%c %d est %.0lf\n",133,N,Prod);
    return 0;
}

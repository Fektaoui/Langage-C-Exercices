#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* En utilisant while */
    int X,N,i=1;
    double Prod=1;
    do{
        printf("Entrer un nombre entier naturel :\t");
        scanf("%d",&X);
    }while(X<0);
    do{
        printf("Entrer la puissance :\t");
        scanf("%d",&N);
    }while(N<0);
    while(i<=N){
        Prod*=X;
        i++;
    }
    if(X==0 && N==0){
        printf("Z%cro exposant z%cro n'est pas d%cfini \n",130,130,130);
    }else{
        printf("%d%c%d = %.0lf",X,94,N,Prod);
    }

    /* En utilisant for */
    int X,N,i;
    double Prod=1;
    do{
        printf("Entrer un nombre entier naturel :\t");
        scanf("%d",&X);
    }while(X<0);
    do{
        printf("Entrer la puissance :\t");
        scanf("%d",&N);
    }while(N<0);
    for(i=1;i<=N;i++){
        Prod*=X;
    }
    if(X==0 && N==0){
        printf("Z%cro exposant z%cro n'est pas d%cfini \n",130,130,130);
    }else{
        printf("%d%c%d = %.0lf",X,94,N,Prod);
    }
    return 0;
}

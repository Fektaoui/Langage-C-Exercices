#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,n,occ,rest,compt=0;
    do{
        printf("Entrer un nombre positif :\t");
        scanf("%d",&n);
    }while(n<0);
    do{
        printf("Entrer le chiffre :\t");
        scanf("%d",&occ);
    }while(0>=occ || occ>10);
    N=n;
    while(n){
        rest=n%10;
        n/=10;
        if(occ==rest){
            compt++;
        }
    }
    printf("L'occurrence du chiffre %d dans le nombre %d est %d\n",occ,N,compt);
    return 0;
}

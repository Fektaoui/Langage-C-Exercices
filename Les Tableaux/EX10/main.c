#include <stdio.h>
#include <stdlib.h>

int main()
{
    int U[10],V[10];
    int n;
    int i;
    long Prod=0;
    printf("Entrer la dimension des vecteurs :\t");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("U[%d]=",i);
        scanf("%d",&U[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("V[%d]=",i);
        scanf("%d",&V[i]);
    }
    for(i=0;i<n;i++){
        Prod+=U[i]*V[i];
    }
    printf("Le produit scalaire de deux vecteurs est %ld\n",Prod);
    return 0;
}

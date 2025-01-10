#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50];
    int n;
    int i,j,Pmax,AIDE;
    printf("Entrer la dimension du tableau :\t");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    for(i=0;i<n;i++){
        printf("%7d",T[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        Pmax=i;
        for(j=i+1;j<n;j++){
            if(T[j]>T[Pmax]){
                Pmax=j;
            }
        }
        AIDE=T[i];
        T[i]=T[Pmax];
        T[Pmax]=AIDE;
    }
    printf("Le tableau tri%ce :\n",130);
    for(i=0;i<n;i++){
        printf("%7d",T[i]);
    }
    printf("\n");
    return 0;
}

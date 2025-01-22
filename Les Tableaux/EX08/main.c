#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50];
    int n,Val;
    int i,j,Pmin,AIDE;
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
        Pmin=i;
        for(j=i+1;j<n;j++){
            if(T[j]<T[Pmin]){
                Pmin=j;
            }
        }
        AIDE=T[i];
        T[i]=T[Pmin];
        T[Pmin]=AIDE;
    }
    printf("Le tableau tri%ce :\n",130);
    for(i=0;i<n;i++){
        printf("%7d",T[i]);
    }
    printf("\n");
    printf("El%cment %c ins%crer :\t",130,133,130);
    scanf("%d",&Val);
    for(i=0;i<n+1;i++){
        if(Val<T[i]){
            AIDE=T[i];
            T[i]=Val;
            Val=AIDE;
        }
    }
    T[n]=Val;
    printf("Tableau r%csultat :\n",130);
    for(i=0;i<n+1;i++){
        printf("%7d",T[i]);
    }
    return 0;
}

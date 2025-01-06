#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50],i,j,n;
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
    for(j=0,i=0;i<n;i++){
        T[j]=T[i];
        if(T[i]) j++;
    }
    n=j;
    for(i=0;i<n;i++){
        printf("%7d",T[i]);
    }
    printf("\n");
    return 0;
}

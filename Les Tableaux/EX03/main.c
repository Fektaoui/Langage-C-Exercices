#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50],i,j,n,AIDE;
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
    for(i=0,j=n-1;i<j;i++,j--){
        AIDE=T[i];
        T[i]=T[j];
        T[j]=AIDE;
    }
    for(i=0;i<n;i++){
        printf("%7d",T[i]);
    }
    printf("\n");
    return 0;
}

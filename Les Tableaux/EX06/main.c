#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50];
    int n;
    int i,j,AIDE;
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
        for(j=i+1;j<n;j++){
            if(T[j]<T[i]){
                AIDE=T[j];
                T[j]=T[i];
                T[i]=AIDE;
                i=0;
            }
        }
    }
    printf("Le tableau tri%ce :\n",130);
    for(i=0;i<n;i++){
        printf("%7d",T[i]);
    }
    printf("\n");
    return 0;
}

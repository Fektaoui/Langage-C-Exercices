#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50];
    int n;
    int i,Max,Min;
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
    Max=0;
    Min=0;
    for(i=0;i<n;i++){
        if(T[i]>T[Max]){
            Max=i;
        }
        if(T[i]<T[Min]){
            Min=i;
        }
    }
    printf("La plus grande valeur est %d de la position %d\n",T[Max],Max);
    printf("La plus petite valeur est %d de la position %d\n",T[Min],Min);
    return 0;
}

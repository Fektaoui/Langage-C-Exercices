#include <stdio.h>
#include <stdlib.h>

int main()
{
    int POINTS[50];
    int N;
    int i,Max,Min;
    long Som=0;
    printf("Entrer le nombre des %cl%cves :\t",130,138);
    scanf("%d",&N);
    for(i=0;i<N;i++){
        printf("POINTS[%d]=",i);
        scanf("%d",&POINTS[i]);
    }
    Max=0;
    Min=0;
    for(i=0;i<N;i++){
        if(POINTS[i]>POINTS[Max]){
            Max=i;
        }
        if(POINTS[i]<POINTS[Min]){
            Min=i;
        }
        Som+=POINTS[i];
    }
    printf("La note maximale est %d\n La note minimale est %d\n La moyenne des notes est %.2f\n",POINTS[Max],POINTS[Min],(float)Som/N);
    return 0;
}

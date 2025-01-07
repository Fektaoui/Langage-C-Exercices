                #include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50],i,n;
    long Som=0;
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
        Som+=T[i];
    }
    printf("La somme des %cl%cments du tableau est %ld",130,130,Som);
    return 0;
}

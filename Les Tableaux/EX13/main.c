#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50][50];
    int L,C;
    int i,j;
    long Som;
    printf("Entrer la dimension du tableau (L et C):\t");
    scanf("%d %d",&L,&C);
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("T[%d][%d]=",i,j);
            scanf("%d",&T[i][j]);
        }
    }
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%7d",T[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<L;i++){
        for(Som=0,j=0;j<C;j++){
            Som+=T[i][j];
        }
        printf("La somme de %d. ligne est %ld\n",i+1,Som);
    }
    for(j=0;j<C;j++){
        for(Som=0,i=0;i<L;i++){
            Som+=T[i][j];
        }
        printf("La somme de %d. cologne est %ld\n",j+1,Som);
    }
    return 0;
}

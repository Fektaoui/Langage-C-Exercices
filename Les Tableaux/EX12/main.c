#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50][50];
    int L,C;
    int i,j;
    long Som=0;
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
        for(j=0;j<C;j++){
            Som+=T[i][j];
        }
    }
    printf("La somme de tous ses %cl%cments est %ld\n",130,130,Som);
    return 0;
}

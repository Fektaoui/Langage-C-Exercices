#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10][10];
    int V[100];
    int L,C;
    int i,j;
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
            V[i*C+j]=T[i][j];
        }
    }
    for(i=0;i<L*C;i++){
        printf("%7d",V[i]);
    }
    printf("\n");
    return 0;
}

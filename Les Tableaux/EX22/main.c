#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10][10];
    int Max[10][10],Min[10][10];
    int AIDE;
    int L,C;
    int i,j,comp;
    printf("Entrer le dimension de matrice A (L et C):\t");
    scanf("%d %d",&L,&C);
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    printf("Matrice A donn%ce :\n",130);
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%7d",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrice de Max :\n");
    for(i=0;i<L;i++){
        AIDE=A[i][0];
        for(j=1;j<C;j++){
            if(A[i][j]>AIDE){
                AIDE=A[i][j];
            }
        }
        for(j=0;j<C;j++){
            Max[i][j]=(A[i][j]==AIDE?1:0);
        }
    }
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%7d",Max[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrice de Min :\n");
    for(j=0;j<C;j++){
        AIDE=A[0][j];
        for(i=1;i<L;i++){
            if(A[i][j]<AIDE){
                AIDE=A[i][j];
            }
        }
        for(i=0;i<L;i++){
            Min[i][j]=(A[i][j]==AIDE?1:0);
        }
    }
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%7d",Min[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(comp=0,i=0;i<L;i++){
        for(j=0;j<C;j++){
            if(Max[i][j]&&Min[i][j]){
                comp++;
                printf("A[%d][%d]=%d est un point-col.\n",i,j,A[i][j]);
            }
        }
    }
    if(comp==0){
        printf("Le tableau ne contient pas de points-cols.\n");
    }
    return 0;
}

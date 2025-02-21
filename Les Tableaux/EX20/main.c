#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[50][50],B[50][50];
    int C[50][50];
    int N,M,P;
    int i,j,k;
    printf("Le nombre de lignes de matrice A :\t");
    scanf("%d",&N);
    printf("Le nombre de colognes de matrice A :\t");
    scanf("%d",&M);
    printf("Le nombre de lignes de matrice B : %d\n",M);
    printf("Le nombre de colognes de matrice B :\t");
    scanf("%d",&P);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    printf("La matrice A donn%ce :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%7d",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<M;i++){
        for(j=0;j<P;j++){
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n");
    printf("La matrice B donn%ce :\n",130);
    for(i=0;i<M;i++){
        for(j=0;j<P;j++){
            printf("%7d",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrice r%csultat :\n",130);
    for(i=0;i<N;i++){
        for(k=0;k<P;k++){
            C[i][k]=0;
            for(j=0;j<M;j++){
                C[i][k]+=A[i][j]*B[j][k];
            }
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<P;j++){
            printf("%7d",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

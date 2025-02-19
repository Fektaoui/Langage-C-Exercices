#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* En utilisant une deuxième matrice */
    int A[50][50],B[50][50];
    int N,M;
    int i,j;
    printf("Entrer la dimension d'une matrice (N et M):\t");
    scanf("%d %d",&N,&M);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    printf("Matrice donn%ce :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%7d",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrice transpos%ce :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            B[j][i]=A[i][j];
        }
    }
    for(j=0;j<M;j++){
        for(i=0;i<N;i++){
            printf("%7d",B[j][i]);
        }
        printf("\n");
    }
    printf("\n");

    /* En utilisant la permutation */
    int A[50][50];
    int N,M,Dmax;
    int i,j;
    int AIDE;
    printf("Entrer la dimension d'une matrice (N et M):\t");
    scanf("%d %d",&N,&M);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    printf("Matrice donn%ce :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%7d",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrice transpos%ce :\n",130);
    Dmax=(N>M)?N:M;
    for(i=0;i<Dmax;i++){
        for(j=0;j<i;j++){
            AIDE=A[j][i];
            A[j][i]=A[i][j];
            A[i][j]=AIDE;
        }
    }
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("%7d",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

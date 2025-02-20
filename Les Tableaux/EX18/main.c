#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* En utilisant une deuxième matrice */
    float A[50][50];
    float B[50][50];
    int N,M;
    int i,j;
    float X;
    printf("Entrer la dimension d'une matrice (N et M):\t");
    scanf("%d %d",&N,&M);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("A[%d][%d]=",i,j);
            scanf("%f",&A[i][j]);
        }
    }
    printf("\n");
    printf("Matrice donn%ce :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%7.2f",A[i][j]);
        }
        printf("\n");
    }
    printf("Entrer le r%cel X :\t",130);
    scanf("%f",&X);
    printf("\n");
    printf("Matrice r%csultat :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            B[i][j]=X*A[i][j];
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%7.2f",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    /* Les éléments de A seront multipliés par X */
    float A[50][50];
    int N,M;
    int i,j;
    float X;
    printf("Entrer la dimension d'une matrice (N et M):\t");
    scanf("%d %d",&N,&M);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("A[%d][%d]=",i,j);
            scanf("%f",&A[i][j]);
        }
    }
    printf("\n");
    printf("Matrice donn%ce :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%7.2f",A[i][j]);
        }
        printf("\n");
    }
    printf("Entrer le r%cel X :\t",130);
    scanf("%f",&X);
    printf("\n");
    printf("Matrice r%csultat :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            A[i][j]*=X;
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%7.2f",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

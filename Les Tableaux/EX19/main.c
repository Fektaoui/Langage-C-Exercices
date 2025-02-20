#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* En utilisant une troisième matrice */
    int A[50][50],B[50][50];
    int C[50][50];
    int N,M;
    int i,j;
    printf("Entrer la dimension de deux matrices (N et M): \t");
    scanf("%d %d",&N,&M);
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
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n");
    printf("La matrice B donn%ce :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%7d",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrice r%csultat :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%7d",C[i][j]);
        }
        printf("\n");
    }

    /* La matrice B est ajoutée à A */
    int A[50][50],B[50][50];
    int N,M;
    int i,j;
    printf("Entrer la dimension de deux matrices (N et M): \t");
    scanf("%d %d",&N,&M);
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
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n");
    printf("La matrice B donn%ce :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%7d",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrice r%csultat :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            A[i][j]+=B[i][j];
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%7d",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}

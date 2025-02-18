#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[50][50];
    int N;
    int i,j;
    printf("Entrer la dimension de la matrice carr%ce :\t",130);
    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Matrice donn%ce :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%7d",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<N;i++){
        A[i][i]=0;
    }
    printf("Matrice r%csultat :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%7d",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

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
            if(i==j){
                A[i][j]=1;
            }else{
                A[i][j]=0;
            }
        }
    }
    printf("Matrice carr%ce unitaire :\n",130);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%7d",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}

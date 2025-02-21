#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P[14][14];
    int N;
    int i,j;
    do{
        printf("Entrer le degr%c N du triangle :\t",130);
        scanf("%d",&N);
    }while(N<0 || N>13);
    printf("Triangle de Pascal de degr%c %d :\n",130,N);
    for(i=0;i<=N;i++){
        P[i][i]=1;
        P[i][0]=1;
        for(j=1;j<i;j++){
            P[i][j]=P[i-1][j]+P[i-1][j-1];
        }
    }
    for(i=0;i<=N;i++){
        printf("n=%2d",i);
        for(j=0;j<=i;j++){
            printf("%5d",P[i][j]);
        }
        printf("\n");
    }
    return 0;
}

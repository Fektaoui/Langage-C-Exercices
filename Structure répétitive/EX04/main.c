#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    do{
        printf("Entrer un nombre entier :\t");
        scanf("%d",&N);
    }while(N<0);
    for(i=2;i<N;i++){
        if(N%i==0){
            printf("%d \t",i);
        }
    }
    return 0;
}

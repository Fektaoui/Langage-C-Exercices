#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,r;
    do{
        printf("Entrer un nombre :\t");
        scanf("%d",&N);
    }while(N<1);
    if(N%10==0){
        N/=10;
    }
    while(N){
        r=N%10;
        N-=r;
        N/=10;
        printf("%d",r);
    }
    return 0;
}

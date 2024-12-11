#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,r,X,Y;
    do{
        printf("Entrer deux entiers non nuls :\t");
        scanf("%d %d",&A,&B);
    }while(!A || !B);
    for(r=A,X=A,Y=B;r;X=Y,Y=r){
        r=X%Y;
    }
    printf("PGCD(%d,%d) = %d",A,B,X);
    return 0;
}

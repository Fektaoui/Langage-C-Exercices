#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A,B,C;
    float P,S;
    printf("Entrer les longueurs des trois c%ct%cs :\t",147,130);
    scanf("%d %d %d",&A,&B,&C);
    P=(A+B+C)/2;
    S=sqrt(P*(P-A)*(P-B)*(P-C));
    printf("L'aire du triangle est : S=%f",S);
    return 0;
}

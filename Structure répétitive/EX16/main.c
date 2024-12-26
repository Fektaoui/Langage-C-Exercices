#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,D,i=1;
    printf("Entrer le num%crateur : ",130);
    scanf("%d",&N);
    printf("Entrer le d%cnominateur : ",130);
    scanf("%d",&D);
    while(i*N!=D){
        if(i*N>=D){
            printf("1/%d + ",i);
            N=i*N-D;
            D*=i;
        }
        i++;
    }
    printf("1/%d\n",i);
    return 0;
}

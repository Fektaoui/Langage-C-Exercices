#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,A,i=1;
    int Max,Min;
    do{
        printf("Entrer le nombre des valeurs :\t");
        scanf("%d",&N);
    }while(N<0);
    printf("%d. nombre : \t",i);
    scanf("%d",&A);
    Max=Min=A;
    while(i<N){
        printf("%d. nombre : \t",i+1);
        scanf("%d",&A);
        i++;
        if(A>Max){
            Max=A;
        }else if(A<Min){
            Min=A;
        }
    }
    printf("Le plus grand est %d et le plus petit est %d\n",Max,Min);
    return 0;
}

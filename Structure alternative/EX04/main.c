#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Entrer un nombre :\t");
    scanf("%d",&N);
    printf("Res=%d",N>0?1:(N<0?-1:0));
    return 0;
}

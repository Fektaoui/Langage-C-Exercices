#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, Abs;
    printf("Entrer un nombre :\t");
    scanf("%d", &n);
    Abs=n;
    if(n<0)
        Abs=-n;
        printf("\n\t |%d|=%d",n,Abs);
    return 0;
}

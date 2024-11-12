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
        printf("\n\t |%d|=%d \n\n",n,Abs);

    /* En utilisant la fonction */
    int x, abs;
    printf("Entrer un nombre :\t");
    scanf("%d", &x);
    abs=fabs(x);
    printf("\n\t |%d|=%d",x,abs);
    return 0;
}

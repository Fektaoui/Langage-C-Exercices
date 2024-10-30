#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,q,r;
    printf("Entrer deux nombres entiers :\t");
    scanf("%d %d",&a,&b);
    q=a/b;
    r=a%b;
    printf("\n\t %d=%d*%d+%d \n",a,b,q,r);
    printf("Le quotient est %d \n",q);
    printf("Le reste est %d \n",r);
    printf("Le quotient est %f \n",(float)a/b);
    return 0;
}

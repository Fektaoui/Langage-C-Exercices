#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* deux nombres */
    int A,B,Max,Min;
    printf("Entrer deux nombres :\t");
    scanf("%d %d",&A,&B);
    Max=(A>B?A:B);
    Min=(A<B?A:B);
    printf("Le max est %d et Le min est %d\n",Max,Min);

    /* trois nombres */
    int a,b,c,max,min;
    printf("Entrer trois nombres :\t");
    scanf("%d %d %d",&a,&b,&c);
    max=a>b?(a>c?a:c):(b>c?b:c);
    min=a<b?(a<c?a:c):(b<c?b:c);
    printf("Le max est %d et Le min est %d\n",max,min);
    return 0;
}

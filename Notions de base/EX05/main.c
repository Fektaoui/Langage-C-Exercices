#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,AIDE;
    printf("Entrer trois nombres (A,B,C):\t");
    scanf("%d %d %d",&A,&B,&C);
    printf("\t A=%d \t B=%d \t C=%d \n",A,B,C);
    AIDE=A;
    A=C;
    C=B;
    B=AIDE;
    printf("\t A=%d \t B=%d \t C=%d",A,B,C);
    return 0;
}

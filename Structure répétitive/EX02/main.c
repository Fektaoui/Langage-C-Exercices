#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* En utilisant while */
    int A,B,q=0,r;
    printf("Entrer deux entiers :\t");
    scanf("%d %d",&A,&B);
    r=A;
    while(r>=B){
        r-=B;
        q++;
    }
    printf("Le quotient est %d et le reste est %d",q,r);

    /* En utilisant for */
    int A,B,q,r;
    printf("Entrer deux entiers :\t");
    scanf("%d %d",&A,&B);
    r=A;
    for(q=0;r>=B;q++){
        r-=B;
    }
    printf("Le quotient est %d et le reste est %d",q,r);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,q=0;
    do{
        printf("Entrer deux entiers positifs :\t");
        scanf("%d %d",&A,&B);
    }while(A<0 || B<0);
    if(A>B){
        while(A>B){
            q++;
            A-=B;
        }
        printf("Le quotient est %d et le reste est %d\n",q,A);
    }else{
        while(B>A){
            q++;
            B-=A;
        }
        printf("Le quotient est %d et le reste est %d\n",q,B);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,Prod=0;
    do{
        printf("Entrer deux entiers positifs :\t");
        scanf("%d %d",&A,&B);
    }while(A<0 || B<0);
    printf("%d * %d",A,B);
    while(B){
        if(B%2==0){
            A*=2;
            B/=2;
            printf("\t = %d * %d + %d\n",A,B,Prod);
        }else{
            B--;
            Prod+=A;
            printf("\t = %d * %d + %d\n",A,B,Prod);
        }
    }
    printf("\t = %d\n",Prod);
    return 0;
}

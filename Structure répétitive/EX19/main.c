#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,i;
    int SomA=0,SomB=0;
    printf("Entrer deux nombres :\t");
    scanf("%d %d",&A,&B);
    for(i=2;i<A;i++){
        if(A%i==0){
            SomA+=i;
        }
    }
    for(i=2;i<B;i++){
        if(B%i==0){
            SomB+=i;
        }
    }
    if(SomA==B && A==SomB){
        printf("Les nombres %d et %d sont deux nombres amis\n",A,B);
    }else{
        printf("Les nombres %d et %d ne sont pas amis\n",A,B);
    }
    return 0;
}

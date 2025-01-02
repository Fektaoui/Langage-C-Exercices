#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N,n,i,Arms;
    printf("\n\t Les entiers d'Armstrong compris 100 et 999 sont :\t");
    for(i=100;i<=999;i++){
        N=i;
        Arms=0;
        while(N>0){
            n=N%10;
            Arms+=n*n*n;
            N/=10;
        }
        if(Arms==i){
            printf("%d\t",Arms);
        }
    }
    return 0;
}

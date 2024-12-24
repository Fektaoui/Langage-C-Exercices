#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,Som=0;
    do{
        printf("Entrer un entier positif :\t");
        scanf("%d",&n);
    }while(n<0);
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            Som+=i;
        }
    }
    if(n==Som){
        printf("Le nombre %d est parfait\n",n);
    }else{
        printf("Le nombre %d n'est pas parfait\n",n);
    }
    return 0;
}

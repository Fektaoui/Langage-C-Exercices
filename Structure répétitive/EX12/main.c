#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,Esp,n;
    do{
        printf("Entrer le nombre de lignes :\t");
        scanf("%d",&n);
    }while(n<0);
    for(i=0;i<n;i++){
        Esp=n-i-1;
        for(j=0;j<Esp;j++){
            printf(" ");
        }
        for(j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

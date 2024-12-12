#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    do{
        printf("Entrer le nombre de lignes :\t");
        scanf("%d",&n);
    }while(n<0);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

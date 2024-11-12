#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrer un nombre entier :\t");
    scanf("%d",&n);
    if(n%3==0){
        printf("%d est divisible par 3",n);
    }else {
        printf("%d n'est pas divisible par 3",n);
    }
    return 0;
}

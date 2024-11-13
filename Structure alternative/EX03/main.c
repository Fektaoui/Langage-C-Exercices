#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrer un nombre :\t");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d est paire",n);
    }else {
        printf("%d n'est pas paire",n);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Entrer deux entiers : \t");
    scanf("%d %d",&a,&b);
    printf("La somme : %d + %d = %d \n",a,b,a+b);
    printf("La soustraction : %d - %d = %d \n",a,b,a-b);
    printf("La multiplication : %d * %d = %d \n",a,b,a*b);
    printf("La division : %d / %d = %d \n",a,b,a/b);
    return 0;
}

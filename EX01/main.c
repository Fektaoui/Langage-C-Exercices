#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Entrer deux entiers : \t");
    scanf("%d %d",&a,&b);
    printf("La somme : %d \n",a+b);
    printf("La soustraction : %d \n",a-b);
    printf("La multiplication : %d \n",a*b);
    printf("La division : %d \n",a/b);
    return 0;
}

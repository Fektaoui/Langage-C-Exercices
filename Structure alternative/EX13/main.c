#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,n;
    printf("Entrer deux nombres :\t");
    scanf("%d %d",&A,&B);
    printf("Choisir le nombre d'op%cration (1 : l'addition, 2 : la soustraction, 3 : la multiplication, 4 : la division) :\t",130);
    scanf("%d",&n);
    switch(n){
        case 1 : printf("\t %d + %d = %d\n",A,B,A+B);break;
        case 2 : printf("\t %d - %d = %d\n",A,B,A-B);break;
        case 3 : printf("\t %d * %d = %d\n",A,B,A*B);break;
        case 4 : printf("\t %d / %d = %d\n",A,B,A/B);break;
        default : printf("Erreur");
    }
    return 0;
}

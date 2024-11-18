#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* En utilisant if-else sans variable d'aide  */
    int A,B,C;
    printf("Entrer trois nombres entiers :\t");
    scanf("%d %d %d",&A,&B,&C);
    if(A>B && A>C){
        printf("%d est la plus grande des trois valeurs",A);
    }else {
        if(B>C){
            printf("%d est la plus grande des trois valeurs",B);
        }else {
            printf("%d est la plus grande des trois valeurs",C);
        }
    }

    /* En utilisant if-else et une variable d'aide  */
    int a,b,c;
    int Max;
    printf("Entrer trois nombres entiers :\t");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        Max=a;
    }else {
        Max=b;
    }
    if(c>Max){
        Max=c;
    }
    printf("%d est la plus grande des trois valeurs",Max);

    /* En utilisant opérateurs conditionnels et variable d'aide */

    int a,b,c;
    int Max;
    printf("Entrer trois nombres entiers :\t");
    scanf("%d %d %d",&a,&b,&c);
    Max=(a>b)?a:b;
    Max=(Max>c)?Max:c;
    printf("%d est la plus grande des trois valeurs",Max);

    /* En utilisant opérateurs conditionnels sans variable d'aide */

    int A,B,C;
    printf("Entrer trois nombres entiers :\t");
    scanf("%d %d %d",&A,&B,&C);
    printf("%d est la plus grande des trois valeurs",(A>((B>C)?B:C)?A:((B>C)?B:C)));

    return 0;
}

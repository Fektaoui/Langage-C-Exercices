#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A,B;
    printf("Entrer deux nombres entiers :\t");
    scanf("%d %d",&A,&B);
    if((A>0 && B>0)||(A>0 && B<0 && fabs(A)>fabs(B))||(A<0 && B>0 && fabs(A)<fabs(B))){
        printf("Le signe de la somme de %d et %d est positive\n",A,B);
    }else if((A<0 && B<0)||(A>0 && B<0 && fabs(A)<fabs(B))||(A<0 && B>0 && fabs(A)>fabs(B))) {
        printf("Le signe de la somme de %d et %d est n%cgative\n",A,B,130);
    }else {
        printf("La somme de %d et %d est z%cro\n",A,B,130);
    }
    return 0;
}

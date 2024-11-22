#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A,B,C;
    double D;
    printf("\t Calcul des solutions r%celles d'une %cquation du second degr%c de la forme ax%c+bx+c=0\n\n",130,130,130,253);
    printf("Entrer les valeurs a, b et c :\t");
    scanf("%d %d %d",&A,&B,&C);
    D=pow(B,2)-(4.0*A*C);
    if(A==0 && B==0 && C==0){
        printf("La solution d'%cquation est S=%c%c\n",130,73,82);
    }else if(A==0 && B==0){
        printf("La solution d'%cquation est S=%c\n",130,157);
    }else if(A==0){
        printf("La solution d'%cquation %dx+%d=0 est S=%c%.2f%c\n",130,B,C,123,(double)-C/B,125);
    }else if(D<0){
        printf("La solution d'%cquation %dx%c+%dx+%dx=0 est S=%c\n",130,A,253,B,C,157);
    }else if(D==0){
        printf("La solution d'%cquation %dx%c+%dx+%dx=0 est S=%c%.2f%c\n",130,A,253,B,C,123,(double)-B/(2*A),125);
    }else{
        printf("La solution d'%cquation %dx%c+%dx+%dx=0 est S=%c%.2f;%.2f%c\n",130,A,253,B,C,123,(-B-sqrt(D))/(2*A),(-B+sqrt(D))/(2*A),125);
    }
    return 0;
}

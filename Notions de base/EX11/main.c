#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int Xa,Ya,Xb,Yb;
    double Dist;
    printf("Entrer les coordonn%ces (Xa,Ya) du point A :\t",130);
    scanf("%d %d",&Xa,&Ya);
    printf("Entrer les coordonn%ces (Xb,Yb) du point B :\t",130);
    scanf("%d %d",&Xb,&Yb);
    Dist=sqrt(pow(Xb-Xa,2)+pow(Yb-Ya,2));
    printf("La distance entre A(%d,%d) et B(%d,%d) est : %.2lf",Xa,Ya,Xb,Yb,Dist);
    return 0;
}

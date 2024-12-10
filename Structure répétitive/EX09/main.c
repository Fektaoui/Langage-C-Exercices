#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    float X,A;
    double P;
    printf("Entrer le degr%c du polyn%cme :\t",130,147);
    scanf("%d",&n);
    printf("Entrer la valeur X de l'argement :\t");
    scanf("%f",&X);
    for(P=0;n>=0;n--){
        printf("Entrer le coefficients A%d :\t",n);
        scanf("%f",&A);
        P+=A*pow(X,n);
    }
    printf("P(%.2f) = %.2lf\n",X,P);
    return 0;
}

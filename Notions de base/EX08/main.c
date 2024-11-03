#include <stdio.h>
#include <stdlib.h>

int main()
{
    double R1,R2,R3,Res;
    printf("Entrer les valeurs des r%csistances (R1,R2,R3) :\t",130);
    scanf("%lf %lf %lf",&R1,&R2,&R3);
    Res=R1+R2+R3;
    printf("Si les r%csistances sont branch%ces en s%crie alors Res=%f \n",130,130,130,Res);
    Res=(R1*R2*R3)/(R1*R2+R1*R3+R2*R3);
    printf("Si les r%Csistances sont branch%ces en parall%cle alors Res=%f \n",130,130,138,Res);
    return 0;
}

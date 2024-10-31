#include <stdio.h>
#include <stdlib.h>

int main()
{
    int J,H,M,S;
    printf("Entrer le temps en secondes :\t");
    scanf("%d",&S);
    J=S/86400;/* 86400=24*60*60 */
    S=S%86400;
    H=S/3600;/* 3600=60*60 */
    S=S%3600;
    M=S/60;
    S=S%60;
    printf("\t Le temps est : %dj %dh %dmin %ds",J,H,M,S);
    return 0;
}

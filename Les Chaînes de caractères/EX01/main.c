#include <stdio.h>
#include <stdlib.h>

int main()
{
    char M1[30],M2[30],M3[30],M4[30],M5[30];
    printf("Entrez 5 mots s%cpar%cs par des espaces :\t",130,130);
    scanf("%s %s %s %s %s",M1,M2,M3,M4,M5);
    printf("%s %s %s %s %s\n",M5,M4,M3,M2,M1);
    return 0;
}

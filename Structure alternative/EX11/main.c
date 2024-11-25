#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,m;
    printf("Entrer la date de naissance (jour et mois) :\t");
    scanf("%d %d",&j,&m);
    if((j>=22 && j<=31 && m==12)||(j>=1 && j<=20 && m==1)){
        printf("Capricorne \n");
    }else if((j>=21 && j<=31 && m==1)||(j>=1 && j<=19 && m==2)){
        printf("Verseau \n");
    }else if((j>=20 && j<=29 && m==2)||(j>=1 && j<=20 && m==3)){
        printf("Poissons \n");
    }else if((j>=21 && j<=31 && m==3)||(j>=1 && j<=20 && m==4)){
        printf("B%clier \n",130);
    }else if((j>=21 && j<=30 && m==4)||(j>=1 && j<=20 && m==5)){
        printf("Taureau \n");
    }else if((j>=21 && j<=31 && m==5)||(j>=1 && j<=21 && m==6)){
        printf("G%cmeaux \n",130);
    }else if((j>=22 && j<=30 && m==6)||(j>=1 && j<=22 && m==7)){
        printf("Cancer \n");
    }else if((j>=23 && j<=31 && m==7)||(j>=1 && j<=23 && m==8)){
        printf("Lion \n");
    }else if((j>=24 && j<=31 && m==8)||(j>=1 && j<=23 && m==9)){
        printf("Vierge \n");
    }else if((j>=24 && j<=30 && m==9)||(j>=1 && j<=23 && m==10)){
        printf("Balance \n");
    }else if((j>=24 && j<=31 && m==10)||(j>=1 && j<=22 && m==11)){
        printf("Scorpion \n");
    }else if((j>=23 && j<=30 && m==11)||(j>=1 && j<=21 && m==12)){
        printf("Sagittaire \n");
    }else {
        printf("la date n'est pas correcte \n");
    }
    return 0;
}

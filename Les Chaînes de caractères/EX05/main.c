#include <stdio.h>
#include <stdlib.h>

int main()
{
    char CH1[30],CH2[30];
    int Res;
    printf("Introduisez la premi%cre cha%cne :\t ",138,140);
    gets(CH1);
    printf("Introduisez la deuxi%cme cha%cne :\t ",138,140);
    gets(CH2);
    Res=strcmp(CH1,CH2);
    if(Res<0){
        printf("\"%s\" pr%cc%cde \"%s\"\n",CH1,130,130,CH2);
    }else if(Res>0){
        printf("\"%s\" pr%cc%cde \"%s\"\n",CH2,130,130,CH1);
    }else{
        printf("\"%s\" est %cgale %c \"%s\"\n",CH1,130,133,CH2);
    }
    return 0;
}

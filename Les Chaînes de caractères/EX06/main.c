#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /* En utilisant les fonctions de <String> */
    char CH1[30],CH2[30],CH3[30];
    printf("Introduisez la premi%cre cha%cne de caract%cres :\t",138,140,138);
    gets(CH1);
    printf("Introduisez la deuxi%cme cha%cne de caract%cres :\t",138,140,138);
    gets(CH2);
    strncpy(CH3,CH1,strlen(CH1)/2);
    strncat(CH3,CH2,strlen(CH2)/2);
    printf("Un demi \"%s\" plus un demi \"%s\" donne \"%s\"\n",CH1,CH2,CH3);

    /* En utilisant uniquement gets et puts */
    char CH1[30],CH2[30],CH3[30];
    int L1,L2;
    int i,j;
    printf("Introduisez la premi%cre cha%cne de caract%cres :\t",138,140,138);
    gets(CH1);
    printf("Introduisez la deuxi%cme cha%cne de caract%cres :\t",138,140,138);
    gets(CH2);
    for(L1=0;CH1[L1];L1++);
    for(i=0,j=0;i<(L1/2);i++){
        CH3[i]=CH1[i];
        j++;
    }
    for(L2=0;CH2[L2];L2++);
    for(i=0;i<(L2/2);i++){
        CH3[j]=CH2[i];
        j++;
    }
    CH3[j]='\0';
    printf("Cha%cne r%csultat :\t",140,130);
    puts(CH3);
    return 0;
}

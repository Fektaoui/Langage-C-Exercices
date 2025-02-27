#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Verbe[30],Aff[30];
    int L;
    printf("Introduisez un verbe r%cgulier en \"er\" :\t",130);
    gets(Verbe);
    L=strlen(Verbe);
    if(Verbe[L-2]!='e' || Verbe[L-1]!='r'){
        puts("Ce n'est pas un verbe du premier groupe.");
    }else {
        Verbe[L-2]='\0';
        Aff[0]='\0';
        strcat(Aff,"je ");
        strcat(Verbe,"e");
        strcat(Aff,Verbe);
        puts(Aff);
        Verbe[L-2]='\0';
        Aff[0]='\0';
        strcat(Aff,"tu ");
        strcat(Verbe,"es");
        strcat(Aff,Verbe);
        puts(Aff);
        Verbe[L-2]='\0';
        Aff[0]='\0';
        strcat(Aff,"il ");
        strcat(Verbe,"e");
        strcat(Aff,Verbe);
        puts(Aff);
        Verbe[L-2]='\0';
        Aff[0]='\0';
        strcat(Aff,"nous ");
        strcat(Verbe,"ons");
        strcat(Aff,Verbe);
        puts(Aff);
        Verbe[L-2]='\0';
        Aff[0]='\0';
        strcat(Aff,"vous ");
        strcat(Verbe,"ez");
        strcat(Aff,Verbe);
        puts(Aff);
        Verbe[L-2]='\0';
        Aff[0]='\0';
        strcat(Aff,"ils ");
        strcat(Verbe,"ent");
        strcat(Aff,Verbe);
        puts(Aff);
    }
    return 0;
}

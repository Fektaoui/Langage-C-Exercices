#include <stdio.h>
#include <stdlib.h>

int main()
{
    char TXT[201];
    int i,j;
    printf("Entrez le texte (max.200) :\t");
    gets(TXT);
    for(i=0,j=0;TXT[i];i++){
        TXT[j]=TXT[i];
        if(TXT[i]!='e'){
            j++;
        }
    }
    TXT[j]='\0';
    puts(TXT);
    return 0;
}

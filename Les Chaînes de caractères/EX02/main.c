#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char TXT[201];
    int L;
    int i,j;
    int C=0;
    int AIDE;
    printf("Entrez une ligne du texte (max.200) :\t");
    gets(TXT);
    for(L=0;TXT[L];L++);
    printf("Le texte compos%c de %d caract%cres.\n",130,L,138);
    for(i=0;TXT[i];i++){
        if(TXT[i]=='e'){
            C++;
        }
    }
    printf("Le texte contient %d lettres \'e\'.\n",C);
    for(i=L-1;i>=0;i--){
        printf("%c",TXT[i]);
    }
    printf("\n");
    for(i=0,j=L-1;i<j;i++,j--){
        AIDE=TXT[i];
        TXT[i]=TXT[j];
        TXT[j]=AIDE;
    }
    puts(TXT);
    return 0;
}

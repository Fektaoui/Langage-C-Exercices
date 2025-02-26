#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Nom[50],Prenom[50];
    printf("Introduisez votre nom et votre pr%cnom :\t",130);
    scanf("%s %s",Nom,Prenom);
    printf("\nBonjour %s %s !\n",Nom,Prenom);
    printf("Votre nom est compos%c de %d lettres.",130,strlen(Nom)+strlen(Prenom));
    return 0;
}

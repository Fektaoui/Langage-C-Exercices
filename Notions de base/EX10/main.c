#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* calculer le prix brut */
    int Net,TVA;
    double Brut;
    printf("Entrer le prix net de l'article :\t");
    scanf("%d",&Net);
    printf("Entrer le TVA (en %c) :\t",37);
    scanf("%d",&TVA);
    Brut=Net+Net*TVA/100;
    printf("Le prix brut de l'article est : %.2lf \n\n",Brut);

    /* calculer le prix net */
    int tva;
    double net,brut;
    printf("Entrer le prix brut de l'article :\t");
    scanf("%lf",&brut);
    printf("Entrer le TVA (en %c) :\t",37);
    scanf("%d",&tva);
    net=100*brut/(100+tva);
    printf("Le prix net de l'article est : %.2lf",net);
    return 0;
}

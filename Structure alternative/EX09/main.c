#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float p;
    printf("Entrer le nombre des copies :\t");
    scanf("%d",&n);
    if(n<=10){
        p=n*0.5;
        printf("Le prix %c payer pour les %d copies est %.2fdh",133,n,p);
    }else if(n<=30){
        p=10*0.5+(n-10)*0.4;
        printf("Le prix %c payer pour les %d copies est %.2fdh",133,n,p);
    }else {
        p=10*0.5+20*0.4+(n-30)*0.2;
        printf("Le prix %c payer pour les %d copies est %.2fdh",133,n,p);
    }
    return 0;
}

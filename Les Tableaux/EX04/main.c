#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50],Tpos[50],Tneg[50];
    int n,m;
    int i,j,k;
    printf("Entrer la dimension du tableau :\t");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    for(i=0;i<n;i++){
        printf("%7d",T[i]);
    }
    printf("\n");
    for(i=0,j=0,k=0;i<n;i++){
        if(T[i]>=0){
            Tpos[j]=T[i];
            j++;
        }else{
            Tneg[k]=T[i];
            k++;
        }
    }
    n=j;
    m=k;
    printf("Le tableau des %cl%cments positives est :",130,130);
    for(i=0;i<n;i++){
        printf("%7d",Tpos[i]);
    }
    printf("\n");
    printf("Le tableau des %cl%cments n%cgatives est :",130,130,130);
    for(i=0;i<m;i++){
        printf("%7d",Tneg[i]);
    }
    printf("\n");
    return 0;
}

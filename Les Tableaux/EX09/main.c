#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50];
    int n,Pmin,AIDE;
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
    for(i=0;i<n;i++){
        for(j=i+1;j<n;){
            if(T[i]==T[j]){
                for(k=j;k<n;k++){
                    T[k]=T[k+1];
                }
                n--;
            }else {
                j++;
            }
        }
    }
    for(i=0;i<n;i++){
        Pmin=i;
        for(j=i+1;j<n;j++){
            if(T[j]<T[Pmin]){
                Pmin=j;
            }
        }
        AIDE=T[i];
        T[i]=T[Pmin];
        T[Pmin]=AIDE;
    }
    printf("Tableau r%csultat :\n",130);
    for(i=0;i<n;i++){
        printf("%7d",T[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define Pi 3.14159

int main()
{
    float R;
    printf("Donner le rayon du cercle : \t");
    scanf("%f",&R);
    printf("L'air du cercle est : S = %.2f",Pi*R*R);
    return 0;
}

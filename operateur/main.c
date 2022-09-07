#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,puissance;
    printf("entrer la valeur de x :");
    scanf("%f",&x);
    printf("entrer la valeur de y :");
    scanf("%f",&y);
    puissance = pow (x,y);
    printf("la puissance est : %.2f",puissance);

    return 0;
}

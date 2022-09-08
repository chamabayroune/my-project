#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int nombre,resultat;
    printf("entrer le nombre:");
    scanf("%d",&nombre);
     resultat = nombre % 2;
    if(resultat == 0)
        printf("ce nombre est pair");
    else
        printf("ce nombre est impair");
    return 0;
}

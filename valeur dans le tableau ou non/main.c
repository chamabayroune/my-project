#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[ 100];
    int V,taille,i,j;

    printf("saisie la taille:");
    scanf("%d",&taille);

    for(i=0; i<taille; i++)
    {
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
    }
    printf("SAISIE LA VALEUR :");
    scanf("%d",&V);

    if(  T[i]< V)
    {
        printf("LA VALEUR %d ce trouve dans le tableau ",V);
    }
    else
        printf("LA VALEUR n'a pas trouve dans le tableau ");

    return 0;
}

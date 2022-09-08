#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int somme,i;
    somme = 0;
    for(i=1; i<=20; i++){
    somme += i;
    }
     printf("la somme des 20 premier entier positif est : %d ",somme);
    return 0;
}

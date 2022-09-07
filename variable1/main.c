#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largeur , longueur , perimetre , surface;
    printf("ENTER LA LARGE-UR ET LA LONGUEUR :");
    scanf("%f %f",&largeur,&longueur);
    perimetre = ( largeur +longueur)*2;
    surface =  largeur *longueur ;
    printf("LA PERIMETRE EST : %.2f \nLA SURFACE EST : %.2f",perimetre , surface);


    return 0;
}

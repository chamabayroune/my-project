#include <stdio.h>
#include <stdlib.h>



int main()
{
    int T[100];
    int i,max,j;
    int taille ;
    printf("entrez la taille du tableau :");
    scanf("%d",&taille);
    printf("taper les element du tableau \n");
    for (i=0; i<taille; i++)
    {
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
    }
    max = T[0];
    for (i=0; i<taille; i++)
    {
        for(j=1 ; j<taille ; j++){

        if(max < T[i+1]);
        max = T[j];
        T[i] = max ;
        max = T[j];
        }
    }
    printf(" le maximum est : %d",max);

    return 0;
}

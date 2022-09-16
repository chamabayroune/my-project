#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i,j,taille,tmp;
    printf("ENTRER LA TAILLE :\n");
    scanf("%d",&taille);
    int t[taille];

    for(i=0;i<taille;i++){
        printf("=>");
        scanf("%d", &t[i]);
    }

    for(i=0;i<taille;i++)
        for(j=0;j<taille-1;j++)
            if(t[j] > t[j+1]){
                tmp = t[j];
                t[j] = t[j+1];
                t[j+1] = tmp;
            }
     for(i=0;i<taille;i++){
        printf("%d ", t[i]);
    }

    return 0;
}


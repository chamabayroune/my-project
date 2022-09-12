#include <stdio.h>
#include <stdlib.h>
float Y;
float annee (float N){

    if(N==366){
        printf("%.2f est une annee bissextile",N);
    }
    else if(N==365){
        printf("%.2f est une annee gregorienne",N);
    }
    else
    {
        printf("cette annee n'existe pas");

    }

}

int main()
{
    printf("entrer l'annee :");
    scanf("%f",&Y);
    Y = annee (Y);


    return 0;
}

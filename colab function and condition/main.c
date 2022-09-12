#include <stdio.h>
#include <stdlib.h>
int Y;
int annee (int N){

    if(N==366){
        printf("%d est une annee bissextile",N);
    }
    else if(N==365){
        printf("%d est une annee gregorienne",N);
    }
    else
    {
        printf("cette annee n'existe pas");

    }

}

int main()
{
    int X;
    printf("entrer l'annee :");
    scanf("%d",&Y);
    X= annee (Y);


    return 0;
}

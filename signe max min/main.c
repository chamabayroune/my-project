#include <stdio.h>
#include <stdlib.h>

void signe (int A,int B)
{
    if(A*B>0)

        printf("les deux nombre %d et %d sont en meme signe \n",A,B);

    else
        printf("les deux nombre %d et %d n'est pas en meme signe \n",A,B);
}

int minimum (int A,int B)
{
    int min;

    if(A<B)

       min = A ;

    else
        min = B ;

        return minimum ;
}
int maximum (int A,int B)
{
    int max;

    if(A>B)
       max = A ;
    else
        max = B;

        return maximum ;
}
int main()
{
    int A,B,min,max;

    printf("taper la valeur de A :");
    scanf("%d",&A);

    printf("taper la valeur de B :");
    scanf("%d",&B);

    signe(A,B);

    min = minimum (A,B);

    max = maximum (A,B);

    printf("la valeur minimale est : %d\n",min);

    printf("la valeur maximale est : %d ",max);

    return 0;
}

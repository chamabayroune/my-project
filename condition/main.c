#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,C;
    printf("ENTRER La VALEUR EN Fahrenheit:");
    scanf("%f",&F);
    C = (F-32)/1.8;
    printf("la temperateur en celsius est : %.2f",C);
    if(C>40 && C<58)
        printf("tr�s chaud");
        else if(C<25 && C>19)
        printf("froid");
        else if(C<19 && C>0)
         printf("tres froid");
         else if(C>25 && C>15)
         printf("chaud");
         else
            printf("cette tamperateur n'existe pas");



     return 0;
}

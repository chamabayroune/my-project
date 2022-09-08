#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nombre1,nombre2;
    char operateur;
    printf("entrer le le premier nombre :");
    scanf("%f",&nombre1);

     printf("entrer l'operateur :\n");
    scanf(" %c",&operateur);

    printf("entrer le deuxieme nombre :");
    scanf("%f",&nombre2);


    switch(operateur){
         case '-':
          printf("nombre1 - nombre2 = %f",nombre1 - nombre2);
          break;

      case '+':
          printf("nombre1 + nombre2 = %f",nombre1 + nombre2);
          break;

      case '*':
          printf("nombre1 * nombre2 = %f",nombre1 * nombre2);
          break;

      case '/':
        if(nombre2 != 0)
          printf("nombre1  / nombre2 = %f",nombre1 / nombre2);
          else
            printf("cette operatuer ne paut pas executer");
          break;

          default : printf("cette operation ne derige pas\n");
           break;
          }


    return 0;
}

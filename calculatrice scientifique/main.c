#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 void main (){
/*calcule*/
 int x,y,select,A,f=1,i;
printf("taper un nombre pour selectionne une operation");
printf("\n    1 la somme  \n    2 la soustraction  \n    3 la division  \n    4 le produite  \n    5 la valeur absolut \n    6 les valeurs Trigonometric \n    7 factorielle\n ");
scanf("%d",&select);
 switch(select)
   { case 1:
       printf("saisire les deux  nombres pour calculer la somme");
       scanf("%d%d",&x,&y);
       printf("la somme est :%d",x+y);
     case 2:
       printf("saisire les deux  nombres pour calculer la soustraction");
       scanf("%d%d",&x,&y);
       printf("la soustraction est :%d",x-y);
     case 3:
       printf("saisire les deux  nombres pour calculer division");
       scanf("%d%d",&x,&y);
       printf("la somme est : %.2f",x/y);
     case 4:
       printf("saisire les deux  nombres pour calculer le produit");
       scanf("%d%d",&x,&y);
       printf("la somme est :%d",x*y);
     case 5:
       printf("saisire le nombre pour calculer leur valeur absolu");
       scanf("%d",&x);
          if(x>0)
           printf("la valeur absolu de %d est la meme valeur",x);
          if (x<0)
          printf("la valeur absolu de %d est -%d",x,x);
          if (x=0)
          printf("la valeur absolu de 0 est la méme valeur");
     case 6:
          printf("saisire l angle  pour calculer son cos ,sin et tan\n");
          scanf("%d",&A);
          printf("\ncos(%d) :%.2f",A,cos(A));
          printf("\nsin(%d) :%.2f",A,sin(A));
          printf("\ntan(%d) :%.2f",A,tan(A));
     case 7:
         printf("saisire le nombre pour calculer leur factorielle");
         scanf("%d",&x);
        if(x==0|| x==1)
            f=1;
        else
            for(i=1;i<x+1;i++)
            f*=i;
        printf("le factorielle est %d",f);
}}

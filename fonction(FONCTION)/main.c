#include <stdio.h>
#include <stdlib.h>
int l ,i, j;
void ligne (){
   printf("entrer le nombre des lignes : ");
    scanf("%d",&l);
}
void arbre(){
     for(i=1;i<=l;i++){
      for(j=1;j<=l-i;j++){
          printf("  ");
    }
    for(j=1;j<= (2*i-1);j++){
      printf("* ");
    }
    printf("\n");

    }
     for(i=2;i<=l+2;i++){
      for(j=2;j<=l-i+2;j++){
          printf("  ");
    }
    for(j=2;j<=(2*i-1);j++){
      printf("* ");
    }
    printf("\n");
    }
     for(i=3;i<=l+3;i++){
      for(j=3;j<=l-i+3;j++){
          printf("  ");
    }
    for(j=3;j<= (2*i-1);j++){
      printf("* ");
    }
    printf("\n");
    }

}

int main()
{
    ligne ();
    arbre ();


    return 0;
}

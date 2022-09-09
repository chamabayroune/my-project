#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b;
    char operateur;
    printf("entrer la valeurs de a :");
    scanf("%f",&a);
    printf("entrer operateur :");
    scanf(" %c",&operateur);
    printf("entrer la valeurs de b:");
    scanf("%f",&b);

    switch(operateur)
    {
    case '+':
        printf("a+b = %.2f",a+b);
        break;

    case '-':
        printf("a-b = %.2f",a-b);
        break;

    case '*':
        printf("a*b = %.2f",a*b);
        break;

    case '/':
        printf("a/b = %.2f",a/b);
        break;

    default :
        printf("cette operation ne peut executer");
        break;
    }

    return 0;
}


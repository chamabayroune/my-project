#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter les valeurs de a et b :");
    scanf("%d %d",&a,&b);
    if(a*b>0)
        printf("a et b est on meme signe");
    else
       printf("a et b on na pas en meme signe");



    return 0;
}

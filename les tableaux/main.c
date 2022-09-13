#include <stdio.h>
#include <stdlib.h>
float somme(int a)
{
    int i,t[a],s;
    for(i=0; i<a; i++)
    {
        printf("t[%d]:",i);
        scanf("%d",&t[i]);
    }
    s=0;
    for(i=0; i<a; i++)
    {
        s =s+t[i];

    }
    return s;

}




int main()
{
    int n;
    float C;
    printf("donner un nombre:");
    scanf("%d",&n);

    C=somme(n);
    printf("la somme est : %.2f",C);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int T[5];
    int i,max;
    printf("taper les element du tableau \n");
    for (i=0; i<=5; i++)
    {
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
    }
    max = T[0];
    for (i=0; i<10; i++)
    {
        if(max < T[i]);
        max = T[i];
    }
    printf(" le maximum est : %d",max);

    return 0;
}

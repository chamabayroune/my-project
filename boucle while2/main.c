#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    printf("entrer le nombre :\n");
    scanf("%d",&N);
    i=N;
    while(i<=N+10){
        printf("%d \n",i);
        i++;
    }
    return 0;
}

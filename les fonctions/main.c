#include <stdio.h>
float cube (float N){
    float c;
    c = N * N * N;
    return c;
}

int main()
{
    float N;
    printf("entrer le nombre:\n");
    scanf("%f",&N);
    printf("le cube de %.2f est: %.2f",N,cube(N));

    return 0;
}

#include<stdio.h>

int main(void)
{   
    int N;
    scanf("%d",&N);
    for (size_t i = 1; i < 10; i++)
        printf("%d * %d = %d\n",N,i,N*i);
    return 0;
}
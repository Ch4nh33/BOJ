#include<stdio.h>

int main(void)
{   
    int T;
    int N,M;
    scanf("%d",&T);
    
    for (size_t i = 1; i < T+1; i++)
    {
        scanf("%d %d",&N,&M);
        printf("%d\n", N+M);
    }
    return 0;
}

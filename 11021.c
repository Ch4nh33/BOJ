#include<stdio.h>

int main(void)
{   
    int T;
    int N , M;
    scanf("%d",&T);
    
    for (size_t i = 1; i <= T; i++)
    {
        scanf("%d %d",&N,&M);
        printf("Case #%d: %d\n",i,N+M);
    }
    return 0;
}

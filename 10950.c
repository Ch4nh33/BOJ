#include<stdio.h>

int main(void)
{   
    int T;
    int n , m;
    scanf("%d",&T);
    for (size_t i = 0; i < T; i++)
    {
        scanf("%d %d",&n,&m);
        printf("%d\n",n+m);
    }
    return 0;
}

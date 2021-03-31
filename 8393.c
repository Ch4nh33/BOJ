#include<stdio.h>

int main(void)
{   
    int T;
    int sum = 0;
    scanf("%d",&T);
    
    for (size_t i = 1; i < T+1; i++)
    {sum = sum+i;}
    
    printf("%d",sum);
    return 0;
}

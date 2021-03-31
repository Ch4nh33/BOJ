#include<stdio.h>

int main(void)
{
    signed int max = -1000000;
    signed int min = 1000000;
    signed int n;
    signed int input;
    
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&input);
        if(max < input)
        {
            max = input;
        }
        if(min>input)
        {
            min = input;
        }
    }
    printf("%d %d",min,max);
    return 0;
}

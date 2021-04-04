#include<stdio.h>
int main(void)
{
    int arr[9] = {0, };
    int cnt = 0;
    int max = 0;
    for (size_t i = 0; i <9; i++)
    {
        scanf("%d\n",&arr[i]);
        if(max<arr[i])
        {
            max = arr[i];
            cnt= i;
        }
    }
    printf("%d\n%d",max,cnt+1);
    return 0;
}

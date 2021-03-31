#include<stdio.h>
int main(void)
{
    int Joi;
    int sum = 0;
    for(int i = 0 ; i <=4;i++)
    {
        scanf("%d",&Joi);
        sum = sum + Joi;
    }
     printf("%d\n",sum);
    return 0;
}

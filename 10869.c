#include<stdio.h>

int main(void)
{
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    printf("%d\n",num1+num2);
    printf("%d\n",num1-num2);
    printf("%d\n",num1*num2);
    printf("%d\n",num1/num2);
    printf("%d\n",(int)num1 % (int)num2);
    return 0;
}

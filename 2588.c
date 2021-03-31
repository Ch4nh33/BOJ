#include<stdio.h>

int main(void)
{
    int A, B, mul;
    scanf("%d %d",&A,&B);
    
    int out1 = A*((B%100)%10);
    int out2 = A*(B%100)/10;
    int out3 = A*(B/100);
    mul = A*B;
    printf("%d\n%d\n%d\n%d",out1,out2,out3,mul);
    
    return 0;
}

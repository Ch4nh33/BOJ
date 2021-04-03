#include<stdio.h>

int main(void)
{
    int num;
    int cnt = 0;
    int A,B,C,D;
    scanf("%d",&num);
    D = num;
    while(D!=num||cnt==0)
    {
        A = D/10;
        B = D % 10;
        C = (A+B)%10;
        A = B;B = C;
        D = (A*10)+B;
        cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}

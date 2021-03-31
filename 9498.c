#include<stdio.h>

int main(void)
{
    int scr;
    scanf("%d",&scr);
    if((100>=scr)&&(scr>=90))
        printf("A");
    else if((90>=scr)&&(scr>=80))
        printf("B");
    else if((80>scr)&&(scr>=70))
        printf("C");
    else if((70>scr)&&(scr>=60))
        printf("D");
    else 
        printf("F");
    return 0;
}

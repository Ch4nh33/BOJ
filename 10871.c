#include<stdio.h>

int main(void)
{
  int Test, num;
  int input = 0;
  scanf("%d %d",&Test,&num);
  
  for (size_t i = 0; i < Test; i++)
  {
    scanf("%d",&input);
    if(input<num)
      printf("%d ",input);
  }
   return 0;
}

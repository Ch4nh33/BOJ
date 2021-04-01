#include<stdio.h>

int main(void)
{
  int N,M,K;
  scanf("%d %d %d",&N,&M,&K);
  printf("%d %d",(K/M),(K%M));
   return 0;
}

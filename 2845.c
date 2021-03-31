#include <stdio.h>

int main(void) 
{
    int L,P;
    int art[5];
    scanf("%d %d",&L,&P);
    
    int res = L*P;
    for(int i = 0 ; i < 5;i++)
    {
         scanf("%d",&art[i]);
      art[i] = art[i]-res;
      printf("%d ",art[i]);
    }   
    return 0;
}
  

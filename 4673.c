#include<iostream>
#include<cstdio>
#define N 10001 

using namespace std;
bool arr[N];
 
//self number 
int sol(int num)
{
    int sum = num;    
 
    while(1)
    {   
        if(n == 0) break; //0 is break
        sum += n%10;      
        n = n/10;        
    }
    return sum;
} 
int main(void)
{ 
    for(int i=1; i<N; i++)
    {
        int idx = sol(i);
        if(idx <= N)
            arr[idx] = true;   
    }
    for(int i=1; i<N; i++)
        if(!arr[i]) printf("%d\n", i);
    return 0;
}

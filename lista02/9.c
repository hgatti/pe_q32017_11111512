#include <stdio.h>

int pot(int x, int y)
{
    if(y==1) return x;
    return x*pot(x,y-1);
}


int main()
{
   int x,y;
   
   scanf("%d %d",&x,&y);
   
   printf("%d\n",pot(x,y));
    
   return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct cronometro{
    
    int m;
    int s;
    int dec;
}cronometro;

struct cronometro dif(cronometro c1, cronometro c2)
{
   cronometro c3;
   
   c3.dec = c2.dec - c1.dec;
   if(c3.dec < 0){
       c2.s--;
       c3.dec = 100+c3.dec;
   }
   c3.s = c2.s - c1.s;
   if(c3.s < 0){
       c2.m--;
       c3.s = 60 +c3.s;
   }
   c3.m = c2.m - c1.m;
   
   return c3;
   
   
}

int main()
{
    
    cronometro c1,c2;
    
    scanf("%dm %ds %d", &(c1.m), &(c1.s), &(c1.dec));
    
    scanf("%dm %ds %d", &(c2.m), &(c2.s), &(c2.dec));
    
    cronometro c3;
    c3 = dif(c1,c2);
   
    printf("%dm %ds %d\n",c3.m,c3.s,c3.dec);
    
    return 0;
}
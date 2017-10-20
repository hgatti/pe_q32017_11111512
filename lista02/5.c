#include <stdio.h>

int fat(int x)
{
    int result=1,i;

    for(i=0; i < x ; i++){
        result = result*(x-i);
    }

    return result;
}

int coef_binomial(int n, int k)
{
    int coef_b;
    
    coef_b = (fat(n));
    coef_b /= (fat(k));
    coef_b /= (fat(n-k));
    
    return coef_b;
}

int main()
{
   int n,k;
   
   scanf("%d %d",&n,&k);
    
   printf("%d\n",coef_binomial(n,k));

   
   return 0;
}
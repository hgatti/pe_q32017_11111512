#include <stdio.h>

int fibMem[1000] = {0};

int fib(int n)
{
    if( n==0 ) return 0;
    if( n<=2 ) return 1;
    //Altere a linha abaixo
    if( fibMem[n-1] != 0){
        fibMem[n]=fib(n-1)+fib(n-2);
        return fibMem[n];
    }
    fibMem[n]=fib(n-1)+fib(n-2);
    return fibMem[n];
}

int main()
{
    int n;
    
    fibMem[1]=1;
    fibMem[2]=1;
    
    scanf("%d",&n);
    
    printf("%d\n",fib(n));
    
    
    return 0;
}
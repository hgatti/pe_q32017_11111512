#include <stdio.h>

int mdc(int m, int n)
{
    if( n==0 ) return m;
    else if ( m==0 ) return n;
    else return mdc(n,m%n);
}

int main()
{
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    printf("%d\n",mdc(a,b));
    
    
    return 0;
}
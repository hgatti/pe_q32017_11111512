#include <stdio.h>

int palindromo(int x, int invx, int x1)
{
    if( x == invx ) return 1;
    if( x1 == 0 ) return 0;

    return palindromo(x,invx*10+x1%10,x1/10);

}



int main()
{
    int n;

    scanf("%d",&n);

    if(palindromo(n,0,n)){
        printf("sim\n");
    }
    else{
        printf("não\n");
    }
    

    return 0;
}

#include <stdio.h>

int somaTR(int n, int parcial)
{
    if(n==1) return parcial+1;

    return somaTR(n-1,parcial+n);

}

int soma(int n)
{
    return somaTR(n,0);

}


int main()
{
    int n;

    scanf("%d",&n);

    printf("%d\n",soma(n));

    return 0;
}

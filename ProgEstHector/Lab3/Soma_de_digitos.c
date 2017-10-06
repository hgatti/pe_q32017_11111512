#include <stdio.h>

int soma_digitosTR(int x, int parcial)
{
    if(x<10) return parcial+x%10;

    return soma_digitosTR(x/10,parcial+x%10);

}

int soma_digitos(int x)
{
    return soma_digitosTR(x,0);

}


int main()
{
    int n;

    scanf("%d",&n);

    printf("%d\n",soma_digitos(n));

    return 0;
}

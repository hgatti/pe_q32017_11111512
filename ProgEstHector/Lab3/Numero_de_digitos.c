#include <stdio.h>

int num_digitosTR(int x, int parcial)
{
    if(x<10) return parcial+1;

    return num_digitosTR(x/10,parcial+1);

}

int num_digitos(int x)
{
    return num_digitosTR(x,0);

}


int main()
{
    int n;

    scanf("%d",&n);

    printf("%d\n",num_digitos(n));

    return 0;
}

#include <stdio.h>


int primoTR(int n, int i)
{
	if( i == 1) return 1;
    if( n%i == 0) return 0;
    return primoTR(n,i-1);
}
int primo(int n)
{
	//Tratamento se n for igual a 1
	return primoTR(n,n-1);
}
int main()
{
    int n;

    scanf("%d",&n);

    if(primo(n)){
        printf("É Primo\n");
    }
    else{
        printf("Não é Primo\n");
    }

    return 0;
}

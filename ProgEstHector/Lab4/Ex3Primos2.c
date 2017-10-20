#include <stdio.h>
#include <stdlib.h>

int lenght(char *s)
{
	int tamanho = 0;

	while(s[tamanho] != '\0'){
		tamanho++;
	}

	return tamanho;
}


char *preenche(int n)
{
	char *v;
	int i;

	v = malloc(n*sizeof(char));
	v[0] = 0;
	v[1] = 0;

	for(i=2; i<n; i++){
		
		if(i%2){
			v[i] = 0;
			if(!i%3) v[i+1] = 1;
		}

	}
	
	return v;

}

int soma_array(char *s1, int n)
{
	int soma=0,i;

	for(i=0 ; i < n ; i++){
		soma += (s1[i]);
	}

	return soma;
}

int main()
{
    char *primo;
	int n;

	scanf("%d",&n);

	primo = malloc(n*sizeof(char));
		
	primo = preenche(n);

    printf("%d\n",soma_array(primo,n));

    return 0;
}

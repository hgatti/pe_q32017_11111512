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

char *concatena(char *s1, char *s2)
{
	char *s3;
	int tams1 = lenght(s1);
	int tams2 = lenght(s2);
	int i,j=0;

	s3 = malloc((tams1+tams2)*sizeof(char));


	for(i=0; i<tams1 ; i++){
		s3[i] = s1[i];
	}
	for(i=tams1; i<(tams1+tams2) ; i++){
		s3[i] = s2[j];
		j++;
	}

	return s3;

}

int main()
{
    char s1[255];
    char s2[255];

	scanf("%s",s1);
	scanf("%s",s2);
	
    printf("%s\n",concatena(s1,s2));

    return 0;
}

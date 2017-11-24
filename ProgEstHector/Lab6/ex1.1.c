#include <stdio.h>
#define N 100000000

unsigned int f(unsigned int x,unsigned int y){

	return x&y;

}

int main()
{
	unsigned int i,soma =0;

	for(i=0;i<N;i++){

		soma+=f(i,7);

	}
	
	printf("%u\n",soma);

	return 0;

}

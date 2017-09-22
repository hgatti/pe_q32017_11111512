#include <stdio.h>

int main() {
	int input;
	scanf("Entre com um valor inteiro: %d", &input);

	if ( input%2 == 0 ){
		printf("par\n");
	}
	else{
		printf("impar\n");
	}

	return 0;
}

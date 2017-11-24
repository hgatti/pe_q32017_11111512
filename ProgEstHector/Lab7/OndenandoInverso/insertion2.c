#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion(int *vet, int n)
{
	int i,j;
	for(i=1 ; i<=n ; i++){
		for(j=i ; j>0 ; j--){
			while(vet[j-1] < vet[j]){
				int aux = vet[j];
				vet[j] = vet[j-1];
				vet[j-1] = aux;
			}
		}
	}


}

void print_vetor(int *v, int n)
{
    int i =0;
    
    for(i=0; i<n ; i++){
        printf("%d ",*(v+i));
    }
    
	printf("\n");
}


int main()
{
	//int vet[10] = {1,3,5,6,7,8,9,10,3,5};

	int *v,n,i;
    
    n=1000;
    
    v = malloc(n*sizeof(int)); // aloca memória
    //realloc, ajusta o tamanho da memoria alocada
    //free(); limpa tudo

	srand(time(NULL));
    
    for(i=0; i<n ; i++){
       //gerar valores aleatorios
		v[i] = rand() % 100;
	   //v[i] = n-i;

    }


	//print_vetor(v,n);

	insertion(v,n);
	//printf("------------------------------------------------\n");
	//print_vetor(v,n);


	return 0;

}

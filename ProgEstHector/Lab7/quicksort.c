#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void swap (int * v, int i, int j)
{
    int aux = v[j];
	v[j] = v[i];
	v[i] = aux;
}


int partition (int * v, int low, int high)
{
    int pivot = v[high];
    int j, i = low;
    for (j=low; j<high; j++) {
        if (v[j] <= pivot) {
            swap(v, i, j);
            i++;
        }
    }
    swap(v, i, high);
    return i;
}



void quicksort (int * v, int low, int high)
{
    int p;
    if (low < high) {
        p = partition(v, low, high);
        quicksort(v, low, p-1);
        quicksort(v, p+1, high);
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

	//print_vetor(vet,10);

	
	int *v,n,i;
    
    n=1000;
   
    v = malloc(n*sizeof(int)); // aloca memória
    //realloc, ajusta o tamanho da memoria alocada
    //free(); limpa tudo

	srand(time(NULL));
    
    for(i=0; i<n ; i++){
       //gerar valores aleatorios
	   //v[i] = rand() % 100;
		v[i] = n-i ;
    }

	//print_vetor(vet,10);
	
	quicksort(v,0,n-1);

	//print_vetor(vet,10);


	return 0;

}

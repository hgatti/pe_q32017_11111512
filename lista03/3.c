#include <stdio.h>
#include <stdlib.h>


int* soma(int *v1, int *v2)
{
    int *vsoma,i;
    
    vsoma = malloc(5*sizeof(int));
    
    for(i=0; i<5 ; i++){
        vsoma[i] = v1[i]+v2[i];
    }
    
    return vsoma;
    
}

void print_vetor(int *v, int n)
{
    int i =0;
    
    for(i=0; i<n-1 ; i++){
        printf("%d ",*(v+i));
    }
    printf("%d\n",*(v+n-1));
}



int main()
{
    int *v1,*v2,i;
    
 
    v1 = malloc(5*sizeof(int)); // aloca memória
    //realloc, ajusta o tamanho da memoria alocada
    //free(); limpa tudo
    
    v2 = malloc(5*sizeof(int));
    
    for(i=0; i<5 ; i++){
        scanf("%d",&v1[i]);
    }
    for(i=0; i<5 ; i++){
        scanf("%d",&v2[i]);
    }
    
    print_vetor(soma(v1,v2),5);
   
    return 0;
}
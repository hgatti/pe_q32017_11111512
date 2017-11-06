#include <stdio.h>
#include <stdlib.h>

void print_matriz(int **matriz, int n,int m)
{
    int i,j;
    
    for(i=0; i<n ; i++){
        for(j=0; j<m-1 ; j++){
            printf("%d ",*(*(matriz+i)+j));
        }
        printf("%d\n",*(*(matriz+i)+m-1));
    }
    
}

int** matriz_Transp(int **matriz)
{
    int i,j;
    
    int **matrizT= malloc(3*sizeof(int*));
    
    for(i=0; i<3 ; i++){
       matrizT[i] = malloc(3*sizeof(int));
    }
    
    for(i=0; i<3 ; i++){
        for(j=0; j<3 ; j++){
            matrizT[i][j]=matriz[j][i];
        }
    }
    
    return matrizT;
    
}
int main()
{
    int n=3,i,j,m=3;
    

    
    int **matriz= malloc(n*sizeof(int*)); // aloca memória
    //realloc, ajusta o tamanho da memoria alocada
    //free(v); limpa tudo
    
    for(i=0; i<n ; i++){
       matriz[i] = malloc(m*sizeof(int));
    }
    
    for(i=0; i<n ; i++){
        for(j=0; j<m ; j++){
            scanf("%d",&matriz[i][j]);
        }
        
    }
    
   print_matriz(matriz_Transp(matriz),n,m);
   
    return 0;
}
#include <stdio.h>


int main(){
    
    int input,soma=0,i;
    
    scanf("%d",&input);
    
    for(i = 1; i <= input; i++){
        
        soma = soma + i;
    }
    
    printf("soma de 1 a %d = %d\n",input,soma);
    
    return 0;
}
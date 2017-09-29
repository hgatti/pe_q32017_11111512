#include <stdio.h>

int main(){
    
    int input,i,soma;
    float media;
    
    for(i=0; i < 10; i++){
        
        scanf("%d",&input);
        soma = soma + input;
    }
    media = (float)soma/10;
    
    printf("soma = %d\n",soma);
    printf("media = %f\n",media);
    
    
    return 0;
}
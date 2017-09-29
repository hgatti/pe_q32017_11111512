#include <stdio.h>

int main(){
    
    int low,high,i,quadrados=0,soma=0,dif=0;
    
    scanf("%d",&low);
    scanf("%d",&high);
    
    for(i = low; i <= high ; i++){
        quadrados = quadrados + i*i;
        soma = soma +i;
    }
    
    dif = soma*soma - quadrados;
    
    printf("soma dos quadrados  = %d\n",quadrados);
    printf("quadrado da soma    = %d\n", soma*soma);
    printf("diferenca           = %d\n",dif);
    
    return 0;
}
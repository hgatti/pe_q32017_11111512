#include <stdio.h>



int main(){
    int valor;
    int opcao;
    int vet[50];
    int auxiliar=0;
    int i,j;
    int result =1;
 
    
    scanf("%d",&valor);
    scanf("%d",&opcao);
 
  if ( opcao==1 ){
        /* Decimal para binario */
        i = 1;
        while(valor>0){
            auxiliar = auxiliar + (valor%2)*i;
          
            i*=10;
            valor = valor/2;
            
        }
       
        printf("%d\n",auxiliar);
       
    }
    else if ( opcao==2 ){
        /* Binario para decimal */
        i=0;
        while( valor>0 ){
            
            for(j=0; j < i ; j++){
                result = result*(2);
            }
            
            auxiliar = auxiliar + (valor%10)*result;
            i++;
            result=1;
            valor /=10;
            
        }
        
        printf("%d\n",auxiliar);
    }
 
 
    return 0;
}
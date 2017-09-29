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
        /* Decimal para Hexadecimal */
        
        while(valor>0){
            vet[auxiliar] = valor%16;
          
            auxiliar++;
            valor = valor/16;
            
        }
        
        for(i=auxiliar-1; i >= 0; i--){
            if( i==0 ){
                switch(vet[i]){
                    case 10:
                        printf("A\n");
                        break;
                    case 11:
                        printf("B\n");
                        break;
                    case 12:
                        printf("C\n");
                        break;
                    case 13:
                        printf("D\n");
                        break;
                    case 14:
                        printf("E\n");
                        break;
                    case 15:
                        printf("F\n");
                        break;
                    default:
                        printf("%d\n",vet[i]);
                        break;
                    
                }
            }
            else{
                switch(vet[i]){
                    case 10:
                        printf("A");
                        break;
                    case 11:
                        printf("B");
                        break;
                    case 12:
                        printf("C");
                        break;
                    case 13:
                        printf("D");
                        break;
                    case 14:
                        printf("E");
                        break;
                    case 15:
                        printf("F");
                        break;
                    default:
                        printf("%d",vet[i]);
                        break;
                    
                }
            }
            
        }
        
       
    }
    else if ( opcao==2 ){
        /* Hexadecimal para decimal */
        i=0;
        printf("%d\n",valor);
        while( valor>0 ){
            
            for(j=0; j < i ; j++){
                result = result*(16);
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
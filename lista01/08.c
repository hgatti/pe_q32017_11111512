#include <stdio.h>


int main(){
    int n,i,fib=0,fib1=0,fib2=0;
    
    scanf("%d",&n);
    n=n+1;
    
    for(i=0; i < n ; i++){
        
        if(i==0){
            fib = 0;
            fib2 = 0;
            
        }
        else if (i==1){
            fib = 1;
            fib1 =1 ;
        }
        else{
            fib = fib1 + fib2;
            fib2 = fib1;
            fib1 = fib;
            
        }
        
        if(i!=n-1){
            printf("%d, ",fib);
        }
        else{
            printf("%d\n",fib);
        }
        
    }
  
    return 0;
}
#include <stdio.h>

int main(){
    
    int input,i;
    
    scanf("%d",&input);
    
    for(i=100; i <= input; i++){
        
        if( i%2==0){
            if( i==input){
                printf("%d\n",i);
            }
            else{
                printf("%d, ",i);
            }
        }
    }
    
    return 0;
}
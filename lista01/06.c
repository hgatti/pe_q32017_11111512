#include <stdio.h>


int main(){
    int x,result=1,i;
    
    scanf("%d",&x);
    
    for(i=0; i < x ; i++){
        result = result*(x-i);
    }
    printf("%d\n",result);
  
    return 0;
}
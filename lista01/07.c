#include <stdio.h>


int main(){
    int x,n,result=1,i;
    
    scanf("%d",&x);
    scanf("%d",&n);
    
    for(i=0; i < n ; i++){
        result = result*(x);
    }
    printf("%d\n",result);
  
    return 0;
}
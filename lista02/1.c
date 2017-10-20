#include <stdio.h>

int paridade(int x)
{
    if( x%2 == 0 ){
        return 0;
    }
    return 1;
    
    
}

int main()
{
    int input;
    
    scanf("%d",&input);
    
    printf("%d\n",paridade(input));
    
    return 0;
}
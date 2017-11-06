#include <stdio.h>
#include <stdlib.h>

int num_vogais(char *entrada)
{
    int i =0;
    int quantidade =0;
    while(entrada[i]!='\0'){
        if(entrada[i] == 'a' || entrada[i] == 'e' || entrada[i] == 'i' || entrada[i] == 'o' || entrada[i] == 'u'){
            quantidade++;
        }
        i++;
    }
    
    return quantidade;
    
}

int main()
{
    char entrada[255];
    fgets(entrada,255,stdin);
    
    printf("%d\n",num_vogais(entrada));
        
    return 0;
}
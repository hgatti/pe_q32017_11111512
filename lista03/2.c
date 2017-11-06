#include <stdio.h>
#include <stdlib.h>

int str_length(char *entrada)
{
    int i=0;
    
    while(entrada[i]!='\0') i++;
    
    return i-1;
    
}

char* inverte(char *entrada)
{
    char *invertido;
    
    int tam = str_length(entrada);
    int i =0;
    
    invertido = malloc(tam*sizeof(char));
    
    while(i!=tam+1){
    
        invertido[i] = entrada[tam-i];
        i++;
    }
    
    return invertido;
}

int main()
{
    char entrada[255];
    fgets(entrada,255,stdin);
    
    
    printf("%s\n",inverte(entrada));
        
    return 0;
}
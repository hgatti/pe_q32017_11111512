#include <stdio.h>

float volume(float largura, float comprimento, float altura)
{
    return (largura*comprimento*altura);
}

int main()
{
    float largura,comprimento,altura;
    
    scanf("%f %f %f",&largura,&comprimento,&altura);
    
    printf("%.2f\n",volume(largura,comprimento,altura));
    
    return 0;
}
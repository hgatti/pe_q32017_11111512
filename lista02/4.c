#include <stdio.h>

float soma(float x, float y)
{
    return (x+y);
}

float sub(float x,float y)
{
    return (x-y);
}

float mult(float x, float y)
{
    return (x*y);
}

float divi(float x, float y)
{
    return (x/y);
}

float pot(float x, float y)
{
    int i;
    float result=1;
    
    for(i=0; i<y; i++){
        result = result*x;
    }
    return result;
}
int main()
{
    int operacao;
    float valor1,valor2;
    
    scanf("%d %f %f",&operacao,&valor1,&valor2);
    
    if(operacao == 1){
        //Soma
        printf("%.2f\n",soma(valor1,valor2));
    }
    else if (operacao == 2){
        //Subtração
        printf("%.2f\n",sub(valor1,valor2));
    }
    else if (operacao == 3){
        //Multiplicação
        printf("%.2f\n",mult(valor1,valor2));
    }
    else if (operacao == 4){
        //Divisao
        printf("%.2f\n",divi(valor1,valor2));
    }
    else if (operacao == 5){
        //Potenciação
        printf("%.2f\n",pot(valor1,valor2));
    }

   
    return 0;
}
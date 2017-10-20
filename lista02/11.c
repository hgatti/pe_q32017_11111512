#include <stdio.h>
#include <math.h>


int BinarioToDecimal(int binario,int decimal,int i){
    
    
    if(binario == 0) return decimal;
    
    return BinarioToDecimal(binario/10,decimal+(binario%10)*pow(2,i),i+1);
    
    
}

int DecimalToBinario(int decimal, int i,int binario){
    //Decimal para Binario

    if(decimal == 0) return binario;
    
    return DecimalToBinario(decimal/2,i*10,binario +(decimal%2)*i);
}



int main()
{
    int opcao,valor;
    
    scanf("%d %d",&valor,&opcao);
    
    if(opcao == 1){
        //Decimal p/ Binário
        printf("%d\n",DecimalToBinario(valor,1,0));
        
    }
    else if (opcao == 2){
        //Binario p/ Decimal
        printf("%d\n",BinarioToDecimal(valor,0,0));
    }
    
    return 0;
}
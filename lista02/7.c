#include <stdio.h>

float CelciusToKelvin(float celcius){
    
    return celcius+273;
}

float KelvinToCelcius(float kelvin){
 
    return kelvin-273;
}

float CelciusToFahre(float celcius){
    
    return (celcius*1.8)+32;
}

float FahreToCelcius(float fahrenheit){
 
    return (fahrenheit-32)/1.8;
}

int BinarioToDecimal(int binario){
    int decimal=0;
    
     /* Binario para decimal */
        int i=0;
        int j;
        int result=1;
        while( binario>0 ){
            
            for(j=0; j < i ; j++){
                result = result*(2);
            }
            
            decimal = decimal + (binario%10)*result;
            i++;
            result=1;
            binario /=10;
        }
    
    return decimal;
}

int DecimalToBinario(int decimal){
    int binario =0;
    /* Decimal para binario */
        int i = 1;
        while(decimal>0){
            binario = binario + (decimal%2)*i;
          
            i*=10;
            decimal = decimal/2;
            
        }
    
    return binario;
}

int main(){
    
    int conversao,unidade_entrada,unidade_saida;
    float valor;
    
    scanf("%d",&conversao);
    scanf("%d",&unidade_entrada);
    scanf("%d",&unidade_saida);
    scanf("%f",&valor);
    
    if(conversao == 1){
        //Temperatura
        if(unidade_entrada == 1){
            //Entrada Celcius
            if(unidade_saida == 1){
                //Saida Celcius
                 printf("%.2f C\n",valor);
            }
            else if(unidade_saida == 2){
                //Saida Fahreheit
                printf("%.2f F\n",CelciusToFahre(valor));
            }
            else if(unidade_saida == 3){
                //Saida Kelvin
                printf("%.2f K\n",CelciusToKelvin(valor));
            }
            
        }
        else if(unidade_entrada == 2){
            //Entrada Fahreheit
            if(unidade_saida == 1){
                //Saida Celcius
                printf("%.2f C\n",FahreToCelcius(valor));
            }
            else if(unidade_saida == 2){
                //Saida Fahreheit
                printf("%.2f F\n",valor);
            }
            else if(unidade_saida == 3){
                //Saida Kelvin
                printf("%.2f K\n",CelciusToKelvin(FahreToCelcius(valor)));
            }
            
        }
        else if(unidade_entrada == 3){
            //Entrada Kelvin
             if(unidade_saida == 1){
                //Saida Celcius
                printf("%.2f C\n",KelvinToCelcius(valor));
            }
            else if(unidade_saida == 2){
                //Saida Fahreheit
                printf("%.2f F\n",CelciusToFahre(KelvinToCelcius(valor)));
            }
            else if(unidade_saida == 3){
                //Saida Kelvin
                printf("%.2f K\n",valor);
            }
        }
    }
    else if(conversao == 2){
        //Base Numerica
        if(unidade_entrada ==1){
            //Entrada Decimal
            if(unidade_saida == 1){
                //Saida Decimal
                printf("%.0f\n",valor);
                
            }
            else if(unidade_saida == 2){
                //Saida Binaria
                printf("%d\n",DecimalToBinario(valor));
            }
        }
        else if (unidade_entrada == 2){
            //Entrada Binaria
            if(unidade_saida == 1){
                //Saida Decimal
                printf("%d\n",BinarioToDecimal(valor));
                
            }
            else if(unidade_saida == 2){
                //Saida Binaria
                printf("%.0f\n",valor);
            }
            
        }
    }
    
    
    return 0;
}

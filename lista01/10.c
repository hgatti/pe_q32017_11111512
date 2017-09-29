#include <stdio.h>


int main(){
    int opcao;
    double temperatura;
    double auxiliar;
    
    scanf("%lf",&temperatura);
    scanf("%d",&opcao);
    
    if ( opcao==1 ){
        /* Celcius para Kelvin*/
        auxiliar = temperatura + 273.15;
        printf("%f\n",auxiliar);
    }
    else if ( opcao==2 ){
        /* Kelvin para Celcius */
        auxiliar = temperatura - 273.15;
        printf("%f\n",auxiliar);
    }
 
    return 0;
}
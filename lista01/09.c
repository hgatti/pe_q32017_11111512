#include <stdio.h>


int main(){
    int n;
    double x;
    double conv;
    
    scanf("%lf",&x);
    scanf("%d",&n);
    
    if ( n==1 ){
        /* Celcius para Fahrenheit */
        conv = (x*1.8)+32;
        printf("%f\n",conv);
    }
    else if ( n==2 ){
        /* Fahrenheit para Celcius */
        conv = (x-32)/1.8;
        printf("%f\n",conv);
    }
 
    return 0;
}
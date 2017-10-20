#include <stdio.h>
#include <math.h>


double bhaskara1(double a, double b, double c,double delta)
{
    double x1;
    
    if(delta >=0){
        x1 = -b + sqrt(delta);
        x1 /= (2*a);
        
        return x1;
    }
    else{
        x1 = -b;
        x1 /= (2*a);
        
        return x1;
    }
       
}

double bhaskara2(double a, double b, double c,double delta)
{
    double x2;

    if(delta >=0){
        x2 = -b - sqrt(delta);
        x2 /= (2*a);
        
        return x2;
    }
    else{
        x2 =-sqrt(delta*-1);
        x2 /= (2*a);
        
        return x2;
    }
   
}

int main()
{
   double a,b,c,delta;
   
   scanf("%lf %lf %lf",&a,&b,&c);

   delta = pow(b,2) - (4*a*c);
   
   if(delta >=0){
        printf("%.2lf %.2lf\n",bhaskara1(a,b,c,delta),bhaskara2(a,b,c,delta));
        
   }
   else{
       double valor1,valor2;
       valor1 = bhaskara1(a,b,c,delta);
       valor2 = bhaskara2(a,b,c,delta);
       
        printf("%.2lf %.2lfi %.2lf +%.2lfi\n",valor1,valor2,valor1,valor2*-1);
   }
  

   
   return 0;
}
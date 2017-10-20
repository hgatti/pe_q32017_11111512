#include <stdio.h>
#include <math.h>


double pi(int n)
{
	double a=1,b=1/sqrt(2),t=1./4,p=1,a1,i,pi;

	for(i=1; i<=n ; i++){
		a1 = (a+b)/2;
		b = sqrt(a*b);
		t = t - p*pow(a-a1,2);
		p = 2*p;
		a = a1;
	}
	
	pi = (pow(a+b,2))/(4*t);

	
	return pi;

}
int main()
{
    int n=25;

    printf("%.20lf\n",pi(n));
    
    /*Resposta da questão: o que impede a precisão é o tamanho da variavel
    double, e o tempo de processamento para trabalhar com esses numeros.
    */

    return 0;
}
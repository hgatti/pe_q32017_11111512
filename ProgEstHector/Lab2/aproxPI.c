#include <stdio.h>
#include <math.h>


double ramanujan(int);
double chudnovsky(int);
int fat(int);

int fat(int x)
{
    int result=1,i;

    for(i=0; i < x ; i++){
        result = result*(x-i);
    }

    return result;
}


double ramanujan(int input)
{
    double solucao,k;

    for(k=0; k <input;k++){

        solucao = solucao + (fat(4*k))*(1103+26390*k)/((pow(fat(k),4)*(pow(396,4*k))));
    }

    return solucao;


}


double chudnovsky(int input)
{
    double solucao,k;

    for(k=0; k<input; k++){

        solucao = solucao + ((pow(-1,k))*(fat(6*k))*(13591409+545140134*k))/((fat(3*k))*(pow(fat(k),3))*(pow(640320,3*k+1.5)));
    }

    return solucao;


}



int main(){
    
    int input,i,escolha;
    double pi;

    scanf("%d",&input);
    scanf("%d",&escolha);

    if(escolha ==0){
	    
	    pi = 1/((2*sqrt(2)*ramanujan(input))/9801);

	    printf("%.8lf\n",pi);

    }
    else if (escolha ==1){

	    pi = 1/(12*chudnovsky(input));

	    printf("%.8lf\n",pi);


    }

    return 0;


}


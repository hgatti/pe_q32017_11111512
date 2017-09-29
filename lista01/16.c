#include <stdio.h>

int descontos(int,int);
int acrescimos(int,int);

int descontos(int salario, int faltas){
    
    int desconto = (salario/20)*faltas;
    
    return desconto;
}

int acrescimos(int salario, int h_extra){
    
    int acrescimo;
    float calc;
    
    calc = ((float)(salario)/(20*8)+40);
    
    if(h_extra < 40){
        
        acrescimo = calc*h_extra;    
        
    }
    else{
        acrescimo = calc*40;  
    }

    return acrescimo;
}

int main(){
    
    int input,faltas,h_extra;
    
    scanf("%d",&input);
    scanf("%d",&faltas);
    scanf("%d",&h_extra);
    
    if(input ==1){
        //Diretor,base =10.000
        printf("cargo         : Diretor\n");
        printf("# de faltas   : %d\n",faltas);
        printf("# horas-extra : %d\n",h_extra);
        printf("descontos     : %d\n",descontos(10000,faltas));
        printf("acrescimos    : %d\n",acrescimos(10000,h_extra));
        printf("salario       : %d\n",10000+acrescimos(10000,h_extra)-descontos(10000,faltas));
        
    }
    else if (input ==2){
        //Gerente,base =8.000
        printf("cargo         : Gerente\n");
        printf("# de faltas   : %d\n",faltas);
        printf("# horas-extra : %d\n",h_extra);
        printf("descontos     : %d\n",descontos(8000,faltas));
        printf("acrescimos    : %d\n",acrescimos(8000,h_extra));
        printf("salario       : %d\n",8000+acrescimos(8000,h_extra)-descontos(8000,faltas));
        
    }
    else if (input ==3){
        //Engenheiro, base 5.000
        printf("cargo         : Engenheiro\n");
        printf("# de faltas   : %d\n",faltas);
        printf("# horas-extra : %d\n",h_extra);
        printf("descontos     : %d\n",descontos(5000,faltas));
        printf("acrescimos    : %d\n",acrescimos(5000,h_extra));
        printf("salario       : %d\n",5000+acrescimos(5000,h_extra)-descontos(5000,faltas));
    
    }
    else if (input ==4){
        //Tecnico, base 3.000
        printf("cargo         : Tecnico\n");
        printf("# de faltas   : %d\n",faltas);
        printf("# horas-extra : %d\n",h_extra);
        printf("descontos     : %d\n",descontos(3000,faltas));
        printf("acrescimos    : %d\n",acrescimos(3000,h_extra));
        printf("salario       : %d\n",3000+acrescimos(3000,h_extra)-descontos(3000,faltas));
        
    }
    else if (input ==5){
        //Operador, base 2.000
        printf("cargo         : Operador\n");
        printf("# de faltas   : %d\n",faltas);
        printf("# horas-extra : %d\n",h_extra);
        printf("descontos     : %d\n",descontos(2000,faltas));
        printf("acrescimos    : %d\n",acrescimos(2000,h_extra));
        printf("salario       : %d\n",2000+acrescimos(2000,h_extra)-descontos(2000,faltas));
        
    }
    
    return 0;
}
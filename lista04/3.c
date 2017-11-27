#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct ficha_alunos{
    
    char nome[100];
    int ra;
    float p1;
    float p2;
    float p3;
    float media;
    
}ficha_alunos;



int main()
{
    FILE *fp;
    int i;
     
    ficha_alunos alunos[50];
    
    fp = fopen("lista_alunos.txt","a+");
    
    for(i=0 ; i<50 ; i++){
        fscanf(fp, "%s %d %f %f %f",alunos[i].nome,&alunos[i].ra,&alunos[i].p1,&alunos[i].p2,&alunos[i].p3);
        alunos[i].media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3)/3;
    }
    
    fclose(fp);
    
    fp = fopen("media_alunos.txt","a+");
    
    for(i=0 ; i<50 ; i++){
       fprintf(fp, "%s %d %.1f %.1f %.1f %.2f\n",alunos[i].nome,alunos[i].ra,alunos[i].p1,alunos[i].p2,alunos[i].p3,alunos[i].media);
    }
    
    fclose(fp);
    
    return 0;
}
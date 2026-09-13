#include <stdio.h>
int main(){
    float nota1,nota2,nota3,nota4,mediaAritmetica,mediaPonderada;

    printf("Digite as 4 notas em sequências (Separados por espaço ou Enter) : ");
    scanf("%f%f%f%f",&nota1,&nota2,&nota3,&nota4);

    mediaAritmetica = (nota1+nota2+nota3+nota4)/4;
    mediaPonderada = ((nota1*1) + (nota2*1) + (nota3*2) + (nota4*2))/6;
    printf("O resultado da media ponderada  é :%.2f \n",mediaPonderada);
    printf("a media aritmetica das notas é : %.2f \n", mediaAritmetica);

    return 0;
}
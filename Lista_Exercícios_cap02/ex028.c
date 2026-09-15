#include <stdio.h>
int main(){
    float taxaNormal = 10.00f;
    float taxaHoraExtra = 15.00f;
    float horasNormais,horasExtras,salarioBruto,imposto,salarioLiquido;

    printf("Diga a quantidade de horas normais trabalhadas e a quantiade de horas extras durante o ano :  ");
    scanf("%f%f", &horasNormais,&horasExtras);
    salarioBruto = (horasNormais*taxaNormal) + (horasExtras*taxaHoraExtra);
    printf("O salário anual bruto é : %.2f \n", salarioBruto);
    if(salarioBruto>12000){
        imposto =  (salarioBruto -12000)* 0.10f;
        salarioLiquido = salarioBruto - imposto;
        printf("O imposto que será pago será de : %.2f \n Salário líquido : %.2f \n", imposto,salarioLiquido);
    }else{
        imposto = 0.0f;
        printf("quantidade de imposto a pagar : %.2f", imposto);
    }
    return 0;
}
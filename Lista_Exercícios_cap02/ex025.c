#include <stdio.h>
int main(){
    float salarioBruto, salarioLiquido;
    float imposto = 0.07f;
    float gratificacao = 0.05f;
    printf("Digite seu sálario inicial:  \n");
    scanf("%f", &salarioBruto);
    salarioLiquido = salarioBruto - (salarioBruto*imposto) + (salarioBruto*gratificacao);
    // subtrai o salario pelo imposto e somei com a gratificação, conforme acima.
    printf("Salário líquido:  %.2f", salarioLiquido);
    return 0;
}
#include <stdio.h>
int main(){
    int diaTrabalhado;
    int taxaFisica = 30;
    float imposto = 0.08f;
    float salarioBruto,salarioLiquido;
    
    printf("Quantos dias você trabalhou? \n");
    scanf("%d", &diaTrabalhado);
    salarioBruto = diaTrabalhado * taxaFisica;
    salarioLiquido = salarioBruto - (salarioBruto*imposto);
    printf("o salário bruto foi : %.2f \n e o salário líquido foi : %.2f", salarioBruto,salarioLiquido);
    return 0;
}
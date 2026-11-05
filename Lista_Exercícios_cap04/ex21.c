#include <stdio.h>

int main() {
    float salario, aumento, novo_salario;
    int codigo;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    printf("Digite o codigo do cargo (1=Tecnico, 2=Gerente, 3=Demais Cargos): ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        if (salario <= 3000.0f) aumento = salario * 0.15f;
        else aumento = salario * 0.10f;
        novo_salario = salario + aumento;
        printf("Valor do aumento: R$ %.2f\n", aumento);
        printf("Novo salario reajustado: R$ %.2f\n", novo_salario);
    } else if (codigo == 2) {
        if (salario <= 5000.0f) aumento = salario * 0.10f;
        else aumento = salario * 0.05f;
        novo_salario = salario + aumento;
        printf("Valor do aumento: R$ %.2f\n", aumento);
        printf("Novo salario reajustado: R$ %.2f\n", novo_salario);
    } else if (codigo == 3) {
        aumento = salario * 0.08f;
        novo_salario = salario + aumento;
        printf("Valor do aumento: R$ %.2f\n", aumento);
        printf("Novo salario reajustado: R$ %.2f\n", novo_salario);
    } else {
        printf("Codigo de cargo invalido!\n");
    }

    return 0;
}
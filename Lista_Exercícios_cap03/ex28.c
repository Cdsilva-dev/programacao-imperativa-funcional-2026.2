#include <stdio.h>

int main() {
    int opcao;
    float salario, novo_salario, desconto;

    do {
        printf("1. Reajuste Salarial\n");
        printf("2. Retenção de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nDigite o salário atual: R$ ");
                scanf("%f", &salario);

                if (salario <= 2000.00) {
                    novo_salario = salario * 1.15; 
                } else {
                    novo_salario = salario * 1.10; 
                }

                printf("Novo salário reajustado: R$ %.2f\n", novo_salario);
                break;

            case 2:
                printf("\nDigite o salário atual: R$ ");
                scanf("%f", &salario);

                if (salario <= 3000.00) {
                    desconto = salario * 0.08; 
                } else {
                    desconto = salario * 0.15; 
                }

                printf("Valor do desconto do IR: R$ %.2f\n", desconto);
                printf("Salário líquido: R$ %.2f\n", salario - desconto);
                break;

            case 3:
                break;

            default:
                printf("Opção inválida! Por favor, escolha uma opção válida\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}
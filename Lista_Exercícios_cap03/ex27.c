#include <stdio.h>

int main() {
    int valor;
    int qtd100 = 0, qtd50 = 0, qtd20 = 0, qtd10 = 0, qtd5 = 0, qtd2 = 0;

    printf("Digite o valor do saque em R$: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor de saque inválido!\n");
        
    }

  
    while (valor >= 100) {
        valor -= 100;
        qtd100++;
    }

    while (valor >= 50) {
        valor -= 50;
        qtd50++;
    }

  
    while (valor >= 20) {
        valor -= 20;
        qtd20++;
    }

  
    while (valor >= 10) {
        valor -= 10;
        qtd10++;
    }


    while (valor >= 5) {
        valor -= 5;
        qtd5++;
    }

    while (valor >= 2) {
        valor -= 2;
        qtd2++;
    }

    printf("Cédulas fornecidas:\n");

    if (qtd100 > 0) printf("%d cédula(s) de R$ 100\n", qtd100);
    if (qtd50 > 0)  printf("%d cédula(s) de R$ 50\n", qtd50);
    if (qtd20 > 0)  printf("%d cédula(s) de R$ 20\n", qtd20);
    if (qtd10 > 0)  printf("%d cédula(s) de R$ 10\n", qtd10);
    if (qtd5 > 0)   printf("%d cédula(s) de R$ 5\n", qtd5);
    if (qtd2 > 0)   printf("%d cédula(s) de R$ 2\n", qtd2);

    if (valor > 0) {
        printf("\nSobrou R$ %d que não pode ser sacado com as cédulas disponíveis.\n", valor);
    }

    return 0;
}
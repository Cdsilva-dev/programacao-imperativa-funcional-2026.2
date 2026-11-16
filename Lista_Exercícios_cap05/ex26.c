#include <stdio.h>

long fibonacci(int n);

int main() {
    int qtd, i;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("Quantidade invalida!\n");
    } else {
        printf("Sequencia de Fibonacci:\n");
        for (i = 0; i < qtd; i++) {
            printf("%ld ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}

/*
 * Por que fica lenta para valores grandes de n:
 * A recursao dupla (fibonacci(n - 1) + fibonacci(n - 2)) cria uma arvore de chamadas
 * com crescimento exponencial O(2^n), recalculando repetidamente os mesmos termos
 * intermediarios diversas vezes.
 */
long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
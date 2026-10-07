#include <stdio.h>

int main() {
    int A, B;
    int soma_primos = 0;

    printf("Digite o valor de A: \n");
    scanf("%d", &A);
    printf("Digite o valor de B: \n");
    scanf("%d", &B);

    if (A >= B || A <= 0) {
        printf("Intervalo inválido! A deve ser positivo e menor que B\n");
    }

    printf("Números primos no intervalo [%d, %d]: \n", A, B);

    for (int i = A; i <= B; i++) {
        int divisores = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", i);
            soma_primos += i;
        }
    }

    printf("Soma de todos os primos encontrados: %d\n", soma_primos);

    return 0;
}
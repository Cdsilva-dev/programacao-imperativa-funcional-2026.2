#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int num;
    long fatIter, fatRec;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Erro: O numero deve ser nao negativo!\n");
    } else {
        fatIter = fatorialIterativo(num);
        fatRec = fatorialRecursivo(num);

        printf("Fatorial Iterativo: %ld\n", fatIter);
        printf("Fatorial Recursivo: %ld\n", fatRec);

        if (fatIter == fatRec) {
            printf("Os resultados coincidem!\n");
        }
    }

    return 0;
}

long fatorialIterativo(int n) {
    long fat = 1;
    int i;
    for (i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return (long)n * fatorialRecursivo(n - 1);
}
#include <stdio.h>

int main() {
    int N;
    long long int fatorial = 1;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Erro: Não existe fatorial de número negativo.\n");
    }

    for (int i = 1; i <= N; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", N, fatorial);

    return 0;
}
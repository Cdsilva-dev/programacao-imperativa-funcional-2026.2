#include <stdio.h>

int somaDigitos(int n);

int main() {
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("Soma dos digitos: %d\n", somaDigitos(num));
    } else {
        printf("Numero invalido! Digite um valor positivo.\n");
    }

    return 0;
}

int somaDigitos(int n) {
    // Caso base: quando nao ha mais digitos para extrair
    if (n == 0) {
        return 0;
    }
    // Passo recursivo: soma o ultimo digito (n % 10) com a soma dos restantes (n / 10)
    return (n % 10) + somaDigitos(n / 10);
}
#include <stdio.h>

int main() {
    int numero;
    int contador_numPrimo = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador_numPrimo++;
        }
    }

    printf("O número %d foi divisível %d vezes\n", numero, contador_numPrimo);

    if (contador_numPrimo == 2) {
        printf("E por isso o número %d é primo\n", numero);
    } else {
        printf("E por isso o número %d não é primo\n", numero);
    }

    return 0;
}
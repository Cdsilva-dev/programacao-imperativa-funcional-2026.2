#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Paridade: PAR\n");
    } else {
        printf("Paridade: IMPAR\n");
    }

    if (num > 0) {
        printf("Sinal: POSITIVO\n");
    } else if (num < 0) {
        printf("Sinal: NEGATIVO\n");
    } else {
        printf("Sinal: ZERO\n");
    }

    return 0;
}
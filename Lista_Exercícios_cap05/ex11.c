#include <stdio.h>

int ehPar(int n);

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (ehPar(num)) {
        printf("O numero %d eh PAR.\n", num);
    } else {
        printf("O numero %d eh IMPAR.\n", num);
    }

    return 0;
}

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
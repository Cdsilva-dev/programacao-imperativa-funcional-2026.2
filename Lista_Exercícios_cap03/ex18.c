#include <stdio.h>

int main() {
    int numero, invertido = 0;

    printf("Digite um número ai: \n");
    scanf("%d", &numero);

    while (numero > 0) {
        invertido = (invertido * 10) + (numero % 10);
        numero /= 10;
    }

    printf("%d\n", invertido);

    return 0;
}
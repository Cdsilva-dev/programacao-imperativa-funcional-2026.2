#include <stdio.h>

int main() {
    int ano;
    printf("Digite um ano positivo: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d eh bissexto.\n", ano);
    } else {
        printf("O ano %d nao eh bissexto.\n", ano);
    }

    return 0;
}
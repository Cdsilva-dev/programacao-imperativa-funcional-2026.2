#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite uma nota entre 0.0 e 10.0: ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota inválida! Tente novamente\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota válida registrada: %.2f\n", nota);

    return 0;
}
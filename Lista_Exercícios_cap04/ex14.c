#include <stdio.h>

int main() {
    float nota;
    int faltas;

    printf("Digite a nota (0.0 a 10.0) e o numero de faltas: ");
    scanf("%f %d", &nota, &faltas);

    if (nota >= 9.0f && nota <= 10.0f) {
        if (faltas <= 20) printf("Conceito A\n");
        else printf("Conceito B\n");
    } else if (nota >= 7.5f && nota < 9.0f) {
        if (faltas <= 20) printf("Conceito B\n");
        else printf("Conceito C\n");
    } else if (nota >= 5.0f && nota < 7.5f) {
        if (faltas <= 20) printf("Conceito C\n");
        else printf("Conceito D\n");
    } else if (nota >= 4.0f && nota < 5.0f) {
        if (faltas <= 20) printf("Conceito D\n");
        else printf("Conceito E\n");
    } else if (nota >= 0.0f && nota < 4.0f) {
        printf("Conceito E\n");
    } else {
        printf("Nota invalida!\n");
    }

    return 0;
}
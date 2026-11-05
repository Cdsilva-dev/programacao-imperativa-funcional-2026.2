#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Digite as notas do Trabalho de Lab (peso 2), Avaliacao Semestral (peso 3) e Exame Final (peso 5): ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 * 2.0f + n2 * 3.0f + n3 * 5.0f) / 10.0f;
    printf("Media Ponderada: %.2f\n", media);

    if (media < 3.0f) {
        printf("Situacao: Reprovado\n");
    } else if (media < 5.0f) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Aprovado\n");
    }

    return 0;
}
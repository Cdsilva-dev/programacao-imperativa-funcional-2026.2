#include <stdio.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite as tres notas (pesos 2, 3 e 5): ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = mediaPonderada(nota1, nota2, nota3);
    printf("Media Ponderada: %.2f\n", media);
    exibeSituacao(media);

    return 0;
}

float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2.0f + n2 * 3.0f + n3 * 5.0f) / 10.0f;
}

void exibeSituacao(float media) {
    if (media >= 5.0f) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 3.0f) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
}
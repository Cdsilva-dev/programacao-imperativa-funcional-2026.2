#include <stdio.h>

int main() {
    int Linhas;
    int numero = 1;

    printf("Digite o número de linhas (N): ");
    scanf("%d", &Linhas);

    for (int i = 1; i <= Linhas; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}
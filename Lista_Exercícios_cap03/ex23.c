#include <stdio.h>

int main() {
    int Lado;

    printf("Digite a dimensão do lado  (entre 3 e 20): \n ");
    scanf("%d", &Lado);

    if (Lado < 3 || Lado > 20) {
        printf("Dimensão inválida! Digite um valor entre 3 e 20\n");
    }

    for (int i = 0; i < Lado; i++) { 
        for (int j = 0; j < Lado; j++) { 

            if (i == 0 || i == Lado - 1 || j == 0 || j == Lado - 1) {
                printf("X");
            } else {
                printf(" "); 
            }
        }
        printf("\n"); 
    }

    return 0;
}
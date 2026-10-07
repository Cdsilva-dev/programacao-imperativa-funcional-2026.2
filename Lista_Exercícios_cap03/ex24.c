#include <stdio.h>

int main() {
    int Dimensao;

    printf("Digite a dimensão ímpar (entre 3 e 19): \n");
    scanf("%d", &Dimensao);

    if (Dimensao < 3 || Dimensao > 19 || Dimensao % 2 == 0) {
        printf("Dimensão inválida! O número deve ser ímpar e estar entre 3 e 19\n");
    }

    for (int i = 0; i < Dimensao; i++) {       
        for (int j = 0; j < Dimensao; j++) {   

            if (i == j || i + j == Dimensao - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int mes, ano, bissexto;

    printf("Digite o mes (1-12) e o ano: ");
    scanf("%d %d", &mes, &ano);

    if (mes < 1 || mes > 12) {
        printf("Entrada invalida!\n");
    } else {
        bissexto = ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0));

        switch (mes) {
            case 1:  printf("Janeiro - 31 dias\n"); break;
            case 2:
                if (bissexto) printf("Fevereiro - 29 dias\n");
                else printf("Fevereiro - 28 dias\n");
                break;
            case 3:  printf("Marco - 31 dias\n"); break;
            case 4:  printf("Abril - 30 dias\n"); break;
            case 5:  printf("Maio - 31 dias\n"); break;
            case 6:  printf("Junho - 30 dias\n"); break;
            case 7:  printf("Julho - 31 dias\n"); break;
            case 8:  printf("Agosto - 31 dias\n"); break;
            case 9:  printf("Setembro - 30 dias\n"); break;
            case 10: printf("Outubro - 31 dias\n"); break;
            case 11: printf("Novembro - 30 dias\n"); break;
            case 12: printf("Dezembro - 31 dias\n"); break;
        }
    }

    return 0;
}
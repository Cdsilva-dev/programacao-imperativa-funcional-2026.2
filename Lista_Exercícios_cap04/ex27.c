#include <stdio.h>

int main() {
    int horas;
    float valor_total = 0.0f;

    printf("Digite o numero de horas de permanencia: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Tempo de permanencia invalido!\n");
    } else {
        if (horas <= 2) {
            valor_total = horas * 2.00f;
        } else if (horas <= 4) {
            valor_total = (2 * 2.00f) + ((horas - 2) * 2.50f);
        } else {
            valor_total = (2 * 2.00f) + (2 * 2.50f) + ((horas - 4) * 3.00f);
        }

        printf("Tempo total: %d hora(s)\n", horas);
        printf("Valor total cobrado: R$ %.2f\n", valor_total);
    }

    return 0;
}
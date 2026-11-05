#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;
    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Erro: O coeficiente 'a' deve ser diferente de zero!\n");
    } else {
        delta = b * b - 4.0 * a * c;

        if (delta < 0) {
            printf("A equacao nao possui raizes reais.\n");
        } else if (delta == 0) {
            x1 = -b / (2.0 * a);
            printf("Raiz unica: x = %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2.0 * a);
            x2 = (-b - sqrt(delta)) / (2.0 * a);
            printf("Raizes reais distintas: x1 = %.2f e x2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}
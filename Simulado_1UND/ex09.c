#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite os três lados do triângulo (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Área do triângulo: %.3f\n", area);

    return 0;
}
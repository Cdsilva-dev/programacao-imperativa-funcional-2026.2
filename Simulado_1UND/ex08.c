#include <stdio.h>
#include <math.h>
int main() {
    double R, area, volume;
    double const PI = 3.14159265;

    printf("Digite o raio R da esfera: ");
    scanf("%lf", &R);

    area = 4.0 * PI * pow(R, 2);
    volume = (4.0 / 3.0) * PI * pow(R, 3);

    printf("Área da superfície: %.3f\n", area);
    printf("Volume da esfera: %.3f\n", volume);

    return 0;
}
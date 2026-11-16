#include <stdio.h>
#include "areas.h"

int main() {
    float r, bRet, hRet, bTri, hTri;

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);
    printf("Area do circulo: %.2f\n\n", A_CIRC(r));

    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &bRet, &hRet);
    printf("Area do retangulo: %.2f\n\n", A_RET(bRet, hRet));

    printf("Digite a base e a altura do triangulo: ");
    scanf("%f %f", &bTri, &hTri);
    printf("Area do triangulo: %.2f\n", A_TRI(bTri, hTri));

    return 0;
}
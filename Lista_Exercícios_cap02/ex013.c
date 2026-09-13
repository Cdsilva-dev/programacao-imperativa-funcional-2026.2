#include <stdio.h>
int main(){
    float lado;
    float base;
    float altura;

    float areaRetangulo;
    float areaTrianguloRetangulo;
    float areaQuadrado;

    printf("informe o lado : ");
    scanf("%f", &lado);
    printf("informe a base : ");
    scanf("%f", &base);
    printf("informe a altura : ");
    scanf("%f", &altura);

     areaQuadrado = lado*lado;
    areaTrianguloRetangulo = (base*altura)/2.0f;
    areaRetangulo = base*altura;

    printf("A área do triangulo retangulo é : %.2f\n área do retângulo :  %.2f \n e a área do quadrado é : %.2f", areaTrianguloRetangulo ,areaRetangulo , areaQuadrado );

    return 0;
}
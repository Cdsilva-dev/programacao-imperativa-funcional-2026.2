#include <stdio.h>
#include <math.h>
int main(){
    float hipotenusa,catetoAdjacente,catetoOposto;

    printf("Digite o valor do cateto oposto e adjacente, respectivamente : ");
    scanf("%f%f", &catetoOposto , &catetoAdjacente );

    hipotenusa = pow(catetoAdjacente,2.0) + pow(catetoOposto,2.0);
    hipotenusa = sqrt(hipotenusa);
    printf("A hipotenusa é : %.2f", hipotenusa);

    return 0;
}
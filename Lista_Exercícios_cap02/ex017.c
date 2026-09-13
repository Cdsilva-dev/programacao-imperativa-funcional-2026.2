#include <stdio.h>
int main(){
    float areaCirculo,AreaCircuferencia,raio;
    const float pi = 3.141593f;
    printf("Digite o valor do Raio : ");
    scanf("%f", &raio);
    areaCirculo = pi * (raio*raio); 
    AreaCircuferencia = (2 * pi * raio);
    printf("área do circulo : %.2f \n área da circuferência : %.2f", areaCirculo,AreaCircuferencia);

    return 0;
}
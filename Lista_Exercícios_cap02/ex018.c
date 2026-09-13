#include <stdio.h>
int main(){
    float raio,areaSuperfice,volume;
    const float pi = 3.141593f;
    printf("Informe o raio : \n");
    scanf("%f", &raio);
   areaSuperfice =  ( 4 * pi * (raio*raio));
    volume = (4.0/3.0) * pi * (raio*raio*raio);
    printf("A área da superficie é : %.2f \n e o volume é : %.2f ", areaSuperfice, volume);
    return 0;
}
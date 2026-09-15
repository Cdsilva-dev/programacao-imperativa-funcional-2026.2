#include <stdio.h>
int main(){
    float KilometroPorHora;
    printf("Digite a velocidade em KM/H :  ");
    scanf("%f", &KilometroPorHora);
    const float metroPorSegundo = KilometroPorHora/3.6;
    printf("a velocidade em M/S é : %.2f ", metroPorSegundo);

    return 0;
}
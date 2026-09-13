#include <stdio.h>
int main(){
    float alturaDegrauCentrimetros, quantidadeDegraus,alturaTotal;
    printf("Digite a altura do degrau em Centrimetros : ");
    scanf("%f", &alturaDegrauCentrimetros);
    printf("Diga a altura máxima que você quer alcançar em Metros : ");
    scanf("%f", &alturaTotal);
    alturaDegrauCentrimetros /=100;
    quantidadeDegraus = alturaTotal/alturaDegrauCentrimetros;
    printf("a quantidade minima de degraus que vc vai ter que subir para alcançar o topo é : %.2f", quantidadeDegraus);



    return 0;
}
#include <stdio.h>
int main(){
    float media = 0.0f, numero_positivo = 0.0f, soma = 0.0f, quantidadeValores = 0.0f;
    while(numero_positivo>=0){
        printf("Digite quantos números reais positivos quiser (digite um número negativo para parar): ");
        scanf("%f", &numero_positivo);
       if(numero_positivo<0.0){
        printf("Saindo do programa. . .\n");
        break;
        /*Esse if também serve para o valor de saída não ser contabilizado na conta!*/
       }
       quantidadeValores += 1;
       soma += numero_positivo;
    }
    if(quantidadeValores>0){
    media = soma/quantidadeValores;
    printf("A soma total foi : %.2f \n e a média é : %.2f",soma,media);
    }
    return 0;
}
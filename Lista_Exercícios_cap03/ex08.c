#include <stdio.h>
int main(){

    float numero = 0;

do{
    printf("Digite um número entre 0.0 e 10.0\n");
    scanf("%f",&numero);
    if (numero >= 0.0 && numero <= 10.0){
        printf("Nota cadastrada com Sucesso!\n");
    }else{
    printf("Digite um intervalo de número válido!\n");
    }
} while (numero <0.0 || numero>10.0);



    return 0;
}
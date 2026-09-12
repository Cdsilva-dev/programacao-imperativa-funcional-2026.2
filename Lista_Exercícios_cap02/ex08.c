#include <stdio.h>
int main(){
    float numero;
    printf("digite um número:  ");
    scanf("%f", &numero);
    printf("O quadrado é : %.2f \n  valor decimal :  %.2f ", (numero*numero), numero/10  );


    return 0;
}
#include <stdio.h>
int main(){
    int numero;
    printf("digite um número:  ");
    scanf("%d", &numero);
    printf("O quadrado é : %d \n  valor decimal :  %.2f ", (numero*numero), numero/10.0  );


    return 0;
}
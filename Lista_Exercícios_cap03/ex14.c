#include <stdio.h>
int main(){
    int numero = 1, soma = 0 ;
    for (;numero<=100;numero++){
        printf("%d --->%d\n", numero,(numero*numero));
        soma+= (numero*numero);
    }
    printf("A soma dos quadrados dos números são : %d", soma);






    return 0;
}
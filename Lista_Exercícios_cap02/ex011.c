#include <stdio.h>
int main(){
    float valorAngulo;
    float radianos;
    const float pi =  3.14159;  
    printf("Digite o valor do ângulo em graus :  ");
    scanf("%f", &valorAngulo);
    radianos = valorAngulo* (pi/180);
    printf("O valor em radianos é  : %.4f", radianos);

    return 0;
}
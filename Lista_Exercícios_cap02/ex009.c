#include <stdio.h>
int main(){
    int numero01;
    int numero02;
    int soma;
    int subtracao;
    float divisao;
    int multiplicacao;
    printf("Digite o primeiro número : ");
    scanf("%d", &numero01);
    printf("Digite o segundo número : ");
    scanf("%d", &numero02);

    soma = numero01 + numero02;
    subtracao = numero01 - numero02;
    multiplicacao  = numero01*numero02;

    if (numero02!=0){
    divisao = (float)numero01/numero02;
    }else{
        divisao = 0;
    }
    
    printf("a soma é : %d \n a subtração é : %d \n a divisao é : %.2f \n e a multiplicação é : %d", soma,subtracao,divisao,multiplicacao);
    return 0;
    // eu evitaria a divisão por zero fazendo um condicional onde if ( numero02 != 0) ai sim eu faria  a conta
    
}
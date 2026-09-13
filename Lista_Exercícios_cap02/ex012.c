#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número :");
    scanf("%d", &numero);
    printf("o Incremento e decremento desse número é, respectivamente, %d  ", ++numero);
    --numero;
    printf("%d", --numero);
// fiz com que primeiro a variavel recebesse o incremento, dps decrementei e decrementei dnv, para chegar ao resultado correto. Se eu decrementasse e incrementasse no mesmo bloco, daria erro, pq o algoritmo, pelo menos no compilador presente no vscode, ler da direita para esquerda, fazendo com que um número valendo "10" virasse 11 e dps iria decrementar novamente retornando 10 ao invés de 9. ai para evitar isso fiz separadamente, tendo o mesmo resultado!


    return 0;
}
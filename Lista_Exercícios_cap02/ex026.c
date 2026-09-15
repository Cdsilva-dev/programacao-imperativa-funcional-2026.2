#include <stdio.h>
int main(){
    float larguraTerreno,precoUnitarioMetro,comprimentoTerreno,perimetroTerreno, quantidadeArameFarpado,custoTotal;

    printf("Digite o comprimento do terreno :\n");
    scanf("%f", &comprimentoTerreno);
    printf("Digite a largura do terreno : \n");
    scanf("%f", &larguraTerreno);
    printf("digite o preco unitário do arame farpado em Metros : \n");
    scanf("%f", &precoUnitarioMetro);

    perimetroTerreno = (2*larguraTerreno) + (2*comprimentoTerreno);
    quantidadeArameFarpado = (perimetroTerreno*3.0f);
    custoTotal = quantidadeArameFarpado *precoUnitarioMetro;
    printf("O total de arame a comprar é : %.2fM \n e o valor total foi  : %.2f", quantidadeArameFarpado, custoTotal);

    return 0;
}
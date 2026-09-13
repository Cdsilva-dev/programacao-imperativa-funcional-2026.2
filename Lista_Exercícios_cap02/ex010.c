#include <stdio.h>
int main(){

    float temperaturaC;
    float temperaturaF;
    float temperaturaK;
    printf("Digite a temperatura em Graus celsius :");
    scanf("%f", &temperaturaC);
    temperaturaF = (1.8*temperaturaC) + 32;
    temperaturaK = temperaturaC + 273.15;
    printf("a temperatura em farheint e em kelvin, respectivamente, são : %.2f     %.2f", temperaturaF,temperaturaK);
    return 0;
}
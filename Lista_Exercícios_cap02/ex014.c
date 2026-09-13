#include <stdio.h>
#include <math.h>
int main(){
    float lado1, lado2, lado3,p,area; 
    printf("Digite os 3 lados separados por espaço! ex : 20 30 40 \n");
    scanf("%f %f %f", &lado1,&lado2,&lado3);
    p = (lado1+lado2+lado3)/2.0;
    area = sqrt(p * (p - lado1) * (p - lado2) * (p - lado3));
    printf("A aréa do triângulo é : %.2f", area);
    return 0;
}
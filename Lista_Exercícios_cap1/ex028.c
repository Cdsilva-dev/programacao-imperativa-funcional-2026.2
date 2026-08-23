#include <stdio.h>
int main(){
double num = 0;
double num2 = 0;
double num3 = 0;
double media = 0;
printf("Digite seu primeiro numero\n");
scanf("%lf", &num);
printf("Digite seu segundo numero\n");
scanf("%lf", &num2);
printf("digite seu terceiro numero\n");
scanf("%lf", &num3);
media =(num+num2+num3)/3;
printf("a media aritimetica entre esses numeros e: %.2lf ", media);
    return 0;
}
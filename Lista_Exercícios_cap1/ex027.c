#include <stdio.h>
int main(){
    int hora = 0;
    int segundos = 0;
    int minutos = 0;
    int resto_Segundos = 0;
printf("Digite o tempo em Segundos : \n");
scanf("%d",&segundos );
hora = (segundos/60)/60;
minutos = (segundos/60)%60;
resto_Segundos = segundos%60;
printf("%d Equivale a %d horas, %d minutos e %d segundos ", segundos,hora,minutos,resto_Segundos);

    return 0;
}
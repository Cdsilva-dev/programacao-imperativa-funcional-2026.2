#include <stdio.h>
int main(){
    int hora,minuto, segundo,segundoTotais,duracaoExpediente;

    printf("Digite o horário dessa maneira : (HH MM SS) \n");
    scanf("%d%d%d",&hora,&minuto,&segundo);
    segundoTotais = (hora*3600) + (minuto*60) + segundo;

    printf("Digite a duração do expediente  em segundos : ");
    scanf("%d", &duracaoExpediente);
    segundoTotais += duracaoExpediente;
    segundoTotais %= 86400;

    hora = segundoTotais/3600;
    minuto = (segundoTotais%3600)/60;
    segundo = segundoTotais % 60;
    printf("A duração total do expediente foi :  %02d:%02d:%02d  ", hora,minuto,segundo);
    return 0;
}
#include <stdio.h>
int main(){
    char data[11];
    printf("Digite a data em formato dd/mm/aaaa : ");
    scanf("%11s", data);
    printf("o formato invertido é : %c%c%c%c/%c%c/%c%c ", data[6], data[7], data[8], data[9], data[0], data[1],data[3], data[4] );

    return 0;
}
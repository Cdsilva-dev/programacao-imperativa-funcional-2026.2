#include <stdio.h>
int main(){
    char letra;
    printf("Digite um caractere: ");
    scanf("%c", &letra);
    printf("na tabela ASCII essa letra representa esse número :\n");
    printf("%d",letra);
// o numero exibido representa a letra digitada na tabela ASCII!
    return 0;
}
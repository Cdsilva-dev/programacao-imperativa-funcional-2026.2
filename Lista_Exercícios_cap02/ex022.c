#include <stdio.h>
int main(){
    char letra,letraMinuscula;
    printf("Informe uma letra Maiscula >");
    scanf("%c", &letra);
    letraMinuscula = letra + 32;
    printf("%c", letraMinuscula);
    return 0;
}
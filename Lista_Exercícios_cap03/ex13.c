#include <stdio.h>
int main(){
   long long int fatorial,resultado =1;
    printf("Digite um número para calcular o fatorial : \n");
    scanf("%lld", &fatorial);
    if (fatorial < 0) {
    printf("Erro! Número negativo...\n");
} else {
    for (; fatorial >= 1; fatorial--) {
        resultado *= fatorial; 

        if (fatorial == 1) {
            printf("%lld = ", fatorial);
        } else {
            printf("%lld x ", fatorial);
        }
    }
    printf("%lld\n", resultado); 
}
    return 0;
}
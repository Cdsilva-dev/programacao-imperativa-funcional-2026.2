#include <stdio.h>
int main(){
int A= 0;
int B = 1;
int intermedio, numero, contador = 0;
printf("Diga o numero para que vá até a sequencia : \n");
scanf("%d", &numero);
while (contador<numero){
    printf("%d ", B);
intermedio = A +B;
A = B;
B = intermedio;
contador += 1;

}
    return 0;
}
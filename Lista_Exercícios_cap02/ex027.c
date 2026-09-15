#include <stdio.h>
#include <stdlib.h>
int main(){
    srand(1);
   int dado1 =  (rand() % 6) + 1;
   int dado2 =  (rand() % 6) + 1;
   int dado3 =  (rand() % 6) + 1;
    printf("os números aleatórios são : %d \n %d\n %d", dado1,dado2,dado3);
    return 0;
}
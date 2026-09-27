#include <stdio.h>
#include <stdlib.h>
int main(){
    int i = 0;
    for ( i; i <=100; i++){
        printf("%d\n", i);
    }
    i = 0 ;
   while (i<=100){
      printf("%d\n", i);
      i++;
   }
   i = 0;
   do{
    printf("%d\n", i);
    i++;
    }
     while(i<=100);
   
    return 0;
}
/*O for é mais adequado para essa situação pois sabemos a quantidade de vezes que irá repetir. */
#include <stdio.h>
int main(){
    int limite,i=1, contador = 0;
    printf("Diga um limite positivo\n");
    scanf("%d",&limite);
        for(; i<=limite; i++){
            if(i % 3 == 0 && i % 5 == 0){
            printf("%d ->", i);
            contador =1;
            } 
            }
             if(!contador){
                printf("Nenhum número no intervalo atende as condições");
    printf("\n");

    }
  



    return 0;
}
#include <stdio.h>
int main(){
int numero01 = 0 , numero02 = 0;
    printf("Digite Dois números separados por enter : \n\n");
    scanf("%d%d", &numero01, &numero02);
        if(numero01 <= numero02){
        for( ; numero01<=numero02; numero01++){
            printf("%d\n", numero01);
        }
        }else{
        for(; numero01>=numero02; numero01--){
            printf("%d\n", numero01 );
        }
    }
        return 0;
}
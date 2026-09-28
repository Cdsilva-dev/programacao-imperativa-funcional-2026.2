#include <stdio.h>
int main(){
    int senha,contador = 0;
    while(senha!=2020){
        printf("Digite a senha :");
        scanf("%d", &senha);
        contador++;
         if (senha==2020){
            printf("Acesso Concedido! O número de tentativas foi :  %d\n", contador);
            break;
        }else{
            if(contador==3){
                printf("Conta bloqueada por segurança!\n");
                break;
            }else{
                printf("Senha incorreta!\n");
            }
        }
    }
       
     return 0;
    }
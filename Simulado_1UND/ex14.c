#include <stdio.h>

int main() {
    int senha_secreta = 2026;
    int chute;
    int tentativas = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &chute);
        tentativas++;

        if (chute == senha_secreta) {
            printf("Acesso Concedido!\n");
            break;
        } else {
            printf("Senha incorreta!\n");
        }
    }
    if (tentativas == 3){
    printf("Conta Bloqueada por Segurança!\n");
    }
    return 0;
}
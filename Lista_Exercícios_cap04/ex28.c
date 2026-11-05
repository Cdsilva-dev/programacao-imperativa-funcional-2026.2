#include <stdio.h>

int main() {
    int opcao;

    printf("=== BANCO SAC ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Direcionando para: Consulta de Saldo...\n");
            break;
        case 2:
            printf("Direcionando para: Emissao de Extrato...\n");
            break;
        case 3:
            printf("Direcionando para: Transferencias Bancarias...\n");
            break;
        case 4:
            printf("Aguarde, transferindo para um de nossos atendentes...\n");
            break;
        default:
            printf("Erro: Opcao invalida no menu do SAC!\n");
            break;
    }

    return 0;
}
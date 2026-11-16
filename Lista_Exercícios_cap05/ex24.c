#include <stdio.h>

// Comente a linha abaixo para compilar sem as mensagens de depuracao
#define DEBUG

int somaAteN(int n);

int main() {
    int n, total;

    printf("Digite um inteiro positivo N: ");
    scanf("%d", &n);

    total = somaAteN(n);
    printf("Soma final de 1 ate %d: %d\n", n, total);

    return 0;
}

int somaAteN(int n) {
    int i, soma = 0;
    for (i = 1; i <= n; i++) {
        soma += i;
        #ifdef DEBUG
            printf("[DEBUG] Iteracao %d: soma parcial = %d\n", i, soma);
        #endif
    }
    return soma;
}

/*
 * Diferenca de comportamento:
 * - Com #define DEBUG ativo: o bloco dentro de #ifdef DEBUG eh mantido pelo
 *   pre-processador e o programa exibe o valor parcial da soma a cada passo do laco.
 * - Sem #define DEBUG: o bloco interno eh completamente descartado antes da
 *   compilacao, exibindo apenas o resultado final na main().
 */
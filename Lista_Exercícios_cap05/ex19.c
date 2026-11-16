#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: O numero deve ser positivo!\n");
    } else {
        printf("Contagem regressiva:\n");
        contagem(n);

        printf("\nContagem crescente:\n");
        contagemCrescente(n);
    }

    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
    } else {
        printf("%d\n", n);
        contagem(n - 1);
    }
}

/*
 * Para imprimir de 1 ate n, basta colocar a chamada recursiva ANTES do printf.
 * Dessa forma, as chamadas sao empilhadas ate n == 0 e os valores sao impressos
 * apenas durante o desempilhamento (do menor para o maior).
 */
void contagemCrescente(int n) {
    if (n > 0) {
        contagemCrescente(n - 1);
        printf("%d\n", n);
    }
}
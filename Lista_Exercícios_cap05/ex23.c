#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main() {
    printf("Macro DOBRO(2+3) original: %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3): %d\n", dobro(2+3));

    /*
     * Explicacao: A macro realiza substituicao textual direta antes da compilacao.
     * Assim, DOBRO(2+3) expande para 2+3*2. Pela precedencia da multiplicacao,
     * 3*2 eh calculado primeiro (6), e depois somado a 2, resultando em 8.
     * A funcao avalia o argumento (2+3 = 5) antes da chamada, retornando 5 * 2 = 10.
     */

    #undef DOBRO
    #define DOBRO(x) ((x)*2)

    printf("Macro DOBRO(2+3) com parenteses de protecao: %d\n", DOBRO(2+3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}
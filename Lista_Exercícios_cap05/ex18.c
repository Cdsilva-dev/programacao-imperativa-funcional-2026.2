#include <stdio.h>

long potencia(int base, int expoente);

int main() {
    int base, exp;

    printf("Digite a base e o expoente (nao negativo): ");
    scanf("%d %d", &base, &exp);

    if (exp < 0) {
        printf("Erro: O expoente deve ser nao negativo!\n");
    } else {
        printf("%d elevado a %d = %ld\n", base, exp, potencia(base, exp));
    }

    return 0;
}

long potencia(int base, int expoente) {
    // Caso base: qualquer numero elevado a 0 eh 1
    if (expoente == 0) {
        return 1;
    }
    // Passo recursivo: multiplica a base pela potencia de (expoente - 1)
    return (long)base * potencia(base, expoente - 1);
}
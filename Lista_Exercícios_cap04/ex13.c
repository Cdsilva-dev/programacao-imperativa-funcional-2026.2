#include <stdio.h>
#include <math.h>

int main() {
    char op;
    double a, b, res;

    printf("Escolha a operacao (+, -, *, /, ^): ");
    scanf(" %c", &op);

    printf("Digite os dois operandos reais: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case '+':
            res = a + b;
            printf("Resultado: %.2f\n", res);
            break;
        case '-':
            res = a - b;
            printf("Resultado: %.2f\n", res);
            break;
        case '*':
            res = a * b;
            printf("Resultado: %.2f\n", res);
            break;
        case '/':
            if (b == 0.0) {
                printf("Erro: Divisao por zero!\n");
            } else {
                res = a / b;
                printf("Resultado: %.2f\n", res);
            }
            break;
        case '^':
            res = pow(a, b);
            printf("Resultado: %.2f\n", res);
            break;
        default:
            printf("Erro: Operador invalido!\n");
            break;
    }

    return 0;
}
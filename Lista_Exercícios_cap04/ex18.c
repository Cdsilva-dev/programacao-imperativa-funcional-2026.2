#include <stdio.h>

int main() {
    int opcao;
    double temp, convertida;

    printf("--- Conversor de Temperatura ---\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura de entrada: ");
    scanf("%lf", &temp);

    switch (opcao) {
        case 1:
            convertida = temp * 1.8 + 32.0;
            printf("Temperatura convertida: %.2f F\n", convertida);
            break;
        case 2:
            convertida = temp + 273.15;
            printf("Temperatura convertida: %.2f K\n", convertida);
            break;
        case 3:
            convertida = (temp - 32.0) / 1.8;
            printf("Temperatura convertida: %.2f C\n", convertida);
            break;
        case 4:
            convertida = temp - 273.15;
            printf("Temperatura convertida: %.2f C\n", convertida);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
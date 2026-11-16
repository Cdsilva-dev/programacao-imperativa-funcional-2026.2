#include <stdio.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main() {
    int opcao;
    float temp;

    printf("=== CONVERSOR DE TEMPERATURAS ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f F\n", celsiusParaFahrenheit(temp));
            break;
        case 2:
            printf("Resultado: %.2f K\n", celsiusParaKelvin(temp));
            break;
        case 3:
            printf("Resultado: %.2f C\n", fahrenheitParaCelsius(temp));
            break;
        case 4:
            printf("Resultado: %.2f C\n", kelvinParaCelsius(temp));
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}

float celsiusParaFahrenheit(float c) {
    return c * 1.8f + 32.0f;
}

float celsiusParaKelvin(float c) {
    return c + 273.15f;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0f) / 1.8f;
}

float kelvinParaCelsius(float k) {
    return k - 273.15f;
}
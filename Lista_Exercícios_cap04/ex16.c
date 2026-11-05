#include <stdio.h>

int main() {
    float distancia, litros, consumo;
    printf("Digite a distancia percorrida (km) e os litros consumidos: ");
    scanf("%f %f", &distancia, &litros);

    if (litros > 0) {
        consumo = distancia / litros;
        printf("Consumo: %.2f km/l\n", consumo);

        if (consumo < 8.0f) {
            printf("Venda o carro!\n");
        } else if (consumo <= 14.0f) {
            printf("Economico!\n");
        } else {
            printf("Super economico!\n");
        }
    } else {
        printf("Entrada invalida!\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    float valor_produto, preco_final, aliquota = 0.0f;
    int codigo_estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    printf("Digite o codigo do estado de destino (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%d", &codigo_estado);

    switch (codigo_estado) {
        case 1: aliquota = 0.07f; break;
        case 2: aliquota = 0.12f; break;
        case 3: aliquota = 0.15f; break;
        case 4: aliquota = 0.08f; break;
        default:
            printf("Erro: Codigo de estado invalido!\n");
            break;
    }

    if (aliquota > 0.0f) {
        preco_final = valor_produto * (1.0f + aliquota);
        printf("Preco final acrescido do imposto: R$ %.2f\n", preco_final);
    }

    return 0;
}
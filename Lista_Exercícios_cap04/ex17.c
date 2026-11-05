#include <stdio.h>

int main() {
    float valor_total, valor_final, comissao;
    int opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor_total);

    printf("Opcao de pagamento (1 = A Vista com 10%% desc, 2 = Parcelado em 3x): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valor_final = valor_total * 0.90f;
        comissao = valor_final * 0.05f;
        printf("Valor final a pagar (A Vista): R$ %.2f\n", valor_final);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        float parcela = valor_total / 3.0f;
        comissao = valor_total * 0.05f;
        printf("Valor de cada parcela (3x sem juros): R$ %.2f\n", parcela);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else {
        printf("Opcao de pagamento invalida!\n");
    }

    return 0;
}
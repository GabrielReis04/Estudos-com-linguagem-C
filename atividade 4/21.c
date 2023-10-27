#include <stdio.h>

int main() {
    float valorPagoPaulo, valorPagoPedro, valorPagoPlinio;
    float mediaDespesas, saldoPaulo, saldoPedro, saldoPlinio;

    // Leitura dos valores pagos por cada estudante
    printf("Digite o valor pago por Paulo: ");
    scanf("%f", &valorPagoPaulo);

    printf("Digite o valor pago por Pedro: ");
    scanf("%f", &valorPagoPedro);

    printf("Digite o valor pago por Plinio: ");
    scanf("%f", &valorPagoPlinio);

    // Cálculo da média das despesas
    mediaDespesas = (valorPagoPaulo + valorPagoPedro + valorPagoPlinio) / 3;

    // Cálculo dos saldos de cada estudante
    saldoPaulo = mediaDespesas - valorPagoPaulo;
    saldoPedro = mediaDespesas - valorPagoPedro;
    saldoPlinio = mediaDespesas - valorPagoPlinio;

    // Exibição dos saldos
    printf("Saldo de Paulo: %.2f\n", saldoPaulo);
    printf("Saldo de Pedro: %.2f\n", saldoPedro);
    printf("Saldo de Plinio: %.2f\n", saldoPlinio);

    return 0;
}

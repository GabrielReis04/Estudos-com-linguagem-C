#include <stdio.h>

int main() {
    int entradaHora, entradaMinuto, entradaSegundo;
    int saidaHora, saidaMinuto, saidaSegundo;

    float valorTotal;
    int horas, minutos, segundos;

    printf("Digite o horario de entrada (hora minuto segundo): ");
    scanf("%d %d %d", &entradaHora, &entradaMinuto, &entradaSegundo);

    printf("Digite o horario de saida (hora minuto segundo): ");
    scanf("%d %d %d", &saidaHora, &saidaMinuto, &saidaSegundo);

    // Cálculo do tempo total de estacionamento em segundos
    int tempoEntradaSegundos = entradaHora * 3600 + entradaMinuto * 60 + entradaSegundo;
    int tempoSaidaSegundos = saidaHora * 3600 + saidaMinuto * 60 + saidaSegundo;
    int tempoTotalSegundos = tempoSaidaSegundos - tempoEntradaSegundos;

    // Cálculo do valor total a ser pago
    if (tempoTotalSegundos <= 3600) {  // Até 1 hora
        valorTotal = 2.50;
    } else {
        int horasAdicionais = (tempoTotalSegundos - 3600 + 3599) / 3600; // Arredondamento para cima
        valorTotal = 2.50 + horasAdicionais * 1.50;
    }

    // Exibição do valor total a ser pago
    printf("Valor total a ser pago: %.2f\n", valorTotal);

    return 0;
}

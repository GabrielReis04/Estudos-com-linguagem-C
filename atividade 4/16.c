#include <stdio.h>

int main() {
    int hora1, minuto1, segundo1;
    int hora2, minuto2, segundo2;
    int segundos_total1, segundos_total2;
    int diferenca_segundos;

    printf("Digite o primeiro horário (hora minuto segundo): ");
    scanf("%d %d %d", &hora1, &minuto1, &segundo1);

    printf("Digite o segundo horário (hora minuto segundo): ");
    scanf("%d %d %d", &hora2, &minuto2, &segundo2);

    // Calculo do total de segundos para cada horário
    //1 hora = 3600 segundos
    segundos_total1 = hora1 * 3600 + minuto1 * 60 + segundo1;
    segundos_total2 = hora2 * 3600 + minuto2 * 60 + segundo2;

    // Cálculo da diferença de segundos entre os horários
    diferenca_segundos = segundos_total2 - segundos_total1;

    printf("A diferença em segundos entre os horários é: %d\n", diferenca_segundos);

    return 0;
}

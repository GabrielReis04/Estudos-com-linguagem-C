#include <stdio.h>

int main() {
    float tf, tc;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &tf);

    // Conversão de Fahrenheit para Celsius usando a formula
    tc = (tf - 32) * 5.0 / 9.0;

    printf("Temperatura em graus Celsius: %f\n", tc);

    return 0;
}

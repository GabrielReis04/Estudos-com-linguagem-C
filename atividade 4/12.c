#include <stdio.h>
#include <math.h>

int main() {

float saldo_inicial, juros, meses, saldo_final;

printf("Coloque o saldo inicial: ");
scanf("%f", &saldo_inicial);

printf("Coloque os juros: ");
scanf("%f", &juros);

printf("Coloque os meses: ");
scanf("%f", &meses);

//calculo com a formula:

saldo_final = saldo_inicial * pow (1 + juros / 100, meses);

printf("Saldo Final: %f", saldo_final);

}
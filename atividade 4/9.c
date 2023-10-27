#include <stdio.h>

int main() {
float tf, tk, tr, temperatura;

printf ("Coloque a temperatura: ");
scanf("%f", &temperatura);

tf = (temperatura * 180.0 / 100.0 ) + 32;
tk = temperatura + 273.15;
tr = tf + 459.67;

printf("Temperatura em graus Fahrenheit: %f\n", tf);
printf("Temperatura em Kelvin: %f\n", tk);
printf("Temperatura em Rankine: %f\n", tr);

}
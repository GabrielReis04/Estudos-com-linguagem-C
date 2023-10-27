#include <stdio.h>
#include <math.h>

int main () {

float a, b, c;

printf("Coloque o numero :");
scanf("%f", &a);
a = cbrt (a);

printf("Coloque o numero 2 :");
scanf("%f", &b);
b = cbrt (b);

printf("Coloque o numero 3 :");
scanf("%f", &c);
c = cbrt (c);

printf ("Resultado1: %f\n", a);
printf ("Resultado2: %f\n", b);
printf ("Resultado2: %f\n", c);


}


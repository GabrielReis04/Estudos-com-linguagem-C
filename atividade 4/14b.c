#include <stdio.h>
#include <math.h>

int main() {
float n1, n2, n3, n4, menor;

printf("Numero 1: ");
scanf("%f", &n1);

printf("Numero 2: ");
scanf("%f", &n2);

printf("Numero 3: ");
scanf("%f", &n3);

printf("Numero 4 ");
scanf("%f", &n4);


//calculo 
menor = (n1 + n2 - fabs(n1 - n2)) / 2;
menor = (menor + n3 - fabs (menor - n3)) / 2;
menor = (menor + n4 - fabs (menor - n4)) / 2;

 printf("O menor numero: %f\n", menor);



}

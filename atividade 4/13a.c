#include <stdio.h>
#include <math.h>

int main() {
float n1, n2, n3, maior;

printf("Numero 1: ");
scanf("%f", &n1);

printf("Numero 2: ");
scanf("%f", &n2);

printf("Numero 3: ");
scanf("%f", &n3);


//fabs = Ela aceita um numero real como argumento e retorna o valor absoluto desse numero como um numero real.
maior = (n1 + n2 + fabs(n1 - n2)) / 2;

maior = (maior + n3 + fabs(maior - n3)) / 2;

 printf("O maior numero: %f\n", maior);



}

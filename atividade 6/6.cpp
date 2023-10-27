//Exercico 1

#include <stdio.h>
int main () {
	float angulo_graus, angulo_radianos, pi;
	pi = 3.14;
	
	printf("Digite o valor em graus: ");
	scanf("%f", &angulo_graus);
	
	angulo_radianos = angulo_graus * (pi / 180);
	
	printf("Valor do angulo em radiano: %.2f", angulo_radianos);
	
	return 0;
}

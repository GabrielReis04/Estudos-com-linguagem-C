#include <stdio.h>
#include <math.h>

int main () {
	float area, raio;
	
	printf("Coloque o vaor do raio: ");
	scanf("%f", &raio);
	
	area = 3.14 * pow (raio, 2);
	printf("Resultado: %f", area);	
}

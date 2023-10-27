#include <math.h>
#include <stdio.h>

int main () {
	
	float temperatura; 
	float Fahrenheit;
	
	printf ("Coloque a temperatura: ");
	scanf("%f", &temperatura);
	
	Fahrenheit = (temperatura * 9/5) + 32;
	
	printf ("Resultado: %.2f", Fahrenheit);
	
}

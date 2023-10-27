#include <stdio.h>
#include <math.h>

int main () {
	double montante_inicial, final_investimento;
	double taxa;
	int tempo;
	
	printf("Coloque o montante inicial:");
	scanf ("%lf", &montante_inicial);
	
	printf ("Coloque a taxa: " ); 
	scanf ("%lf", &taxa);
	taxa = taxa/100;
	
	printf ("Coloque o tempo:" );
	scanf ("%d",&tempo);
	
	
	final_investimento = montante_inicial * pow ( 1 + taxa, tempo);
	
	printf("Resultado final: %.2lf", final_investimento);
	
	return 0;
	
}

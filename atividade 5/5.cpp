#include <math.h>
#include <stdio.h>

int main () {
	
	float VelocidadeI, Angulo_lancamento, distancia;
	float gravidade = 9.81;
	
	printf("Coloque a Valocidade Inicial: ");
	scanf("%f", &VelocidadeI);
	
	printf("Angulo de lancamento:");
	scanf("%f", &Angulo_lancamento);
	
	Angulo_lancamento = Angulo_lancamento * M_PI / 180;
	
	distancia = (pow (VelocidadeI, 2) * sin (2 * Angulo_lancamento)) / gravidade;
	
	printf ("A distancia e: %.2f:", distancia);
	 
	 return 0;
	
}

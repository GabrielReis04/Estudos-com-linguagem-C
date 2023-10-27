#include <stdio.h>

main () {
	int idade, c_atual, ano_nasceu, calculo;
	
	printf("Coloque sua idade: " );
	scanf ("%d", &idade);
	
	c_atual = 2023;
	
	calculo = c_atual - idade;
	
	printf("Ano em que nasceu: %d", calculo);
	
}

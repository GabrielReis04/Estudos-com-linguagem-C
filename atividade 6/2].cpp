#include <stdio.h>

main () {
	
	int numero_de_eleitores, cn, cb, cv;
	float n, b, v;
	
	n = 0.30;
	b = 0.30;
	v = 0.40;
	
	printf("Coloque o numero de eleitores:");
	scanf("%d", &numero_de_eleitores);
	
	cn = n * numero_de_eleitores;
	cb = b * numero_de_eleitores;
	cv = v * numero_de_eleitores;
	
	printf("Resultado:\n\n Votos Total: %d\n Validos: %d\n Bracos: %d\n Nulos: %d\n", numero_de_eleitores, cv,cb,cn);
	

	
	
}


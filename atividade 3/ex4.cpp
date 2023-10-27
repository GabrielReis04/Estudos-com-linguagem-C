#include <stdio.h>

main () {
	int v1, v2, calc;
	
	printf("Coloque o numero 1: ");
	scanf("%d", &v1);
	
	printf("Coloque o numero 2: ");
	scanf("%d", &v2);
	
	calc = v1 % v2;
	
	if (calc == 0) {
		printf("Sao multiplos");		
	} else {
		printf("Nao sao multiplos");
	}
	
}

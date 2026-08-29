#include <stdio.h>
#include <math.h>

main() {
	
	float n1, n2;
	
	printf("Digite o numero 1: ");
	scanf("%f", &n1);
	
	printf("Digite o numero 2: ");
	scanf("%f", &n2);
	
	if (n1, n2 < 0) {
		printf("Erro: O numero deve ser maior que zero!!");
	}
	
	else {
		printf("A potencia de %2.f e %2.f e igual a %2.f", n1, n2, pow(n1, n2));		
	}
	
}

#include <stdio.h>

main() {
	
	float milha, jardas, polegadas, convermilha, converpol, converjardas;
	int pes;
	
	polegadas = 12;
	jardas = 3;
	milha = 5.280;

	printf("Digite a quantidade de pes: ");
	scanf("%d", &pes);
	
	convermilha = pes * milha;
	converjardas = pes * jardas;
	converpol = pes * polegadas;
	
	printf("%d quantidas de pes equivale a %2.f polegadas\n", pes, converpol);
	printf("%d quantidas de pes equivale a %2.f jardas\n", pes, converjardas);
	printf("%d quantidas de pes equivale a %.3f milhas", pes, convermilha);
}
	
	
	
	

#include <stdio.h>

main() {
	char nome[10];
	float salvelho, salnovo, porcent, aumento;
	
	printf("Digite o nome do funcionario(a): ");
	scanf("%s", nome);
	
	printf("Qual o salario atual de %s: ", nome);
	scanf("%f", &salvelho);

	printf("Qual a porcentagem de aumento que o %s ira ganhar (%%): ", nome);
	scanf("%f", &porcent);
	
	aumento = salvelho * (porcent / 100);
	salnovo = salvelho + aumento;
	
	printf("O funcionario %s teve um aumento de %2.f%% e novo salario passa a valer %2.f", 
	nome, porcent, salnovo); 
		
}

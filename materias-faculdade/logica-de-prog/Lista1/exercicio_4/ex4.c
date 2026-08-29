#include <stdio.h>

main() {
	char nome[10];
	float salnovo, salvelho;
	
	printf("Digite o nome do funcionario: ", nome);
	scanf("%s", nome);
	
	printf("Digite o salario antigo do %s: ", nome, salvelho);
	scanf("%f", &salvelho);
	
	salnovo = salvelho * 1.25;
	
	printf("O novo salario do %s sera de: %2.f", nome, salnovo);
}

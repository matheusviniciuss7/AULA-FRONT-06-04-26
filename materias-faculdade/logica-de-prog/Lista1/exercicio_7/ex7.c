#include <stdio.h>

main() {
	
	float salbase, salreceber, grat, imp, aumento, reducao;
 	char nome[10];
 	
 	grat = 50;
	imp = 0.1; 
 	
 	printf("Digite o nome do funcionario(a): ");
 	scanf("%s", nome);
 	
 	printf("Qual o salario-base do %s? ", nome);
 	scanf("%f", &salbase);
 	
 	aumento = salbase + grat;
 	reducao = salbase * imp;
 	salreceber = salbase + aumento - reducao;
 	
 	printf("O salario-base de %s sera de %2.f reais com 50 reais de gratificacao e 10%% de imposto, com valor final de %2.f reais", 
	nome, salbase, salreceber);
 	
}

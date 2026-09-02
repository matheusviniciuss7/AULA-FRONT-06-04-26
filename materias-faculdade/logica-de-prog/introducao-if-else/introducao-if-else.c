#include <stdio.h>

main(){
	float nota;
 	
 	printf("Qual a nota do aluno? ");
 	scanf("%f", &nota);
	
	if(nota >= 7){
		printf("Aprovado!");
	} else if(nota >= 3 && nota < 7){
		printf("Recuperacao!");
	} else if(nota < 3) {
		printf("Reprovado!");
	} else;
}

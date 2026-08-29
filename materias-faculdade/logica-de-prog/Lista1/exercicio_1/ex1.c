#include <stdio.h>

main() {
	
	int n1, n2, n3, n4, soma;

	printf("Digite a primeira nota: ", n1);
	scanf("%d", &n1);
	
	printf("Digite a segunda nota: ", n2);
	scanf("%d", &n2);
	
	printf("Digite a terceira nota: ", n3);
	scanf("%d", &n3);
	
	printf("Digite a quarta nota: ", n4);
	scanf("%d", &n4);
	
	soma = n1+n2+n3+n4;	
	
	printf("A soma das notas e: %d", soma);
	
}

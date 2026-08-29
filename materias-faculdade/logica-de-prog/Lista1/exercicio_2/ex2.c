#include <stdio.h>

main() {
	
	int n1, n2, n3, media;

	printf("Digite a primeira nota: ", n1);
	scanf("%d", &n1);
	
	printf("Digite a segunda nota: ", n2);
	scanf("%d", &n2);
	
	printf("Digite a terceira nota: ", n3);
	scanf("%d", &n3);
	
	media = (n1+n2+n3) / 3;	
	
	printf("A media das notas e: %d"), media;
	
}

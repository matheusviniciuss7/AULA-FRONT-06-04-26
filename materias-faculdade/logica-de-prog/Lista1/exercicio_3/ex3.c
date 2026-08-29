#include <stdio.h>

main() {
	
	int n1, n2, n3, p1, p2, p3, mediap;
	int r1, r2, r3;

	printf("Digite a primeira nota: ", n1);
	scanf("%d", &n1);
	
	printf("Digite o peso da primeira nota: ", p1);
	scanf("%d", &p1);
	
	r1 = n1 * p1;
	
	printf("Digite a segunda nota: ", n2);
	scanf("%d", &n2);
	
	printf("Digite o peso da segunda nota: ", p2);
	scanf("%d", &p2);
	
	r2 = n2 * p2;
	
	printf("Digite a terceira nota: ", n3);
	scanf("%d", &n3);
	
	printf("Digite o peso da terceira nota: ", p3);
	scanf("%d", &p3);
	
	r3 = n3 * p3;
	
	mediap = (r1+r2+r3) / 3;	
	
	printf("A media das notas com tal peso e: %d"), mediap;
	
}

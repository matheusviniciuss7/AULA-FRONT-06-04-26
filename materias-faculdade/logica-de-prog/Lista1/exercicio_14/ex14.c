#include <stdio.h>

main() {
	
	int anonasc, idatual, id2050;
	
	printf("Qual ano a pessoa nasceu? ");
	scanf("%d", &anonasc);
	
	idatual = 2026 - anonasc;
	id2050 = 2050 - anonasc;
	
	printf("A pessoa atualmente tem %d anos e em 2050 tera %d", idatual, id2050);
	
}
	
	

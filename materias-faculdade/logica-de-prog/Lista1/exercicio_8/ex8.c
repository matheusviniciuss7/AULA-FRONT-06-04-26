#include <stdio.h>

main() {
	
    float deposito, juros, rendimento, total;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros: ");
    scanf("%f", &juros);

    rendimento = deposito * (juros / 100);
    total = deposito + rendimento;

    printf("Valor do rendimento: %.2f reais\n", rendimento);
    printf("Valor total apos o rendimento: %.2f reais", total);

}

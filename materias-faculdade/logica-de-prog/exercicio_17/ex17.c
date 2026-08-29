#include <stdio.h>
#include <stdlib.h>

main() {
    float salario;
    float cheque1, cheque2;
    float cpmf1, cpmf2;
    float tcheque1, tcheque2;
    float saldofinal;
    
    float TAXA_CPMF = 0.0038;

    printf("Digite o valor do salario depositado: R$ ");
    scanf("%f", &salario);

    printf("Digite o valor do primeiro cheque: R$ ");
    scanf("%f", &cheque1);

    printf("Digite o valor do segundo cheque: R$ ");
    scanf("%f", &cheque2);

    cpmf1 = cheque1 * TAXA_CPMF;
    cpmf2 = cheque2 * TAXA_CPMF;

    tcheque1 = cheque1 + cpmf1;
    tcheque2 = cheque2 + cpmf2;

    saldofinal = salario - (tcheque1 + tcheque2);

	system("cls");

    printf("Salario Depositado:  R$ %.2f\n", salario);
    printf("Cheque 1 (+ CPMF):   R$ %.2f (CPMF: R$ %.2f)\n", tcheque1, cpmf1);
    printf("Cheque 2 (+ CPMF):   R$ %.2f (CPMF: R$ %.2f)\n\n", tcheque2, cpmf2);
    printf("Saldo Atual:         R$ %.2f", saldofinal);

}

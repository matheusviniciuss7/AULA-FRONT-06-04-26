#include <stdio.h>

int main() {
    float hrtrabalhadas, salminimo;
    float vhora, salbruto, imp, salreceber;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &hrtrabalhadas);

    printf("Digite o valor do salario minimo: R$ ");
    scanf("%f", &salminimo);

    vhora = salminimo / 2;
    salbruto = hrtrabalhadas * vhora;
    imp = salbruto * 0.03;
    salreceber = salbruto - imp;

    printf("Valor da hora trabalhada: R$ %.2f\n", vhora);
    printf("Salario bruto:            R$ %.2f\n", salbruto);
    printf("Imposto (3%%):             R$ %.2f\n", imp);
    printf("Salario a receber:        R$ %.2f\n", salreceber);

}

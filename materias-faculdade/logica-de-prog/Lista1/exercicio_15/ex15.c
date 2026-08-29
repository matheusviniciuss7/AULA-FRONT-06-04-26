#include <stdio.h>
#include <stdlib.h>

main() {
    float precofabrica, percentlucro, percentimp;
    float vlucro, vimp, vfinal;

    printf("Digite o preco de fabrica do veiculo: R$ ");
    scanf("%f", &precofabrica);

    printf("Digite o percentual de lucro do distribuidor (%%): ");
    scanf("%f", &percentlucro);

    printf("Digite o percentual de impostos (%%): ");
    scanf("%f", &percentimp);

    vlucro = precofabrica * (percentlucro / 100);
    vimp = precofabrica * (percentimp / 100);
    vfinal = precofabrica + vlucro + vimp;

	system("cls");

    printf("Lucro do distribuidor: R$ %.2f\n", vlucro);
    printf("Valor dos impostos: R$ %.2f\n", vimp);
    printf("Preco final ao consumidor: R$ %.2f", vfinal);

}

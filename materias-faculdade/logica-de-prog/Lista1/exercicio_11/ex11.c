#include <stdio.h>
#include <math.h>

main() {
    float numero;

    printf("Digite um numero positivo e maior que zero: ");
    scanf("%f", &numero);

    if (numero <= 0) {
        printf("Erro: O numero deve ser positivo e maior que zero.\n");
    } 
	
	else {
        printf("\nResultados para o numero %.2f:\n", numero);
        printf("Ao quadrado: %.2f\n", pow(numero, 2));
        printf("Ao cubo: %.2f\n", pow(numero, 3));
        printf("Raiz quadrada: %.2f\n", sqrt(numero));
        printf("Raiz cubica: %.2f\n", cbrt(numero));
    }

}

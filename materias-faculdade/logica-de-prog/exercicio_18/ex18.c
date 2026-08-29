#include <stdio.h>

main() {
    float psaco_kg, consumogato_g;
    float peso_saco_g, consumo_diario_total, total_consumido_5dias, sobra_g, sobra_kg;

    printf("Digite o peso do saco de racao (em kg): ");
    scanf("%f", &psaco_kg);

    printf("Digite a quantidade de racao para CADA gato por dia (em gramas): ");
    scanf("%f", &consumogato_g);

    peso_saco_g = psaco_kg * 1000;
    consumo_diario_total = consumogato_g * 2;
    total_consumido_5dias = consumo_diario_total * 5;
    sobra_g = peso_saco_g - total_consumido_5dias;
    sobra_kg = sobra_g / 1000;

    if (sobra_g < 0) {
        printf("A racao NAO sera suficiente para os 5 dias! Faltarao %.2f g (%.2f kg).\n", -sobra_g, -sobra_kg);
    } else {
        printf("Racao restante no saco: %.2f gramas (ou %.2f kg).\n", sobra_g, sobra_kg);
    }
    
}

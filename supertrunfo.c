#include <stdio.h>
 
    int main() {
    // Carta 1 - Dados fixos
    char codigo1[] = "RJ01";
    char nome1[] = "Rio de Janeiro";
    int populacao1 = 6748000;
    float area1 = 1182.3; // km²
    float pib1 = 400.5;   // bilhões

    // Carta 2 - Dados fixos
    char codigo2[] = "SP01";
    char nome2[] = "São Paulo";
    int populacao2 = 12330000;
    float area2 = 1521.1; // km²
    float pib2 = 699.3;   // bilhões

    // Pontuação
    int pontos1 = 0, pontos2 = 0;

    printf("=== Comparação de Cartas - Super Trunfo ===\n\n");

    // População
    if (populacao1 > populacao2) {
        printf("Maior população: %s\n", nome1);
        pontos1++;
    } else if (populacao2 > populacao1) {
        printf("Maior população: %s\n", nome2);
        pontos2++;
    } else {
        printf("População igual.\n");
    }

    // Área
    if (area1 > area2) {
        printf("Maior área: %s\n", nome1);
        pontos1++;
    } else if (area2 > area1) {
        printf("Maior área: %s\n", nome2);
        pontos2++;
    } else {
        printf("Área igual.\n");
    }

    // PIB
    if (pib1 > pib2) {
        printf("Maior PIB: %s\n", nome1);
        pontos1++;
    } else if (pib2 > pib1) {
        printf("Maior PIB: %s\n", nome2);
        pontos2++;
    } else {
        printf("PIB igual.\n");
    }

    // Resultado final
    printf("\n=== Resultado Final ===\n");
    printf("%s: %d pontos\n", nome1, pontos1);
    printf("%s: %d pontos\n", nome2, pontos2);

    if (pontos1 > pontos2) {
        printf("\nVencedor: %s\n", nome1);
    } else if (pontos2 > pontos1) {
        printf("\nVencedor: %s\n", nome2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
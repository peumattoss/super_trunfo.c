#include <stdio.h>

int main() {

    int pop1, ptur1, pop2, ptur2;
    float area1, pib1, area2, pib2;
    char estado1[20], estado2[20], codigo1[20], codigo2[20], cidade1[20], cidade2[20];

    printf("Digite o primeiro Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o segundo Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta 1: \n");
    scanf("%s", &codigo1);

    printf("Digite o código da carta 2: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", &cidade1);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", &cidade2);

    printf("Digite a populacao da cidade da carta 1: \n");
    scanf("%d", &pop1);

    printf("Digite a populacao da cidade da carta 2: \n");
    scanf("%d", &pop2);

    printf("Digite a área da cidade 1: \n");
    scanf("%f", &area1);

    printf("Digite a área da cidade 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do estado da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o PIB do estado da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade da carta 1: \n");
    scanf("%d", &ptur1);

    printf("Digite o numero de pontos turisticos da cidade da carta 2: \n");
    scanf("%d", &ptur2);

    
    
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", pop1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", ptur1);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", pop2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", ptur2);

    
    return 0;

}
#include <stdio.h>

int main()
{
    float comprimento, largura, area, preco_grama, custo_grama;

    printf("Qual o comprimento do terreno em metros? ");
    scanf("%f", &comprimento);

    printf("\nQual a largura do terreno em metros? ");
    scanf("%f", &largura);

    printf("\nQual o preço do metro quadrado de grama? R$ ");
    scanf("%f", &preco_grama);

    area = comprimento * largura;
    custo_grama = area * preco_grama;

    printf("\nArea a ser coberta de grama: %.1f", area);

    printf("\nO custo total de grama para gramar o terreno sera: R$ %.2f", custo_grama);
}

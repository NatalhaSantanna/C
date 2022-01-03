#include <stdio.h>

int main()
{
    float comprimento, largura, metragemArame, preco_arame, custo_arame;

    printf("Qual o comprimento do terreno em metros? ");
    scanf("%f", &comprimento);

    printf("\nQual a largura do terreno em metros? ");
    scanf("%f", &largura);

    printf("\nQual o preço do metro arame farpado? R$ ");
    scanf("%f", &preco_arame);

    metragemArame = (comprimento + largura) * 2 * 4;

    custo_arame = metragemArame * preco_arame ;

    printf("\nMetragem de arame que sera necessaria: %.1f\n", metragemArame);

    printf("\nO custo total de arame: R$ %.2f", custo_arame);
}

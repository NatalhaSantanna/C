#include <stdio.h>

int main()
{
    float valor, entrada, parcela;

    printf("Insira o valor do produto: ", valor);
    scanf("%f", &valor);

    parcela = (int) valor / 3;
    entrada = valor - parcela * 2;

    printf("Valor da entrada: R$ %.2f\n", entrada);

    printf("Valor das parcelas:\nParcela 1: R$%.2f\nParcela 2: R$%.2f", parcela, parcela);
}

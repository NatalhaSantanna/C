#include <stdio.h>

int main ()
{
    float valor_inicial, valor_final, valor_desconto, percentual;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor_inicial);

    printf("\nDigite o valor do desconto em porcentagem: ");
    scanf("%f", &percentual);

    valor_desconto = valor_inicial * (percentual / 100);

    valor_final = valor_inicial - valor_desconto;

    printf("\nNovo valor com desconto: R$ %.2f", valor_final);

    printf("\nValor descontado: R$ %.2f", valor_desconto);
}

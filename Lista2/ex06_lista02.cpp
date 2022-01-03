#include <stdio.h>

int main()
{
    float salario, financ;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite o valor do financiamento: ");
    scanf("%f", &financ);

    if (financ / salario <= 5)
    {
        printf("Financiamento concedido!");
    }
    else
    {
        printf("Financiamento Negado!");
    }
}

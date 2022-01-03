#include <stdio.h>

int main ()
{
    int numero;

    printf("Digite um numero para verificar se é divisivel por 6: ");
    scanf("%d", &numero);

    if(numero % 6 == 0)
    {
        printf("E Multiplo de 6!");
    }
    else
    {
        printf("Nao e multiplo de 6!");
    }
}

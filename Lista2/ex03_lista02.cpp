#include <stdio.h>

int main()
{
    int n;

    printf("Digite um numero para verificar se ele e multiplo de 3 ou de 7: ");
    scanf("%d", &n);

    if(n % 3 == 0 || n % 7 == 0)
    {
        printf("E multiplo de 3 ou de 7!");
    }
    else
    {
        printf("Nao e multiplo de 3 ou de 7!");
    }
}

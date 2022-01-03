#include <stdio.h>

int main()
{
    int x, y, multiplo;

    printf("Digite dois numeros quaisquer: ");
    scanf("%d", &x);
    scanf("%d", &y);

    multiplo = y / x * x;

    printf("Maior multiplo de x de y: %d", multiplo);
}

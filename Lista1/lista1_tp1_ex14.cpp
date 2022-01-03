#include <stdio.h>

int main()
{
    float a, b, x;

    printf("Insira o valor de a: ");
    scanf("%f", &a);

    printf("Insira o valor de b: ");
    scanf("%f", &b);

    x = - b / a;

    printf("\nO valor de x na equacao de 1 grau %0.fx + %.0f = 0 e de: %.1f", a, b, x);

}
